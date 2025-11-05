// Static Member functions 
// Static Member Function Example
#include <iostream>
using namespace std;

class Counter {
    static int count; // Static data member
public:
    static void increment() { // Static member function
        count++;
    }
    static void display() { // Static member function
        cout << "Count: " << count << endl;
    }
};

// Define and initialize the static data member
int Counter::count = 0;

int main() {
    Counter::increment(); // Call static function without an object
    Counter::display();

    Counter::increment();
    Counter::display();

    return 0;
}