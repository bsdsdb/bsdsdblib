#define PROBLEM "https://judge.yosupo.jp/problem/aplusb"
#include <iostream>
#include <cstdint>
int main() { uint32_t a, b; std::cin >> a >> b; std::cout << a + b << std::endl; }
/*
#define PROBLEM "https://judge.yosupo.jp/problem/gcd_of_gaussian_integers"

#include <iostream>

#include "../../basics.hpp"
#include "../../numtheo/gauss_int.hpp"

using GI = numtheo::GaussInt<i64>;

int main() {
	ioopt();
	u32 T;
	std::cin >> T;
	while (T--) {
		i32 a, b, c, d;
		std::cin >> a >> b >> c >> d;
		GI ans = numtheo::gauss_gcd(GI(a, b), GI(c, d));
		std::cout << ans.re << ' ' << ans.im << '\n';
	}
	return 0;
}
*/
