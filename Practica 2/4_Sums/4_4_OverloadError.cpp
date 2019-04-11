#include <iostream>
using namespace std;

int Sum( const int a, const int b, const int c = 0, const int d = 0 ) {
    
    return a + b + c + d;
}

int Sum( const int a, const int b, const int c ) {
    
    return a + b + c;
}

int main() {

    int a = 3, b = 5, c = 7;
//  cout << Sum( a, b, c ) << endl;

    return 0;
}

// This program would give a compile error, because
// the compiler can't choice between the functions 