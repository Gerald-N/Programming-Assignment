//Add a heading line to the table.

#include <iostream>
using namespace std;

int main() {
    float start, end, increment;

    // Accepting input from the user
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
        cout << fixed; 
        cout.precision(2); 
        cout << f << "         " << c << endl;
    }

    return 0;
}
