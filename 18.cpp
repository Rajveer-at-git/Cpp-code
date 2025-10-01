// How to find the greatest among many using loop 
#include <iostream>
using namespace std;
int main()
{
    int a[8] = {24,96,65,104,99,-2,15,7};
    int max = a[0];
    for(int i = 1; i < size(a); i++)
    {
        if( max < a[i])
        {
            max = a[i];
        }
    }
    cout << "Max: " << max << endl;
}