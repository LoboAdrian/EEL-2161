// 1. Header Comments
// Adrian Lobo
// Sept. 15, 2020
// EEL 2161
// My stick figure program

// 2. Preprocessor Directives
#define _CRT_SECURE_NO_WARNINGS // supress annoying warnings
#include <stdio.h> // Library with printf

// 3. Function Prototypes
void Circle(); // Draws circle for head
void Intersect(); // Draws intersecting lines
void Base(); // Draws line for base of triangle
void Triangle(); // Draws bode of figure

// 4. Main Function
int main() {
    Circle(); // Draw head
    Triangle(); // Draw body
    Intersect(); // Draw legs

    return 0; // Done!
}

// 5. Function Defintions
void Circle(){ // Draws head
    printf("\n  **");
    printf("\n *  *");
    printf("\n  **");
}

void Intersect() { // Draw intersecting lines
    printf("\n  /\\"); // Use "\\" to print one "\"
    printf("\n /  \\");
    printf("\n/    \\");
}

void Base() { // Draw base of triangle
    printf("\n------");
}

void Triangle() { // Draw Triangle
    Intersect();
    Base();
}
