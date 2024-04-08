//Fahrenheit to Celsius Table Generator
#include <stdio.h>

int main(void) {
    float start, end, increment;

    // Accepting input from the user
    printf("Enter starting value: ");
    scanf("%f", &start);
    printf("Enter ending value: ");
    scanf("%f", &end);
    printf("Enter increment value: ");
    scanf("%f", &increment);

    // Adding heading line to the table
    printf("Fahrenheit    Celsius\n");

    // Loop to convert Fahrenheit to Celsius and print the table
    for (float fahrenheit = start; fahrenheit <= end; fahrenheit += increment) {
        float celsius = (fahrenheit - 32.0) * 5.0 / 9.0;
        printf("%6.2f       %6.2f\n", fahrenheit, celsius);
    }

    return 0;
}
