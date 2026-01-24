#include <iostream>

#include "../../basics.hpp"
#include "../../numtheo/square_decomp_2.hpp"

int main() {
	ioopt();
	u32 T;
	std::cin >> T;
	while (T--) {
		u64 n;
		std::cin >> n;
		auto res = numtheo::sqdecomp2_all(n);
		std::cout << res.size() << '\n';
		for (auto [a, b] : res) {
			std::cout << a << ' ' << b << '\n';
		}
	}
	return 0;
}
