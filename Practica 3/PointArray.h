#ifndef POINTARRAY_H
#define POINTARRAY_H

#include "Point.h"

class PointArray {

    public:
        PointArray();
        PointArray( const Point *, const int );
        PointArray( const PointArray & );
        ~PointArray();

        void resize( const int );
        void pushBack( const Point & );
        void insert( const int, const Point & );
        void remove( const int );
        void clear();
        const int getSize() const;
        Point* get( const int );
        const Point* get( const int ) const;

        friend ostream& operator <<( ostream &output, PointArray );

    private:
        Point *arr;
        int size;
};

PointArray::PointArray() {
    this -> size = 0;
    this -> arr = new Point[ size ];
}

PointArray::PointArray( const Point *arr, const int size ) {
    this -> size = size;
    this -> arr = new Point[ size ];

    for( int i = 0; i < size; ++i )
        this -> arr[ i ] = arr[ i ];
}

PointArray::PointArray( const PointArray &PA ) {
    this -> size = PA.size;
    this -> arr = new Point[ size ];

    for( int i = 0; i < size; ++i )
        this -> arr[ i ] = PA.arr[ i ];
}

PointArray::~PointArray() {
    delete[] arr;
}

void PointArray::resize( const int new_size ) {
    Point *temp = new Point[ new_size ];
    int minsize = ( size > new_size ) ? new_size : size;

    for( int i = 0; i < minsize; ++i )
        temp[ i ] = arr[ i ];
    
    delete[] arr;
    arr = temp;
    size = new_size;    
}

void PointArray::pushBack( const Point &P ) {
    resize( size + 1 );
    arr[ size - 1 ] = P;
}

void PointArray::insert( const int pos, const Point &P ) {
    resize( size + 1 );
    for( int i = size; i > pos; --i )
        arr[ i ] = arr[ i - 1 ];
    arr[ pos ] = P;
}

void PointArray::remove( const int pos ) {
    for( int i = pos; i < size; ++i )
        arr[ i ] = arr[ i + 1 ];
    resize( size - 1 );
}

void PointArray::clear() {
    resize( 0 );
}

const int PointArray::getSize() const {
    return size;
}

Point* PointArray::get( const int pos ) {
    return ( pos >= 0 && pos < size ) ? arr + pos : NULL;
}


const Point* PointArray::get( const int pos ) const {
    return ( pos >= 0 && pos < size ) ? arr + pos : NULL;
}

ostream& operator <<( ostream &output, PointArray P ) {
    for( int i = 0; i < P.size - 1; ++i )
        output << P.arr[ i ] << endl;
    output << P.arr[ P.size - 1 ];
    return output;
}


#endif