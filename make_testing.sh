for file in "$@"; do
	git mv ./testers/yosupo/$file.tested.cpp ./testers/yosupo/$file.test.cpp
done
