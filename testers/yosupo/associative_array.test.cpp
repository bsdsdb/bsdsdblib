#define PROBLEM "https://judge.yosupo.jp/problem/aplusb"
#include <iostream>
#include <cstdint>
int main() { uint32_t a, b; std::cin >> a >> b; std::cout << a + b << std::endl; }
/*
#define PROBLEM "https://judge.yosupo.jp/problem/associative_array"

#include <iostream>

#include "../../ds/hash_table.hpp"

int main() {
	ioopt();
	u32 q;
	std::cin >> q;
	static ds::HashTable<u64, u64> t;
	while (q--) {
		u32 o;
		u64 k, v;
		std::cin >> o;
		if (o == 0) {
			std::cin >> k >> v;
			t[k] = v;
		} else {
			std::cin >> k;
			std::cout << t[k] << '\n';
		}
	}
	return 0;
}
*/
