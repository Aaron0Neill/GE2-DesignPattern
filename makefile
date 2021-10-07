

build:
	rm -rf ./bin || true

	mkdir ./bin

	g++ -o ./bin/test ./factory/main.cpp
	./bin/test