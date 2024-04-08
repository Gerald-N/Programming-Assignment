#include <stdio.h>

int main(void) {
    float pounds, kilograms;

    // Adding heading line to the table
    printf("Pounds    Kilograms\n");

    // Loop to convert pounds to kilograms and print the table
    for (pounds = 0; pounds <= 100; pounds += 10) {
        kilograms = pounds * 0.45359237; // Conversion factor: 1 pound = 0.45359237 kilograms
        printf("%6.2f    %6.2f\n", pounds, kilograms);
    }

    return 0;
}
