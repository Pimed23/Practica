#include <iostream>
using namespace std;

int main() {

    int arg1;
    arg1 = -1;
    int x, y, z;
    char myDouble = '5';
    char arg1 = 'A';        // char arg2 = 'A'
    cout << arg1 << "\n";   // cout << arg2 << "\n";   

    return 0;
}

// The program dont compile, i get one error: conflicting declaration 'char arg1' 
// note: previous declaration as 'int arg1'
// We can't declare a variable with the same name twice in the same scope