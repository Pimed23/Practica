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

    private:
        int x, y;
};

int main() {

    Point *p = new Point( 5, 3 );
    cout << p -> getX() << ", " << p -> getY() << endl;
    // We need delete the data
    delete p;   
    return 0;
}