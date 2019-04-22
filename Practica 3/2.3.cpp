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
    Point P1( 5, 3 );
//  cout << P1.x << ", " << P1.y << endl;        x and y are private parameters
    cout << P1.getX() << ", " << P1.getY() << endl;
    return 0;
}