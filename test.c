#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define FACTOR 1000

int main() {
    double mts,
           kms;

    printf("Distance in meters ");
    scanf("%lf", &mts);

    kms = mts / FACTOR;

    printf("\nThat is %.3f kilometers.", kms);

    return 0;
}
