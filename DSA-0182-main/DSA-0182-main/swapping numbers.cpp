#include <iostream>
using namespace std;
int main() {
    int a = 5;
    int b = 10;
    cout << "Before swapping:\n";
    cout << "a = " << a << ", b = " << b ;
    int temp = a;
    a = b;
    b = temp;
    cout << "\nAfter swapping:\n";
    cout << "a = " << a << ", b = " << b ;
    return 0;
}

