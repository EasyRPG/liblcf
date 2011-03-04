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
#include "writer.h"
#include "event_reader.h"
#include "move_reader.h"

////////////////////////////////////////////////////////////
// Typed data readers
////////////////////////////////////////////////////////////

template <class T>
class Struct;

static int IntSize(unsigned int x) {
	int result = 0;
	do {
		x >>= 7;
		result++;
	} while (x != 0);
	return result;
}

template <class T>
static void ReadVectorLcf(std::vector<T>& vec, Reader& stream, const Reader::Chunk& chunk_info);

template <class T>
static void WriteVectorLcf(const std::vector<T>& vec, Writer& stream);

template <class T>
static int VectorLcfSize(const std::vector<T>& vec, Writer& stream);

template <class T>
struct TypeReader {
	static void ReadLcf(T& ref, Reader& stream, const Reader::Chunk& chunk_info) {
		Struct<T>::ReadLcf(ref, stream);
	}
	static void WriteLcf(const T& ref, Writer& stream) {
		Struct<T>::WriteLcf(ref, stream);
	}
	static int LcfSize(const T& ref, Writer& stream) {
		return Struct<T>::LcfSize(ref, stream);
	}
};

template <>
struct TypeReader<std::vector<RPG::EventCommand> > {
	static void ReadLcf(std::vector<RPG::EventCommand>& ref, Reader& stream, const Reader::Chunk& chunk_info) {
		Event_Reader::ReadEventCommands(ref, stream);
	}
	static void WriteLcf(const std::vector<RPG::EventCommand>& ref, Writer& stream) {
		// Event_Reader::WriteEventCommands(ref, stream);
	}
	static int LcfSize(const std::vector<RPG::EventCommand>& ref, Writer& stream) {
		// return Event_Reader::EventCommandsSize(ref);
		return 0;
	}
};

template <>
struct TypeReader<std::vector<RPG::MoveCommand> > {
	static inline void ReadLcf(std::vector<RPG::MoveCommand>& ref, Reader& stream, const Reader::Chunk& chunk_info) {
		Move_Reader::ReadMoveCommands(ref, stream, chunk_info);
	}
	static void WriteLcf(const std::vector<RPG::MoveCommand>& ref, Writer& stream) {
		// Move_Reader::WriteMoveCommands(ref, stream);
	}
	static int LcfSize(const std::vector<RPG::MoveCommand>& ref, Writer& stream) {
		// return Move_Reader::MoveCommandsSize(ref);
		return 0;
	}
};

template <class T>
struct TypeReader<std::vector<T> > {
	static void ReadLcf(std::vector<T>& ref, Reader& stream, const Reader::Chunk& chunk_info) {
		ReadVectorLcf<T>(ref, stream, chunk_info);
	}
	static void WriteLcf(const std::vector<T>& ref, Writer& stream) {
		WriteVectorLcf<T>(ref, stream);
	}
	static int LcfSize(const std::vector<T>& ref, Writer& stream) {
		return VectorLcfSize(ref, stream);
	}
};

template <>
struct TypeReader<uint8_t> {
	static inline void ReadLcf(uint8_t& ref, Reader& stream, const Reader::Chunk& chunk_info) {
		ref = stream.Read8();
	}
	static inline void WriteLcf(const uint8_t& ref, Writer& stream) {
		stream.Write8(ref);
	}
	static int LcfSize(const uint8_t& ref, Writer& stream) {
		return 1;
	}
};

template <>
struct TypeReader<int16_t> {
	static inline void ReadLcf(int16_t& ref, Reader& stream, const Reader::Chunk& chunk_info) {
		ref = stream.Read16();
	}
	static inline void WriteLcf(const uint16_t& ref, Writer& stream) {
		stream.Write16(ref);
	}
	static int LcfSize(const int16_t& ref, Writer& stream) {
		return 2;
	}
};

template <>
struct TypeReader<int> {
	static inline void ReadLcf(int& ref, Reader& stream, const Reader::Chunk& chunk_info) {
		ref = stream.ReadInt();
	}
	static inline void WriteLcf(const int& ref, Writer& stream) {
		stream.WriteInt(ref);
	}
	static int LcfSize(const uint32_t& ref, Writer& stream) {
		return IntSize(ref);
	}
};

template <>
struct TypeReader<bool> {
	static inline void ReadLcf(bool& ref, Reader& stream, const Reader::Chunk& chunk_info) {
		ref = stream.ReadBool();
	}
	static inline void WriteLcf(const bool& ref, Writer& stream) {
		stream.WriteBool(ref);
	}
	static int LcfSize(const bool& ref, Writer& stream) {
		return 1;
	}
};

template <>
struct TypeReader<double> {
	static inline void ReadLcf(double& ref, Reader& stream, const Reader::Chunk& chunk_info) {
		ref = stream.ReadDouble();
	}
	static inline void WriteLcf(const double& ref, Writer& stream) {
		stream.WriteDouble(ref);
	}
	static int LcfSize(const double& ref, Writer& stream) {
		return 8;
	}
};

template <>
struct TypeReader<std::string> {
	static inline void ReadLcf(std::string& ref, Reader& stream, const Reader::Chunk& chunk_info) {
		ref = stream.ReadString(chunk_info.length);
	}
	static inline void WriteLcf(const std::string& ref, Writer& stream) {
		stream.WriteString(ref);
	}
	static int LcfSize(const std::string& ref, Writer& stream) {
		return stream.Decode(ref).size();
	}
};

template <>
struct TypeReader<std::vector<uint8_t> > {
	static inline void ReadLcf(std::vector<uint8_t>& ref, Reader& stream, const Reader::Chunk& chunk_info) {
		stream.Read8(ref, chunk_info.length);
	}
	static inline void WriteLcf(const std::vector<uint8_t>& ref, Writer& stream) {
		stream.Write8(ref);
	}
	static int LcfSize(const std::vector<uint8_t>& ref, Writer& stream) {
		return 1 * ref.size();
	}
};

template <>
struct TypeReader<std::vector<int16_t> > {
	static inline void ReadLcf(std::vector<int16_t>& ref, Reader& stream, const Reader::Chunk& chunk_info) {
		stream.Read16(ref, chunk_info.length);
	}
	static inline void WriteLcf(const std::vector<int16_t>& ref, Writer& stream) {
		stream.Write16(ref);
	}
	static int LcfSize(const std::vector<int16_t>& ref, Writer& stream) {
		return 2 * ref.size();
	}
};

template <>
struct TypeReader<std::vector<uint32_t> > {
	static inline void ReadLcf(std::vector<uint32_t>& ref, Reader& stream, const Reader::Chunk& chunk_info) {
		stream.Read32(ref, chunk_info.length);
	}
	static inline void WriteLcf(const std::vector<uint32_t>& ref, Writer& stream) {
		stream.Write32(ref);
	}
	static int LcfSize(const std::vector<uint32_t>& ref, Writer& stream) {
		return 4 * ref.size();
	}
};

template <>
struct TypeReader<std::vector<bool> > {
	static inline void ReadLcf(std::vector<bool>& ref, Reader& stream, const Reader::Chunk& chunk_info) {
		stream.ReadBool(ref, chunk_info.length);
	}
	static inline void WriteLcf(const std::vector<bool>& ref, Writer& stream) {
		stream.WriteBool(ref);
	}
	static int LcfSize(const std::vector<bool>& ref, Writer& stream) {
		return 1 * ref.size();
	}
};

////////////////////////////////////////////////////////////
// Structure field reader
////////////////////////////////////////////////////////////

template <class S, class T>
struct FieldReader {
	static void ReadLcf(S& obj, T S::*ref, Reader& stream, const Reader::Chunk& chunk_info) {
		TypeReader<T>::ReadLcf(obj.*ref, stream, chunk_info);
	}
	static void WriteLcf(const S& obj, const T S::*ref, Writer& stream) {
		TypeReader<T>::WriteLcf(obj.*ref, stream);
	}
	static int LcfSize(const S& obj, const T S::*ref, Writer& stream) {
		return TypeReader<T>::LcfSize(obj.*ref, stream);
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
	virtual void WriteLcf(const S& obj, Writer& stream) const = 0;
	virtual int LcfSize(const S& obj, Writer& stream) const = 0;

	Field(int id, const char* name) :
		id(id), name(name) {}
};

////////////////////////////////////////////////////////////
// TypedField class template
////////////////////////////////////////////////////////////

template <class S, class T>
struct TypedField : public Field<S> {
	T S::*ref;

	void ReadLcf(S& obj, Reader& stream, const Reader::Chunk& chunk_info) const {
		FieldReader<S, T>::ReadLcf(obj, ref, stream, chunk_info);
	}
	void WriteLcf(const S& obj, Writer& stream) const {
		FieldReader<S, T>::WriteLcf(obj, ref, stream);
	}
	int LcfSize(const S& obj, Writer& stream) const {
		return FieldReader<S, T>::LcfSize(obj, ref, stream);
	}

	TypedField(T S::*ref, int id, const char* name) :
		Field<S>(id, name), ref(ref) {}
};

////////////////////////////////////////////////////////////
// SizeField class template
////////////////////////////////////////////////////////////

template <class S, class T>
struct SizeField : public Field<S> {
	const std::vector<T> S::*ref;

	void ReadLcf(S& obj, Reader& stream, const Reader::Chunk& chunk_info) const {
		int dummy;
		TypeReader<int>::ReadLcf(dummy, stream, chunk_info);
	}
	void WriteLcf(const S& obj, Writer& stream) const {
		int size = (obj.*ref).size();
		TypeReader<int>::WriteLcf(size, stream);
	}
	int LcfSize(const S& obj, Writer& stream) const {
		int size = (obj.*ref).size();
		return IntSize(size);
	}

	SizeField(const std::vector<T> S::*ref, int id) :
		Field<S>(id, ""), ref(ref) {}
};

////////////////////////////////////////////////////////////
// ID handling for Struct class
////////////////////////////////////////////////////////////

enum StructIDType {
	WithID,
	NoID
};

////////////////////////////////////////////////////////////
// ID reader for Struct class
////////////////////////////////////////////////////////////

template <class S>
struct IDReader {
	virtual void ReadID(S& obj, Reader& stream) const = 0;
	virtual void WriteID(const S& obj, Writer& stream) const = 0;
	virtual int IDSize(const S& obj) const = 0;
};

template <class S, StructIDType T>
struct IDReaderT : public IDReader<S> {
};

template <class S>
struct IDReaderT<S, WithID> : public IDReader<S> {
	void ReadID(S& obj, Reader& stream) const {
		obj.ID = stream.ReadInt();
	}
	void WriteID(const S& obj, Writer& stream) const {
		stream.WriteInt(obj.ID);
	}
	int IDSize(const S& obj) const {
		return IntSize(obj.ID);
	}
};

template <class S>
struct IDReaderT<S, NoID> : public IDReader<S> {
	void ReadID(S& obj, Reader& stream) const {}
	void WriteID(const S& obj, Writer& stream) const {}
	int IDSize(const S& obj) const { return 0; }
};

////////////////////////////////////////////////////////////
// Struct class template
////////////////////////////////////////////////////////////

template <class S>
class Struct {
	typedef std::map<int, const Field<S>* > field_map_type;
	static const Field<S>* fields[];
	static field_map_type field_map;
	static IDReader<S>* ID_reader;

public:
	static void MakeFieldMap() {
		for (int i = 0; fields[i] != NULL; i++)
			field_map[fields[i]->id] = fields[i];
	}

	static void ReadLcf(S& obj, Reader& stream) {
		if (field_map.empty())
			MakeFieldMap();

		Reader::Chunk chunk_info;

		ID_reader->ReadID(obj, stream);

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

	static void WriteLcf(const S& obj, Writer& stream) {
		ID_reader->WriteID(obj, stream);
		for (int i = 0; fields[i] != NULL; i++) {
			const Field<S>* field = fields[i];
			stream.WriteInt(field->id);
			stream.WriteInt(field->LcfSize(obj, stream));
			field->WriteLcf(obj, stream);
		}
		stream.WriteInt(0);
	}

	static int LcfSize(const S& obj, Writer& stream) {
		int result = ID_reader->IDSize(obj);
		for (int i = 0; fields[i] != NULL; i++) {
			const Field<S>* field = fields[i];
			result += IntSize(field->id);
			int size = field->LcfSize(obj, stream);
			result += IntSize(size);
			result += size;
		}
		result += IntSize(0);
		return result;
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

template <class T>
static void WriteVectorLcf(const std::vector<T>& vec, Writer& stream) {
	int count = vec.size();
	stream.WriteInt(count);
	for (int i = 0; i < count; i++)
		TypeReader<T>::WriteLcf(vec[i], stream);
}

template <class T>
static int VectorLcfSize(const std::vector<T>& vec, Writer& stream) {
	int result = 0;
	int count = vec.size();
	result += IntSize(count);
	for (int i = 0; i < count; i++)
		result += TypeReader<T>::LcfSize(vec[i], stream);
	return result;
}

#endif

