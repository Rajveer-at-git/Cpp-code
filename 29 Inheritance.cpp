#include <iostream>
using namespace std;
class B
{
    int a;  // Not inheritable, But it can be accessed by its own functions and its fns can be inherited
    public:
    int b;  // Inheritable
    void get_ab();
    int get_a();
    void show_a();
};

class D : public B
{
    int c;
    public:
    void mul();
    void display();
};

void B :: get_ab()
{
    a = 5 ;
    b = 10 ;
}

int B :: get_a()
{
    return a;
}

void B :: show_a()
{
    cout << "a = " << a << endl;
}

void D :: mul()
{
    c = b * get_a();
}

void D :: display()
{
    cout << "a = " << get_a() << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl << endl;
}
int main()
{
    D d;
    d.get_ab();
    d.mul();
    d.display();

    // we can also do something like this
    d.b = 20;
    d.mul();
    d.display();
}