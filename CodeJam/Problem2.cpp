#include <iostream>
using namespace std;

int main() {

    
    int N, T, tam, c = 1, i = 0;
    char *p;
    cin >> T;

    while( T > 0 ) {
        
        cin >> N;
        tam = 2 * N - 2;
        p = new char[ tam ];

        for( int i = 0; i < tam; i++ ) {
            cin >> *( p + i );
        }

        for( int i = 0; i < tam; i++ ) {
            if( *( p + i ) == 'E' ) {
                *( p + i ) = 'S';
            } else {
                *( p + i ) = 'E';
            }
        }

        cout << "Case #" << c << ": ";
        for( int i = 0; i < tam; i++ ) {
            cout << *( p + i );
        }
        cout << endl;

        delete[] p;
        c++;
        T--;
    }
    return 0;
}

