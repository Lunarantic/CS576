# RET2LIBC in 64-bit

You will need to create fake stack for returning from a function

While calling any functions in 64-bit remember the arguments are passed in registers

Registers order of calling:
rdi
rsi
rdx
r10
r9
r8

So for now to call functions you will need to fill those registers from stack so that is pop calls

```shell
$ objdump -d <file_name> | grep 'retq'

$ objdump -d <file_name> | grep 'pop    %rdi'
```

You get to know the opcodes of instructions as:
c3 -> retq
5f -> pop    %rdi

```shell
$ xxd -p -c1 <file_name> | grep -n -B1 'c3' | grep '5f'
```

You get the address of gadget from libcbase
