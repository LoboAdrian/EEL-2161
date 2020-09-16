// Adrian Lobo
// Sept. 15, 2020
// EEL 2161
// My Box program

#define _CRT_SECURE_NO_WARNINGS // Supress warnings
#include <stdio.h> // Library with printf

void DrawBox(double number); // Library with printf

int main() { // Begin here
    double pi = 3.14159265359;

    DrawBox(pi);

    return 0; // Done!
}

void DrawBox(double num) { // Draw a box around num
    printf("\n***********");
    printf("\n** %5.3f **", num);
    printf("\n***********");
}
