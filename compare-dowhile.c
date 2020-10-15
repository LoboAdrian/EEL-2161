#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int sum = 0, prod = 1, i = 1;

    do {
        sum += i;
        prod *= i;
        i += 2;
    } while (i <= 9);

    printf("\nSum = %d\nProduct = %d", sum, prod);
}
