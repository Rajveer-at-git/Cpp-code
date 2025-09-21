// WAP in cpp to demonstrate the working of static data members and static member functions 
#include <iostream>
using namespace std;
class Item
{
        static int count;
        int data;
    public:
        void getdata(void);
        void showcount(void);
        void putdata(void)
        {
            cout << "data: " << data << endl;
        }
};

        // Define the static member outside the class
        int Item::count = 0;
        
        void Item :: getdata(void)
        {
            cout << "Enter data: ";
            cin >> data;
            count++;
        }

        void Item :: showcount(void)
        {
            cout << "\ncount: " << count << "\n" << endl;
        }

int main()
{
    Item I1,I2,I3;
    I1.getdata();
    I2.getdata();
    I3.getdata();

    I1.showcount();

    I1.putdata();
    I2.putdata();
    I3.putdata();
}