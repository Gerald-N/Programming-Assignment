//Use scanf to accept starting, ending, and increment values from the user.

#include <iostream>
using namespace std;

int main() {
    float start, end, increment;

    cout << "Enter starting value (in Fahrenheit): ";
    scanf("%f", &start);
    cout << "Enter ending value (in Fahrenheit): ";
    scanf("%f", &end);
    cout << "Enter increment value (in Fahrenheit): ";
    scanf("%f", &increment);

    
    cout << "Fahrenheit  Celsius\n";

   
    for(float f = start; f <= end; f += increment) {
        float c = (f - 32.0) * 5.0 / 9.0;
        cout << fixed;
        cout.precision(2); 
        cout << f << "         " << c << endl;
    }

    return 0;
}
