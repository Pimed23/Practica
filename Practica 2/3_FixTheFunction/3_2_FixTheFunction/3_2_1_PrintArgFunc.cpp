#include <iostream>

void printNum( int number ) { std::cout << number; };

int main() {

    int number = 35;
    printNum( number );
    std::cout << "\n";

    return 0;
}

// FIRST SOLUTION:
// We gave a parameter to the function