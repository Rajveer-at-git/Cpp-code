// Write a program in cpp to demonstrate the working of inline fn to find out square and cube of a given no.
# include<iostream>
using namespace std;
int Square(int);
int Cube(int); 
int main(){
    int p;
    cout<<"Enter the value of p: ";
    cin>>p;
    int R1  = Square(p);
    int R2 = Cube(p);
    cout<<"Square of p is : "<<R1<< endl;
    cout<<"Cube of p is : "<<R2<< endl;
    return 0;

}

inline int Square(int x)
{
    return (x*x);
}

inline int Cube(int x)
{
    return (x*x*x);
}





