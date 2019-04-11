#include <iostream>
#include <cstdlib>
using namespace std;

int difference( const int x, const int y ) {
    return abs( x - y );
}

int main() {

    cout << difference( 24, 1238 ) << endl;
    return 0;
}

// SOLUTION:
// We solved the error changing the line
// int diff = abs( x - y ); to
// return abs( x - y );