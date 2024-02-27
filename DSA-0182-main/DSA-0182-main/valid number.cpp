#include <iostream>
#include <string>
#include <cctype>

using namespace std;
bool isNumber(string s) {
    int i = 0;
    int n = s.size();
    while (i < n && isspace(s[i])) {
        i++;
    }
    if (i < n && (s[i] == '+' || s[i] == '-')) {
        i++;
    }
    bool isNumeric = false;
    while (i < n && isdigit(s[i])) {
        i++;
        isNumeric = true;
    }
    if (i < n && s[i] == '.') {
        i++;
        while (i < n && isdigit(s[i])) {
            i++;
            isNumeric = true;
        }
    }
    if (isNumeric && i < n && (s[i] == 'e' || s[i] == 'E')) {
        i++;
        isNumeric = false;
        if (i < n && (s[i] == '+' || s[i] == '-')) {
            i++;
        }
        while (i < n && isdigit(s[i])) {
            i++;
            isNumeric = true;
        }
    }
    while (i < n && isspace(s[i])) {
        i++;
    }
    return isNumeric && i == n;
}
int main() {
    string input;
    cout << "Enter a string to check if it's a valid number: ";
    getline(cin, input);
    if (isNumber(input)) {
        cout << "The given string is a valid number." << endl;
    } else {
        cout << "The given string is not a valid number." << endl;
    }
    return 0;
}
