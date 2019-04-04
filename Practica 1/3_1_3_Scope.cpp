#include <iostream>
using namespace std;

int main() {

    int arg1;
    arg1 = -1;
    {
        char arg1 = 'A';
        cout << arg1 << "\n";       // This statement prints -1
        
    return 0;
}

// The declaration in the inner block is used