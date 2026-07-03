CC = musl-gcc
CFLAGS = -static


all: 
	for f in src/*.c; do $(CC) $(CFLAGS) "$$f" -o "bin/$$(basename "$$f" .c)-static"; done

clean:
	rm -rf ./bin/*
