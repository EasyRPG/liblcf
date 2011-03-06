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
#include "rpg_movecommand.h"
#include "reader_struct.h"

////////////////////////////////////////////////////////////
/// Read Move Command
////////////////////////////////////////////////////////////
void TypeReader<RPG::MoveCommand>::ReadLcf(RPG::MoveCommand& ref, LcfReader& stream, uint32_t length) {
	ref.command_id = stream.ReadInt();
	switch (ref.command_id) {
		case RPG::MoveCommand::Code::switch_on:
			ref.parameter_a = stream.ReadInt();
			break;
		case RPG::MoveCommand::Code::switch_off:
			ref.parameter_a = stream.ReadInt();
			break;
		case RPG::MoveCommand::Code::change_graphic:
			ref.parameter_string = stream.ReadString(stream.ReadInt());
			ref.parameter_a = stream.ReadInt();
			break;
		case RPG::MoveCommand::Code::play_sound_effect:
			ref.parameter_string = stream.ReadString(stream.ReadInt());
			ref.parameter_a = stream.ReadInt();
			ref.parameter_b = stream.ReadInt();
			ref.parameter_c = stream.ReadInt();
			break;
	}
}

void TypeReader<RPG::MoveCommand>::WriteLcf(const RPG::MoveCommand& ref, LcfWriter& stream) {
	stream.WriteInt(ref.command_id);
	switch (ref.command_id) {
		case RPG::MoveCommand::Code::switch_on:
			stream.WriteInt(ref.parameter_a);
			break;
		case RPG::MoveCommand::Code::switch_off:
			stream.WriteInt(ref.parameter_a);
			break;
		case RPG::MoveCommand::Code::change_graphic:
			stream.WriteInt(ref.parameter_string.size());
			stream.WriteString(ref.parameter_string);
			stream.WriteInt(ref.parameter_a);
			break;
		case RPG::MoveCommand::Code::play_sound_effect:
			stream.WriteInt(ref.parameter_string.size());
			stream.WriteString(ref.parameter_string);
			stream.WriteInt(ref.parameter_a);
			stream.WriteInt(ref.parameter_b);
			stream.WriteInt(ref.parameter_c);
			break;
	}
}

int TypeReader<RPG::MoveCommand>::LcfSize(const RPG::MoveCommand& ref, LcfWriter& stream) {
	int result = 0;
	result += LcfReader::IntSize(ref.command_id);
	switch (ref.command_id) {
		case RPG::MoveCommand::Code::switch_on:
			result += LcfReader::IntSize(ref.parameter_a);
			break;
		case RPG::MoveCommand::Code::switch_off:
			result += LcfReader::IntSize(ref.parameter_a);
			break;
		case RPG::MoveCommand::Code::change_graphic:
			result += LcfReader::IntSize(ref.parameter_string.size());
			result += stream.Decode(ref.parameter_string).size();
			result += LcfReader::IntSize(ref.parameter_a);
			break;
		case RPG::MoveCommand::Code::play_sound_effect:
			result += LcfReader::IntSize(ref.parameter_string.size());
			result += stream.Decode(ref.parameter_string).size();
			result += LcfReader::IntSize(ref.parameter_a);
			result += LcfReader::IntSize(ref.parameter_b);
			result += LcfReader::IntSize(ref.parameter_c);
			break;
	}
	return result;
}

void TypeReader<RPG::MoveCommand>::WriteXml(const RPG::MoveCommand& ref, XmlWriter& stream) {
	stream.BeginElement("MoveCommand");
	stream.WriteNode<int>("command_id", ref.command_id);
	switch (ref.command_id) {
		case RPG::MoveCommand::Code::switch_on:
			stream.WriteNode<int>("parameter_a", ref.parameter_a);
			break;
		case RPG::MoveCommand::Code::switch_off:
			stream.WriteNode<int>("parameter_a", ref.parameter_a);
			break;
		case RPG::MoveCommand::Code::change_graphic:
			stream.WriteNode<std::string>("parameter_string", ref.parameter_string);
			stream.WriteNode<int>("parameter_a", ref.parameter_a);
			break;
		case RPG::MoveCommand::Code::play_sound_effect:
			stream.WriteNode<std::string>("parameter_string", ref.parameter_string);
			stream.WriteNode<int>("parameter_a", ref.parameter_a);
			stream.WriteNode<int>("parameter_b", ref.parameter_b);
			stream.WriteNode<int>("parameter_c", ref.parameter_c);
			break;
	}
	stream.EndElement("MoveCommand");
}

class MoveCommandXmlHandler : public XmlHandler {
private:
	RPG::MoveCommand& ref;
	int* field;
	bool parameter_string;
public:
	MoveCommandXmlHandler(RPG::MoveCommand& ref) :
		ref(ref), field(NULL), parameter_string(false) {}
	void StartElement(XmlReader& stream, const char* name, const char** atts) {
		field = NULL;
		parameter_string = false;
		if (strcmp(name, "command_id") == 0)
			field = &ref.command_id;
		else if (strcmp(name, "parameter_a") == 0)
			field = &ref.parameter_a;
		else if (strcmp(name, "parameter_b") == 0)
			field = &ref.parameter_b;
		else if (strcmp(name, "parameter_c") == 0)
			field = &ref.parameter_c;
		else if (strcmp(name, "parameter_string") == 0)
			parameter_string = true;
		else {
			// error
		}
	}
	void CharacterData(XmlReader& stream, const char* s, int len) {
		if (parameter_string)
			XmlReader::Read<std::string>(ref.parameter_string, std::string(s, len));
		else
			XmlReader::Read<int>(*field, std::string(s, len));
	}
};

void TypeReader<RPG::MoveCommand>::BeginXml(RPG::MoveCommand& ref, XmlReader& stream) {
	stream.SetHandler(new WrapperXmlHandler("MoveCommand", new MoveCommandXmlHandler(ref)));
}

void TypeReader<RPG::MoveCommand>::ParseXml(RPG::MoveCommand& ref, const std::string& data) {
}

////////////////////////////////////////////////////////////
/// Read Move Commands
////////////////////////////////////////////////////////////
void TypeReader<std::vector<RPG::MoveCommand> >::ReadLcf(std::vector<RPG::MoveCommand>& ref, LcfReader& stream, uint32_t length) {
	unsigned long startpos = stream.Tell();
	unsigned long endpos = startpos + length;
	do {
		RPG::MoveCommand command;
		TypeReader<RPG::MoveCommand>::ReadLcf(command, stream, 0);
		ref.push_back(command);
	} while (stream.Tell() != endpos);
}

void TypeReader<std::vector<RPG::MoveCommand> >::WriteLcf(const std::vector<RPG::MoveCommand>& ref, LcfWriter& stream) {
	std::vector<RPG::MoveCommand>::const_iterator it;
	for (it = ref.begin(); it != ref.end(); it++)
		TypeReader<RPG::MoveCommand>::WriteLcf(*it, stream);
}

int TypeReader<std::vector<RPG::MoveCommand> >::LcfSize(const std::vector<RPG::MoveCommand>& ref, LcfWriter& stream) {
	int result = 0;
	std::vector<RPG::MoveCommand>::const_iterator it;
	for (it = ref.begin(); it != ref.end(); it++)
		result += TypeReader<RPG::MoveCommand>::LcfSize(*it, stream);
	return result;
}

void TypeReader<std::vector<RPG::MoveCommand> >::WriteXml(const std::vector<RPG::MoveCommand>& ref, XmlWriter& stream) {
	std::vector<RPG::MoveCommand>::const_iterator it;
	for (it = ref.begin(); it != ref.end(); it++)
		TypeReader<RPG::MoveCommand>::WriteXml(*it, stream);
}

class MoveCommandVectorXmlHandler : public XmlHandler {
public:
	MoveCommandVectorXmlHandler(std::vector<RPG::MoveCommand>& ref) : ref(ref) {}

	void StartElement(XmlReader& stream, const char* name, const char** atts) {
		// if (strcmp(name, "MoveCommand") != 0) error();
		ref.resize(ref.size() + 1);
		RPG::MoveCommand& obj = ref.back();
		stream.SetHandler(new MoveCommandXmlHandler(obj));
	}
private:
	std::vector<RPG::MoveCommand>& ref;
};

void TypeReader<std::vector<RPG::MoveCommand> >::BeginXml(std::vector<RPG::MoveCommand>& obj, XmlReader& stream) {
	stream.SetHandler(new MoveCommandVectorXmlHandler(obj));
}

void TypeReader<std::vector<RPG::MoveCommand> >::ParseXml(std::vector<RPG::MoveCommand>& ref, const std::string& data) {
}

