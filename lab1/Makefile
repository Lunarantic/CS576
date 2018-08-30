CC=gcc
TARGETS=test testO1 testO2 test-dbg test-sp

all: $(TARGETS) 

test-dbg: test.c
	$(CC) -o $@ -g $<

test: test.c

test-sp: test.c
	$(CC) -o $@ -g -fomit-frame-pointer $<


testO1: test.c
	$(CC) -o $@ -O1 $<

testO2: test.c
	$(CC) -o $@ -O2 $<

.PHONY: clean


clean:
	rm -f $(TARGETS) *.o
