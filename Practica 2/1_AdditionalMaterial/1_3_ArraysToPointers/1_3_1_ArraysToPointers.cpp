#include <iostream>
using namespace std;

int main() {

    const char *suitNames[] = { "Clubs", "Diamonds", "Spades", "Clubs" };
    unsigned int suitNum;

    cout << "Enter a suit number ( 1 - 4 ): ";  
    cin >> suitNum;

    if( suitNum <= 4 ) 
        cout << suitNames[ suitNum - 1 ];
    cout << endl;

    return 0;

}