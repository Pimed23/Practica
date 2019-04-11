#include <iostream>
using namespace std;

void printNtTimes( string msg = "\n", int n = 1 ) {

    for( int i = 0; i < n; i++ )
        cout << msg;
}

int main() {

    char Hello[] = "HELLO";
    char Bye[] = "BYE";
    printNtTimes();
    printNtTimes( Hello, 3 );
    cout << endl;
    printNtTimes( Bye );
    
    cout << endl;
    
    return 0;
}