#include <iostream>

#include "../../basics.hpp"
#include "../../numtheo/modint.hpp"
#include "../../numtheo/dis_log.hpp"

using MIP = numtheo::ModIntPr32<-1>;

int main() {
	ioopt();
	u32 p;
	std::cin >> p;
	MIP::set_mod(p);
	MIP b, n;
	std::cin >> b >> n;
	if (n == 1) {
		std::cout << "0\n";
	} else {
		auto ans = numtheo::dis_log(b, n);
		if (ans.has_value()) {
			std::cout << ans.value() << std::endl;
		} else {
			std::cout << "no solution\n";
		}
	}
	return 0;
}
