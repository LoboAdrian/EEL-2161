#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int i, ar[10] = { 1, 2, 3 };
	printf("\n\n");
	for (i = 0; i < 10; i++) {
		printf("\nar[%d] = %d", i, ar[i]);
	}

	return 0;
}