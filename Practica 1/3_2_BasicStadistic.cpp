#include <iostream>
using namespace std;

int main() {

    int N, *arr;
    cout << "Enter N: ";
    cin >> N;

    int acc = 0;
    cin >> acc;
    int min = acc;
    int max = acc;
    
    for( int i = 1; i < N; ++i ) {
        int a;
        cin >> a;
        acc += a;

        if( a < acc ) max = a;
        if( a > acc ) min = a;
    }

    cout << "Mean:  " << ( double ) acc / N << endl;
    cout << "Max:   " << max << endl;
    cout << "Min:   " << min << endl;
    cout << "Range: " << ( max - min ) << endl;

    return 0;
}