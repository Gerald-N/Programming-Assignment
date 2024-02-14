//Find a different solution to the bug fixed by the previous example.

#include <iostream>
using namespace std;

int main() {
    float a = 0;
    bool printed98_6 = false;

    while (a <= 100) {
        if (a > 98.6 && !printed98_6) {
            cout << "98.6         " << (98.6 - 32.0) * 5.0 / 9.0 << endl;
            printed98_6 = true;
        }
        cout << a << "         " << (a - 32.0) * 5.0 / 9.0 << endl;
        a += 10;
    }

    return 0;
}
