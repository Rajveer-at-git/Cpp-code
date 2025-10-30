// Program demonstrating class
# include<iostream>
using namespace std;
class item
{
    int number; // private by default
    float cost; // private by default

    public:
    void getdata(int a, float b); // had only be declared ,still have to define it 
    void putdata(void)     // Function defined inside class
    {
        cout << "number: " << number << endl;
        cout << "cost: "<< cost << endl; 
    }
};
// Member function definition
void item::getdata(int a,float b) // use membership label // If we had defined the fn inside the class we need to use scope resolution operator
{
    number = a; // private variables
    cost = b; // directly used
}

int main()
{
    item x;  //object x created 

    cout << "\nobject x: " << endl;
    x.getdata(295,199.5);   // Call member function
    x.putdata();            // Call member function 

    item y;                 // another object created

    cout<< "\nobject y: " << endl;
    y.getdata(777,500.9);
    y.putdata();
    
}
    


