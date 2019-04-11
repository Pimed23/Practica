#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;

double computePi( const int n ) {

    srand( time( 0 ));
    int darts = 0;

    for( int i = 0; i < n; i++ ) {
        double x = rand() / ( double ) RAND_MAX;
        double y = rand() / ( double ) RAND_MAX;
        if( sqrt( x * x + y * y ) < 1 ) {
            ++darts;
        }
    }

    return darts / static_cast <double>( n ) * 4;
}

int main() {

    cout << computePi( 50000000 ) << endl;
    return 0;
}