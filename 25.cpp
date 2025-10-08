#include <iostream>
using namespace std;

class Circle {
    double radius;

public:
    Circle(double r) : radius(r) {}

    // Const member function
    double getArea() const {
        return 3.14 * radius * radius;
    }

    // Non-const member function
    void setRadius(double r) {
        radius = r;
    }
};

int main() {
    Circle c1(5.0);

    cout << "Area of the circle: " << c1.getArea() << endl;

    c1.setRadius(10.0); // Modify the radius
    cout << "New area of the circle: " << c1.getArea() << endl;

    return 0;
}