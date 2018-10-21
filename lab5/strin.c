#include <stdio.h>
#include <string.h>

void class() {
printf("in class\n");
}

int main(int argc, char *argv[]) {
	char test[1024];
	strcpy(test,argv[1]);
	printf("Where are you:\n");
	printf(test);
	printf("\n");
	return 0;
}
