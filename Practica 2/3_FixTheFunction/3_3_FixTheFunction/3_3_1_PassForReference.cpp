#include <iostream>
using namespace std;

void doubleNumber( int &num ) { num = num * 2; }

int main() {

    int num = 35;
    doubleNumber( num );
    cout << num << endl;

    return 0;
}

// SOLUTION:
// Change the function's argument to pass by value to pass by reference