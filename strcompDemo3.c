#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    char word1[20], word2[20];

    printf("\nEnter word1: ");
    scanf("%s", word1);
    printf("You entered the word %s.", word1);

    printf("\nEnter word2: ");
    scanf("%s", word2);
    printf("You entered the word %s.", word2);

    if (strcmp(word1, word2) == 0) {
        printf("\nThe words are the same");
    }
    else {
        printf("\nThe words are different");
    }
}
