for file in "$@"; do
	git mv ./testers/yosupo/$file.test.cpp ./testers/yosupo/$file.tested.cpp
done
