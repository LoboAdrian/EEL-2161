#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int findTarget(int array[], int count, int target);

int main() {
    int target, location;
    int array[] = {0, 1, 2, 3, 4 ,5, 6, 7, 8, 9, 10};

    printf("\n\nEnter the target digit: ");
    scanf("%d", &target);

    location = findTarget(array, 10, target);
    printf("\nLocation of target = %d.\n\n", location);

    return 0;
}

int findTarget(int list[], int size, int tgt) {
    int i, loc = -1;
    for (i = 0; i < size; i++) {
        if (list[i] == tgt)
            loc = i;
    }

    return loc;
}
