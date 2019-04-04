#include <iostream>
using namespace std;

int main() {

    short number;
    cout << "Enter a number: ";
    while( cin >> number ) {
        if( number >= 0 ) break;
        else cout << "Enter a positive integer... " << endl;
    }

    cout << "The factorial of " << number << " is ";
    int acc = 1;
    for( ; number > 0; acc *= number-- );
    cout << acc << ".\n";

    return 0;
}

// "Enter a number: -1 "
// The factorial of -1 is 1.
// We got a wrong answer