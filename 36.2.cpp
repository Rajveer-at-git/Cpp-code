// Overloading binary + operator using member fn
#include <iostream>
using namespace std;

class Point {
    int x, y;

public:
    // Setter function to set values
    void setData(int a, int b) {
        x = a;
        y = b;
    }

    // Overload + operator using member function
    Point operator+(Point p) {
        Point temp;
        temp.x = x + p.x;
        temp.y = y + p.y;
        return temp;
    }

    // Function to display the result
    void display() {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

int main() {
    Point p1, p2, result;

    p1.setData(2, 3);
    p2.setData(4, 5);

    result = p1 + p2;  // Calls overloaded +

    cout << "Result of p1 + p2 = ";
    result.display();

    return 0;
}
