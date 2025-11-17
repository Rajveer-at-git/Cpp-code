#include <iostream>
using namespace std;

class Point {
    int x, y;

public:
    // Setter function to initialize x and y
    void setValues(int a, int b) {
        x = a;
        y = b;
    }

    // Friend function to overload the + operator
    friend Point operator+(Point p1, Point p2);

    // Function to display the point
    void display() {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

// Overloading + operator using friend function
Point operator+(Point p1, Point p2) {
    Point temp;
    temp.setValues(p1.x + p2.x, p1.y + p2.y);
    return temp;
}

int main() {
    Point p1, p2, p3;

    // Initialize values using setter function
    p1.setValues(3, 4);
    p2.setValues(1, 2);

    // Using the overloaded + operator
    p3 = p1 + p2;

    cout << "p1: ";
    p1.display();
    cout << "p2: ";
    p2.display();
    cout << "p3 (p1 + p2): ";
    p3.display();

    return 0;
}