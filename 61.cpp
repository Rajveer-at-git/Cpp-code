#include <iostream>
using namespace std;
void Division(int a, int b, int x)
{
    if((a-b)!=0)
    {  
        int R = x/(a-b);
        cout << "R = " << R << endl;
    }
    else
        throw(a-b);
}
int main()
{
    try
    {
        Division(10,20,30);
        Division(10,10,20);
    }   
    catch(int a)
    {
        cout << "Zero Divison Error, values of a and b are same." << endl;
    }
}
