#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int i, size, squares[100];

	printf("\nEnter the maximum value: ");
	scanf("%d", &size);

	for (i = 0; i < size; i++) {
		squares[i] = i * i;

	}
	printf("\nTable of squares\n");

	for(i = 0; i < size; i++) {
		printf("\n%d squared is %d", i, squares[i]);
	}

	return 0;
}