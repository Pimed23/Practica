#include <iostream>
using namespace std;

int main() {

    int n;
    while( true ) {
        cin >> n;
        if( n > 0 ) {
            break;
        } else
            cout << "Enter a positive integer " << endl;
    }

    const char *p = "Hello World";

    cout << "FOR LOOP" << endl;
    for( int i = 0; i < n; i++ )
        cout << p << endl;
    
    cout << "WHILE LOOP" << endl;
    int i = 0;
    while( i < n ) {
        cout << p << endl;
        i++;
    }

    int j = 0;
    cout << "DO... WHILE LOOP " << endl;
    do {
        cout << p << endl;
        j++;
    }
    while( j < n );
   
    return 0;
}
