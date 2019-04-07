#include <iostream>
#include <math.h>
using namespace std; 
  
bool ContNum4( long N, int &pos ) {
    long R, cont = 0;
    bool control = false;
    while( N > 0 ) {
        R = N % 10;
        N = N / 10;
        if( R == 4 ) {
            pos = cont;
            control = true;
        }
        cont++;
    }
    pos++;
    return control;
}

int GenValue_A( long N, int pos ) {
    int i = 0;
    for(; i < pos; i++ ) {
        N = N / 10;
    }
    return N * pow( 10, i ) + 4 * pow( 10, pos - 1 );
}

int GenValue_B( long N, int pos ) {
    int i = 0;
    for(; i < pos; i++ ) {
        N = N / 10;
    }
    return N * pow( 10, i ) + 5 * pow( 10, pos - 1 );
}


int main() {

    long N, A, B = 0, temp;
    int pos = 0;
    int T, c = 1;
    cin >> T;
    
    while( T > 0 ) {
        cin >> N;
        A = N;
        --A;
        
        for( ;A > 0; A-- ) {
            if( ContNum4( A, pos )) {
                A = GenValue_A( A, pos );
                pos = 0;
                continue;
            }

            B = N - A;
            if( ContNum4( B, pos )) {    
                B = GenValue_B( B, pos );   
                A = N - B;
                continue;
        
            } else {
                cout << "Case #" << c <<": " << A << " " << B << endl;
                break;
            }
        }
        c++;
        T--;
    }
        
    return 0;

}