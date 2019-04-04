#include <iostream>
using namespace std;

int main() {

    int number;
    cout << "Enter a number: ";
    while( cin >> number ) {
        if( number >= 0 ) break;
        else cout << "Enter a positive integer... " << endl;
    }

    cout << "The factorial of " << number << " is ";
    long acc = 1;
    for( ; number > 0; acc *= number-- );
    cout << acc << ".\n";

    return 0;
}

// The max number that program calcute is 12!
// The result for 13! is wrong

// This happens because 13! exceeds the maximum value for int
// we declare acc how a integer, we cant fix the error changing
// the variable type