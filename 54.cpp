#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream out;

    // Writing to "country" file
    out.open("country");
    out << "India\n";
    out << "USA\n";
    out << "Japan\n";
    out.close();

    // Writing to "capital" file
    out.open("capital");
    out << "Mumbai\n";
    out << "Washington\n";
    out << "Tokyo\n";
    out.close();


    char line[80];

    ifstream in;

    // Reading from "country" file
    in.open("country");
    cout << "Contents of country file:\n";
    while (in.getline(line, 80)) {
        cout << line << endl;
    }
    in.close();

    // Reading from "capital" file
    in.open("capital");
    cout << "\nContents of capital file:\n";
    while (in.getline(line, 80)) {
        cout << line << endl;
    }
    in.close();

    return 0;
}
