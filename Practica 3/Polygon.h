#ifndef POLYGON_H
#define POLYGON_H

#include "PointArray.h"
#include <math.h>

// VARIABLE GLOBAL

Point constPoints[ 4 ];

// PROTOTIPOS DE FUNCIONES

Point* updConstPoints( const Point &, const Point &, const Point &, const Point & );

// CLASE BASE

class Polygon {

    public:
        Polygon( const Point *, const int );
        Polygon( const PointArray & );
        ~Polygon();
        
        virtual double area() const = 0;
        static int getNumPolygons();
        int getNumSides() const;
        const PointArray* getPoints() const;

    protected:
        PointArray pArray;
        static int track;
};

// CLASES DERIVADAS

class Rectangle : public Polygon {
    public:
        Rectangle( const Point &, const Point & );
        Rectangle( const int, const int, const int, const int );
        double area() const;
};

class Triangle : public Polygon {
    public:
        Triangle( const Point &, const Point &, const Point & );
        double area() const;
};

// DESARROLLO DE FUNCIONES

Point* updConstPoints( const Point &p1, const Point &p2, const Point &p3, const Point &p4 = Point ( 0, 0 )) {
    constPoints[ 0 ] = p1;
    constPoints[ 1 ] = p2;
    constPoints[ 2 ] = p3;
    constPoints[ 3 ] = p4;
    return constPoints;
}

// METODOS DE CLASE POLYGON
int Polygon::track = 0;

Polygon::Polygon( const Point *arr, const int size ) : pArray( arr, size ) {
    ++track;
}

Polygon::Polygon( const PointArray &PA ) : pArray( PA ) {
    ++track;
}

Polygon::~Polygon() {
    --track;
}

int Polygon::getNumPolygons() {
    return track;
}

int Polygon::getNumSides() const {
    return pArray.getSize();
}

const PointArray* Polygon::getPoints() const {
    return &pArray;
}

// METODOS DE LA CLASE RECTANGLE

Rectangle::Rectangle( const Point &P1, const Point &P2 ) : 
Polygon( updConstPoints( P1, Point( P1.getX(), P2.getY()), Point( P2.getX(), P1.getY()), P2 ), 4 ) {}

Rectangle::Rectangle( const int x1, const int y1, const int x2, const int y2 ) : 
Polygon( updConstPoints( Point( x1, y1 ), Point( x1, y2 ), Point( x2, y1 ), Point( x2, y2 )), 4 ) {}

double Rectangle::area() const {
    int height = pArray.get( 3 ) -> getY() - pArray.get( 0 ) -> getY();
    int width = pArray.get( 3 ) -> getX() - pArray.get( 0 ) -> getX();
    return std::abs(( double ) height * width );
}

// METODOS DE LA CLASE TRIANGLE

Triangle::Triangle( const Point &P1, const Point &P2, const Point &P3 ) :
Polygon( updConstPoints( P1, P2, P3 ), 3 ) {}

double Triangle::area() const {
    int dx_P0_P1 = pArray.get( 0 ) -> getX() - pArray.get( 1 ) -> getX();
    int dx_P1_P2 = pArray.get( 1 ) -> getX() - pArray.get( 2 ) -> getX();
    int dx_P2_P0 = pArray.get( 2 ) -> getX() - pArray.get( 0 ) -> getX();

    int dy_P0_P1 = pArray.get( 0 ) -> getY() - pArray.get( 1 ) -> getY();
    int dy_P1_P2 = pArray.get( 1 ) -> getY() - pArray.get( 2 ) -> getY();
    int dy_P2_P0 = pArray.get( 2 ) -> getY() - pArray.get( 0 ) -> getY();

    int a = sqrt( dx_P0_P1 * dx_P0_P1 + dy_P0_P1 * dy_P0_P1 );
    int b = sqrt( dx_P1_P2 * dx_P1_P2 + dy_P1_P2 * dy_P1_P2 );
    int c = sqrt( dx_P2_P0 * dx_P2_P0 + dy_P2_P0 * dy_P2_P0 );

    int s = ( a + b + c ) / 2;

    return ( double ) sqrt( s * ( s - a ) * ( s - b ) * ( s - c ));
}


#endif