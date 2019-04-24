#include <iostream>
using namespace std;

#include "Polygon.h"

void printAtributes( Polygon *p ) {
    cout << "Area: " << p -> area() << endl;
    cout << "Coordenadas: " << endl;
    cout << *( p -> getPoints()) << endl;
}

int main() {

    Point P1, P2;
    cout << "///// RECTANGLE /////" << endl;
    cout << "Primera punto: " << endl;
    cin >> P1;
    cout << "Segundo punto: " << endl;
    cin >> P2;
    Rectangle R1( P1, P2 );
    cout << "Datos de la Figura: " << endl;
    printAtributes( &R1 );
    cout << endl;

    Point P3, P4, P5;
    cout << "///// TRIANGLE /////" << endl;
    cout << "Primer punto: " << endl;
    cin >> P3;
    cout << "Segundo punto: " << endl;
    cin >> P4;
    cout << "Tercer punto: " << endl;
    cin >> P5;
    Triangle T1( P3, P4, P5 );
    cout << "Datos de la Figura: " << endl;
    printAtributes( &T1 );

    return 0;
}

// 5.6 - Si el constructor fuera privado no se podria crear objetos de la clase Point
//       fuera de la clase Point.

// 5.7 - Se reduce en 1 el valor de track que indica el numero de polygonos actuales
//       y se borra el PointArray

// 5.8 - Para que se las clases de derivadas Rectangle y Triangle puedan utilizar sus
//       atributos

// 5.9 - La de Polygon debido a que getNumSides no es una funcion virtual
