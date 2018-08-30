#include <stdio.h>

void cookie() {
	printf("Damn you got me\n");
}

void not_me() {
	printf("Oh ohh\n");
}

int main() {
	int a = 0;

	if (a) {
		cookie();
	} else {
		not_me();
	}

	return 0;
}
