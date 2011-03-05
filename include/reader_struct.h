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

////////////////////////////////////////////////////////////
// Typed data readers
////////////////////////////////////////////////////////////

template <class T>
struct TypeReader {
	static void ReadLcf(T& ref, Reader& stream, uint32_t length) {
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
	static void ReadLcf(std::vector<RPG::EventCommand>& ref, Reader& stream, uint32_t length) {
		Event_Reader::ReadEventCommands(ref, stream, length);
	}
	static void WriteLcf(const std::vector<RPG::EventCommand>& ref, Writer& stream) {
		Event_Reader::WriteEventCommands(ref, stream);
	}
	static int LcfSize(const std::vector<RPG::EventCommand>& ref, Writer& stream) {
		return Event_Reader::EventCommandsSize(ref, stream);
	}
};

template <>
struct TypeReader<std::vector<RPG::MoveCommand> > {
	static inline void ReadLcf(std::vector<RPG::MoveCommand>& ref, Reader& stream, uint32_t length) {
		Move_Reader::ReadMoveCommands(ref, stream, length);
	}
	static void WriteLcf(const std::vector<RPG::MoveCommand>& ref, Writer& stream) {
		Move_Reader::WriteMoveCommands(ref, stream);
	}
	static int LcfSize(const std::vector<RPG::MoveCommand>& ref, Writer& stream) {
		return Move_Reader::MoveCommandsSize(ref, stream);
	}
};

template <class T>
struct TypeReader<std::vector<T> > {
	static void ReadLcf(std::vector<T>& ref, Reader& stream, uint32_t length) {
		Struct<T>::ReadLcf(ref, stream);
	}
	static void WriteLcf(const std::vector<T>& ref, Writer& stream) {
		Struct<T>::WriteLcf(ref, stream);
	}
	static int LcfSize(const std::vector<T>& ref, Writer& stream) {
		return Struct<T>::LcfSize(ref, stream);
	}
};

template <>
struct TypeReader<uint8_t> {
	static inline void ReadLcf(uint8_t& ref, Reader& stream, uint32_t length) {
		assert(length == 1);
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
	static inline void ReadLcf(int16_t& ref, Reader& stream, uint32_t length) {
		assert(length == 2);
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
	static inline void ReadLcf(int& ref, Reader& stream, uint32_t length) {
		assert(length >= 1 && length <= 5);
		ref = stream.ReadInt();
	}
	static inline void WriteLcf(const int& ref, Writer& stream) {
		stream.WriteInt(ref);
	}
	static int LcfSize(const int& ref, Writer& stream) {
		return Reader::IntSize(ref);
	}
};

template <>
struct TypeReader<bool> {
	static inline void ReadLcf(bool& ref, Reader& stream, uint32_t length) {
		assert(length == 1);
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
	static inline void ReadLcf(double& ref, Reader& stream, uint32_t length) {
		assert(length == 8);
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
	static inline void ReadLcf(std::string& ref, Reader& stream, uint32_t length) {
		ref = stream.ReadString(length);
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
	static inline void ReadLcf(std::vector<uint8_t>& ref, Reader& stream, uint32_t length) {
		stream.Read8(ref, length);
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
	static inline void ReadLcf(std::vector<int16_t>& ref, Reader& stream, uint32_t length) {
		stream.Read16(ref, length);
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
	static inline void ReadLcf(std::vector<uint32_t>& ref, Reader& stream, uint32_t length) {
		stream.Read32(ref, length);
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
	static inline void ReadLcf(std::vector<bool>& ref, Reader& stream, uint32_t length) {
		stream.ReadBool(ref, length);
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
	static void ReadLcf(S& obj, T S::*ref, Reader& stream, uint32_t length) {
		TypeReader<T>::ReadLcf(obj.*ref, stream, length);
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

	virtual void ReadLcf(S& obj, Reader& stream, uint32_t length) const = 0;
	virtual void WriteLcf(const S& obj, Writer& stream) const = 0;
	virtual int LcfSize(const S& obj, Writer& stream) const = 0;
	virtual bool IsDefault(const S& obj, const S& ref) const { return false; }

	Field(int id, const char* name) :
		id(id), name(name) {}
};

////////////////////////////////////////////////////////////
// Equivalence traits
////////////////////////////////////////////////////////////

template <class T>
struct Class_Test {
	typedef char yes;
	typedef int no;

	template <class C>
	static yes& check(void(C::*)(void));
	template <class C>
	static no&  check(...);

	static const bool value = sizeof(check<T>(0)) == sizeof(yes);
};

template <class T>
struct Compare_Test {
	static const bool value = !Class_Test<T>::value;
};

template <class T>
struct Compare_Test<std::vector<T> > {
	static const bool value = Compare_Test<T>::value;
};

template <>
struct Compare_Test<std::string> {
	static const bool value = true;
};

template <class T, bool comparable>
struct Compare_Traits_Impl {};

template <class T>
struct Compare_Traits_Impl<T, true> {
	static bool IsEqual(const T& a, const T& b) {
		return a == b;
	}
};

template <class T>
struct Compare_Traits_Impl<T, false> {
	static bool IsEqual(const T& a, const T& b) {
		return false;
	}
};

template <class T>
struct Compare_Traits_Impl<std::vector<T>, false> {
	static bool IsEqual(const std::vector<T>& a, const std::vector<T>& b) {
		return a.empty() && b.empty();
	}
};

template <class T>
struct Compare_Traits {
	typedef Compare_Traits_Impl<T, Compare_Test<T>::value> impl_type;
	static bool IsEqual(const T& a, const T& b) {
		return impl_type::IsEqual(a, b);
	}
};

////////////////////////////////////////////////////////////
// TypedField class template
////////////////////////////////////////////////////////////

template <class S, class T>
struct TypedField : public Field<S> {
	T S::*ref;

	void ReadLcf(S& obj, Reader& stream, uint32_t length) const {
		FieldReader<S, T>::ReadLcf(obj, ref, stream, length);
	}
	void WriteLcf(const S& obj, Writer& stream) const {
		FieldReader<S, T>::WriteLcf(obj, ref, stream);
	}
	int LcfSize(const S& obj, Writer& stream) const {
		return FieldReader<S, T>::LcfSize(obj, ref, stream);
	}
	bool IsDefault(const S& a, const S& b) const {
		return Compare_Traits<T>::IsEqual(a.*ref, b.*ref);
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

	void ReadLcf(S& obj, Reader& stream, uint32_t length) const {
		int dummy;
		TypeReader<int>::ReadLcf(dummy, stream, length);
	}
	void WriteLcf(const S& obj, Writer& stream) const {
		// int size = (obj.*ref).size();
		int size = TypeReader<std::vector<T> >::LcfSize(obj.*ref, stream);
		TypeReader<int>::WriteLcf(size, stream);
	}
	int LcfSize(const S& obj, Writer& stream) const {
		// int size = (obj.*ref).size();
		int size = TypeReader<std::vector<T> >::LcfSize(obj.*ref, stream);
		return Reader::IntSize(size);
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
		return Reader::IntSize(obj.ID);
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

	static void MakeFieldMap();

public:
	static void ReadLcf(S& obj, Reader& stream);
	static void WriteLcf(const S& obj, Writer& stream);
	static int LcfSize(const S& obj, Writer& stream);

	static void ReadLcf(std::vector<S>& obj, Reader& stream);
	static void WriteLcf(const std::vector<S>& obj, Writer& stream);
	static int LcfSize(const std::vector<S>& obj, Writer& stream);
};

template <class S>
std::map<int, const Field<S>* > Struct<S>::field_map;

////////////////////////////////////////////////////////////
// Vector reader
////////////////////////////////////////////////////////////

#endif

