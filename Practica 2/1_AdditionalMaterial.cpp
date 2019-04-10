#include <iostream>
#include <cstdlib>  // C STANDARD LIBRARY defines rand(), srand, RAND_MAX
#include <ctime>    // C TIME FUNCTIONS defines time
using namespace std;

// SECTION #1 - ADDITIONAL MATERIAL
// 1.1 - FUNCTIONS
// 1.1.1 - DEFAULT ARGUMENTS
/*
void printNtTimes( char *msg, int n ) {
    for( int i = 0; i < n; i++ )
        cout << msg;
}

void printNtTimes( char *msg, int n = 1 ) {
    for( int i = 0; i < n; i++ )
        cout << msg;
}
*/
void printNtTimes( string msg = "\n", int n = 1 ) {
    for( int i = 0; i < n; i++ )
        cout << msg;
}

// 1.1.2 - CONSTANT ARGUMENTS

void print( const int n ) {
    cout << n;
}

void print( const long n ) {
    cout << n;
}

// 1.1.3 - RANDOM NUMBER GENERATION FUNCTIONS
/*
int main() {
    
    srand( time( 0 ));

    int randNum = rand();
    cout << "A random number: " << randNum << endl;
    return 0;

}


// 1.2 - POINTERS
// 1.2.1 - POINTERS TO POINTERS

void setString( char **strPtr ) {
    int x;
    cin >> x;
    if( x > 0 )
        *strPtr = "Negative!"; 
    else
        *strPtr = "NonNegative";
}

// 1.2.2 - RETURNING POINTERS

int *getRandNumberPtr() {
    int x = rand();
    return &x;
}

// 1.3 - ARRAYS AND POINTERS
// 1.3.1 - ARRAYS AND POINTERS

int main() {
    const char *suitNames[] = { "Clubs", "Diamonds", "Spades", "Clubs" };   
    cout << "Enter a suit number ( 1 - 4 ): ";
    unsigned int suitNum;
    cin >> suitNum;
    if( suitNum <= 3 ) 
        cout << suitNames[ suitNum - 1 ];
    
    return 0;
}

// 1.3.2 - POINTERS TO ARRAY ELEMENTS
*/
int main() {

    const int ARRAY_LEN = 100;
    int arr[ ARRAY_LEN ];
    int *p = arr ;
    int *q = & arr[ 0 ];
    int *z = & arr[ 10 ];
}


// 1.4 - GLOBAL SCOPE
