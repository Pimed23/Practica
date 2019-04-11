#include <iostream>
using namespace std;

int Sum( const int num[], const int size ) {
    int sum = 0;
    for( int i = 0; i < size; ++i )
        sum += num[ i ];
    return sum;
}

int main() {

    int arr[] = { 1, 2, 3, 4, 5 };
    int size = sizeof( arr ) / sizeof( arr[ 0 ]);

    cout << Sum( arr, size ) << endl;

    return 0;
}