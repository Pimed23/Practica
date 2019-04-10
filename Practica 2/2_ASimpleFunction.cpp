#include <iostream>
using namespace std;

void f ( const int a = 5) {
    cout << a * 2 << "\n" ;
}

int a = 123;

int main () {
    f( 1 ) ;
    f( a );
    int b = 3;
    f( b );
    int a = 4;
    f( a );
    f();
}

// f( 1 ) --- Output: 2         
// f( a ) --- Output: 246   
// f( b ) --- Output: 6     
// f( a ) --- Output: 8     // Finds first the local variable
// f( 5 ) --- Output: 10    // Constant argument a = 5