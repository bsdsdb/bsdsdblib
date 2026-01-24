#pragma once

#include <optional>
#include <utility>
#include <vector>

#include "../basics.hpp"

namespace ds {
	const u64 hash_rnum = 0x5f3759df13789169;
	u64 hash64(u64 x) {
		x ^= (x >> 31);
		x *= (hash_rnum ^ 1145141919810);
		x ^= (x << 29);
		x *= (hash_rnum ^ 0x1145141919810);
		x ^= (x >> 23);
		x *= (x ^ hash_rnum);
		x ^= (x << 37);
		return x;
	}
	template<i128::unsigned_integral T> u64 hash(T x) {
		if (std::is_same_v<T, __u128>) {
			return hash64(static_cast<u64>(x)) ^ hash64(static_cast<u64>(x >> 64));
		} else {
			return hash64(x);
		}
	}
	template<i128::signed_integral T> u64 hash(T x) { return hash(static_cast<i128::make_signed_t<T>>(x)); }
	u64 hash(const std::string &x) {
		u64 ret = 0;
		for (char c : x) {
			ret ^= hash(static_cast<u64>(c));
			ret ^= ret >> 33;
			ret *= hash_rnum;
			ret ^= ret << 29;
		}
		return hash(ret);
	}
	template<class T> concept hashable = requires(T x, T y) {
		{ hash(x) } -> std::same_as<u64>;
		{ x == y } -> std::same_as<bool>;
		{ x != y } -> std::same_as<bool>;
	};
	template<hashable T> struct hasher {
		u64 operator()(T x) { return hash(x); }
	};
	template<class key_t, class val_t, class hr = hasher<key_t>> class HashTable {
	private:
		inline static hr hs;
		u32 siz, cap;
		std::vector<std::optional<std::pair<const key_t, val_t>>> kv;
		u32 id(u64 x) const { return static_cast<u32>(x & (cap - 1)); }
		u32 key_pos(key_t k) const {
			u32 ret = id(hs(k));
			while (kv[ret].has_value() == true && kv[ret].value().first != k) {
				ret = ((ret + 1) & (cap - 1));
			}
			return ret;
		}
	public:
		HashTable(u32 _cap = 4194304) : siz(0), cap(_cap), kv(_cap) {}
		u32 size() const { return siz; }
		u32 capacity() const { return cap; }
		bool exists(key_t k) const { return kv[key_pos(k)].has_value(); }
		val_t &operator[](key_t k) {
			u32 ind = key_pos(k);
			if (kv[ind].has_value() == false) {
				kv[ind].emplace(k, val_t());
				++siz;
				warn(siz < cap, "hash table full");
			}
			return kv[ind]->second;
		}
		class iterator {
		private:
			u32 ind;
			HashTable<key_t, val_t> &par;
		public:
			iterator(u32 _i, HashTable<key_t, val_t> &_p) : ind(_i), par(_p) {}
			bool operator!=(const iterator &x) { return x.ind != ind; }
			iterator &operator++() {
				assure(ind < par.cap, "iterator {} points to the end", ind);
				do {
					++ind;
				} while (ind != par.cap && par.kv[ind].has_value() == false);
				return *this;
			}
			std::pair<const key_t, val_t> &operator*() {
				assure(ind < par.cap, "iterator {} points to the end", ind);
				return *par.kv[ind];
			}
		};
		iterator begin() {
			if (kv[0].has_value() == true) {
				return iterator(0, *this);
			} else {
				return ++(iterator(0, *this));
			}
		}
		iterator end() { return iterator(cap, *this); }
	};
}