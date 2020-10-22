#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10

int main() {
	int i, count, scores[SIZE] = {0};

	for (i = 0; i < SIZE; i++) {
		printf("\nscores[%d] = %d\n", i, scores[i]);
	}
	printf("\nHow many scores do you want to enter? ");
	scanf("%d", &count);

	for (i = 0; i < count; i++) {
		printf("\nEnter a score: ");
		scanf("%d", &scores[i]);
	}
	printf("\n\n");

	for (i = 0; i < count; i ++) {
		printf("\nscores[%d] = %d", i, scores[i]);
	}

	return 0;
}