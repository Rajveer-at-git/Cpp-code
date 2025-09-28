// Static Member function
#include <iostream>
using namespace std;
class item
{
    int code;
    static int count;

public:
    void setcode()
    {
        code = ++count;
    }
    void showcode()
    {
        cout << "Object number: " << code << endl;
    }
    static void showcount()
    {
        cout << "count: " << count << endl;
    }
};
int item ::count;

int main()
{
    item t1, t2;

    t1.setcode();
    t2.setcode();

    item ::showcount(); // accessing static member function

    item t3;
    t3.setcode();

    item ::showcount();
    
    t1.showcode();
    t2.showcode();
    t3.showcode();
}