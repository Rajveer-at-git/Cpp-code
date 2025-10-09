#include <iostream>
using namespace std;

class Rectangle {
    int length, width;

public:
    // Parameterized constructor
    Rectangle(int l, int w) {
        length = l;
        width = w;
    }

    void displayArea() {
        cout << "Area of the rectangle: " << length * width << endl;
    }
};

int main() {
    // Creating objects using the parameterized constructor
    Rectangle rect1(10, 5);  // Constructor called with parameters 10 and 5
    Rectangle rect2(7, 3);   // Constructor called with parameters 7 and 3

    cout << "Rectangle 1:" << endl;
    rect1.displayArea();

    cout << "Rectangle 2:" << endl;
    rect2.displayArea();

    return 0;
}