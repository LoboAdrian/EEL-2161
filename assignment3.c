// Adrian Lobo
// Oct, 7 2020
// Assignment 3

#define _CRT_SECURE_NO_WARNINGS // supress warnings
#include <stdio.h> // printf & scanf

void Welcome(); // asks and welcomes the user
void Convert(); // makes conversions

int main()
{
    Welcome();
    Convert();

    return 0;
}

void Welcome() // asks for user's name and greets the user
{
    char name[20];
    
    printf("\nHello! What is your name? "); //asks name
    scanf("%19s", name);
    printf("\nNice to meet you %s! I will make temperature conversions.", name); // explains the purpose of the program
}

void Convert() // makes the conversions
{
    double tCentigrade, tFahrenheit;

    printf("\n\nTemperature in degrees centrigrade: "); // asks temperature in Centigrades
    scanf("%lf", &tCentigrade);

    tFahrenheit = ((9 * tCentigrade) / 5) + 32; // operation of conversion

    printf("The temperature in Fahrenheit is: %.3f", tFahrenheit); // outputs the converted value
}
