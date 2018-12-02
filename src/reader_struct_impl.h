/*
 * This file is part of liblcf. Copyright (c) 2018 liblcf authors.
 * https://github.com/EasyRPG/liblcf - https://easyrpg.org
 *
 * liblcf is Free/Libre Open Source Software, released under the MIT License.
 * For the full copyright and license information, please view the COPYING
 * file that was distributed with this source code.
 */

#include <cstring>
#include <iostream>
#include <iomanip>
#include <type_traits>
#include "ldb_reader.h"
#include "lmt_reader.h"
#include "lmu_reader.h"
#include "lsd_reader.h"
#include "reader_struct.h"
#include "rpg_save.h"
#include "data.h"

// Read/Write Struct

template <class S>
void Struct<S>::MakeFieldMap() {
	if (!field_map.empty())
		return;
	for (int i = 0; fields[i] != NULL; i++)
		field_map[fields[i]->id] = fields[i];
}

template <class S>
void Struct<S>::MakeTagMap() {
	if (!tag_map.empty())
		return;
	for (int i = 0; fields[i] != NULL; i++)
		tag_map[fields[i]->name] = fields[i];
}

template <typename T>
struct StructDefault {
	static T make() {
		return T();
	}
};

template <>
struct StructDefault<RPG::Actor> {
	static RPG::Actor make() {
		auto actor = RPG::Actor();
		actor.Setup();
		return actor;
	}
};

template <class S>
void Struct<S>::ReadLcf(S& obj, LcfReader& stream) {
	MakeFieldMap();

	LcfReader::Chunk chunk_info;

	while (!stream.Eof()) {
		chunk_info.ID = stream.ReadInt();
		if (chunk_info.ID == 0)
			break;

		chunk_info.length = stream.ReadInt();

		auto it = field_map.find(chunk_info.ID);
		if (it != field_map.end()) {
#ifdef LCF_DEBUG_TRACE
			printf("0x%02x (size: %d, pos: 0x%x): %s\n", chunk_info.ID, chunk_info.length, stream.Tell(), it->second->name);
#endif
			const auto off = stream.Tell();
			it->second->ReadLcf(obj, stream, chunk_info.length);
			const auto bytes_read = stream.Tell() - off;
			if (bytes_read != chunk_info.length) {
				fprintf(stderr, "Warning: Corrupted Chunk 0x%02x (size: %d, pos: 0x%x): %s : Read %d bytes! Reseting...\n",
						chunk_info.ID, chunk_info.length, off, it->second->name, bytes_read);
				stream.Seek(off + chunk_info.length);
			}
		}
		else {
			stream.Skip(chunk_info);
		}
	}
}

template<typename T>
typename std::enable_if<std::is_same<T, RPG::Save>::value ||
		std::is_same<T, RPG::Database>::value>::type
conditional_zero_writer(LcfWriter&) {
	// no-op
}

template<typename T>
typename std::enable_if<!std::is_same<T, RPG::Save>::value &&
		!std::is_same<T, RPG::Database>::value>::type
conditional_zero_writer(LcfWriter& stream) {
	stream.WriteInt(0);
}

template <class S>
void Struct<S>::WriteLcf(const S& obj, LcfWriter& stream) {
	const bool db_is2k3 = (Data::system.ldb_id == 2003);

	auto ref = StructDefault<S>::make();
	int last = -1;
	for (int i = 0; fields[i] != NULL; i++) {
		const Field<S>* field = fields[i];
		if (!db_is2k3 && field->is2k3) {
			continue;
		}
		if (field->id < last)
			std::cerr << "field order mismatch: " << field->id
					  << " after " << last
					  << " in struct " << name
					  << std::endl;
		if (!field->isPresentIfDefault(db_is2k3) && field->IsDefault(obj, ref)) {
			continue;
		}
		stream.WriteInt(field->id);
		auto len = field->LcfSize(obj, stream);
		stream.WriteInt(len);
		if (len > 0) {
			field->WriteLcf(obj, stream);
		}
	}
	// Writing a 0-byte after RPG::Database or RPG::Save breaks the parser in RPG_RT
	conditional_zero_writer<S>(stream);
}

template <class S>
int Struct<S>::LcfSize(const S& obj, LcfWriter& stream) {
	const bool db_is2k3 = (Data::system.ldb_id == 2003);
	int result = 0;
	auto ref = StructDefault<S>::make();
	for (int i = 0; fields[i] != NULL; i++) {
		const Field<S>* field = fields[i];
		if (!db_is2k3 && field->is2k3) {
			continue;
		}
		//printf("%s\n", field->name);
		if (!field->isPresentIfDefault(db_is2k3) && field->IsDefault(obj, ref)) {
			continue;
		}
		result += LcfReader::IntSize(field->id);
		int size = field->LcfSize(obj, stream);
		result += LcfReader::IntSize(size);
		result += size;
	}
	result += LcfReader::IntSize(0);
	return result;
}

template <class S>
void Struct<S>::WriteXml(const S& obj, XmlWriter& stream) {
	IDReader::WriteXmlTag(obj, name, stream);
	for (int i = 0; fields[i] != NULL; i++) {
		const Field<S>* field = fields[i];
		field->WriteXml(obj, stream);
	}
	stream.EndElement(name);
}

template <class S>
class StructXmlHandler : public XmlHandler {
public:
	StructXmlHandler(S& ref) : ref(ref), field(NULL) {
		Struct<S>::MakeTagMap();
	}

	void StartElement(XmlReader& stream, const char* name, const char** /* atts */) {
		field = Struct<S>::tag_map[name];
		field->BeginXml(ref, stream);
	}

	void EndElement(XmlReader& /* stream */, const char* /* name */) {
		field = NULL;
	}

	void CharacterData(XmlReader& /* stream */, const std::string& data) {
		if (field != NULL)
			field->ParseXml(ref, data);
	}
private:
	S& ref;
	const Field<S>* field;
};

template <class S>
class StructFieldXmlHandler : public XmlHandler {
public:
	StructFieldXmlHandler(S& ref) : ref(ref) {}

	void StartElement(XmlReader& stream, const char* name, const char** atts) {
		if (strcmp(name, Struct<S>::name) != 0)
			stream.Error("Expecting %s but got %s", Struct<S>::name, name);
		Struct<S>::IDReader::ReadIDXml(ref, atts);
		stream.SetHandler(new StructXmlHandler<S>(ref));
	}
private:
	S& ref;
};

template <class S>
void Struct<S>::BeginXml(S& obj, XmlReader& stream) {
	stream.SetHandler(new StructFieldXmlHandler<S>(obj));
}

// Read/Write std::vector<Struct>

template <class S>
void Struct<S>::ReadLcf(std::vector<S>& vec, LcfReader& stream) {
	int count = stream.ReadInt();
	vec.resize(count);
	for (int i = 0; i < count; i++) {
		IDReader::ReadID(vec[i], stream);
		TypeReader<S>::ReadLcf(vec[i], stream, 0);
	}
}

template <class S>
void Struct<S>::WriteLcf(const std::vector<S>& vec, LcfWriter& stream) {
	int count = vec.size();
	stream.WriteInt(count);
	for (int i = 0; i < count; i++) {
		IDReader::WriteID(vec[i], stream);
		TypeReader<S>::WriteLcf(vec[i], stream);
	}
}

template <class S>
int Struct<S>::LcfSize(const std::vector<S>& vec, LcfWriter& stream) {
	int result = 0;
	int count = vec.size();
	result += LcfReader::IntSize(count);
	for (int i = 0; i < count; i++) {
		result += IDReader::IDSize(vec[i]);
		result += TypeReader<S>::LcfSize(vec[i], stream);
	}
	return result;
}

template <class S>
void Struct<S>::WriteXml(const std::vector<S>& vec, XmlWriter& stream) {
	int count = vec.size();
	for (int i = 0; i < count; i++)
		TypeReader<S>::WriteXml(vec[i], stream);
}

template <class S>
class StructVectorXmlHandler : public XmlHandler {
public:
	StructVectorXmlHandler(std::vector<S>& ref) : ref(ref) {}

	void StartElement(XmlReader& stream, const char* name, const char** atts) {
		if (strcmp(name, Struct<S>::name) != 0)
			stream.Error("Expecting %s but got %s", Struct<S>::name, name);
		ref.resize(ref.size() + 1);
		S& obj = ref.back();
		Struct<S>::IDReader::ReadIDXml(obj, atts);
		stream.SetHandler(new StructXmlHandler<S>(obj));
	}
private:
	std::vector<S>& ref;
};

template <class S>
void Struct<S>::BeginXml(std::vector<S>& obj, XmlReader& stream) {
	stream.SetHandler(new StructVectorXmlHandler<S>(obj));
}

template <>
char const* const Struct<RPG::Actor>::name;
template <>
Field<RPG::Actor> const* Struct<RPG::Actor>::fields[];

template <>
char const* const Struct<RPG::Animation>::name;
template <>
Field<RPG::Animation> const* Struct<RPG::Animation>::fields[];

template <>
char const* const Struct<RPG::AnimationCellData>::name;
template <>
Field<RPG::AnimationCellData> const* Struct<RPG::AnimationCellData>::fields[];

template <>
char const* const Struct<RPG::AnimationFrame>::name;
template <>
Field<RPG::AnimationFrame> const* Struct<RPG::AnimationFrame>::fields[];

template <>
char const* const Struct<RPG::AnimationTiming>::name;
template <>
Field<RPG::AnimationTiming> const* Struct<RPG::AnimationTiming>::fields[];

template <>
char const* const Struct<RPG::Attribute>::name;
template <>
Field<RPG::Attribute> const* Struct<RPG::Attribute>::fields[];

template <>
char const* const Struct<RPG::BattleCommand>::name;
template <>
Field<RPG::BattleCommand> const* Struct<RPG::BattleCommand>::fields[];

template <>
char const* const Struct<RPG::BattleCommands>::name;
template <>
Field<RPG::BattleCommands> const* Struct<RPG::BattleCommands>::fields[];

template <>
char const* const Struct<RPG::BattlerAnimation>::name;
template <>
Field<RPG::BattlerAnimation> const* Struct<RPG::BattlerAnimation>::fields[];

template <>
char const* const Struct<RPG::BattlerAnimationData>::name;
template <>
Field<RPG::BattlerAnimationData> const* Struct<RPG::BattlerAnimationData>::fields[];

template <>
char const* const Struct<RPG::BattlerAnimationExtension>::name;
template <>
Field<RPG::BattlerAnimationExtension> const* Struct<RPG::BattlerAnimationExtension>::fields[];

template <>
char const* const Struct<RPG::Chipset>::name;
template <>
Field<RPG::Chipset> const* Struct<RPG::Chipset>::fields[];

template <>
char const* const Struct<RPG::Class>::name;
template <>
Field<RPG::Class> const* Struct<RPG::Class>::fields[];

template <>
char const* const Struct<RPG::CommonEvent>::name;
template <>
Field<RPG::CommonEvent> const* Struct<RPG::CommonEvent>::fields[];

template <>
char const* const Struct<RPG::Database>::name;
template <>
Field<RPG::Database> const* Struct<RPG::Database>::fields[];

template <>
char const* const Struct<RPG::Encounter>::name;
template <>
Field<RPG::Encounter> const* Struct<RPG::Encounter>::fields[];

template <>
char const* const Struct<RPG::Enemy>::name;
template <>
Field<RPG::Enemy> const* Struct<RPG::Enemy>::fields[];

template <>
char const* const Struct<RPG::EnemyAction>::name;
template <>
Field<RPG::EnemyAction> const* Struct<RPG::EnemyAction>::fields[];

template <>
char const* const Struct<RPG::Event>::name;
template <>
Field<RPG::Event> const* Struct<RPG::Event>::fields[];

template <>
char const* const Struct<RPG::EventPage>::name;
template <>
Field<RPG::EventPage> const* Struct<RPG::EventPage>::fields[];

template <>
char const* const Struct<RPG::EventPageCondition>::name;
template <>
Field<RPG::EventPageCondition> const* Struct<RPG::EventPageCondition>::fields[];

template <>
char const* const Struct<RPG::Item>::name;
template <>
Field<RPG::Item> const* Struct<RPG::Item>::fields[];

template <>
char const* const Struct<RPG::ItemAnimation>::name;
template <>
Field<RPG::ItemAnimation> const* Struct<RPG::ItemAnimation>::fields[];

template <>
char const* const Struct<RPG::Learning>::name;
template <>
Field<RPG::Learning> const* Struct<RPG::Learning>::fields[];

template <>
char const* const Struct<RPG::Map>::name;
template <>
Field<RPG::Map> const* Struct<RPG::Map>::fields[];

template <>
char const* const Struct<RPG::MapInfo>::name;
template <>
Field<RPG::MapInfo> const* Struct<RPG::MapInfo>::fields[];

template <>
char const* const Struct<RPG::MoveRoute>::name;
template <>
Field<RPG::MoveRoute> const* Struct<RPG::MoveRoute>::fields[];

template <>
char const* const Struct<RPG::Music>::name;
template <>
Field<RPG::Music> const* Struct<RPG::Music>::fields[];

template <>
char const* const Struct<RPG::Save>::name;
template <>
Field<RPG::Save> const* Struct<RPG::Save>::fields[];

template <>
char const* const Struct<RPG::SaveActor>::name;
template <>
Field<RPG::SaveActor> const* Struct<RPG::SaveActor>::fields[];

template <>
char const* const Struct<RPG::SaveCommonEvent>::name;
template <>
Field<RPG::SaveCommonEvent> const* Struct<RPG::SaveCommonEvent>::fields[];

template <>
char const* const Struct<RPG::SaveEventCommands>::name;
template <>
Field<RPG::SaveEventCommands> const* Struct<RPG::SaveEventCommands>::fields[];

template <>
char const* const Struct<RPG::SaveEventData>::name;
template <>
Field<RPG::SaveEventData> const* Struct<RPG::SaveEventData>::fields[];

template <>
char const* const Struct<RPG::SaveInventory>::name;
template <>
Field<RPG::SaveInventory> const* Struct<RPG::SaveInventory>::fields[];

template <>
char const* const Struct<RPG::SaveMapEvent>::name;
template <>
Field<RPG::SaveMapEvent> const* Struct<RPG::SaveMapEvent>::fields[];

template <>
char const* const Struct<RPG::SaveMapInfo>::name;
template <>
Field<RPG::SaveMapInfo> const* Struct<RPG::SaveMapInfo>::fields[];

template <>
char const* const Struct<RPG::SavePanorama>::name;
template <>
Field<RPG::SavePanorama> const* Struct<RPG::SavePanorama>::fields[];

template <>
char const* const Struct<RPG::SavePartyLocation>::name;
template <>
Field<RPG::SavePartyLocation> const* Struct<RPG::SavePartyLocation>::fields[];

template <>
char const* const Struct<RPG::SavePicture>::name;
template <>
Field<RPG::SavePicture> const* Struct<RPG::SavePicture>::fields[];

template <>
char const* const Struct<RPG::SaveScreen>::name;
template <>
Field<RPG::SaveScreen> const* Struct<RPG::SaveScreen>::fields[];

template <>
char const* const Struct<RPG::SaveSystem>::name;
template <>
Field<RPG::SaveSystem> const* Struct<RPG::SaveSystem>::fields[];

template <>
char const* const Struct<RPG::SaveTarget>::name;
template <>
Field<RPG::SaveTarget> const* Struct<RPG::SaveTarget>::fields[];

template <>
char const* const Struct<RPG::SaveTitle>::name;
template <>
Field<RPG::SaveTitle> const* Struct<RPG::SaveTitle>::fields[];

template <>
char const* const Struct<RPG::SaveVehicleLocation>::name;
template <>
Field<RPG::SaveVehicleLocation> const* Struct<RPG::SaveVehicleLocation>::fields[];

template <>
char const* const Struct<RPG::Skill>::name;
template <>
Field<RPG::Skill> const* Struct<RPG::Skill>::fields[];

template <>
char const* const Struct<RPG::Sound>::name;
template <>
Field<RPG::Sound> const* Struct<RPG::Sound>::fields[];

template <>
char const* const Struct<RPG::Start>::name;
template <>
Field<RPG::Start> const* Struct<RPG::Start>::fields[];

template <>
char const* const Struct<RPG::State>::name;
template <>
Field<RPG::State> const* Struct<RPG::State>::fields[];

template <>
char const* const Struct<RPG::Switch>::name;
template <>
Field<RPG::Switch> const* Struct<RPG::Switch>::fields[];

template <>
char const* const Struct<RPG::System>::name;
template <>
Field<RPG::System> const* Struct<RPG::System>::fields[];

template <>
char const* const Struct<RPG::Terms>::name;
template <>
Field<RPG::Terms> const* Struct<RPG::Terms>::fields[];

template <>
char const* const Struct<RPG::Terrain>::name;
template <>
Field<RPG::Terrain> const* Struct<RPG::Terrain>::fields[];

template <>
char const* const Struct<RPG::TestBattler>::name;
template <>
Field<RPG::TestBattler> const* Struct<RPG::TestBattler>::fields[];

template <>
char const* const Struct<RPG::Troop>::name;
template <>
Field<RPG::Troop> const* Struct<RPG::Troop>::fields[];

template <>
char const* const Struct<RPG::TroopMember>::name;
template <>
Field<RPG::TroopMember> const* Struct<RPG::TroopMember>::fields[];

template <>
char const* const Struct<RPG::TroopPage>::name;
template <>
Field<RPG::TroopPage> const* Struct<RPG::TroopPage>::fields[];

template <>
char const* const Struct<RPG::TroopPageCondition>::name;
template <>
Field<RPG::TroopPageCondition> const* Struct<RPG::TroopPageCondition>::fields[];

template <>
char const* const Struct<RPG::Variable>::name;
template <>
Field<RPG::Variable> const* Struct<RPG::Variable>::fields[];
