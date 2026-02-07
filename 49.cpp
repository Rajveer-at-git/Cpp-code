#include <iostream>
using namespace std;

class Base {
public:
    virtual void display() { cout << "\n Display base "; }
    virtual void show() { cout << "\n show base "; }
};

class Derived : public Base {
public:
    void display() { cout << "\n Display derived"; }
    void show() { cout << "\n show derived\n"; }
};

int main() {
    Base B;
    Derived D;
    Base* bptr;

    cout << "\n bptr points to Base \n";
    bptr = &B;
    bptr->display();  // Base version
    bptr->show();     // Base version

    cout << "\n\n bptr points to Derived\n";
    bptr = &D;
    bptr->display();  // Derived version
    bptr->show();     // Derived version

    return 0;
}
