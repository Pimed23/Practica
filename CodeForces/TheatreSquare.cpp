#include <iostream>
using namespace std;

long long laja( long long thea_tam, long long laj_tam ) {
    if( thea_tam % laj_tam )
        return thea_tam / laj_tam + 1;
    else
        return thea_tam / laj_tam;
}

int main() {

    long long n, m, a;
    cin >> n >> m >> a;
    cout <<  laja( n, a ) *  laja( m, a ) << endl;
    return 0;
}
