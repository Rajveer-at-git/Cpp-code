// There are two ways of opening a file 
// 1) using Constructor function of the class
// 2) using Member function of the class

// *** Using Constructor function *** // 

#include <fstream>
using namespace std;

int main() {
    ofstream outf("output.txt"); // Open a file for writing
    outf << "Hello, file!" << endl; // Write to the file
    outf.close(); // Close the file
    return 0;
}
