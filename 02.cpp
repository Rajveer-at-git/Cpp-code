#include<iostream>
using namespace std;

class person {
    char name[100];
    char fname[100];
    float w;

public:
    int age;
    void input() {
        cout << "Enter your name: ";
        cin >> name;
        cout << "Enter your age: ";
        cin >> age;
        cout << "Enter your weight: ";
        cin >> w;
        cout << "Enter your father's name: ";
        cin >> fname;
    }

    void output() {
        cout << "Your name is: " << name << endl;
        cout << "Your father's name is: " << fname << endl;
        cout << "Your age is: " << age << endl;
        cout << "Your weight is: " << w << " kg" << endl;
    }
};

int main() {
    person p1;
    p1.input();   // Call input to get user input
    p1.output();  // Call output to display the entered data
    return 0;
}
