FLAGS=-fno-stack-protector -z execstack -O0 # -fomit-frame-pointer
VULN=vuln_prog sec_prog
CC=gcc

all: $(VULN)

vuln_prog: vuln_prog1.c
        $(CC) $(FLAGS) -o $@ $<

sec_prog: sec_prog1.c
        $(CC) $(FLAGS) -o $@ $< -lseccomp

clean: 
        rm -rf $(VULN)
