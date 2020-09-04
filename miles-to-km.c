// Adrian Lobo
/* September 1 2020
    EEL 2161
    Converts distance in miles to kilometers */

#define _CRT_SECURE_NO_WARNINGS // Suppress annoying warnings
#include <stdio.h> /* Library containing printf and scanf */
#define KMS_PER_MILE 1.609 // Conversion factor

int main() {
    double miles, // Distance in miles
           kms; // Distance in kilometers

    // Get the distance in miles
    printf("Distance in miles: ");
    scanf("%lf", &miles);

    /* Convert the distance to kilometers */
    kms = KMS_PER_MILE * miles;

    // Print the distance in kilometers
    printf("\nThat equals %.3f kilometers.\n", kms);

    return 0; // All done!
}
