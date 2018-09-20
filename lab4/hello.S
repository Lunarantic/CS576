# ----------------------------------------------------------------------------------------
# Writes "Hello, World" to the console using only system calls. Runs on 64-bit Linux only.
#
# Simple code without any obfuscation
#
# ----------------------------------------------------------------------------------------

        .global _start

        .text
_start:
        # write(1, message, 13)
        mov     $1, %rax                # system call 1 is write
        mov     $1, %rdi                # file handle 1 is stdout
	mov	$message, %rsi
        mov     $13, %rdx               # number of bytes
        syscall                         # invoke operating system to do the write

        # exit(0)
	mov	$60, %rax
        mov     $0, %rdi                # we want return code 0
        syscall                         # invoke operating system to exit
message:
        .ascii  "Hello, world\n"
