// #include <iostream>
// using namespace std;

// int size = 3;

// class employee {
//     int age;
// public:
//     void getdata();
//     void putdata();
// };

// void employee::getdata() {
//     cout << "Enter age: ";
//     cin >> age;
// }

// void employee::putdata() {
//     cout << "Age: " << age << endl;
// }


// int main() {
//     employee manager[size];

//     for (int i = 0; i < size; i++) {
//         cout << "\nDetails of Manager " << i + 1 << endl;
//         manager[i].getdata();
//     }
    
//     cout << endl;

//     for (int i = 0; i < size; i++) {
//         cout << "\nDetails of Manager " << i + 1 << endl;
//         manager[i].putdata();
//     }

//     return 0;
// }


// Array of Objects
#include <iostream>
#include <string>

class Employee {
    std::string name;
    int age;
public:
    void getdata();
    void putdata() const; // Marked as const since it doesn't modify the object
};

void Employee::getdata() {
    std::cout << "Enter name: ";
    std::getline(std::cin, name);
    std::cout << "Enter age: ";
    std::cin >> age;
    std::cin.ignore(); // To ignore the newline character left by cin
}

void Employee::putdata() const {
    std::cout << "Name: " << name << std::endl;
    std::cout << "Age: " << age << std::endl;
}

const int size = 3;

int main() {
    Employee manager[size];

    for (int i = 0; i < size; i++) {
        std::cout << "\nDetails of Manager " << i + 1 << std::endl;
        manager[i].getdata();
    }

    std::cout << std::endl;

    for (int i = 0; i < size; i++) {
        std::cout << "\nDetails of Manager " << i + 1 << std::endl;
        manager[i].putdata();
    }

    return 0;
}