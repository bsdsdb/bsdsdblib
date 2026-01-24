#include <iostream>

#include "../../basics.hpp"
#include "../../numtheo/euler_sieve.hpp"

int main() {
	ioopt();
	u32 n, q;
	std::cin >> n >> q;
	numtheo::enum_prime(n);
	while (q--) {
		u32 x;
		std::cin >> x;
		std::cout << numtheo::primes[x - 1] << '\n';
	}
	return 0;
}
