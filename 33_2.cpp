// Ambiguity problem without using Virtual Base Class
#include <iostream>
using namespace std;

class A {
public:
    void display() {
        cout << "Class A display function" << endl;
    }
};

class B : public A {
    // Inherits display() from A
};

class C : public A {
    // Inherits display() from A
};

class D : public B, public C {
    // Inherits two copies of A (one from B and one from C)
};

int main() {
    D obj;
    // obj.display(); // Error: Ambiguity because there are two copies of A's display()
    obj.B::display(); // Resolving ambiguity by specifying the path
    obj.C::display(); // Resolving ambiguity by specifying the path
    return 0;
}