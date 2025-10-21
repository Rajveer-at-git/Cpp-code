// Make a student class(base class) then make a derived class exam (intermidate class)
// (Multiple inheritance)
// then make a separate class sports calculating the sports marks 
// Hybrid inheritance
// Then finally create a child class from exam and sports , showing you the student details
// giving you the final result 
# include<iostream>
using namespace std;
class Student
{
    protected:
    string name;
    public:
    void get_name(string);
    void put_name(void);
};

    void Student :: get_name(string a)
    {
        name = a;
    }
    void Student :: put_name(void)
    {
        cout << "Name of Student: " << name << endl;
    }

class exam : public Student
{
    protected:
    int sub1,sub2;
    public:
    void get_marks(int,int);
    void put_marks(void);
};

    void exam :: get_marks(int a, int b)
    {
        sub1 = a;
        sub2 = b;
    }

    void exam :: put_marks(void)
    {
        cout << "Marks of sub1: " << sub1 << endl;
        cout << "Marks of sub2: " << sub2 << endl;
    }

class sports
{
    protected:
    int fitness;
    public:
    void get_sports(int a);
    void put_sports(void);    
};

    void sports :: get_sports(int a)
    {
        fitness = a;
    }

    void sports :: put_sports(void)
    {
        cout << "Fitness Marks: " << fitness << endl;
    }

class result : public exam , public sports
{
    int total;
    public:
    void give_total(void);
};

    void result :: give_total(void)
    {
        total = sub1 + sub2 + fitness;
        put_name();
        put_marks();
        put_sports();
    }


int main()
{
    result R1;
    R1.get_name("Sheru");
    R1.get_marks(80,75);
    R1.get_sports(89);
    R1.give_total();
}