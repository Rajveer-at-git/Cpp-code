/*#include <iostream>
using namespace std;
class item
{
    static int count;
    int number;
    public:
    void getdata(int a)
    {
        number = a;
        count++;
    }
    void getcount()
    {
        cout << "count: ";
        cout << count << endl;

    }
};

int item :: count;

int main()
{
    item a,b,c;
    a.getcount();
    b.getcount();
    c.getcount();

    a.getdata(100);
    b.getdata(200);
    c.getdata(300);

    cout << "After reading the data: " << endl;
    a.getcount();
    b.getcount();
    c.getcount();
}*/

// static  static data member or member variable 
# include<iostream>
using namespace std;
class item
{
    static int count;
    int number;
    public:
    void getdata(int);
    void getcount();
};

    int item :: count;

void item :: getdata(int a)
{
    number = a;
    count++;
}
void item :: getcount()
{
    cout << "count: ";
    cout << count << endl;
}

int main()
{
    item a,b,c;
    a.getcount();
    b.getcount();
    c.getcount();
    
    cout << endl;

    a.getdata(100);
    b.getdata(200);
    c.getdata(300);

    a.getcount();
    b.getcount();
    c.getcount();

}

