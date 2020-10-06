// Adrian Lobo
// Oct, 6 2020
// EEL-2161
// Display N stars

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int starCount = 0, N;
    
    printf("\nEnter the number of stars to print: ");
    scanf("%df", &N);
    printf("\n\n");

    while(starCount < N)
    {
        printf("*");
        starCount = starCount +1;
    }

    return 0;
}
