#include "lcf/dbstring.h"
#include <memory>

namespace lcf {

constexpr DBString::size_type DBString::npos;
alignas(DBString::size_type) constexpr char DBString::_empty_str[sizeof(size_type)];

struct DBStringData {
	using size_type = DBString::size_type;

	size_type size;

	const char* data() const {
		return reinterpret_cast<const char*>(this + 1);
	}

	char* data() {
		return reinterpret_cast<char*>(this + 1);
	}

	static size_type alloc_size(StringView str) {
		return sizeof(DBStringData) + str.size() + 1;
	}

	static DBStringData* from_data(char* s) {
		return reinterpret_cast<DBStringData*>(s) - 1;
	}
};

static char* Alloc(StringView str) {
	if (str.empty()) {
		return DBString::empty_str();
	}

	auto* raw = ::operator new(DBStringData::alloc_size(str));
	auto* db = new (raw) DBStringData();
	db->size = str.size();
	std::memcpy(db->data(), str.data(), db->size);
	db->data()[db->size] = '\0';

	return db->data();
}

static void Free(char* str) {
	if (str == DBString::empty_str()) {
		return;
	}
	auto* db = DBStringData::from_data(str);

	db->~DBStringData();
	::operator delete(db);
}

DBString::DBString(StringView s)
	: _storage(Alloc(s))
{
}

DBString& DBString::operator=(const DBString& o) {
	if (this != &o) {
		// What is strings are the same, skip double lookup?
		_reset();
		_storage = Alloc(StringView(o));
	}
	return *this;
}

void DBString::_reset() noexcept {
	assert(_storage != nullptr);
	Free(_storage);
}

} // namespace lcf
