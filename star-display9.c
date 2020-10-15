#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int N, starcount = 0;
    printf("\nEnter the number of stars to print: ");
    scanf("%d", &N);
    printf("\n\n");

    do {
        printf("*");
        starcount++;
    } while (starcount < N);

    return 0;
}
