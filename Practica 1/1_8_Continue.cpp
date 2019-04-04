#include <iostream>
using namespace std;

int main() {

    for( int i = 0; i <= 10; i++ ) {
        if( i % 2 != 0 )
            continue;               // Jump to the next iteration of the loop
        cout << i << "\n";          // without evaluate this line
    }
    return 0;
}