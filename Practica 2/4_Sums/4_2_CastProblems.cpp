#include <iostream>
using namespace std;

int Sum( const int a, const int b ) {
    
    return a + b;
}

double Sum( const double a, const double b ) {
    
    return a + b;
}

int main() {

//  cout << Sum( 1, 10.0 ) << endl;

    return 0;
}

// This doesn't works because it's an ambiguous statement, 
// the compilator doesn't knows what to do.
// The compiler could either cast 1 to a double and call 
// the double version of sum, or it could cast 10.0 to an
// int and call the int version