#include <iostream>
using namespace std;

const string vocal = "aeiou";

string pigLatin( const string cad ) {
    if( cad.empty())
        return cad;

    if( cad.find( "qu" ) == 0 )
        return cad.substr( 2, cad.size() - 2 ) + "-" + cad.substr( 0, 2 ) + "ay";
    
    else if( vocal.find( cad[ 0 ]) != string::npos )
        return cad + "way";
    
    else
        return cad.substr( 1, cad.size() - 1 ) + "-" + cad[ 0 ] + "ay";
}

int main() {

    string r = "";
    cout << pigLatin( r ) << endl;



    return 0;
}