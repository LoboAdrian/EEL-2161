#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    char word[20];
    int i, length;

    printf("\n\nEnter a word: ");
    scanf("%s", word);
    printf("\nYou entered the word %s", word);
    length = strlen(word);
    printf("\nThe word length is %d", length);

    printf("\n\nCharacters: ");
    for (i = 0; i < 10; i++) {
        printf("\n%c", word[i]);
    }
    printf("\n\n");

    return 0;
}
