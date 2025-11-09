// Operator Overloading - Overloading uniary operator using member function
#include <iostream>
using namespace std;
class negative
{
    int x,y,z;
    public:
    void get_value(int,int,int);
    void display(void);
    void operator -();  // overload uniary minus
};
    void negative :: get_value(int a, int b, int c)
    {
        x = a;
        y = b;
        z = c;
    }
    void negative :: display(void)
    {
        cout << x << " " << y << " " << z << endl; 
    }
    void negative :: operator-()
    {
        x = -x;
        y = -y;
        z = -z;
    }
int main()
{
    negative op ;
    op.get_value(10,-20,30);

    cout << "Before: " << endl;
    op.display();

    -op;

    cout << "After: " << endl;
    op.display();
}