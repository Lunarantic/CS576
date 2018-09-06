CC=gcc
TARGETS=find_me find_me-dbg find_me-strip

all: $(TARGETS) 

find_me-strip: find_me.c
	$(CC) -o $@ -g -s $<

find_me-dbg: find_me.c
	$(CC) -o $@ -g $<

find_me: find_me.c


.PHONY: clean


clean:
	rm -f $(TARGETS) *.o
