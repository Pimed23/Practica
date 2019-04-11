#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;

int main() {

    int n, dart = 0;

    cout << "Number of darts: ";
    cin >> n;

    for( int i = 0; i < n; i++ ) {
        double x = rand() / ( double ) RAND_MAX;
        double y = rand() / ( double ) RAND_MAX;
        if( sqrt( x * x + y * y ) < 1 ) {
            ++dart;
        }
    }
    cout << dart << endl;
    
    return 0;
}