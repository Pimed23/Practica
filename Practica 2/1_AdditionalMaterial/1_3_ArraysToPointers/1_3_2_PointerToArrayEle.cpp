#include <iostream>
using namespace std;

int main() {

    const int ARRAY_LEN = 100;
    int arr[ ARRAY_LEN ];

    for( int i = 0; i < 11; ++i )
        cin >> arr[ i ];

    int *p = arr ;
    int *q = &arr[ 0 ];
    int *z = &arr[ 10 ];

    cout << *p << endl;
    cout << *q << endl;
    cout << *z << endl;

    return 0;

}