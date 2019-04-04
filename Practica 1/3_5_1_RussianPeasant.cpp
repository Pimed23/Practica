#include <iostream>
using namespace std;

int main() {

    int dole = 5, bob = 3;
    int accumulator = 0;
    while( true ) {
        if( dole == 0 ) break;
        accumulator += (( dole % 2 == 1 ) ? bob : 0 );
        dole /= 2;
        bob *= 2;
    }
    cout << accumulator << endl;
    return 0;
}

// Its the Russian Peasant Multiplication
// I resolve a multiplication bitwise with this algoritm
// hence i recognized it

// int multi( int a, int b ) {
//     int r = 0;
//     while ( b > 0 ) {
//         if ( b & 1 ) 
//             r = r + a;
//     a = a << 1; 
//     b = b >> 1; 
//     } 
// return r;
// } 
