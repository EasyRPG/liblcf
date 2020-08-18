/*
 * This file is part of liblcf. Copyright (c) 2020 liblcf authors.
 * https://github.com/EasyRPG/liblcf - https://easyrpg.org
 *
 * liblcf is Free/Libre Open Source Software, released under the MIT License.
 * For the full copyright and license information, please view the COPYING
 * file that was distributed with this source code.
 */

#ifndef LCF_DBARRAY_H
#define LCF_DBARRAY_H
#include <utility>
#include <string>
#include <iterator>
#include <cstdint>
#include <limits>
#include <algorithm>
#include <type_traits>

#include "lcf/scope_guard.h"

namespace lcf {

class DBArrayBase {
	public:
		using size_type = uint32_t;

	protected:
		constexpr DBArrayBase() = default;

		static void* alloc(size_type size, size_type field_size, size_type align);
		static void free(void* p, size_type align) noexcept;

		static constexpr void* empty_buf() {
			return const_cast<size_type*>(&_empty_buf + 1);
		}

		static size_type* get_size_ptr(void* p) {
			return reinterpret_cast<size_type*>(p) - 1;
		}

		static const size_type* get_size_ptr(const void* p) {
			return reinterpret_cast<const size_type*>(p) - 1;
		}

	private:
		static constexpr const size_type _empty_buf = 0;
};

// An array data structure optimized for database storage.
// Low memory footprint and not dynamically resizable.
template <typename T>
class DBArray : private DBArrayBase {
	public:
		using value_type = T;
		using DBArrayBase::size_type;

		using iterator = T*;
		using const_iterator = const T*;
		using reverse_iterator = std::reverse_iterator<iterator>;
		using const_reverse_iterator = std::reverse_iterator<const_iterator>;

		constexpr DBArray() = default;
		explicit DBArray(size_type count) {
			construct(count, [](void* p) { new (p) T(); });
		}

		explicit DBArray(size_type count, const T& value) {
			construct(count, [&](void* p) { new (p) T(value); });
		}

		template <typename Iter,
				 typename std::enable_if<
					 std::is_base_of<std::forward_iterator_tag, typename std::iterator_traits<Iter>::iterator_category>::value, int>::type = 0
				 >
		DBArray(Iter first, Iter last) {
			construct(std::distance(first, last), [&](void* p) { new (p) T(*first); ++first; });
		}

		DBArray(std::initializer_list<T> ilist)
			: DBArray(ilist.begin(), ilist.end()) {}

		DBArray(const DBArray& o) : DBArray(o.begin(), o.end()) {}
		DBArray(DBArray&& o) noexcept { swap(o); }

		DBArray& operator=(const DBArray&);
		DBArray& operator=(DBArray&& o) noexcept;

		void swap(DBArray& o) noexcept {
			std::swap(_storage, o._storage);
		}

		~DBArray() { destroy(); }

		T& operator[](size_type i) { return data()[i]; }
		const T& operator[](size_type i) const { return data()[i]; }

		T& front() { return (*this)[0]; }
		const T& front() const { return (*this)[0]; }

		T& back() { return (*this)[size()-1]; }
		const T& back() const { return (*this)[size()-1]; }

		T* data() { return reinterpret_cast<T*>(_storage); }
		const T* data() const { return reinterpret_cast<const T*>(_storage); }

		iterator begin() { return data(); }
		iterator end() { return data() + size(); }

		const_iterator begin() const { return data(); }
		const_iterator end() const { return data() + size(); }

		const_iterator cbegin() const { return begin(); }
		const_iterator cend() const { return end(); }

		reverse_iterator rbegin() { return reverse_iterator(end()); }
		reverse_iterator rend() { return reverse_iterator(begin()); }

		const_reverse_iterator rbegin() const { return const_reverse_iterator(end()); }
		const_reverse_iterator rend() const { return const_reverse_iterator(begin()); }

		const_reverse_iterator crbegin() const { return rbegin(); }
		const_reverse_iterator crend() const { return rend(); }

		bool empty() const { return size() == 0; }
		size_type size() const { return *get_size_ptr(_storage); }

	private:
		T* alloc(size_t count) {
			return reinterpret_cast<T*>(DBArrayBase::alloc(count * sizeof(T), count, alignof(T)));
		}

		void free(void* p) {
			DBArrayBase::free(p, alignof(T));
		}

		template <typename F>
		void construct(size_type count, const F& make);

		void destroy() noexcept;
		void destroy_impl(size_type n) noexcept;
	private:
		void* _storage = DBArrayBase::empty_buf();
};

template <typename T>
inline bool operator==(const DBArray<T>& l, const DBArray<T>& r) { return std::equal(l.begin(), l.end(), r.begin(), r.end()); }
template <typename T>
inline bool operator!=(const DBArray<T>& l, const DBArray<T>& r) { return !(l == r); }
template <typename T>
inline bool operator<(const DBArray<T>& l, const DBArray<T>& r) { return std::lexicographical_compare(l.begin(), l.end(), r.begin(), r.end()); }
template <typename T>
inline bool operator>(const DBArray<T>& l, const DBArray<T>& r) { return r < l; }
template <typename T>
inline bool operator<=(const DBArray<T>& l, const DBArray<T>& r) { return !(l > r); }
template <typename T>
inline bool operator>=(const DBArray<T>& l, const DBArray<T>& r) { return !(l < r); }

} // namespace lcf

namespace lcf {

template <typename T>
inline DBArray<T>& DBArray<T>::operator=(const DBArray<T>& o) {
	if (this != &o) {
		destroy();
		if (!o.empty()) {
			auto iter = o.begin();
			construct(o.size(), [&](void* p) { new (p) T(*(iter++)); });
		}
	}
	return *this;
}

template <typename T>
inline DBArray<T>& DBArray<T>::operator=(DBArray<T>&& o) noexcept {
	if (this != &o) {
		destroy();
		swap(o);
	}
	return *this;
}

template <typename T>
template <typename F>
void DBArray<T>::construct(size_type count, const F& make) {
	auto* p = alloc(count);

	size_type i = 0;
	auto rollback = makeScopeGuard([&]() { destroy_impl(i); });
	for (size_type i = 0; i < count; ++i) {
		make(p + i);
	}
	rollback.Dismiss();
	_storage = p;
}

template <typename T>
void DBArray<T>::destroy() noexcept {
	if (empty()) {
		return;
	}
	destroy_impl(size());
	_storage = DBArrayBase::empty_buf();
}

template <typename T>
void DBArray<T>::destroy_impl(size_type n) noexcept {
	while (n > 0) {
		--n;
		data()[n].~T();
	}
	free(_storage);
}

} // namespace lcf

#endif
