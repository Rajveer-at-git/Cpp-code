// Ambiguity problem using virtual base class 
#include <iostream>
using namespace std;

class A {
public:
    void display() {
        cout << "Class A display function" << endl;
    }
};

class B : virtual public A {
    // Virtual inheritance ensures only one copy of A is inherited
};

class C : virtual public A {
    // Virtual inheritance ensures only one copy of A is inherited
};

class D : public B, public C {
    // Inherits only one copy of A due to virtual inheritance
};

int main() {
    D obj;
    obj.display(); // No ambiguity, single copy of A's display() is inherited

    return 0;
}