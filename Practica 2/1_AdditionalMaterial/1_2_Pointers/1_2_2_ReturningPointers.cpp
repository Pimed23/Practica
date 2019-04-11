#include <iostream>
#include <cstdlib>
using namespace std;

int *getRandNumberPtr() {

    int x = rand();      // warning: address of local variable ‘x’ returned
    return &x;
}

int main() {
    int *randNumPtr = getRandNumberPtr();
    cout << *randNumPtr; // ERROR

    return 0;

}