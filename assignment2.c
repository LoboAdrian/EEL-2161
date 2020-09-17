// 1. HEADER COMMENTS
// Adrian Lobo
// EEL-2161
// Sept, 16 2020
// Assignment 2

// 2. PREPROCESSOR DERIVATIVES
#define _CRT_SECURE_NO_WARNINGS // supress warnings
#include <stdio.h> // printf & scanf
#include <ctype.h> // tolower & toupper

// 3. FUNCTION PROTOTYPES
void Name(); // Asks name then prints it
void Number(); // Asks for number then prints it out multiplied by 10
void Initials(); // Asks initials and changes capitalization

// 4. MAIN FUNCTION
int main() {
    Name(); // Name fuction
    Number(); // Number function
    Initials(); // Initials function
    
    return 0; // Done!
}

// 5. FUCTION DEFINTIONS
void Name() { // Prompts user for a name, then returns it
    char name[20];
    printf("\nGive me a name: ");
    scanf("%19s", name);
    printf("\nMy name is %s", name);
}

void Number() { // Prompts user for a number, multiplies it by ten the returns the result
    int num, newnum;
    printf("\nEnter an integer: ");
    scanf("%d", &num);
    newnum = num * 10;
    printf("\nYour number now is %d.", newnum);
}

void Initials() { // Prompts user for their initials then makes the first one lowercase and the second one uppercase
    char one, two;
    printf("\nEnter your first initial: ");
    scanf(" %c", &one);
    one = tolower(one);
    printf("\n Enter your second initial: ");
    scanf(" %c", &two);
    two = toupper(two);
    printf("\nFirst initial: %c\nSecond initial %c", one, two);
}
