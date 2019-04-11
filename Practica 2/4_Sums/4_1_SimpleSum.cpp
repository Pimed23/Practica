#include <iostream>
using namespace std;

int Sum( const int a, const int b ) {
    
    return a + b;
}

double Sum( const double a, const double b ) {
    
    return a + b;
}

int main() {

    int a = 5, b = 4;
    cout << Sum( a, b ) << endl;

    double c = 5.3, d = 7.6;
    cout << Sum( c, d ) << endl;

    return 0;
}