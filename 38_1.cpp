#include <iostream>
using namespace std;

int divide(int a1, int b1) {
    int x;
    x = a1 - b1;
    try {
        if (x != 0)
            return (a1 / x); // Perform division
        else
            throw a1;       // Throw exception if x == 0
    }
    catch (int) {
        throw;              // Rethrow exception for further handling
    }
}

int main() {
    int a, b, r;
    cout << "Enter the values of a and b: "; 
    cin >> a >> b;
    try {
        r = divide(a,b);
        cout << "Value of r: " << r << endl;
    }
    catch (int P) {
        cout << "Cannot divide as both values are the same: " << P << endl;
    }
    cout << "Value of a: " << a << endl;
    cout << "Value of b: " << b << endl;
    return 0;
}
