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
#include <cstring>
#include <cstdlib>
#include "reader_lcf.h"
#include "writer_lcf.h"
#include "reader_xml.h"
#include "writer_xml.h"
#include "rpg_equipment.h"
#include "rpg_parameters.h"
#include "rpg_eventcommand.h"
#include "rpg_movecommand.h"

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
	static void ReadLcf(T& ref, LcfReader& stream, uint32_t length) {
		Struct<T>::ReadLcf(ref, stream);
	}
	static void WriteLcf(const T& ref, LcfWriter& stream) {
		Struct<T>::WriteLcf(ref, stream);
	}
	static int LcfSize(const T& ref, LcfWriter& stream) {
		return Struct<T>::LcfSize(ref, stream);
	}
	static void WriteXml(const T& ref, XmlWriter& stream) {
		Struct<T>::WriteXml(ref, stream);
	}
	static void BeginXml(T& ref, XmlReader& stream) {
		Struct<T>::BeginXml(ref, stream);
	}
	static void ParseXml(T& ref, const std::string& data) {
		// no-op
	}
};

template <>
struct TypeReader<RPG::Equipment> {
	static void ReadLcf(RPG::Equipment& ref, LcfReader& stream, uint32_t length);
	static void WriteLcf(const RPG::Equipment& ref, LcfWriter& stream);
	static int LcfSize(const RPG::Equipment& ref, LcfWriter& stream);
	static void WriteXml(const RPG::Equipment& ref, XmlWriter& stream);
	static void BeginXml(RPG::Equipment& ref, XmlReader& stream);
	static void ParseXml(RPG::Equipment& ref, const std::string& data);
};

template <>
struct TypeReader<RPG::Parameters> {
	static void ReadLcf(RPG::Parameters& ref, LcfReader& stream, uint32_t length);
	static void WriteLcf(const RPG::Parameters& ref, LcfWriter& stream);
	static int LcfSize(const RPG::Parameters& ref, LcfWriter& stream);
	static void WriteXml(const RPG::Parameters& ref, XmlWriter& stream);
	static void BeginXml(RPG::Parameters& ref, XmlReader& stream);
	static void ParseXml(RPG::Parameters& ref, const std::string& data);
};

template <>
struct TypeReader<RPG::EventCommand> {
	static void ReadLcf(RPG::EventCommand& ref, LcfReader& stream, uint32_t length);
	static void WriteLcf(const RPG::EventCommand& ref, LcfWriter& stream);
	static int LcfSize(const RPG::EventCommand& ref, LcfWriter& stream);
	static void WriteXml(const RPG::EventCommand& ref, XmlWriter& stream);
	static void BeginXml(RPG::EventCommand& ref, XmlReader& stream);
	static void ParseXml(RPG::EventCommand& ref, const std::string& data);
};

template <>
struct TypeReader<std::vector<RPG::EventCommand> > {
	static void ReadLcf(std::vector<RPG::EventCommand>& ref, LcfReader& stream, uint32_t length);
	static void WriteLcf(const std::vector<RPG::EventCommand>& ref, LcfWriter& stream);
	static int LcfSize(const std::vector<RPG::EventCommand>& ref, LcfWriter& stream);
	static void WriteXml(const std::vector<RPG::EventCommand>& ref, XmlWriter& stream);
	static void BeginXml(std::vector<RPG::EventCommand>& ref, XmlReader& stream);
	static void ParseXml(std::vector<RPG::EventCommand>& ref, const std::string& data);
};

template <>
struct TypeReader<RPG::MoveCommand> {
	static void ReadLcf(RPG::MoveCommand& ref, LcfReader& stream, uint32_t length);
	static void WriteLcf(const RPG::MoveCommand& ref, LcfWriter& stream);
	static int LcfSize(const RPG::MoveCommand& ref, LcfWriter& stream);
	static void WriteXml(const RPG::MoveCommand& ref, XmlWriter& stream);
	static void BeginXml(RPG::MoveCommand& ref, XmlReader& stream);
	static void ParseXml(RPG::MoveCommand& ref, const std::string& data);
};

template <>
struct TypeReader<std::vector<RPG::MoveCommand> > {
	static void ReadLcf(std::vector<RPG::MoveCommand>& ref, LcfReader& stream, uint32_t length);
	static void WriteLcf(const std::vector<RPG::MoveCommand>& ref, LcfWriter& stream);
	static int LcfSize(const std::vector<RPG::MoveCommand>& ref, LcfWriter& stream);
	static void WriteXml(const std::vector<RPG::MoveCommand>& ref, XmlWriter& stream);
	static void BeginXml(std::vector<RPG::MoveCommand>& ref, XmlReader& stream);
	static void ParseXml(std::vector<RPG::MoveCommand>& ref, const std::string& data);
};

template <class T>
struct TypeReader<std::vector<T> > {
	static void ReadLcf(std::vector<T>& ref, LcfReader& stream, uint32_t length) {
		Struct<T>::ReadLcf(ref, stream);
	}
	static void WriteLcf(const std::vector<T>& ref, LcfWriter& stream) {
		Struct<T>::WriteLcf(ref, stream);
	}
	static int LcfSize(const std::vector<T>& ref, LcfWriter& stream) {
		return Struct<T>::LcfSize(ref, stream);
	}
	static void WriteXml(const std::vector<T>& ref, XmlWriter& stream) {
		Struct<T>::WriteXml(ref, stream);
	}
	static void BeginXml(std::vector<T>& ref, XmlReader& stream) {
		Struct<T>::BeginXml(ref, stream);
	}
	static void ParseXml(std::vector<T>& ref, const std::string& data) {
		// no-op
	}
};

template <>
struct TypeReader<uint8_t> {
	static inline void ReadLcf(uint8_t& ref, LcfReader& stream, uint32_t length) {
		assert(length == 1);
		ref = stream.Read8();
	}
	static inline void WriteLcf(const uint8_t& ref, LcfWriter& stream) {
		stream.Write8(ref);
	}
	static int LcfSize(const uint8_t& ref, LcfWriter& stream) {
		return 1;
	}
	static inline void WriteXml(const uint8_t& ref, XmlWriter& stream) {
		stream.WriteInt((int) ref);
	}
	static void BeginXml(uint8_t& ref, XmlReader& stream) {
		// no-op
	}
	static void ParseXml(uint8_t& ref, const std::string& data) {
		XmlReader::Read(ref, data);
	}
};

template <>
struct TypeReader<int16_t> {
	static inline void ReadLcf(int16_t& ref, LcfReader& stream, uint32_t length) {
		assert(length == 2);
		ref = stream.Read16();
	}
	static inline void WriteLcf(const uint16_t& ref, LcfWriter& stream) {
		stream.Write16(ref);
	}
	static int LcfSize(const int16_t& ref, LcfWriter& stream) {
		return 2;
	}
	static inline void WriteXml(const int16_t& ref, XmlWriter& stream) {
		stream.WriteInt((int) ref);
	}
	static void BeginXml(int16_t& ref, XmlReader& stream) {
		// no-op
	}
	static void ParseXml(int16_t& ref, const std::string& data) {
		XmlReader::Read(ref, data);
	}
};

template <>
struct TypeReader<int> {
	static inline void ReadLcf(int& ref, LcfReader& stream, uint32_t length) {
		assert(length >= 1 && length <= 5);
		ref = stream.ReadInt();
	}
	static inline void WriteLcf(const int& ref, LcfWriter& stream) {
		stream.WriteInt(ref);
	}
	static int LcfSize(const int& ref, LcfWriter& stream) {
		return LcfReader::IntSize(ref);
	}
	static inline void WriteXml(const int& ref, XmlWriter& stream) {
		stream.WriteInt(ref);
	}
	static void BeginXml(int& ref, XmlReader& stream) {
		// no-op
	}
	static void ParseXml(int& ref, const std::string& data) {
		XmlReader::Read(ref, data);
	}
};

template <>
struct TypeReader<bool> {
	static inline void ReadLcf(bool& ref, LcfReader& stream, uint32_t length) {
		assert(length == 1);
		ref = stream.ReadBool();
	}
	static inline void WriteLcf(const bool& ref, LcfWriter& stream) {
		stream.WriteBool(ref);
	}
	static int LcfSize(const bool& ref, LcfWriter& stream) {
		return 1;
	}
	static inline void WriteXml(const bool& ref, XmlWriter& stream) {
		stream.Write<bool>(ref);
	}
	static void BeginXml(bool& ref, XmlReader& stream) {
		// no-op
	}
	static void ParseXml(bool& ref, const std::string& data) {
		XmlReader::Read(ref, data);
	}
};

template <>
struct TypeReader<double> {
	static inline void ReadLcf(double& ref, LcfReader& stream, uint32_t length) {
		assert(length == 8);
		ref = stream.ReadDouble();
	}
	static inline void WriteLcf(const double& ref, LcfWriter& stream) {
		stream.WriteDouble(ref);
	}
	static int LcfSize(const double& ref, LcfWriter& stream) {
		return 8;
	}
	static inline void WriteXml(const double& ref, XmlWriter& stream) {
		stream.Write<double>(ref);
	}
	static void BeginXml(double& ref, XmlReader& stream) {
		// no-op
	}
	static void ParseXml(double& ref, const std::string& data) {
		XmlReader::Read(ref, data);
	}
};

template <>
struct TypeReader<std::string> {
	static inline void ReadLcf(std::string& ref, LcfReader& stream, uint32_t length) {
		ref = stream.ReadString(length);
	}
	static inline void WriteLcf(const std::string& ref, LcfWriter& stream) {
		stream.WriteString(ref);
	}
	static int LcfSize(const std::string& ref, LcfWriter& stream) {
		return stream.Decode(ref).size();
	}
	static inline void WriteXml(const std::string& ref, XmlWriter& stream) {
		stream.Write<std::string>(ref);
	}
	static void BeginXml(std::string& ref, XmlReader& stream) {
		// no-op
	}
	static void ParseXml(std::string& ref, const std::string& data) {
		XmlReader::Read(ref, data);
	}
};

template <>
struct TypeReader<std::vector<uint8_t> > {
	static inline void ReadLcf(std::vector<uint8_t>& ref, LcfReader& stream, uint32_t length) {
		stream.Read8(ref, length);
	}
	static inline void WriteLcf(const std::vector<uint8_t>& ref, LcfWriter& stream) {
		stream.Write8(ref);
	}
	static int LcfSize(const std::vector<uint8_t>& ref, LcfWriter& stream) {
		return 1 * ref.size();
	}
	static inline void WriteXml(const std::vector<uint8_t>& ref, XmlWriter& stream) {
		stream.WriteVector<uint8_t>(ref);
	}
	static void BeginXml(std::vector<uint8_t>& ref, XmlReader& stream) {
		// no-op
	}
	static void ParseXml(std::vector<uint8_t>& ref, const std::string& data) {
		XmlReader::Read(ref, data);
	}
};

template <>
struct TypeReader<std::vector<int16_t> > {
	static inline void ReadLcf(std::vector<int16_t>& ref, LcfReader& stream, uint32_t length) {
		stream.Read16(ref, length);
	}
	static inline void WriteLcf(const std::vector<int16_t>& ref, LcfWriter& stream) {
		stream.Write16(ref);
	}
	static int LcfSize(const std::vector<int16_t>& ref, LcfWriter& stream) {
		return 2 * ref.size();
	}
	static inline void WriteXml(const std::vector<int16_t>& ref, XmlWriter& stream) {
		stream.WriteVector<int16_t>(ref);
	}
	static void BeginXml(std::vector<int16_t>& ref, XmlReader& stream) {
		// no-op
	}
	static void ParseXml(std::vector<int16_t>& ref, const std::string& data) {
		XmlReader::Read(ref, data);
	}
};

template <>
struct TypeReader<std::vector<uint32_t> > {
	static inline void ReadLcf(std::vector<uint32_t>& ref, LcfReader& stream, uint32_t length) {
		stream.Read32(ref, length);
	}
	static inline void WriteLcf(const std::vector<uint32_t>& ref, LcfWriter& stream) {
		stream.Write32(ref);
	}
	static int LcfSize(const std::vector<uint32_t>& ref, LcfWriter& stream) {
		return 4 * ref.size();
	}
	static inline void WriteXml(const std::vector<uint32_t>& ref, XmlWriter& stream) {
		stream.WriteVector<uint32_t>(ref);
	}
	static void BeginXml(std::vector<uint32_t>& ref, XmlReader& stream) {
		// no-op
	}
	static void ParseXml(std::vector<uint32_t>& ref, const std::string& data) {
		XmlReader::Read(ref, data);
	}
};

template <>
struct TypeReader<std::vector<bool> > {
	static inline void ReadLcf(std::vector<bool>& ref, LcfReader& stream, uint32_t length) {
		stream.ReadBool(ref, length);
	}
	static inline void WriteLcf(const std::vector<bool>& ref, LcfWriter& stream) {
		stream.WriteBool(ref);
	}
	static int LcfSize(const std::vector<bool>& ref, LcfWriter& stream) {
		return 1 * ref.size();
	}
	static inline void WriteXml(const std::vector<bool>& ref, XmlWriter& stream) {
		stream.WriteVector<bool>(ref);
	}
	static void BeginXml(std::vector<bool>& ref, XmlReader& stream) {
		// no-op
	}
	static void ParseXml(std::vector<bool>& ref, const std::string& data) {
		XmlReader::Read(ref, data);
	}
};

////////////////////////////////////////////////////////////
// Structure field reader
////////////////////////////////////////////////////////////

template <class S, class T>
struct FieldReader {
	static void ReadLcf(S& obj, T S::*ref, LcfReader& stream, uint32_t length) {
		TypeReader<T>::ReadLcf(obj.*ref, stream, length);
	}
	static void WriteLcf(const S& obj, const T S::*ref, LcfWriter& stream) {
		TypeReader<T>::WriteLcf(obj.*ref, stream);
	}
	static int LcfSize(const S& obj, const T S::*ref, LcfWriter& stream) {
		return TypeReader<T>::LcfSize(obj.*ref, stream);
	}
	static void WriteXml(const S& obj, const T S::*ref, XmlWriter& stream) {
		TypeReader<T>::WriteXml(obj.*ref, stream);
	}
	static void BeginXml(S& obj, T S::*ref, XmlReader& stream) {
		TypeReader<T>::BeginXml(obj.*ref, stream);
	}
	static void ParseXml(S& obj, T S::*ref, const std::string& data) {
		TypeReader<T>::ParseXml(obj.*ref, data);
	}
};

////////////////////////////////////////////////////////////
// Field abstract base class template
////////////////////////////////////////////////////////////

template <class S>
struct Field {
	typedef S struct_type;

	int id;
	const char* const name;

	virtual void ReadLcf(S& obj, LcfReader& stream, uint32_t length) const = 0;
	virtual void WriteLcf(const S& obj, LcfWriter& stream) const = 0;
	virtual int LcfSize(const S& obj, LcfWriter& stream) const = 0;
	virtual bool IsDefault(const S& obj, const S& ref) const { return false; }
	virtual void WriteXml(const S& obj, XmlWriter& stream) const = 0;
	virtual void BeginXml(S& obj, XmlReader& stream) const = 0;
	virtual void ParseXml(S& obj, const std::string& data) const = 0;

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

	void ReadLcf(S& obj, LcfReader& stream, uint32_t length) const {
		FieldReader<S, T>::ReadLcf(obj, ref, stream, length);
	}
	void WriteLcf(const S& obj, LcfWriter& stream) const {
		FieldReader<S, T>::WriteLcf(obj, ref, stream);
	}
	int LcfSize(const S& obj, LcfWriter& stream) const {
		return FieldReader<S, T>::LcfSize(obj, ref, stream);
	}
	void WriteXml(const S& obj, XmlWriter& stream) const {
		stream.BeginElement(this->name);
		FieldReader<S, T>::WriteXml(obj, ref, stream);
		stream.EndElement(this->name);
	}
	void BeginXml(S& obj, XmlReader& stream) const {
		FieldReader<S, T>::BeginXml(obj, ref, stream);
	}
	void ParseXml(S& obj, const std::string& data) const {
		FieldReader<S, T>::ParseXml(obj, ref, data);
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

	void ReadLcf(S& obj, LcfReader& stream, uint32_t length) const {
		int dummy;
		TypeReader<int>::ReadLcf(dummy, stream, length);
	}
	void WriteLcf(const S& obj, LcfWriter& stream) const {
		int size = TypeReader<std::vector<T> >::LcfSize(obj.*ref, stream);
		TypeReader<int>::WriteLcf(size, stream);
	}
	int LcfSize(const S& obj, LcfWriter& stream) const {
		int size = TypeReader<std::vector<T> >::LcfSize(obj.*ref, stream);
		return LcfReader::IntSize(size);
	}
	void WriteXml(const S& obj, XmlWriter& stream) const {
		// no-op
	}
	void BeginXml(S& obj, XmlReader& stream) const {
		// no-op
	}
	void ParseXml(S& obj, const std::string& data) const {
		// no-op
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
	virtual void ReadID(S& obj, LcfReader& stream) const = 0;
	virtual void WriteID(const S& obj, LcfWriter& stream) const = 0;
	virtual int IDSize(const S& obj) const = 0;
	virtual void WriteXmlTag(const S& obj, const std::string& name, XmlWriter& stream) const = 0;
	virtual void ReadIDXml(S& obj, const char** atts) const = 0;
};

template <class S, StructIDType T>
struct IDReaderT : public IDReader<S> {
};

template <class S>
struct IDReaderT<S, WithID> : public IDReader<S> {
	void ReadID(S& obj, LcfReader& stream) const {
		obj.ID = stream.ReadInt();
	}
	void WriteID(const S& obj, LcfWriter& stream) const {
		stream.WriteInt(obj.ID);
	}
	int IDSize(const S& obj) const {
		return LcfReader::IntSize(obj.ID);
	}
	void WriteXmlTag(const S& obj, const std::string& name, XmlWriter& stream) const {
		stream.BeginElement(name, obj.ID);
	}
	void ReadIDXml(S& obj, const char** atts) const {
		for (int i = 0; atts[i] != NULL && atts[i + 1] != NULL; i += 2) {
			if (strcmp(atts[i], "ID") == 0)
				obj.ID = atoi(atts[i + 1]);
		}
	}
};

template <class S>
struct IDReaderT<S, NoID> : public IDReader<S> {
	void ReadID(S& obj, LcfReader& stream) const {}
	void WriteID(const S& obj, LcfWriter& stream) const {}
	int IDSize(const S& obj) const { return 0; }
	void WriteXmlTag(const S& obj, const std::string& name, XmlWriter& stream) const {
		stream.BeginElement(name);
	}
	void ReadIDXml(S& obj, const char** atts) const {}
};

////////////////////////////////////////////////////////////
// Struct class template
////////////////////////////////////////////////////////////

struct StringComparator {
	bool operator() (const char* const& lhs, const char* const& rhs) const {
		return strcmp(lhs, rhs) < 0;
	}
};

template <class S>
class Struct {
private:
	typedef std::map<int, const Field<S>* > field_map_type;
	typedef std::map<const char* const, const Field<S>*, StringComparator> tag_map_type;
	static const Field<S>* fields[];
	static field_map_type field_map;
	static tag_map_type tag_map;
	static IDReader<S>* ID_reader;
	static const char* const name;

	static void MakeFieldMap();
	static void MakeTagMap();

	template <class T> friend class StructXmlHandler;
	template <class T> friend class StructVectorXmlHandler;
	template <class T> friend class StructFieldXmlHandler;

public:
	static void ReadLcf(S& obj, LcfReader& stream);
	static void WriteLcf(const S& obj, LcfWriter& stream);
	static int LcfSize(const S& obj, LcfWriter& stream);
	static void WriteXml(const S& obj, XmlWriter& stream);
	static void BeginXml(S& obj, XmlReader& stream);

	static void ReadLcf(std::vector<S>& obj, LcfReader& stream);
	static void WriteLcf(const std::vector<S>& obj, LcfWriter& stream);
	static int LcfSize(const std::vector<S>& obj, LcfWriter& stream);
	static void WriteXml(const std::vector<S>& obj, XmlWriter& stream);
	static void BeginXml(std::vector<S>& obj, XmlReader& stream);
};

template <class S>
std::map<int, const Field<S>* > Struct<S>::field_map;

template <class S>
std::map<const char* const, const Field<S>*, StringComparator> Struct<S>::tag_map;

////////////////////////////////////////////////////////////
// Wrapper XML handler
////////////////////////////////////////////////////////////

class WrapperXmlHandler : public XmlHandler {
public:
	WrapperXmlHandler(const char* const name, XmlHandler* handler) :
		name(name), handler(handler) {}

	void StartElement(XmlReader& stream, const char* name, const char** atts) {
		if (strcmp(name, this->name) == 0)
			stream.SetHandler(handler);
		else {
			// error();
		}
	}

private:
	const char* const name;
	XmlHandler* handler;	
};

////////////////////////////////////////////////////////////
// Root node XML handler
////////////////////////////////////////////////////////////

template <class S>
class RootXmlHandler : public XmlHandler {
public:
	RootXmlHandler(S& ref, const char* const name) : ref(ref), name(name) {}

	void StartElement(XmlReader& stream, const char* name, const char** atts) {
		if (strcmp(name, this->name) == 0)
			TypeReader<S>::BeginXml(ref, stream);
		else {
			// error();
		}
	}

private:
	S& ref;
	const char* const name;
};

#endif

