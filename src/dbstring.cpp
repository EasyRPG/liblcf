#include "lcf/dbstring.h"

namespace lcf {

constexpr DBString::size_type DBString::npos;

static constexpr size_t AllocSize(size_t len) {
	return sizeof(DBString::size_type) + len + 1;
}

static char* Alloc(size_t len) {
	return reinterpret_cast<char*>(::operator new(AllocSize(len)));
}

static char* Dup(const char* other, size_t size) {
	if (size > 0) {
		auto* s = Alloc(size);
		std::memcpy(s, other, AllocSize(size));
		return s;
	}
	return nullptr;
}

static void Free(void* p) {
	::operator delete(p);
}

DBString::DBString(const char* s, size_t len)
{
	if (len > 0) {
		auto* ptr = Alloc(len);
		_storage = ptr;

		*reinterpret_cast<size_type*>(ptr) = len;
		ptr += sizeof(size_type);

		std::memcpy(ptr, s, len);
		ptr += len;

		*ptr = '\0';
	}
}

DBString::DBString(const DBString& o)
	: _storage(Dup(o._storage, o.size()))
{ }

DBString& DBString::operator=(const DBString& o) {
	if (this != &o) {
		_reset();
		_storage = Dup(o._storage, o.size());
	}
	return *this;
}



void DBString::_reset() noexcept {
	Free(_storage);
	_storage = nullptr;
}

} // namespace lcf
