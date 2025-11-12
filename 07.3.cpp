# include<iostream>
using namespace std;
class Time
{
    int hours,minutes;
    public:
    void gettime(int h, int m)
    { hours = h; minutes = m; }
    void puttime(void)
    {
        cout << hours << " hours and "
        << minutes << " minutes \n";
    }
    void Sum(Time,Time);
};

    void Time :: Sum(Time t1, Time t2)
    {
        minutes = t1.minutes + t2.minutes;
        hours = minutes/60;
        minutes = minutes%60;
        hours = hours + t1.hours + t2.hours ;
    }


int main()
{
    Time T1,T2,T3;

    T1.gettime(2,33);
    T2.gettime(8,10);
    
    T3.Sum(T1,T2);

    cout << "T1 : " ; T1.puttime();
    cout << "T2 : " ; T2.puttime();
    cout << "T3 : " ; T3.puttime();
}