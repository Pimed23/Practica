#include <iostream>
using namespace std; // #include <iostream>
                     // using namespace std;
int main() {
    cout << "Hello, world!\n";
    return 0;
}

#include <iostream>


// Don't compile because cout was no declarated in this scope
// cout belongs to iostream library
// C++ follow a secuence top - down
// First the first line is execute then the second later the third and so on
// If we move the line 8 and insert in the first line
// The program compiles and works 