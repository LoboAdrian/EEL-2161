#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int num_obs;
    printf("\nEnter the number of observations: ");
    scanf("%d", &num_obs);
    
    while (num_obs < 0) {
        printf("\nNegative number is invalid. Try again: ");
        scanf("%d", &num_obs);
    }

    printf("\nYou entered %d observations.", num_obs);

    return 0;
}
