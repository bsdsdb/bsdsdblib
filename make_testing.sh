for file in "$@"; do
	if [ ! -f ./testers/yosupo/$file.test.cpp ]; then
		echo $file "doesn't exist"
	else
		sed -i '1d; 2s/^...//' ./testers/yosupo/$file.test.cpp
	fi
done
