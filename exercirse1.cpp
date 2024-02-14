//Use scanf to accept starting, ending, and increment values from the user.

#include <iostream>
using namespace std;

int main() {
    float start, end, increment;

    // Accepting input from the user using scanf
    cout << "Enter starting value (in Fahrenheit): ";
    scanf("%f", &start);
    cout << "Enter ending value (in Fahrenheit): ";
    scanf("%f", &end);
    cout << "Enter increment value (in Fahrenheit): ";
    scanf("%f", &increment);

    // Header for the table
    cout << "Fahrenheit  Celsius\n";

    // Loop to print the conversion table
    for(float f = start; f <= end; f += increment) {
        float c = (f - 32.0) * 5.0 / 9.0;
        cout << fixed; // Setting floating-point precision
        cout.precision(2); // Setting precision to 2 decimal places
        cout << f << "         " << c << endl;
    }

    return 0;
}
