// Operator Overloading - Overloading Unary Minus Operator using Friend Function
#include <iostream>
using namespace std;

class Point {
    int x, y, z;

public:
    void setValues(int a, int b, int c);
    void display();
    friend void operator-(Point &p);
};

void Point::setValues(int a, int b, int c) {
    x = a;
    y = b;
    z = c;
}

void Point::display() {
    cout << "Coordinates: (" << x << ", " << y << ", " << z << ")" << endl;
}

void operator-(Point &p) {
    p.x = -p.x;
    p.y = -p.y;
    p.z = -p.z;
}

int main() {
    Point point;

    point.setValues(10, -20, 30);

    cout << "Before applying unary minus operator:" << endl;
    point.display();

    -point; // Overloaded unary minus operator

    cout << "After applying unary minus operator:" << endl;
    point.display();

    return 0;
}
