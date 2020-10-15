#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int sum = 0, prod = 1, i;

    for (i = 1; i <= 9; i += 2) {
        sum += i;
        prod *= i;
    }

    printf("\nSum = %d\nProduct = %d", sum, prod);
}
