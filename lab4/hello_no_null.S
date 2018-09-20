# ----------------------------------------------------------------------------------------
# Writes "Hello, World" to the console using only system calls. Runs on 64-bit Linux only.
#
# Code obfuscated to remove null characters for getting accepted
#
# ----------------------------------------------------------------------------------------

        .global _start

        .text
_start:
        # write(1, message, 13)
        xor     %rax, %rax
        inc     %rax
        # mov     $1, %rax                # system call 1 is write
        xor     %rdi, %rdi
        inc     %rdi
        # mov     $1, %rdi                # file handle 1 is stdout
        lea     0x7fffff29(%rip), %rsi
        sub     $0x7fffff10, %rsi
	# mov	$message, %rsi
        xor     %rdx, %rdx
        addb    $13, %dl
        # mov     $13, %rdx               # number of bytes
        syscall                         # invoke operating system to do the write

        # exit(0)
        xor     %rax, %rax
        addb    $60, %al
	# mov	$60, %rax
        xor     %rdi, %rdi
        # mov     $0, %rdi                # we want return code 0
        syscall                         # invoke operating system to exit
message:
        .ascii  "Hello, world\n"
