// Pointers to Objects
#include <iostream>
using namespace std;

class Person {
    string name;
    int age;

public:
    // Setter function to initialize name and age
    void setValues(string n, int a) {
        name = n;
        age = a;
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Person p1;  // Normal object
    Person *ptr;  // Pointer to object

    // Initialize values using setter function
    p1.setValues("Alice", 25);

    ptr = &p1;  // Storing address of object in pointer
    ptr->display();  // Accessing function using pointer

    return 0;
}
