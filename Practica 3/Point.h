#ifndef POINT_H
#define POINT_H

class Point {

    public:
        Point();
        Point( int, int );
        Point( Point & );
        
        int getX() const;
        int getY() const;
        void setX( const int );
        void setY( const int );

        friend ostream& operator <<( ostream &, Point );
        friend istream& operator >>( istream &, Point & );

    private:
        int x, y;
};

Point::Point() {
    this -> x = 0;
    this -> y = 0;
}

Point::Point( int x, int y ) {
    this -> x = x;
    this -> y = y;
}

Point::Point( Point &P ) {
    this -> x = P.x;
    this -> y = P.y;
}

int Point::getX() const {
    return this -> x;
}

int Point::getY() const {
    return this -> y;
}

void Point::setX( const int new_x ) {
    this -> x = new_x;
}

void Point::setY( const int new_y ) {
    this -> y = new_y;
}

ostream& operator <<( ostream &output, Point P ) {
    output << "( " << P.x << ", " << P.y << " )";
    return output;
}

istream& operator >>( istream &input, Point &P ) {
    std::cout << "Coor x: ";
    input >> P.x;
    std::cout << "Coor y: ";
    input >> P.y;
    return input;
}

#endif