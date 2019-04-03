#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    switch( n ) {
        case 0:
            cout << "You typed zero. \n ";
            break;
        case 1:
        case 4:
        case 9:
            cout << n << " is a perfect square. \n ";
            break;
        case 2:
            cout << n << " is an even number. \n";
            break;
        case 3:
        case 5:
        case 7:
            cout << n << " is a prime number. \n";
            break;
        case 6:
        case 8:
            cout << n << " is an even number. \n";
            break;
        default:
            cout << "Only single-digit positive numbers are allowed. \n";
            break;
    }
    return 0;
}