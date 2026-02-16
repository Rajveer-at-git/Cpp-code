// Class Templates
#include <iostream>
using namespace std;

template <typename T1, typename T2>
class Test {
    T1 a;
    T2 b;

public:
    // Setter function to initialize a and b
    void setValues(T1 x, T2 y) {
        a = x;
        b = y;
    }

    void show() {
        cout << a << " and " << b << endl;
    }
};

int main() {
    Test<float, int> test1;
    Test<int, char> test2;

    // Initialize values using setter function
    test1.setValues(1.23, 123);
    test2.setValues(83,'R');

    test1.show();
    test2.show();

    return 0;
}