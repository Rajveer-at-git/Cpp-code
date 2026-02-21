// Multiple catch block
#include <iostream>
using namespace std;
void Exception(int x)
{
    try
    {
        if (x == 1)
            throw x;
        else if (x == 0)
            throw 'x';
        else if (x == -1)
            throw 1.0;
        cout << "End of try block." << endl;;
    }
    catch(int a)
    {
        cout << "Caught an integer." << endl;
    }
    catch(char a)
    {
        cout << "Caught an character." << endl;
    }
    catch(double a)
    {
        cout << "Caught a float." << endl;
    }
    cout << "End of try-catch system." << "\n\n";
}
int main()
{
    Exception(1);
    Exception(0);
    Exception(-1);
    Exception(2);
}