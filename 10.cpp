// WAP to demonstrate the concept of passing arguments in Member fn using call by value method.
// WAP to demonstrate teh concept of passin arguments in Member fn using call by reference.
// WAP to demonstrate "this pointer"
// Sir nay karaya hai 

class time1
{
    int h,m,s;
    public:
    void gettime (int,int,int)
    {
        h = x;
        m = y;
        s = z;
    }
    void display(void)
    {
        cout<<"Time is "<<h<<":"<<m<<":"<<s;
    }
    void Sum(time1 A,time1 B)
    {
        h = A.h + B+h;
        m = A.m + B.m;
        s = A.s + B.s;
    }
    void Sum1(time1 *A,time *B)
    {
        h = *A.h;
        m = *A.m;
        s = *A.s;
    }

};

int main()
{
    time1 T1,T2,T3,T4;
    T1.gettime(2,30,3);
    T2.gettime(1,20,3);
    T3.Sum(T1,T2);
    T1.display();
    T2.display();
    T3.display();
    T3.Sum(&T1,&T2);
}


