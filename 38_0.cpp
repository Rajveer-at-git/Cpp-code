// write a program in cpp to handle dividebyzero exception where throw point is in the external function 
// Method II
# include <iostream> 
using namespace std;
int divide(int a1, int b1)
{
    int x;
    x = a1-b1;
    if(x!=0)
        return(a1/x);
    else
        throw(a1);
}

int main()
{
    int a,b,x,r;
    cout << "Enter the values of a ,b: ";
    cin >> a >> b;
  
    try
    {
     int r = divide(a,b);
    }

    catch(int c)
    {
        cout << "Cannot divide by zero" << endl;
    }

    cout << "value of a: " << a << endl;
    cout << "value of b: " << b << endl;
    cout << "value of x: " << x << endl;
    cout << "value of r: " << r << endl;

  
}

