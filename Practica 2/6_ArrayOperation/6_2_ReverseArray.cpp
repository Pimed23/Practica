#include <iostream>
using namespace std;

void PrintArray( int *arr, int size ) {
    
    for( int i = 0; i < size - 1; ++i )
        cout << arr[ i ] << ", ";
    cout << arr[ size - 1 ] << endl;
}

void Reverse( int *arr, int size ) {

    for( int i = 0; i < size / 2; ++i ) {
        int temp = arr[ i ];
        int i_end = size - i - 1;
        arr[ i ] = arr[ i_end ];
        arr[ i_end ] = temp;
    }
}

int main() {

    int arr[ 5 ] = { 1, 2, 3, 4, 5 };
    int size = sizeof( arr ) / sizeof( arr[ 0 ]);
    Reverse( arr, size );
    PrintArray( arr, size );

    return 0;
}