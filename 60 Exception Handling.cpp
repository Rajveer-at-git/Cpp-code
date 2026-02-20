// Exception handling 
# include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout << "Enter two integer values : " ;
    cin >> a >> b;
    int x = a-b;
    try
    {
        if(x != 0)
        cout << "X = " << a-b << endl;
        else
        throw(x);
    }

    catch(int o)
    {
        cout << "Zero division Error: x = " << x << endl;
    }
   
}