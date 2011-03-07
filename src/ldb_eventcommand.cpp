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
#include <string>
#include <vector>
#include "reader_struct.h"
#include "rpg_eventcommand.h"

////////////////////////////////////////////////////////////
/// Read Event Command
////////////////////////////////////////////////////////////
void TypeReader<RPG::EventCommand>::ReadLcf(RPG::EventCommand& event_command, LcfReader& stream, uint32_t length) {
	event_command.code = stream.ReadInt();
	if (event_command.code != 0) {
		event_command.indent = stream.ReadInt();
		event_command.string = stream.ReadString(stream.ReadInt());
		for (int i = stream.ReadInt(); i > 0; i--) {
			event_command.parameters.push_back(stream.ReadInt());
		}
	}
}

void TypeReader<RPG::EventCommand>::WriteLcf(const RPG::EventCommand& event_command, LcfWriter& stream) {
	stream.WriteInt(event_command.code);
	stream.WriteInt(event_command.indent);
	stream.WriteInt(event_command.string.size());
	stream.WriteString(event_command.string);
	int count = event_command.parameters.size();
	stream.WriteInt(count);
	for (int i = 0; i < count; i++)
		stream.WriteInt(event_command.parameters[i]);
}

int TypeReader<RPG::EventCommand>::LcfSize(const RPG::EventCommand& event_command, LcfWriter& stream) {
	int result = 0;
	result += LcfReader::IntSize(event_command.code);
	result += LcfReader::IntSize(event_command.indent);
	result += LcfReader::IntSize(event_command.string.size());
	result += stream.Decode(event_command.string).size();
	int count = event_command.parameters.size();
	result += LcfReader::IntSize(count);
	for (int i = 0; i < count; i++)
		result += LcfReader::IntSize(event_command.parameters[i]);
	return result;
}

void TypeReader<RPG::EventCommand>::WriteXml(const RPG::EventCommand& event_command, XmlWriter& stream) {
	stream.BeginElement("EventCommand");
	stream.WriteNode<int>("code", event_command.code);
	stream.WriteNode<int>("indent", event_command.indent);
	stream.WriteNode<std::string>("string", event_command.string);
	stream.WriteNode<std::vector<int> >("parameters", event_command.parameters);
	stream.EndElement("EventCommand");
}

class EventCommandXmlHandler : public XmlHandler {
private:
	RPG::EventCommand& ref;
	enum {
		None,
		Code,
		Indent,
		String,
		Parameters
	} field;
public:
	EventCommandXmlHandler(RPG::EventCommand& ref) : ref(ref), field(None) {}
	void StartElement(XmlReader& stream, const char* name, const char** atts) {
		if (strcmp(name, "code") == 0)
			field = Code;
		else if (strcmp(name, "indent") == 0)
			field = Indent;
		else if (strcmp(name, "string") == 0)
			field = String;
		else if (strcmp(name, "parameters") == 0)
			field = Parameters;
		else {
			stream.Error("Unrecognized field '%s'", name);
			field = None;
		}
	}
	void EndElement(XmlReader& stream, const char* name) {
		field = None;
	}
	void CharacterData(XmlReader& stream, const std::string& data) {
		switch (field) {
			case None:
				break;
			case Code:
				XmlReader::Read<int>(ref.code, data);
				break;
			case Indent:
				XmlReader::Read<int>(ref.indent, data);
				break;
			case String:
				XmlReader::Read<std::string>(ref.string, data);
				break;
			case Parameters:
				XmlReader::Read<std::vector<int> >(ref.parameters, data);
				break;
		}
	}
};

void TypeReader<RPG::EventCommand>::BeginXml(RPG::EventCommand& ref, XmlReader& stream) {
	stream.SetHandler(new WrapperXmlHandler("EventCommand", new EventCommandXmlHandler(ref)));
}

void TypeReader<RPG::EventCommand>::ParseXml(RPG::EventCommand& ref, const std::string& data) {
}

////////////////////////////////////////////////////////////
/// Read Event Commands
////////////////////////////////////////////////////////////
void TypeReader<std::vector<RPG::EventCommand> >::ReadLcf(
	std::vector<RPG::EventCommand>& event_commands, LcfReader& stream, uint32_t length) {
	// Event Commands is a special array
	// Has no size information. Is terminated by 4 times 0x00.
	unsigned long startpos = stream.Tell();
	unsigned long endpos = startpos + length;
	for (;;) {
		char ch = stream.Read8();
		if (ch == 0) {
			stream.Seek(3, LcfReader::FromCurrent);
			break;
		}
		stream.Ungetch(ch);
		RPG::EventCommand command;
		TypeReader<RPG::EventCommand>::ReadLcf(command, stream, 0);
		event_commands.push_back(command);
	}
	assert(stream.Tell() == endpos);
}

void TypeReader<std::vector<RPG::EventCommand> >::WriteLcf(const std::vector<RPG::EventCommand>& event_commands, LcfWriter& stream) {
	int count = event_commands.size();
	for (int i = 0; i < count; i++)
		TypeReader<RPG::EventCommand>::WriteLcf(event_commands[i], stream);
	for (int i = 0; i < 4; i++)
		stream.WriteInt(0);
}

int TypeReader<std::vector<RPG::EventCommand> >::LcfSize(const std::vector<RPG::EventCommand>& event_commands, LcfWriter& stream) {
	int result = 0;
	int count = event_commands.size();
	for (int i = 0; i < count; i++)
		result += TypeReader<RPG::EventCommand>::LcfSize(event_commands[i], stream);
	result += 4;
	return result;
}

void TypeReader<std::vector<RPG::EventCommand> >::WriteXml(const std::vector<RPG::EventCommand>& event_commands, XmlWriter& stream) {
	std::vector<RPG::EventCommand>::const_iterator it;
	for (it = event_commands.begin(); it != event_commands.end(); it++)
		TypeReader<RPG::EventCommand>::WriteXml(*it, stream);
}

class EventCommandVectorXmlHandler : public XmlHandler {
public:
	EventCommandVectorXmlHandler(std::vector<RPG::EventCommand>& ref) : ref(ref) {}

	void StartElement(XmlReader& stream, const char* name, const char** atts) {
		if (strcmp(name, "EventCommand") != 0)
			stream.Error("Expecting %s but got %s", "EventCommand", name);
		ref.resize(ref.size() + 1);
		RPG::EventCommand& obj = ref.back();
		stream.SetHandler(new EventCommandXmlHandler(obj));
	}
private:
	std::vector<RPG::EventCommand>& ref;
};

void TypeReader<std::vector<RPG::EventCommand> >::BeginXml(std::vector<RPG::EventCommand>& obj, XmlReader& stream) {
	stream.SetHandler(new EventCommandVectorXmlHandler(obj));
}

void TypeReader<std::vector<RPG::EventCommand> >::ParseXml(std::vector<RPG::EventCommand>& ref, const std::string& data) {
}

