// WAP to create a 'student' class having the data member to store the basic student info
// then make a derived class 'Exam' 
// then make a derived class 'Result'
// Multilevel inheritance
# include<iostream>
using namespace std;
class student
{
    string name;
    int enroll_no;
    int sem;
    public:
    void getname(string a);
    void putname();
    void getenroll(int);
    void putenroll(void);
    void setsem(int);
    void putsem(void);
};
    void student :: getname(string a)
    {
        name = a;
    } 
    void student :: putname()
    {
        cout << "Name : " << name << endl;
    }
    void student :: getenroll(int b)
    {
        enroll_no = b ;
    }
    void student :: putenroll()
    {
        cout << "Enrollment no. : " << enroll_no << endl;
    }
    void student :: setsem(int c)
    {
        sem = c;
    }
    void student :: putsem()
    {
        cout << "Sem: " << sem << endl;
    }

class Exam : public student
{
    int m1,m2,m3;
    public:
        void getmarks(int,int,int);
        void putmarks(void);
        void puttotal(void);
};

    void Exam :: getmarks(int x, int y, int z)
    {
        m1 = x ;
        m2 = y ;
        m3 = z ;
    }
    void Exam :: putmarks(void)
    {
        cout << "Sub 1 : " << m1 << endl;
        cout << "Sub 2 : " << m2 << endl;
        cout << "Sub 3 : " << m3 << endl;
    }

class result : public Exam
{
    int total;
};
    void Exam :: puttotal(void)
    {
        cout << "Result : " << (m1+m2+m3)/3 << endl;
    }

int main()
{
    result stud1;
    stud1.getname("Rohit");
    stud1.getenroll(101);
    stud1.setsem(1);
    stud1.getmarks(97,92,94);
    stud1.putname();
    stud1.putenroll();
    stud1.putsem();
    stud1.putmarks();
    stud1.puttotal();
}

   