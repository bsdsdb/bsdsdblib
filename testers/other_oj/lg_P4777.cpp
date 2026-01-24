#include <iostream>
#include <vector>

#include "../../basics.hpp"
#include "../../numtheo/excrt.hpp"

int main() {
	ioopt();
	u32 n;
	std::cin >> n;
	std::vector<u64> p(n), a(n);
	for (u32 i = 0; i < n; ++i) {
		std::cin >> p[i] >> a[i];
	}
	auto ans = numtheo::excrt(a, p);
	std::cout << ans.value().first << std::endl;
	return 0;
}
