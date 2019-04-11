#include <iostream>
using namespace std;

int main() {

    char *oddOrEven = "Never odd or even";
    char *nthCharPtr = &oddOrEven[ 5 ];
    nthCharPtr = oddOrEven + 3;
    cout << *nthCharPtr;
    char **pointerPtr = &nthCharPtr;
    cout << pointerPtr;
    cout << **pointerPtr;
    nthCharPtr++;
    cout << nthCharPtr - oddOrEven;

    return 0;
}