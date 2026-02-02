// ...existing code...
#include <iostream>
#include <cstring>
#include <string>
using namespace std;

// Example 1: Resolving name conflict using `this`
class Person1 {
    string name;
    int age;
public:
    Person1(const string& name, int age) {
        this->name = name;
        this->age = age;
    }
    void display() const {
        cout << "Name: " << this->name << ", Age: " << this->age << endl;
    }
};

// Example 2: Returning the current object using `this`
class Counter {
    int count;
public:
    Counter() : count(0) {}
    Counter& increment() {
        ++count;
        return *this;
    }
    void display() const {
        cout << "Count: " << count << endl;
    }
};

// Example 3: Using this to compare objects
class Person2 {
    char name[20];
    float age;
public:
    Person2(const char* s, float a) {
        strncpy(name, s, sizeof(name)-1);
        name[sizeof(name)-1] = '\0';
        age = a;
    }
    // Returns reference to the elder person
    Person2& greater(Person2& x) {
        if (x.age >= this->age)
            return x;
        else
            return *this;
    }
    void display() const {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

void demo1() {
    Person1 p1("Alice", 25);
    p1.display();
}

void demo2() {
    Counter c;
    c.increment().increment().increment();
    c.display(); // Count: 3
}

void demo3() {
    Person2 P1("John", 37.5f), P2("Ahmed", 29.0f), P3("Hebber", 40.25f);
    Person2 elder = P1.greater(P3);
    cout << "Elder person is:\n";
    elder.display();

    elder = P1.greater(P2);
    cout << "Elder person is:\n";
    elder.display();
}

int main() {
    demo1();
    demo2();
    demo3();
    return 0;
}
// ...existing code...