// Function templates 
#include <iostream>
using namespace std;

template <typename T>
T add(T a, T b) {
    return a + b;
}

int main() {
    cout << add(5, 10) << endl;        // int
    cout << add(3.5, 2.1) << endl;     // float/double
    cout << add<int>('A', 1) << endl;       // char treated as int ('A' = 65, 65+1 = 66)
    return 0;
}
