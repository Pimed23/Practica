#include <iostream>
using namespace std;

int main() {
    
    int num;
    while( cin >> num ) {
        cout << (( num % 5 == 0 && num >= 0 ) ? num / 5 : -1 ) << endl;
    }
    return 0;
}