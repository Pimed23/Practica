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
        int getY() { return y; }

        void doubleVal() {
            x *= 2;
            y *= 2;
        }

    private:
        int x, y;
};

int main() {
    Point P1( 4, 5 );   // erase const value 
    P1.doubleVal();     // we can't modify a const variable  
    cout << P1.getX() << ", " << P1.getY() << endl;

    return 0;
}