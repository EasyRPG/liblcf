/*
 * This file is part of liblcf. Copyright (c) 2017 liblcf authors.
 * https://github.com/EasyRPG/liblcf - https://easyrpg.org
 *
 * liblcf is Free/Libre Open Source Software, released under the MIT License.
 * For the full copyright and license information, please view the COPYING
 * file that was distributed with this source code.
 */

#include "reader_struct.h"
#include "rpg_trooppagecondition.h"
#include "rpg_eventpagecondition.h"
#include "rpg_terrain.h"
#include "rpg_savepicture.h"
#include "data.h"

// Templates

template <class S>
void Flags<S>::MakeTagMap() {
	if (!tag_map.empty())
		return;
	for (int i = 0; flags[i] != NULL; i++)
		tag_map[flags[i]->name] = flags[i];
}

template <class S>
void Flags<S>::ReadLcf(S& obj, LcfReader& stream, uint32_t length) {
	assert(length >= 1 && length <= max_size);
	uint8_t bitflag;
	for (int i = 0; flags[i] != NULL; i++) {
		if (i % 8 == 0) {
			if (i / 8 >= (int) length)
				break;
			stream.Read(bitflag);
		}
		bool S::*ref = flags[i]->ref;
		obj.*ref = ((bitflag >> (i % 8)) & 0x1) != 0;
	}
}

template <class S>
void Flags<S>::WriteLcf(const S& obj, LcfWriter& stream) {
	const bool is2k3 = (Data::system.ldb_id == 2003);
	uint8_t buffer[max_size] = {};

	int bitidx = 0;
	int byteidx = 0;
	for (int i = 0; flags[i] != NULL; i++) {
		if (!is2k3 && flags[i]->is2k3) {
			continue;
		}
		auto ref = flags[i]->ref;
		auto& byteflag = buffer[byteidx];
		auto value = obj.*ref;
		byteflag |= (value << bitidx);

		++bitidx;
		if (bitidx == 8) {
			stream.Write(byteflag);
			++byteidx;
			bitidx = 0;
		}
	}

	if (bitidx != 0) {
		stream.Write(buffer[max_size-1]);
	}
}

template <class S>
int Flags<S>::LcfSize(const S& obj, LcfWriter& /* stream */) {
	const bool is2k3 = (Data::system.ldb_id == 2003);
	int num_bits = 0;
	for (int i = 0; flags[i] != NULL; i++) {
		if (!is2k3 && flags[i]->is2k3) {
			continue;
		}
		++num_bits;
	}
	auto num_bytes = (num_bits - 1) / 8 + 1;
	return num_bytes;
}

template <class S>
void Flags<S>::WriteXml(const S& obj, XmlWriter& stream) {
	stream.BeginElement(name);
	for (int i = 0; flags[i] != NULL; i++) {
		const Flag* flag = flags[i];
		bool S::*ref = flag->ref;
		stream.WriteNode<bool>(flag->name, obj.*ref);
	}
	stream.EndElement(name);
}

template <class S>
class FlagsXmlHandler : public XmlHandler {
private:
	S& obj;
	bool* field;
public:
	FlagsXmlHandler(S& obj) : obj(obj), field(NULL) {
		Flags<S>::MakeTagMap();
	}

	void StartElement(XmlReader& stream, const char* name, const char** /* atts */) {
		const typename Flags<S>::Flag* flag = Flags<S>::tag_map[name];
		if (flag != NULL) {
			bool S::*ref = flag->ref;
			field = &(obj.*ref);
		}
		else {
			stream.Error("Unrecognized field '%s'", name);
			field = NULL;
		}
	}
	void EndElement(XmlReader& /* stream */, const char* /* name */) {
		field = NULL;
	}
	void CharacterData(XmlReader& /* stream */, const std::string& data) {
		if (field != NULL)
			XmlReader::Read<bool>(*field, data);
	}
};

template <class S>
void Flags<S>::BeginXml(S& obj, XmlReader& stream) {
	stream.SetHandler(new WrapperXmlHandler(name, new FlagsXmlHandler<S>(obj)));
}

// Instantiate templates
#ifdef _MSC_VER
#pragma warning (disable : 4661)
#endif

template class Flags<RPG::TroopPageCondition::Flags>;
template class Flags<RPG::EventPageCondition::Flags>;
template class Flags<RPG::Terrain::Flags>;
template class Flags<RPG::SavePicture::Flags>;
