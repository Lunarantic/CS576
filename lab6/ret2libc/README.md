# RET2LIBC

Usage of ret2libc attack

Replace return address of function with libc function

identify address by GDB

```
$(gdb) print [function_name]
```

Noteable functions:
<system>
<exit>
<printf>

<execl>
<execvp>
