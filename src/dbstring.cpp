#include "lcf/dbstring.h"
#include <unordered_map>
#include <memory>
#include <iostream>

namespace lcf {

constexpr DBString::size_type DBString::npos;
alignas(DBString::size_type) constexpr char DBString::_empty_str[sizeof(size_type)];

struct DBStringData {
	using size_type = DBString::size_type;

	size_type refcnt;
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

struct DBStringDataDeleter {
	void operator()(DBStringData* p);
};

using DBStringDataPtr = std::unique_ptr<DBStringData,DBStringDataDeleter>;

class DBStringAllocator {
	public:
		using size_type = DBString::size_type;

		static DBStringDataPtr Alloc(StringView str) {
			auto* raw = ::operator new(DBStringData::alloc_size(str));
			auto data = DBStringDataPtr(new (raw) DBStringData());
			data->refcnt = 1;
			data->size = str.size();
			std::memcpy(data->data(), str.data(), data->size);
			data->data()[data->size] = '\0';

			return data;
		}

		static void Free(DBStringData* data) {
			data->~DBStringData();
			::operator delete(data);
		}

		const char* Acquire(StringView str) {
			if (str.empty()) {
				return DBString::empty_str();
			}

			auto iter = _map.find(str);
			if (iter != _map.end()) {
				iter->second->refcnt += 1;
			} else {
				auto ptr = Alloc(str);
				auto sv = StringView(ptr->data(), ptr->size);
				// FIXME: Double hash lookup because the key changes..
				iter = _map.insert({ sv, std::move(ptr) }).first;
			}
			return iter->second->data();
		}

		const char* Dup(const char* s) {
			if (s != DBString::empty_str()) {
				auto* data = DBStringData::from_data(const_cast<char*>(s));
				data->refcnt += 1;
			}
			return s;
		}

		void Release(StringView str) {
			if (str.empty()) {
				// This is needed, due to global DBStrings which are initialized to null.
				// They may be destroyed *after* DBStringAllocator is destroyed!
				// FIMXE: To fix this, use a hash table with constexpr default constructor.
				return;
			}
			auto iter = _map.find(str);
			if (iter != _map.end()) {
				auto& data = iter->second;
				data->refcnt -= 1;
				assert(data->refcnt >= 0);
				if (data->refcnt == 0) {
					_map.erase(iter);
				}
			}
		}

		static DBStringAllocator& instance() {
			static DBStringAllocator alloc;
			return alloc;
		}
	private:
		DBStringAllocator() = default;
	private:
		std::unordered_map<StringView,DBStringDataPtr> _map;
};

void DBStringDataDeleter::operator()(DBStringData* p) {
	DBStringAllocator::Free(p);
}

DBString::DBString(StringView s)
	: _storage(DBStringAllocator::instance().Acquire(s))
{
}

DBString::DBString(const DBString& o)
	: _storage(DBStringAllocator::instance().Dup(o._storage))
{
}

DBString& DBString::operator=(const DBString& o) {
	if (this != &o) {
		// What is strings are the same, skip double lookup?
		_reset();
		_storage = DBStringAllocator::instance().Dup(o._storage);
	}
	return *this;
}

void DBString::_reset() noexcept {
	assert(_storage != nullptr);
	DBStringAllocator::instance().Release(*this);
}

} // namespace lcf
