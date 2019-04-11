#include <iostream>
using namespace std;
#define LENGHT 3
#define WIDTH 3

void Transpose( const int input[][ LENGHT ], int output[][ WIDTH ] ) {
    for( int i = 0; i < WIDTH; ++i )
        for( int j = 0; j < LENGHT; ++j )
            output[ j ][ i ] = input[ i ][ j ];
}
