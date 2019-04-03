#include <iostream>
using namespace std;

int main() {

    const int pathwidth = 100;   // pathwidth cannot be modified because its a const
    // pathwidth = 2; this will causa a compiler error!
    const char tabulator = '\t'; 
    cout << tabulator << "tabulator = \n "; // '\t' displace the content 4 spaces to right

    return 0;
}