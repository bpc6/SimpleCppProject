.PHONY: build compile run test

build:
	cmake -S . -B build

compile:
	cmake --build build

run:
	./build/bin/MyExecutable

test:
	./build/bin/SimpleTest
