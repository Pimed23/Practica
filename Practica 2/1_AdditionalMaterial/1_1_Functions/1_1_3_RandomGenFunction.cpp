#include <iostream>
#include <cstdlib>  // C STANDARD LIBRARY defines rand(), srand, RAND_MAX
#include <ctime>    // C TIME FUNCTIONS defines time()
using namespace std;

int main() {

    srand( time( 0 )); // Time( 0 ) returns current time as a number

    int randNum = rand();
    cout << "A random number: " << randNum << endl;
    return 0;

}