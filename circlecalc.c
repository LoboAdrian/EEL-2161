// Adrian Lobo
// Sept, 17 2020
// EEL-2161
// Program for circle calculaions

#define _DEFINE_SECURE_NO_WARNINGS // Supress warnings
#include <stdio.h> // Library with printf, scanf
#define PI 3.14159265359

double Circumference(double r); // Returns the circumference of a circle
double Area(double r); // Returns the area of a circle

int main() {
    double radius, circum, area; // Declare variables

    // Prompt user for the radius
    printf("\nEnter the radius of the circle: ");
    scanf("%lf", &radius);

    // Use fuction Circumference to find the circumference of the circle
    circum = Circumference(radius);
    printf("\nThe circumference of the circle is %.3f.", circum);

    // Use the Area fuction to find the area of the circle
    area = Area(radius);
    printf("\nThe area of the circle is %3.f.", area);

    return 0; // Done!
}

double Circumference(double r) { // Returns the circumference of the circle
    double circ;
    circ = 2.0 * PI * r;
    return circ;
}

double Area(double r) { // Returns the are of the circle
    double area;
    area = PI * r * r;
    return area;
}
