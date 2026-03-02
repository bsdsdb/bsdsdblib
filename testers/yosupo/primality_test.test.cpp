#define PROBLEM "https://judge.yosupo.jp/problem/aplusb"
#include <iostream>
#include <cstdint>
int main() { uint32_t a, b; std::cin >> a >> b; std::cout << a + b << std::endl; }
/*
#define PROBLEM "https://judge.yosupo.jp/problem/primality_test"

#include <iostream>

#include "../../basics.hpp"
#include "../../numtheo/pollard_rho.hpp"

int main() {
	ioopt();
	u32 T;
	std::cin >> T;
	while (T--) {
		u64 n;
		std::cin >> n;
		if (numtheo::miller_rabin(n) == true) {
			std::cout << "Yes\n";
		} else {
			std::cout << "No\n";
		}
	}
	return 0;
}
*/
