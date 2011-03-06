/////////////////////////////////////////////////////////////////////////////
// This file is part of EasyRPG.
//
// EasyRPG is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// EasyRPG is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with EasyRPG Player. If not, see <http://www.gnu.org/licenses/>.
/////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////
// Headers
////////////////////////////////////////////////////////////
#include "ldb_reader.h"
#include "ldb_chunks.h"
#include "reader_struct.h"

////////////////////////////////////////////////////////////
/// Read Equipment
////////////////////////////////////////////////////////////
void TypeReader<RPG::Equipment>::ReadLcf(RPG::Equipment& ref, LcfReader& stream, uint32_t length) {
	ref.weapon_id = stream.Read16();
	ref.shield_id = stream.Read16();
	ref.armor_id = stream.Read16();
	ref.helmet_id = stream.Read16();
	ref.accessory_id = stream.Read16();
}

void TypeReader<RPG::Equipment>::WriteLcf(const RPG::Equipment& ref, LcfWriter& stream) {
	stream.Write16(ref.weapon_id);
	stream.Write16(ref.shield_id);
	stream.Write16(ref.armor_id);
	stream.Write16(ref.helmet_id);
	stream.Write16(ref.accessory_id);
}

int TypeReader<RPG::Equipment>::LcfSize(const RPG::Equipment& ref, LcfWriter& stream) {
	return 2 * 5;
}

void TypeReader<RPG::Equipment>::WriteXml(const RPG::Equipment& ref, XmlWriter& stream) {
	stream.BeginElement("Equipment");
	stream.WriteNode<int16_t>("weapon_id", ref.weapon_id);
	stream.WriteNode<int16_t>("shield_id", ref.shield_id);
	stream.WriteNode<int16_t>("armor_id", ref.armor_id);
	stream.WriteNode<int16_t>("helmet_id", ref.helmet_id);
	stream.WriteNode<int16_t>("accessory_id", ref.accessory_id);
	stream.EndElement("Equipment");
}

class EquipmentXmlHandler : public XmlHandler {
private:
	RPG::Equipment& ref;
	int* field;
public:
	EquipmentXmlHandler(RPG::Equipment& ref) : ref(ref), field(NULL) {}
	void StartElement(XmlReader& stream, const char* name, const char** atts) {
		if (strcmp(name, "weapon_id") == 0)
			field = &ref.weapon_id;
		else if (strcmp(name, "shield_id") == 0)
			field = &ref.shield_id;
		else if (strcmp(name, "armor_id") == 0)
			field = &ref.armor_id;
		else if (strcmp(name, "helmet_id") == 0)
			field = &ref.helmet_id;
		else if (strcmp(name, "accessory_id") == 0)
			field = &ref.accessory_id;
		else {
			// error
		}
	}
	void CharacterData(XmlReader& stream, const char* s, int len) {
		XmlReader::Read<int>(*field, std::string(s, len));
	}
};

void TypeReader<RPG::Equipment>::BeginXml(RPG::Equipment& ref, XmlReader& stream) {
	stream.SetHandler(new WrapperXmlHandler("Equipment", new EquipmentXmlHandler(ref)));
}

void TypeReader<RPG::Equipment>::ParseXml(RPG::Equipment& ref, const std::string& data) {
}
