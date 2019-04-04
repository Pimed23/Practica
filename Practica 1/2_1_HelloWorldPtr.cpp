#include <iostream>
using namespace std;

int main() {

    const char *p;          // El valor al que apunta el puntero no puede ser cambiado
    p = "HelloWorld";
    cout << p << endl;
    // p = 'a';             // Esta expresion nos daria un error
    
    p = p + 5;              // Pero la direccion del puntero puede variar
    cout << p << endl;      // Haciendo que se mueva
    return 0;
}