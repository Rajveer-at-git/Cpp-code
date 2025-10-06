#include <iostream>
using namespace std;
class ABC;
class XYZ
{
    int x;
    public:
    void getvalue(int p)
    {
        x = p;
    }
    friend void max(ABC,XYZ);
};

class ABC
{
    int a;
    public:
    void getvalue(int q)
    {
        a = q;
    }
    friend void max(ABC,XYZ);
};

void max(ABC A, XYZ X)
{
    if(A.a > X.x)
    cout << "Greatest : " << A.a << endl;
    else 
    cout << "Greatest : " << X.x << endl;
}
int main()
{
    ABC A;
    XYZ X;
    A.getvalue(10);
    X.getvalue(20);
    max(A,X);
}