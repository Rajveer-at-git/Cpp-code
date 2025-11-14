#include <iostream>
using namespace std;

class Counter {
    int count;

public:
    Counter() { count = 0; } // Default constructor

    // Setter function to initialize count
    void setCount(int c) { count = c; }

    // Friend function for pre-increment (++x)
    friend Counter operator++(Counter &obj);

    // Friend function for post-increment (x++)
    friend Counter operator++(Counter &obj, int);

    void display() { cout << "Count: " << count << endl; }
};

// Pre-increment (++x)
Counter operator++(Counter &obj) {
    obj.count++;
    return obj;
}

// Post-increment (x++)
Counter operator++(Counter &obj, int) {
    Counter temp = obj;  // Store old value
    obj.count++;  // Increment actual value
    return temp;  // Return old value
}

int main() {
    Counter c1, c2;

    c1.setCount(5); // Initialize count using setter function

    cout << "Original Count: ";
    c1.display();

    c2 = ++c1;  // Pre-increment
    cout << "After Pre-Increment: ";
    c2.display();

    c2 = c1++;  // Post-increment
    cout << "After Post-Increment: ";
    c2.display();

    return 0;
}