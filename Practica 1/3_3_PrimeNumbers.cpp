#include <iostream>
#include <math.h>

using namespace std;

bool isPrime( int num ) {
    if( num < 2 )
        return false;
    else if( num == 2 )
        return true;
    else if( num % 2 == 0 )
        return false;
    for( int i = 3; i <= sqrt( num ); i += 2 ) {
        if( num % i == 0 )
            return false;
    }
    return true;
}

int main() {

    int N;
    cout << "Enter N: ";
    cin >> N;

    for( int i = 1; i <= N; i++ ) {
        if( isPrime( i ))
            cout << i << endl;
    }
}