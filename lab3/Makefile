CFLAGS_V=-fno-stack-protector -O0 -z execstack #-mpreferred-stack-boundary=2 
CFLAGS=-O2 -Wall
TARGETS=stack_overflow
CC=gcc

all: $(TARGETS)

stack_overflow: sovul.c
	$(CC) $(CFLAGS_V) $(LDFLAGS) -o $@ $<


clean:
	rm -rf $(TARGETS) *.o
