#include <iostream>
using namespace std;

// Passing by value
void doubleNumber( int num ) { num = num * 2; }

int main() {

    int num = 35;
    doubleNumber( num );
    cout << num;          // Should print 70

    return 0;
}

