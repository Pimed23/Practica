#include <iostream>
using namespace std;

int main() {
    int arg1;
    arg1 = -1;
    {
        char arg1 = 'A';
        cout << arg1 << endl;
    }
    // cout << arg1 << endl;    This statement prints -1
    
    return 0;
}

// The program compiles, because we are declarating the variable arg1
// in differents scopes