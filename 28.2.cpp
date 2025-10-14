// Destructor 
#include <iostream>
using namespace std;

class Student {
public:
    Student() {
        cout << "Constructor called!" << endl;
    }

    ~Student() {
        cout << "Destructor called!" << endl;
    }
};

int main() {
    Student s1;  // Constructor runs here

    {
        Student s2;  // Constructor runs
        // s2 goes out of scope here, so destructor is called
    }

    // s1 will be destroyed when main ends
    return 0;
}
