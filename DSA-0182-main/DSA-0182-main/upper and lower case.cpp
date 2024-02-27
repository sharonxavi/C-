#include <iostream>
#include <cctype> 
using namespace std;

int main() {
    char ch;
    int uppercaseCount = 0, lowercaseCount = 0, digitCount = 0;

    cout << "Enter characters (* to end): ";

    while (cin >> ch && ch != '*') {
        if (isupper(ch)) {
            uppercaseCount++;
        } else if (islower(ch)) {
            lowercaseCount++;
        } else if (isdigit(ch)) {
            digitCount++;
        }
    }

    cout << "Uppercase letters entered: " << uppercaseCount << endl;
    cout << "Lowercase letters entered: " << lowercaseCount << endl;
    cout << "Digits entered: " << digitCount << endl;

    return 0;
}
