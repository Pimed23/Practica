#include <iostream>
using namespace std;

int sum( const int x, const int y ) {
    return x + y;
}

int sum( const int x, const int y, const int z ) {
    return x + y + z;
}

int main() {

    cout << sum( 1, 2, 3 ) << endl;  //   Should print 6
    return 0;
}

// SOLUTION:
// Just overload the function for work with 3 parameters