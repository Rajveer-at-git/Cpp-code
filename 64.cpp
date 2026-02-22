#include <iostream>
using namespace std;
void divide(double x, double y)
{
    cout << "Inside function \n";
    try
    {
        if(y==0.0)
            throw y;    // Throwing double 
        else
            cout << "Division = " << x/y << endl;
    }
    catch(double)
    {
        cout << "Caught double inside the function\n";
        throw;
    }
    cout << "End of function\n\n";
}
int main()
{
    cout << "Inside main\n";
    try
    {
        divide(5.2,2.6);
        divide(20.0,0.0);
    }
    catch(double)
    {
        cout << "Caught the execption inside main" << endl;
    }
    cout << "End of main\n";
}