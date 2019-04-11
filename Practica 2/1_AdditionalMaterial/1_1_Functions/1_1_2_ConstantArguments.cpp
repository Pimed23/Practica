#include <iostream>
using namespace std;

void print( const int n ) {
    cout << n;
}

void print( const long &n ) {
    cout << n;
}

int main() {

    long x = 234923592;
    print( x );
    cout << endl;

    return 0;
}