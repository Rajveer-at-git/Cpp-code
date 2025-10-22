// Multiple Inheritance
# include<iostream>
using namespace std;
class M
{
    protected:
    int m;
    public:
    void get_m(int);
};

class N
{
    protected:
    int n;
    public:
    void get_n(int);
};

class P : public M , public N
{
    public:
    void product();
};

void M :: get_m(int a)
{
    m = a;
}

void N :: get_n(int b)
{
    n = b;
}

void P :: product()
{
    cout << "The product of two numbers is : " << m*n << endl;  
    // Note you cannot return the value , since the return type is void 
}

int main()
{
    P mul ;
    mul.get_m(6);
    mul.get_n(9);
    mul.product();
}