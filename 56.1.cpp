// Binary file handling 
// Binary file handling - writing and reading a float array
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main() {
    float height[4] = {175.5, 153.0, 167.25, 160.70};

    // --- Writing to the binary file ---
    ofstream outfile;
    outfile.open("BINARY", ios::binary); // Open file in binary mode
    outfile.write((char *) &height, sizeof(height)); // Write the array
    outfile.close(); // Close the file

    // --- Clearing the array from memory ---
    for (int i = 0; i < 4; i++)
        height[i] = 0;

    // --- Reading from the binary file ---
    ifstream infile;
    infile.open("BINARY", ios::binary); // Open in binary mode
    infile.read((char *) &height, sizeof(height)); // Read the data
    infile.close(); // Close the input file

    // --- Displaying the values read ---
    for (int i = 0; i < 4; i++) {
        cout << height[i] << " "; // Display each value with a space in between
    }
    cout << endl;
    return 0;
}
