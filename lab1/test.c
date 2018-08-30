#include <stdio.h>
#include <stdlib.h>

#define NOINLINE __attribute__ ((noinline))

int NOINLINE f_locals(int a, int b)
{
	int i;
	int d;

	if (a > b)
		i = a - b;
	else
		i = b - a;

	for (d = 0; i > 0; i--)
		d += b / 2;

	return d;
}

int NOINLINE f_args(int a, int b, int c)
{
	return (a - b) * (c >> 2); 
}

void f2_simplest()
{
	puts("world");
}

void f1_simplest()
{
	puts("Hello ");
	f2_simplest();
	puts("---");
}


int main(int argc, char **argv)
{
	int r;

	f1_simplest();
	
	r = f_args(rand(), 894, 2098);
	printf("%d\n---\n", r);

	f_locals(123, 245);
	return 0;
}
