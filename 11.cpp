// Nesting of Member fn
# include<iostream>
using namespace std;
class set
{
    int m,n;

    public:
    int largest(void);
    void input(void);
    void display(void);
};
inline int set :: largest(void)
{
    if (m>=n)
    return m;
    else
    return n;
} 
inline void set :: input(void)
{
    cout << "Enter the values of m & n: " << endl;
    cin >> m >> n;
}
inline void set :: display(void)
{
    cout << "largest value: " << largest() << endl;
}

int main()
{
    set A;
    A.input();
    A.display();
}



