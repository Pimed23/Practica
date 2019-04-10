// SECTION #3 - FIX THE FUNCTION
// 3.1
/*
#include <iostream>
using namespace std;

int main() {
    printNum( 35 );
    return 0;
}

void printNum( int number ) { cout << number; }


// GIVE TWO WAYS TO FIX THE CODE

// 3.1.1 - We moved the print function before to main function.

#include <iostream>
using namespace std;

void printNum( int number ) { 
    cout << number; }

int main() {
    printNum( 35 );
    return 0;
}

// 3.1.2 - We wrote a prototipe for the function

#include <iostream>
using namespace std;

void printNum( int );

int main() {
    printNum( 35 );
    return 0;
}

void printNum( int number ) { 
    cout << number; }
*/

#include <iostream>

void printNum() { std::cout << number; };

int main() {

    int number = 35;
    printNum( number );
    return 0;
}



