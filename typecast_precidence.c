#include <stdio.h>

int main() {
    // Integer typecasting and precedence
    int a = 10;
    float b = 3.5;
    float result1 = a / b; // Division of two integers, typecasting
    float result2 = (float)a / b; // Typecasting one operand to float
    printf("Result 1: %f\n", result1); // Prints 2.000000
    printf("Result 2: %f\n", result2); // Prints 2.857143

    // Char typecasting and precedence
    char c = 'A';
    printf("Character: %c, ASCII value: %d\n", c, c); // Prints 'A', ASCII value: 65
    int d = c + 1; // Adding 1 to a character
    printf("Character: %c, ASCII value: %d\n", d, d); // Prints 'B', ASCII value: 66

    // Float typecasting and precedence
    int x = 10, y = 3;
    float result3 = (float)x / y; // Typecasting numerator to float
    float result4 = x / (float)y; // Typecasting denominator to float
    printf("Result 3: %f\n", result3); // Prints 3.333333
    printf("Result 4: %f\n", result4); // Prints 3.333333

    return 0;
}
