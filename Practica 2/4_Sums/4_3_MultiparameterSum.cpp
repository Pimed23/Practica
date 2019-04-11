#include <iostream>
using namespace std;

int Sum( const int a, const int b ) {
    
    return a + b;
}

int Sum( const int a, const int b, const int c ) {
    
    return a + b + c;
}

int Sum( const int a, const int b, const int c, const int d ) {
    
    return a + b + c + d;
}

int main() {

    int a = 3, b = 5, c = 7, d = 6;
    
    cout << Sum( a, b ) << endl;
    cout << Sum( a, b, c ) << endl;
    cout << Sum( a, b, c, d ) << endl;

    return 0;
}
