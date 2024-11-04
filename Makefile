build:
	cmake -S . -B build
test:
	cmake --build build
	./build/tests
