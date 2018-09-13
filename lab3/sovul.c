#include<stdio.h>

void muffin()
{
	printf("\nYou have fall in to right room; you can now have the muffin.\n");
}

void complex_verify()
{
	char buffer[20];

	printf("What would you like to have?\n");
	scanf("%s",buffer);
	printf("You ordered : %s\n", buffer);
}

int main()
{
	complex_verify();

	return 0;
}
