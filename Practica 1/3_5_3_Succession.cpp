#include <iostream>
using namespace std;

int main() {

    int N;
    cin >> N;
    double acc = 0;
    for( int i = 1; i <= N; ++i ) {
        double term = ( 1.0 / i );
        acc += term * term;
        for( int j = 1; j < i; ++j )
            acc *= -1;
    }
    cout << acc << endl;
    return 0;
}


// Serie 1/1^2 + 1/2^2 - 1/3^2 - 1/4^2 + 1/5^2 + ... 1/N^2


// The sign of the 1 / N ^ 2 term is positive if N ≡ 0, 1 mod 4 
// and negative if N ≡ 2, 3 mod 4.