CC ?= cc
CFLAGS ?= -std=c17 -Wall -Wextra -O2
PY ?= python3

.PHONY: py c clean

py:
	$(PY) python/basics/hello.py

c:
	mkdir -p build
	$(CC) $(CFLAGS) c/basics/hello.c -o build/hello
	./build/hello

clean:
	rm -rf build
