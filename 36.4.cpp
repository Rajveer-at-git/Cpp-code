// [ OVERLOADING + OPERATOR USING FRIEND FUNCTION ]

#include <iostream>
using namespace std;

class complex {
    float x;  // real part
    float y;  // imaginary part

public:
    // Setter function to initialize x and y
    void setValues(float real, float imag) {
        x = real;
        y = imag;
    }

    // Friend function to overload the + operator
    friend complex operator+(complex c1, complex c2);

    void display(void);
};

// Overloading + operator using friend function
complex operator+(complex c1, complex c2) {
    complex temp;
    temp.x = c1.x + c2.x;  // Add real parts
    temp.y = c1.y + c2.y;  // Add imaginary parts
    return temp;
}

void complex::display(void) {
    cout << x << " + j" << y << "\n";
}

int main() {
    complex C1, C2, C3;

    // Initialize values using setter function
    C1.setValues(2.5, 3.5);
    C2.setValues(1.6, 2.7);

    C3 = C1 + C2;  // Calls overloaded + operator

    cout << "C1 = "; C1.display();
    cout << "C2 = "; C2.display();
    cout << "C3 = "; C3.display();

    return 0;
}