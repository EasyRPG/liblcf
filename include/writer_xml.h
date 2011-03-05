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

#ifndef _EASYRPG_WRITER_XML_H_
#define _EASYRPG_WRITER_XML_H_

////////////////////////////////////////////////////////////
// Headers
////////////////////////////////////////////////////////////
#include <string>
#include <vector>
#ifndef _MSC_VER
	#include <stdint.h>
#else
	typedef	unsigned char	uint8_t;
	typedef	signed short	int16_t;
	typedef unsigned short	uint16_t;
	typedef	signed int		int32_t;
	typedef unsigned int	uint32_t;
#endif

////////////////////////////////////////////////////////////
/// XmlWriter class.
////////////////////////////////////////////////////////////
class XmlWriter {
public:
	XmlWriter(const char* filename);
	XmlWriter(const std::string& filename);
	~XmlWriter();

	void Close();

	void WriteInt(int val);
	template <class T>	void Write(const T& val);
	template <class T>	void WriteVector(const std::vector<T>& val);
	template <class T>	void WriteNode(const std::string& name, const T& val);
	void BeginElement(const std::string& name);
	void BeginElement(const std::string& name, int ID);
	void EndElement(const std::string& name);
	void NewLine();

	bool IsOk() const;
protected:
	std::string filename;
	FILE *stream;
	int indent;
	bool at_bol;

	void Indent();
};

#endif

