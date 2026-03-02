for file in "$@"; do
	if [ ! -f ./testers/yosupo/$file.test.cpp ]; then
		echo $file "doesn't exist"
	else
		sed -i "1i#define PROBLEM \"https:\/\/judge.yosupo.jp\/problem\/aplusb\"\n#include <iostream>\n#include <cstdint>\nint main() { uint32_t a, b; std::cin >> a >> b; std::cout << a + b << std::endl; }\n\/*" ./testers/yosupo/$file.test.cpp
		sed -i "\$a */" ./testers/yosupo/$file.test.cpp
	fi
done
