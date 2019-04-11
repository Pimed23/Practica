#include <iostream>
using namespace std;

void setString( char **strPtr ) {
    
    int x;
    cin >> x;
    if( x < 0 )
        *strPtr = "Negative!"; 
    else
        *strPtr = "NonNegative";
}

int main() {

    char *str;
    setString( &str );
    cout << str;        // String has been set by setString
    cout << endl;
    
    return 0;
}