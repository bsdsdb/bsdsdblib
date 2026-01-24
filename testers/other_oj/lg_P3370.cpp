#include <iostream>
#include <string>

#include "../../basics.hpp"
#include "../../ds/hash_table.hpp"

int main() {
	ioopt();
	ds::HashTable<std::string, bool> ht(4194304);
	u32 N, ans = 0;
	std::cin >> N;
	while (N--) {
		std::string s;
		std::cin >> s;
		if (ht.exists(s) == false) {
			ht[s];
			++ans;
		};
	}
	std::cout << ans << '\n';
}
