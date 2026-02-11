// First write to a file , then read it back and display it on the screen
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream out("ITEM");
    cout << "Enter item name: ";
    char name[30];
    cin >> name;

    out << name << "\n"; 
    
    cout << "Enter item cost: ";
    float cost;
    cin >> cost;

    out << cost << "\n"; 

    out.close();

    ifstream in("ITEM");

    in >> name >> cost;
    cout << "\n";
    cout << "Item name: " << name << endl;
    cout << "Item cost: " << cost << endl;

    in.close();
}
