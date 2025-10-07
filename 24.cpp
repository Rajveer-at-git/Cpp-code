#include <iostream>
using namespace std;

class MyClass {
private:
    static int count; // Static data member

public:
    // Static member function
    static void displayCount() {
        cout << "Count: " << count << endl;
    }

    // Static member function to modify the count
    static void incrementCount() {
        count++;
    }
};

// Definition of the static data member
int MyClass::count = 0;

int main() {
    // Calling the static member function using the class name
    MyClass::displayCount();

    // Increment the count using the static member function
    MyClass::incrementCount();
    MyClass::incrementCount();

    // Calling the static member function again to display the updated count
    MyClass::displayCount();

    return 0;
}
