/*
 * This file is part of liblcf. Copyright (c) 2020 liblcf authors.
 * https://github.com/EasyRPG/liblcf - https://easyrpg.org
 *
 * liblcf is Free/Libre Open Source Software, released under the MIT License.
 * For the full copyright and license information, please view the COPYING
 * file that was distributed with this source code.
 */

#ifndef LCF_SMALL_VECTOR_H
#define LCF_SMALL_VECTOR_H
#include <type_traits>
#include <cstddef>
#include <cstdint>
#include <iterator>
#include <cassert>
#include "lcf/compiler.h"
#include "lcf/scope_guard.h"

namespace lcf {

template <typename T>
class SmallVectorBase {
	public:
		// Since our games never store anywhere close to 4 billion elements of
		// anything, we can shrink the sizeof(vector) from 24 to 16 on 64 bit platforms
		// by using 32 bit indices.
		using size_type = uint32_t;
		using value_type = T;

	protected:
		T* _data = nullptr;
		size_type _size = 0;
		size_type _capacity = 0;
};

template <typename T, size_t N>
class SmallVectorStorage : public SmallVectorBase<T> {
	public:
		using typename SmallVectorBase<T>::size_type;

		constexpr SmallVectorStorage() {
			this->_data = sbo();
			this->_size = 0;
			this->_capacity = small_size();
		}

		static constexpr size_type small_size() { return N; }
		bool is_small() const { return this->_data == sbo(); }

	protected:
		T* sbo() { return reinterpret_cast<T*>(_sbo); }
		const T* sbo() const { return reinterpret_cast<const T*>(_sbo); }

	private:
		typename std::aligned_storage<sizeof(T), alignof(T)>::type _sbo[N];
};

template <typename T>
class SmallVectorStorage<T,0> : public SmallVectorBase<T> {
	public:
		using typename SmallVectorBase<T>::size_type;

		constexpr SmallVectorStorage() {
			this->_data = sbo();
			this->_size = 0;
			this->_capacity = small_size();
		}

		static constexpr size_type small_size() { return 0; }
		bool is_small() const { return false; }
	protected:
		T* sbo() { return nullptr; }
		const T* sbo() const { return nullptr; }
};

template <typename T, size_t N>
class SmallVector : public SmallVectorStorage<T,N> {
	public:
		using base_t = SmallVectorStorage<T,N>;
		using typename base_t::size_type;
		using typename base_t::value_type;

		using base_t::small_size;
		using base_t::is_small;

		using iterator = T*;
		using const_iterator = const T*;
		using reverse_iterator = std::reverse_iterator<iterator>;
		using const_reverse_iterator = std::reverse_iterator<const_iterator>;


		constexpr SmallVector() = default;
		explicit SmallVector(size_type count) {
			resize(count);
		}
		explicit SmallVector(size_type count, const T& value) {
			resize(count, value);
		}
		SmallVector(std::initializer_list<T> ilist) {
			insert(begin(), ilist);
		}
		// FIXME: SFINAE
		template <typename Iter>
			SmallVector(Iter first, Iter last) {
				insert(begin(), first, last);
			}

		SmallVector(const SmallVector& o) : SmallVector(o.begin(), o.end()) {}
		SmallVector& operator=(const SmallVector& o);

		SmallVector(SmallVector&& o) noexcept(N == 0) {
			_move_impl(std::move(o));
		}
		SmallVector& operator=(SmallVector&& o) noexcept(N == 0);

		~SmallVector();

		T& operator[](size_type i) {
			assert(i < size());
			return data()[i];
		}

		const T& operator[](size_type i) const {
			assert(i < size());
			return data()[i];
		}

		T& front() { return (*this)[0]; }
		const T& front() const { return (*this)[0]; }
		T& back() { return (*this)[size()-1]; }
		const T& back() const { return (*this)[size()-1]; }

		T* data() { return this->_data; }
		const T* data() const { return this->_data; }

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
		size_type size() const { return this->_size; }
		size_type capacity() const { return this->_capacity; }

		void reserve(size_type new_cap);
		void shrink_to_fit();

		void clear();

		iterator insert(const_iterator pos, const T& value) {
			return _insert(pos, 1, [&](auto* p) { new (p) T(value); });
		}

		iterator insert(const_iterator pos, T&& value) {
			return _insert(pos, 1, [&](auto* p) { new (p) T(std::move(value)); });
		}

		iterator insert(const_iterator pos, size_type count, const T& value) {
			return _insert(pos, count, [&](auto* p) { new (p) T(std::move(value)); });
		}

		template <typename Iter>
			iterator insert(const_iterator pos, Iter first, Iter last) {
				return _insert(pos, std::distance(first, last), [&](auto* p) { new (p) T(*first); ++first; });
			}

		iterator insert(const_iterator pos, std::initializer_list<T> ilist) {
			return insert(pos, ilist.begin(), ilist.end());
		}

		template <typename... Args>
		iterator emplace(const_iterator pos, Args&&... args) {
			return _insert(pos, 1, [&](auto* p) { new (p) T(std::forward<Args>(args)...); });
		}

		void push_back(const T& value) { emplace_back(value); }
		void push_back(T&& value) { emplace_back(std::move(value)); }

		template <typename... Args>
		void emplace_back(Args&&... args);

		void pop_back();

		void resize(size_type count) {
			 while (count < size()) { pop_back(); }
			 if (count > size()) {
				 _insert(end(), count - size(), [&](auto* p) { new (p) T(); });
			 }
		}
		void resize(size_type count, const T& value) {
			 while (count < size()) { pop_back(); }
			 if (count > size()) {
				 _insert(end(), count - size(), [&](auto* p) { new (p) T(value); });
			 }
		}
	private:
		void _move_impl(SmallVector&& o) noexcept(N == 0);
		bool _is_available(size_type n) const {
			return size() + n <= capacity();
		}
		template <typename F>
			iterator _insert(const_iterator pos, size_type count, const F& f);
		void _grow(size_type extra);
		void _realloc(size_type new_cap);
		T* _alloc(size_type n);
		void _free(T* p);
};

template <typename T> using Vector = SmallVector<T,0>;

template <typename T, size_t N, size_t M>
inline bool operator==(const SmallVector<T,N>& l, const SmallVector<T,M>& r) {
	return std::equal(l.begin(), l.end(), r.begin, r.end());
}

template <typename T, size_t N, size_t M>
inline bool operator!=(const SmallVector<T,N>& l, const SmallVector<T,M>& r) {
	return !(l == r);
}

template <typename T, size_t N, size_t M>
inline bool operator<(const SmallVector<T,N>& l, const SmallVector<T,M>& r) {
	return std::lexicographical_compare(l.begin(), l.end(), r.begin(), r.end());
}

template <typename T, size_t N, size_t M>
inline bool operator>(const SmallVector<T,N>& l, const SmallVector<T,M>& r) {
	return r < l;
}

template <typename T, size_t N, size_t M>
inline bool operator<=(const SmallVector<T,N>& l, const SmallVector<T,M>& r) {
	return !(l > r);
}

template <typename T, size_t N, size_t M>
inline bool operator>=(const SmallVector<T,N>& l, const SmallVector<T,M>& r) {
	return !(l < r);
}


template <typename T, size_t N>
SmallVector<T,N>& SmallVector<T,N>::operator=(const SmallVector<T,N>& o) {
	if (this != &o) {
		clear();
		insert(end(), o.begin(), o.end());
	}
	return *this;
}

template <typename T, size_t N>
void SmallVector<T,N>::_move_impl(SmallVector&& o) noexcept(N == 0) {
	if (o.is_small()) {
		insert(begin(), o.begin(), o.end());
	} else {
		this->_data = o._data;
		this->_size = o._size;
		this->_capacity = o._capacity;

		o._data = o.sbo();
		o._size = o._capacity = 0;
	}
}

template <typename T, size_t N>
SmallVector<T,N>& SmallVector<T,N>::operator=(SmallVector&& o) noexcept(N == 0) {
	if (this != &o) {
		clear();
		_move_impl(std::move(o));
	}
	return *this;
}


template <typename T, size_t N>
void SmallVector<T,N>::reserve(size_type new_cap) {
	if (new_cap > capacity()) {
		_realloc(new_cap);
	}
}

template <typename T, size_t N>
void SmallVector<T,N>::shrink_to_fit() {
	if (capacity() > size()) {
		_realloc(size());
	}
}

template <typename T, size_t N>
inline void SmallVector<T,N>::clear() {
	while (!empty()) {
		pop_back();
	}
}

template <typename T, size_t N>
inline void SmallVector<T,N>::pop_back() {
	assert(!empty());
	--this->_size;
	this->data()[size()].~T();
}

template <typename T, size_t N>
template <typename... Args>
void SmallVector<T,N>::emplace_back(Args&&... args) {
	if (LCF_UNLIKELY(!_is_available(1))) { _grow(1); }
	new (data() + size()) T(std::forward<Args>(args)...);
}

template <typename T, size_t N>
template <typename F>
typename SmallVector<T,N>::iterator SmallVector<T,N>::_insert(typename SmallVector<T,N>::const_iterator pos, size_type count, const F& f) {
	const auto insert_idx = pos - begin();
	if (LCF_UNLIKELY(!_is_available(count))) { _grow(count); }

	// Move elements behind position out of the way
	auto idx = size();
	auto cleanup_shift = makeScopeGuard([&]() { while (idx < size()) { data()[idx++].~T(); }});
	while (idx > insert_idx) {
		--idx;
		new (data() + idx + count) T(std::move_if_noexcept(data()[idx]));
	}

	// Insert the new elements
	size_type nidx = insert_idx;
	auto cleanup_new = makeScopeGuard([&]() { while (nidx > insert_idx) { --nidx; data()[nidx].~T(); }});
	while (nidx < insert_idx + count) {
		f(data() + nidx);
		++nidx;
	}

	cleanup_new.Dismiss();
	cleanup_shift.Dismiss();

	return begin() + insert_idx;
}

template <typename T, size_t N>
void SmallVector<T,N>::_grow(size_type extra) {
	auto new_cap = capacity();
	const auto req_cap = new_cap + extra;
	if (new_cap == 0) {
		new_cap = 8;
	}
	// FIXME: Get rid of this loop
	while (new_cap < req_cap) {
		new_cap *= 2;
	}
	_realloc(new_cap);
}

template <typename T, size_t N>
void SmallVector<T,N>::_realloc(size_type new_cap) {
	assert(new_cap >= size());

	T* p = nullptr;
	if (new_cap <= small_size()) {
		p = this->sbo();
		new_cap = small_size();
	} else {
		p = _alloc(new_cap);
	}

	size_t i = 0;
	auto cleanup = makeScopeGuard([&]() { while (i > 0) { p[--i].~T(); } _free(p); });

	for (; i < size(); ++i) {
		p[i] = std::move_if_noexcept(data()[i]);
	}

	cleanup.Dismiss();
	_free(this->_data);
	this->_data = p;
	this->_capacity = new_cap;
}

template <typename T, size_t N>
inline T* SmallVector<T,N>::_alloc(size_type n) {
	return reinterpret_cast<T*>(::operator new(sizeof(T) * n));
}

template <typename T, size_t N>
void SmallVector<T,N>::_free(T* p) {
	if (p != this->sbo()) {
		::operator delete(p);
	}
}

} // namespace lcf

#endif
