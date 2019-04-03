#include <iostream>
using namespace std;

int main() {
    int j = 0;
    for( int i = 0; i < 10; ) {
        cout << "i++ : " << i++ << "\t\t";
        // First make the print and latter the increment
        cout << "++j : " << ++j << "\n";
        // First make the increment and latter the print
    }
    return 0;
}