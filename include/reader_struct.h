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

#ifndef _EASYRPG_READER_STRUCT_H_
#define _EASYRPG_READER_STRUCT_H_

////////////////////////////////////////////////////////////
// Headers
////////////////////////////////////////////////////////////

#include <string>
#include <vector>
#include <map>
#include "reader.h"
#include "event_reader.h"

////////////////////////////////////////////////////////////
// Typed data readers
////////////////////////////////////////////////////////////

template <class T>
class Struct;

template <class T>
static void ReadVectorLcf(std::vector<T>& vec, Reader& stream, const Reader::Chunk& chunk_info);

template <class T>
struct TypeReader {
	static void ReadLcf(T& ref, Reader& stream, const Reader::Chunk& chunk_info) {
		Struct<T>::ReadLcf(ref, stream);
	}
};

template <>
struct TypeReader<std::vector<RPG::EventCommand> > {
	static void ReadLcf(std::vector<RPG::EventCommand>& ref, Reader& stream, const Reader::Chunk& chunk_info) {
		Event_Reader::ReadEventCommands(ref, stream);
	}
};

template <class T>
struct TypeReader<std::vector<T> > {
	static void ReadLcf(std::vector<T>& ref, Reader& stream, const Reader::Chunk& chunk_info) {
		ReadVectorLcf<T>(ref, stream, chunk_info);
	}
};

template <>
struct TypeReader<uint8_t> {
	static inline void ReadLcf(uint8_t& ref, Reader& stream, const Reader::Chunk& chunk_info) {
		ref = stream.Read8();
	}
};

template <>
struct TypeReader<int16_t> {
	static inline void ReadLcf(int16_t& ref, Reader& stream, const Reader::Chunk& chunk_info) {
		ref = stream.Read16();
	}
};

template <>
struct TypeReader<int> {
	static inline void ReadLcf(int& ref, Reader& stream, const Reader::Chunk& chunk_info) {
		ref = stream.ReadInt();
	}
};

template <>
struct TypeReader<bool> {
	static inline void ReadLcf(bool& ref, Reader& stream, const Reader::Chunk& chunk_info) {
		ref = stream.ReadBool();
	}
};

template <>
struct TypeReader<std::string> {
	static inline void ReadLcf(std::string& ref, Reader& stream, const Reader::Chunk& chunk_info) {
		ref = stream.ReadString(chunk_info.length);
	}
};

template <>
struct TypeReader<std::vector<unsigned char> > {
	static inline void ReadLcf(std::vector<unsigned char>& ref, Reader& stream, const Reader::Chunk& chunk_info) {
		stream.Read8(ref, chunk_info.length);
	}
};

template <>
struct TypeReader<std::vector<int16_t> > {
	static inline void ReadLcf(std::vector<int16_t>& ref, Reader& stream, const Reader::Chunk& chunk_info) {
		stream.Read16(ref, chunk_info.length);
	}
};

template <>
struct TypeReader<std::vector<uint32_t> > {
	static inline void ReadLcf(std::vector<uint32_t>& ref, Reader& stream, const Reader::Chunk& chunk_info) {
		stream.Read32(ref, chunk_info.length);
	}
};

template <>
struct TypeReader<std::vector<bool> > {
	static inline void ReadLcf(std::vector<bool>& ref, Reader& stream, const Reader::Chunk& chunk_info) {
		stream.ReadBool(ref, chunk_info.length);
	}
};

////////////////////////////////////////////////////////////
// Structure field readers
////////////////////////////////////////////////////////////

template <class S, class T>
struct FieldReader {
	static void ReadLcf(S& obj, T S::*ref, Reader& stream, const Reader::Chunk& chunk_info) {
		if (ref == 0) {
			T dummy;
			TypeReader<T>::ReadLcf(dummy, stream, chunk_info);
		}
		else
			TypeReader<T>::ReadLcf(obj.*ref, stream, chunk_info);
	}
};

////////////////////////////////////////////////////////////
// Field abstract base class template
////////////////////////////////////////////////////////////

template <class S>
struct Field {
	typedef S struct_type;

	int id;
	const std::string name;

	virtual void ReadLcf(S& obj, Reader& stream, const Reader::Chunk& chunk_info) const = 0;

	Field(int id, const char* name) :
		id(id), name(name) {}
};

////////////////////////////////////////////////////////////
// TypedField class template
////////////////////////////////////////////////////////////

template <class S, class T>
struct TypedField : public Field<S> {
	typedef T field_type;

	T S::*ref;

	void ReadLcf(S& obj, Reader& stream, const Reader::Chunk& chunk_info) const {
		FieldReader<S, T>::ReadLcf(obj, ref, stream, chunk_info);
	}

	TypedField(T S::*ref, int id, const char* name) :
		Field<S>(id, name), ref(ref) {}
};

////////////////////////////////////////////////////////////
// ID handling for Struct class
////////////////////////////////////////////////////////////

enum StructIDType {
	WithID,
	SkipID,
	NoID
};

////////////////////////////////////////////////////////////
// ID reader for Struct class
////////////////////////////////////////////////////////////

template <class S, StructIDType T>
struct IDReader {
};

template <class S>
struct IDReader<S, WithID> {
	static inline void ReadID(S& obj, Reader& stream) {
		obj.ID = stream.ReadInt();
	}
};

template <class S>
struct IDReader<S, SkipID> {
	static inline void ReadID(S& obj, Reader& stream) {
		stream.ReadInt();
	}
};

template <class S>
struct IDReader<S, NoID> {
	static inline void ReadID(S& obj, Reader& stream) {}
};

////////////////////////////////////////////////////////////
// Struct class template
////////////////////////////////////////////////////////////

template <class S>
class Struct {
	typedef std::map<int, const Field<S>* > field_map_type;
	static const Field<S>* fields[];
	static field_map_type field_map;
	static void ReadID(S& obj, Reader& stream);

public:
	static void MakeFieldMap() {
		for (int i = 0; fields[i] != NULL; i++)
			field_map[fields[i]->id] = fields[i];
	}

	static void ReadLcf(S& obj, Reader& stream) {
		if (field_map.empty())
			MakeFieldMap();

		Reader::Chunk chunk_info;

		ReadID(obj, stream);

		while (!stream.Eof()) {
			chunk_info.ID = stream.ReadInt();
			if (chunk_info.ID == 0)
				break;

			chunk_info.length = stream.ReadInt();
			if (chunk_info.length == 0)
				continue;

			typename field_map_type::const_iterator it = field_map.find(chunk_info.ID);
			if (it != field_map.end())
				it->second->ReadLcf(obj, stream, chunk_info);
			else
				stream.Skip(chunk_info);
		}
	}
};

template <class S>
std::map<int, const Field<S>* > Struct<S>::field_map;

////////////////////////////////////////////////////////////
// Vector reader
////////////////////////////////////////////////////////////

template <class T>
static void ReadVectorLcf(std::vector<T>& vec, Reader& stream, const Reader::Chunk& chunk_info) {
	int count = stream.ReadInt();
	vec.resize(count);
	for (int i = 0; i < count; i++)
		TypeReader<T>::ReadLcf(vec[i], stream, chunk_info);
}

#endif

