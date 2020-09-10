#include <iostream>

using namespace std;
/*
class class-name {

};

*/

class point {
     int _x, _y;

    public:
    //Default constructor 
    point () {
        _x = 0;
        _y = 0;
    }

    void set(int x, int y) {
        _x = x;
        _y = y;
    }
    void display() { cout << "(" << _x << "," << _y << ")" << endl; }
};

int main(int argc, char const *argv[])  {

    point p1;

    p1.display();

    return 0;
}
