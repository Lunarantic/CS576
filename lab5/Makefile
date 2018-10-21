CFLAGS_V=-fno-stack-protector -O0
CFLAGS=-O2 -Wall
TARGETS=strin
CC=gcc

all: $(TARGETS)

strin: strin.c
	$(CC) $(CFLAGS_V) $(LDFLAGS) -o $@ $<


clean:
	rm -rf $(TARGETS) *.o
