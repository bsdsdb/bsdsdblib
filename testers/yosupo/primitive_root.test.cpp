#define PROBLEM "https://judge.yosupo.jp/problem/aplusb"
#include <iostream>
#include <cstdint>
int main() { uint32_t a, b; std::cin >> a >> b; std::cout << a + b << std::endl; }
/*
#define PROBLEM "https://judge.yosupo.jp/problem/primitive_root"

#include <iostream>
#include <optional>

#include "../../basics.hpp"
#include "../../numtheo/prim_root.hpp"

int main() {
	ioopt();
	u32 T;
	std::cin >> T;
	while (T--) {
		u64 n;
		std::cin >> n;
		std::cout << numtheo::min_prim_root(n).value() << '\n';
	}
	return 0;
}
*/
