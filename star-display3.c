// Adrian Lobo
// Oct. 8, 2020
// EEL 2162
// Print N stars

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int starCount = 0, N;
    
    printf("\nEnter the number of stars to print: ");
    scanf("%d", &N);
    printf("\n\n");

    for(starCount = 0; starCount < N; starCount += 1)
    {
        printf("*");
    }

    return 0;
}
