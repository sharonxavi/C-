#include <iostream>
using namespace std;
int main() {
    int dividend, divisor, quotient, remainder;
    cout << "Enter dividend: ";
    cin >> dividend;
    cout << "Enter divisor: ";
    cin >> divisor;
    quotient = dividend / divisor;
    remainder = dividend % divisor;
    cout << "Quotient: " << quotient << std::endl;
    cout << "Remainder: " << remainder << std::endl;
    return 0;
}

