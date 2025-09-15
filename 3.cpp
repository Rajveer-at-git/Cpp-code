# include<iostream>
# include<cstring>
using namespace std;
int main(){
    struct student
    {
        char name[100];
        int age;
        float total_marks;
    };
    struct student A; //We can omit the the keyword struct in c++ 
    student B,C;
    A.age = 18;
    A.total_marks = 90;
    strcpy(B.name,"Shraddha Choudhary");
    strcpy(A.name,"Rajveer Choudhary");
    cout<<"Name of A: "<<A.name<<endl<<"Age of A: "<<A.age<<endl<<"Total marks obtained by A: "<<A.total_marks<<endl;
    cout<<"Name of B: "<<B.name<<endl;

}