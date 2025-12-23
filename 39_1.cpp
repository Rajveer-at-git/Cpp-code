// WAP to read the content of the file and display on the monitor 
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    char ch; // Use a character to store each file character
    fstream ifs;

    // Open the file "Rajveer.txt" in input mode
    ifs.open("Rajveer.txt", ios::in);
    if (!ifs) { // Check if the file was opened successfully
        cout << "Error: Could not open the file!" << endl;
        return 1; // Exit the program with an error code
    }

    // Read and display the contents of the file
    cout << "Contents of the file:" << endl;
    while (ifs.get(ch)) { // Read each character until EOF
        cout << ch; // Output the character to the monitor
    }

    // Close the file
    ifs.close();

    return 0;
}
