// Factorial of a given no.
#include <iostream>

int main() {
    int number;
    unsigned long long factorial = 1;
    cout << "Enter a positive integer: ";
    cin >> number;

    for (int i = 1; i <= number; ++i) {
        factorial *= i;
    }

    cout << "Factorial of " << number << " = " << factorial << std::endl;
    return 0;
}
