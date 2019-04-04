#include <iostream>
using namespace std;

int main() {

    int number;
    cout << "Enter a number: ";
    while( cin >> number ) {
        if( number >= 0 ) break;
        else cout << "Enter a positive integer... " << endl;
    }

    cout << "The factorial of " << number << " is ";
    long acc = 1;
    switch ( number ) {
        case 0:
            acc = 1;
            break;
        
        case 1:
            acc = 1;
            break;
        
        case 2:
            acc = 2;
            break;
        
        case 3:
            acc = 6;
            break;
        
        case 4:
            acc = 24;
            break;
        
        case 5:
            acc = 120;
            break;
        
        case 6:
            acc = 720;
            break;
        
        case 7:
            acc = 5040;
            break;
        
        case 8:
            acc = 40320;
            break;
        
        case 9:
            acc = 362880;
            break;
    
        default:
            for( ; number > 0; acc *= number-- );
            break;
    }

    cout << acc << ".\n";
    return 0;
}
