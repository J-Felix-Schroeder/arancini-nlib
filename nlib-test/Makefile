CC = musl-gcc
ARCH = $(shell uname -m)
CFLAGS = -static -I./felixlib/ felixlib/felixlib-$(ARCH).a

all:
	musl-gcc -static -c -o felixlib/felixlib-$(ARCH).o felixlib/felixlib.c
	ar rcs felixlib/felixlib-$(ARCH).a felixlib/felixlib-$(ARCH).o	
	for f in src/*.c; do $(CC)  "$$f" $(CFLAGS) -o "bin/$$(basename "$$f" .c)-$(ARCH)-static"; done

clean:
	rm -rf ./bin/*
