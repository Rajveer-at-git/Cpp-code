#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream inFile("source.txt");  // Open the source file for reading
    ofstream outFile("destination.txt");  // Open the destination file for writing

    if (!inFile || !outFile) {
        cout << "Error opening files!" << endl;
        return 1;
    }

    char ch;
    while (inFile.get(ch)) {  // Read character by character from source
        outFile.put(ch);      // Write each character to destination
    }

    cout << "File copied successfully!" << endl;

    inFile.close();
    outFile.close();

    return 0;
}