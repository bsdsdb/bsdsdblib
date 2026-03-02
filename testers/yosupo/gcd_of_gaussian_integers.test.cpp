#define PROBLEM "https://judge.yosupo.jp/problem/aplusb"
// #define PROBLEM "https://judge.yosupo.jp/problem/gcd_of_gaussian_integers"

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