#include <iostream>
#include <vector>

#include "../../basics.hpp"
#include "../../numtheo/modint.hpp"
#include "../../numtheo/quad_res.hpp"

using MIP = numtheo::ModIntPr32<-1>;

int main() {
	ioopt();
	u32 T;
	std::cin >> T;
	while (T--) {
		u32 p, n;
		std::cin >> n >> p;
		if (n == 0) {
			std::cout << "0\n";
			continue;
		}
		MIP::set_mod(p);
		auto ans = numtheo::sqrt(MIP(n));
		if (ans.has_value() == false) {
			std::cout << "Hola!\n";
		} else {
			std::cout << ans.value().value() << ' ' << p - ans.value().value() << '\n';
		}
	}
	return 0;
}
