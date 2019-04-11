#include <iostream>
using namespace std;

int Lenght( char *arr ) {
    
    int c = 0;
    while( *( arr + c )) ++c;
    return c;
}

int main() {

    char A[] = "HOLA";
    cout << Lenght( A ) << endl;
    return 0;
}