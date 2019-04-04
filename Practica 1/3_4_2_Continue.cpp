#include <iostream>
using namespace std;

int main() {
    
    int num;
    while( cin >> num ) {
        if ( num % 5 == 0 && num >= 0 )
            cout << num / 5 << endl;
        else
            continue;
    }
    return 0;
}