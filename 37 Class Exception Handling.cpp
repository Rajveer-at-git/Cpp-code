// Write a program in cpp to demonstrate the dividebyzero expection and handle this exception using try, throw , catch statement
// Exam question 
// What do you mean by exception handling and explain exception handling mechanism 
// Method I
#
include <iostream> 
using namespace std;
int main()
{
    int a,b,r;
    cout << "Enter the values of a ,b: ";
    cin >> a >> b;
    int x = a-b;
  
    try
    {
        if(x!=0)
            r = a/x;
        else   
            throw(a);
    }
    
    catch (int p)
    {
        cout << "value of both variable are same: " << p << endl;
    }

    cout << "value of a: " << a << endl;
    cout << "value of b: " << b << endl;
    cout << "value of x: " << x << endl;
    cout << "value of r: " << r << endl;

  
}