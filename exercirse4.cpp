//Create a table that converts pounds to kilograms or miles to kilometers.

#include <iostream>
using namespace std;

int main() {
    float start, end, increment;

    // Accepting input from the user
    cout << "Enter starting value (in pounds): ";
    scanf("%f", &start);
    cout << "Enter ending value (in pounds): ";
    scanf("%f", &end);
    cout << "Enter increment value (in pounds): ";
    scanf("%f", &increment);

    // Header for the table
    cout << "Pounds  Kilograms\n";

    // Loop to print the conversion table
    for(float p = start; p <= end; p += increment) {
        float kg = p * 0.453592;
        cout << fixed; // floating-point precision
        cout.precision(2); 
        cout << p << "         " << kg << endl;
    }

    return 0;
}
