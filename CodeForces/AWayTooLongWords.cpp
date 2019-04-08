#include <iostream>
using namespace std;

int lenght( char *word ) {
    int c = 0;
    while( *( word + c )) c++;
    return c;
}


int main() {
    char W[ 100 ];
    int n;
    cin >> n;
    while( n > 0 ) {
        cin >> W;

        int tam = lenght( W );
        if( tam > 10 ) {
            cout << W[ 0 ] << tam - 2 << W[ tam - 1 ] << endl;
        } else {
            cout << W << endl;
        }
        n--;
    }
    return 0;
}