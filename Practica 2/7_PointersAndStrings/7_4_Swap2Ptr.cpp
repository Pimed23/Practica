#include <iostream>
using namespace std;

void Swap( int **a, int **b ) {

    int *temp = *a;
    *a = *b;
    *b = temp;
}

int main() {

    int x = 5, y = 6;
    int *ptr1 = &x, *ptr2 = &y;
    Swap( &ptr1, &ptr2 );
    cout << *ptr1 << " " << *ptr2 << endl;
    
    return 0;
}