#include <iostream>
#include <fstream>
using namespace std;

class student {
    int sem = 10 , a = 20;
    char name[20];

public:
    void input() {
        cout << "Enter semester: ";
        cin >> sem;
        cin.ignore(); // Clear the newline character from the input buffer
        cout << "Enter name: ";
        cin.getline(name, 20);
    }

    void output() {
        cout << "Semester: " << sem << endl;
        cout << "Name: " << name << endl;
    }
};

int main() {
    student s1, s2;
    s1.input();

    fstream fs;
    
    fs.open("student.data", ios::out | ios::binary);
    fs.write((char *)&s1, sizeof(s1));
    fs.close();

    fs.open("student.data", ios::in | ios::binary); 
    fs.read((char *)&s2, sizeof(s2));
    fs.close();

    s2.output();

    return 0;
}