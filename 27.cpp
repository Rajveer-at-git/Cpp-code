// Default constructor 
#include <iostream>
using namespace std;

class Rectangle {
    int length, width;

public:
    // Default constructor
    Rectangle() {
        length = 5;
        width = 3;
    }

    void displayArea() {
        cout << "Area of the rectangle: " << length * width << endl;
    }
};

int main() {
    // Creating an object using the default constructor
    Rectangle rect;

    rect.displayArea(); // Displays the area of the rectangle

    return 0;
}