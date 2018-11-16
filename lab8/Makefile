VULN=victim
CC=gcc

all: $(VULN)

victim: victim.c
        $(CC) -fstack-protector -fomit-frame-pointer -O0 -o $@ $<

clean: 
        rm -rf $(VULN)
