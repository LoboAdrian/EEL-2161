// Adrian Lobo
// Oct. 13, 2020
// EEL 2161
// Computes N factorial, N!

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Factorial(int N);

int main()
{
    int nfact, N;
    printf("\nEnter N: ");
    scanf("%d", &N);
    nfact = Factorial(N);
    printf("\n%d! = %d", N, nfact);

    return 0;
}

int Factorial(int N)
{
    int i, product = 1;
    for(i = N; i > 1; i--)
    {
        product = product * i;
    }
    
    return(product);
}
