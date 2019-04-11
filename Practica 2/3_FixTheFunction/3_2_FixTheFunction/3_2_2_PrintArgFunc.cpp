#include <iostream>

int number = 35;

void printNum() { std::cout << number; };

int main() {

    printNum();
    std::cout << "\n";

    return 0;
}

// SECOND SOLUTION:
// We inicialited number as a gloval variable and erased the parameter
// of printNum in the main function.