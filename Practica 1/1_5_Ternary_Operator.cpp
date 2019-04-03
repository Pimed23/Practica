#include <iostream>
using namespace std;

int main() {

    int a = 1, b = 2, result;
    int a1 = 1, b1 = 2, result1;
    // This conditional statement is the same that
    // line 15 statement
    if( a > b )
        result = a;
    else 
        result = b;

    result1 = ( a1 > b1 ) ? a1 : b1;
    
    cout << result << " = " << result1 << endl;
    
    return 0;
}