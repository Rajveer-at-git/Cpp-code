// WAP to read from one file and writing it in the other 
// OR
// WAP to copy a file into another file 
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // Open the source file "Rajveer.txt" in read mode
    ifstream source("Rajveer.txt");
    if (!source) {
        cout << "Error: Could not open the source file 'Rajveer.txt'!" << endl;
        return 1; // Exit with error code
    }

    // Open the destination file "Something.txt" in write mode
    ofstream destination("Something.txt");
    if (!destination) {
        cout << "Error: Could not create or open the destination file 'Something.txt'!" << endl;
        source.close();
        return 1; // Exit with error code
    }

    // Read from the source file and write to the destination file
    string line;
    while (getline(source, line)) {
        destination << line << endl;
    }

    cout << "File 'Rajveer.txt' has been successfully copied to 'Something.txt'!" << endl;

    // Close both files
    source.close();
    destination.close();

    return 0;
}
