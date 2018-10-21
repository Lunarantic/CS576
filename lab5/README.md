# String format exploit

int x = 0xdeadbeef

```C
>>> printf("%d",x);
-559038737
```

```C
>>> printf("%u",x);
3735928559
```

```C
>>> printf("%x",x);
deadbeef
```

```C
>>> printf("%#x",x);
0xdeadbeef
```

```C
>>> printf("%#50x",x);
                                                  0xdeadbeef
```

```C
>>> printf("%#050x",x);
000000000000000000000000000000000000000000000000000xdeadbeef
```

$ in format specifier is for position of argument
all trailing specifier should have $ once used

```C
>>> printf("%1$#050x",x);
000000000000000000000000000000000000000000000000000xdeadbeef
```

```C
>>> printf("%1$#050hx",x);
000000000000000000000000000000000000000000000000000xbeef
```

```C
>>> printf("%1$#050hhx",x);
000000000000000000000000000000000000000000000000000xef
```

%p >>> print in pointer format equal to %#x
%n >>> to write
