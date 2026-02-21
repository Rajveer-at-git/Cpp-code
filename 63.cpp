# include<iostream>
using namespace std;
void Check(int x)
{
    try
    {
        if (x==1)
            throw(x);
        else if(x==0)
            throw('x');
        else if(x==-1)
            throw(2.0);
    }
    catch(...)
    {
        cout << "An exception has been caught.\n";
    }
}
int main()
{
    Check(1);
    Check(0);
    Check(-1);
}