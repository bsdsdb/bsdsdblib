#define PROBLEM "https://judge.yosupo.jp/problem/aplusb"
#include <iostream>
#include <cstdint>
int main() { uint32_t a, b; std::cin >> a >> b; std::cout << a + b << std::endl; }
/*
#define PROBLEM "https://judge.yosupo.jp/problem/enumerate_primes"

#include <iostream>

#include "../../basics.hpp"
#include "../../numtheo/euler_sieve.hpp"

int main() {
	ioopt();
	u32 n, a, b;
	std::cin >> n >> a >> b;
	numtheo::enum_prime(n);
	std::cout << numtheo::primes.size() << ' ' << (numtheo::primes.size() - 1 - b) / a + 1 << std::endl;
	for (u32 i = b; i < numtheo::primes.size(); i += a) {
		std::cout << numtheo::primes[i] << ' ';
	}
	std::cout << std::endl;
	return 0;
}
*/
