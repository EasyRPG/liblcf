/*
 * This file is part of liblcf. Copyright (c) 2019 liblcf authors.
 * https://github.com/EasyRPG/liblcf - https://easyrpg.org
 *
 * liblcf is Free/Libre Open Source Software, released under the MIT License.
 * For the full copyright and license information, please view the COPYING
 * file that was distributed with this source code.
 */

#include <ostream>
#include <vector>
#if defined(__amigaos4__) && defined(__NEWLIB__) && defined(__STRICT_ANSI__)
#define snprintf(str, size, format, ...) sprintf((str), (format), __VA_ARGS__)
#endif

#include "writer_xml.h"

XmlWriter::XmlWriter(std::ostream& filestream) :
	stream(filestream),
	indent(0),
	at_bol(true)
{
	stream << "<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n";
}


XmlWriter::~XmlWriter() {
}

template <>
void XmlWriter::Write<bool>(const bool& val) {
	Indent();
	stream << (val ? "T" : "F");
}

template <>
void XmlWriter::Write<int32_t>(const int32_t& val) {
	Indent();
	stream << val;
}

template <>
void XmlWriter::Write<int8_t>(const int8_t& val) {
	WriteInt((int) val);
}

template <>
void XmlWriter::Write<uint8_t>(const uint8_t& val) {
	WriteInt((int) val);
}

template <>
void XmlWriter::Write<int16_t>(const int16_t& val) {
	WriteInt((int) val);
}

template <>
void XmlWriter::Write<uint32_t>(const uint32_t& val) {
	Indent();
	stream << val;
}

template <>
void XmlWriter::Write<double>(const double& val) {
	Indent();
	stream << val;
}

template <>
void XmlWriter::Write<std::string>(const std::string& val) {
	Indent();
	std::string::const_iterator it;
	for (it = val.begin(); it != val.end(); it++) {
		int c = (int) *it;
		switch (c) {
			case '<':
				stream << "&lt;";
				break;
			case '>':
				stream << "&gt;";
				break;
			case '&':
				stream << "&amp;";
				break;
			case '\n':
				stream.put(c);
				at_bol = true;
				Indent();
				break;
			case '\r':
			case '\t':
				stream.put(c);
				break;
			default:
				if (c >= 0 && c < 32) {
					char temp[10];
					snprintf(temp,10, "&#x%04x;", 0xE000 + c);
					stream << temp;
				}
				else
					stream.put(c);
				break;
		}
	}
}

template <>
void XmlWriter::Write<std::vector<int32_t>>(const std::vector<int32_t>& val) {
	WriteVector<int32_t>(val);
}

template <>
void XmlWriter::Write<std::vector<bool>>(const std::vector<bool>& val) {
	WriteVector<bool>(val);
}

template <>
void XmlWriter::Write<std::vector<uint8_t>>(const std::vector<uint8_t>& val) {
	WriteVector<uint8_t>(val);
}

template <>
void XmlWriter::Write<std::vector<int16_t>>(const std::vector<int16_t>& val) {
	WriteVector<int16_t>(val);
}

template <>
void XmlWriter::Write<std::vector<uint32_t>>(const std::vector<uint32_t>& val) {
	WriteVector<uint32_t>(val);
}

template <>
void XmlWriter::Write<std::vector<double>>(const std::vector<double>& val) {
	WriteVector<double>(val);
}

void XmlWriter::WriteInt(int val) {
	Write<int32_t>(val);
}

template <class T>
void XmlWriter::WriteVector(const std::vector<T>& val) {
	Indent();
	typename std::vector<T>::const_iterator it;
	bool first = true;
	for (it = val.begin(); it != val.end(); it++) {
		if (!first)
			stream.put(' ');
		first = false;
		Write<T>(*it);
	}
}

template <class T>
void XmlWriter::WriteNode(const std::string& name, const T& val) {
	BeginElement(name);
	Write<T>(val);
	EndElement(name);
}

void XmlWriter::BeginElement(const std::string& name) {
	NewLine();
	Indent();
	stream << "<" << name << ">";
	indent++;
}

void XmlWriter::BeginElement(const std::string& name, int ID) {
	NewLine();
	Indent();
	char temp[6];
	snprintf(temp, 6, "%04d", ID);
	stream << "<" << name << " id=\"" << temp << "\">";
	indent++;
}

void XmlWriter::EndElement(const std::string& name) {
	indent--;
	Indent();
	stream << "</" << name << ">";
	NewLine();
}

void XmlWriter::NewLine() {
	if (at_bol)
		return;
	stream.put('\n');
	at_bol = true;
}

void XmlWriter::Indent() {
	if (!at_bol)
		return;
	for (int i = 0; i < indent; i++)
		stream.put(' ');
	at_bol = false;
}

bool XmlWriter::IsOk() const {
	return (stream.good());
}

template void XmlWriter::WriteNode<bool>(const std::string& name, const bool& val);
template void XmlWriter::WriteNode<uint8_t>(const std::string& name, const uint8_t& val);
template void XmlWriter::WriteNode<int16_t>(const std::string& name, const int16_t& val);
template void XmlWriter::WriteNode<uint32_t>(const std::string& name, const uint32_t& val);
template void XmlWriter::WriteNode<int32_t>(const std::string& name, const int32_t& val);
template void XmlWriter::WriteNode<double>(const std::string& name, const double& val);
template void XmlWriter::WriteNode<std::string>(const std::string& name, const std::string& val);

template void XmlWriter::WriteNode<std::vector<bool>>(const std::string& name, const std::vector<bool>& val);
template void XmlWriter::WriteNode<std::vector<uint8_t>>(const std::string& name, const std::vector<uint8_t>& val);
template void XmlWriter::WriteNode<std::vector<int16_t>>(const std::string& name, const std::vector<int16_t>& val);
template void XmlWriter::WriteNode<std::vector<uint32_t>>(const std::string& name, const std::vector<uint32_t>& val);
template void XmlWriter::WriteNode<std::vector<int32_t>>(const std::string& name, const std::vector<int32_t>& val);
