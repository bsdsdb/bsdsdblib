for file in "$@"; do
	if [ ! -f ./testers/yosupo/$file.test.cpp ]; then
		echo $file "doesn't exist"
	else
		sed -i '1s/^/#define PROBLEM \"https:\/\/judge.yosupo.jp\/\/problem\/aplusb\"\n\/\/ /' ./testers/yosupo/$file.test.cpp
	fi
done
