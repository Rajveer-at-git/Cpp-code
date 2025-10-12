// Copy constructor 
#include <iostream>
using namespace std;

class Student {
    int age;

public:
    // Constructor
    Student(int a) {
        age = a;
    }

    // Copy Constructor
    Student(const Student &s) {
        age = s.age;
    }

    void display() {
        cout << "Age: " << age << endl;
    }
};

int main() {
    Student s1(20);      // Normal constructor
    Student s2 = s1;     // Copy constructor called

    cout << "s1: ";
    s1.display();

    cout << "s2 (copy of s1): ";
    s2.display();

    return 0;
}
