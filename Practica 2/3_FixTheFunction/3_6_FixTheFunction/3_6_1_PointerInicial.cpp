#include <iostream>
using namespace std;

const int ARRAY_LEN = 10;

int main() {

    int arr[ ARRAY_LEN ] = { 10 };

    int *xPtr = arr, *yPtr = arr + ARRAY_LEN - 1;
    cout << *xPtr << ' ' << *yPtr << endl;

    return 0;
}

// SOLUTION:
// Declarate yPtr as a pointer