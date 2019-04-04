#include <iostream>
using namespace std;

int main() {

    int i = 1;
    while( true ) {
        if( i > 10 )
            break;  // The word break go to the hand
                    // with the loops, its used for
                    // breaking out of a loop or switch
        cout << i << "\n";
        ++i;
    }

    return 0;
}