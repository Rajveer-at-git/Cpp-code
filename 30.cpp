// Multilevel inheritance
# include<iostream>
using namespace std;
class student
{
    protected:
        int roll_number;
    public:
        void get_number(int);
        void put_number(void);
};

void student :: get_number(int a)
{
    roll_number = a;
}

void student :: put_number(void)
{
    cout << "Roll No. : " << roll_number << endl;
}

class test : public student     // First level derivation
{
    protected:
        float sub1;
        float sub2;
    public:
        void get_marks(float,float);
        void put_marks(void);
};

void test :: get_marks(float a, float b)
{
    sub1 = a;
    sub2 = b;
}

void test :: put_marks(void)
{
    cout << "Marks of subject 1 : " << sub1 << endl;
    cout << "Marks of subject 2 : " << sub2 << endl;
}

class result : public test  // Second level derivation
{
        float total;
    public:
        void display(void);
};

void result :: display(void)
{
    total = (sub1 + sub2)/2;
    put_number();
    put_marks();
    cout << "Total : " << total << endl;
}

int main(){
    result student1;
    student1.get_number(111);
    student1.get_marks(75.0,83.5);

    student1.display();

    result student2;
    student2.get_number(112);
    student2.get_marks(77.3,85.9);

    student2.display();

}