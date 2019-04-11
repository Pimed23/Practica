#include <iostream>
using namespace std;

int Sum( const int num[], const int size ) {
    return size == 0 ? 0 : num[ 0 ] + Sum( num + 1, size - 1 ); 
}

int main() {
    
    int arr[] = { 1, 2, 3, 4, 5 };
    int size = sizeof( arr ) / sizeof( arr[ 0 ]);

    cout << Sum( arr, size ) << endl;

    return 0;

}