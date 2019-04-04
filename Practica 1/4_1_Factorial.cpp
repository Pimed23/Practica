#include <iostream>
using namespace std;

int main() {

    short number;
    cout << "Enter a number: ";
    cin >> number;

    cout << "The factorial of " << number << " is ";
    int acc = 1;
    for( ; number > 0; acc *= number-- );
    cout << acc << ".\n";

    return 0;
}

// "Enter a number: 5 "
// acc = 1 * 1;
// acc = 1 * 2;
// acc = 2 * 3;
// acc = 6 * 4;
// acc = 24 * 5;
// The factorial of 5 is 120