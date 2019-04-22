#include <iostream>
using namespace std;

class Point {

    public:
        Point() {
            this -> x = 0;
            this -> y = 0;
        }

        Point( int x, int y ) {
            this -> x = x;
            this -> y = y;
        }

        Point( Point &P ) {
            this -> x = P.x;
            this -> y = P.y;
        }

        int getX() { return x; }
        int setX( int );

    private:
        int x, y;
};
// We need to specify the class of the function
int Point::setX( int newX ) { x = newX; }

int main() {
    Point P1( 5, 3 );
    P1.setX( 0 );
    cout << P1.getX() << " " << "\n";
    return 0;
}