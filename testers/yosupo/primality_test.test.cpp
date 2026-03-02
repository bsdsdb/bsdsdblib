#define PROBLEM "https://judge.yosupo.jp//problem/aplusb"
// #define PROBLEM "https://judge.yosupo.jp/problem/primality_test"

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
