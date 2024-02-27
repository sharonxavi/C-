#include <iostream>
using namespace std;
bool isValidNumber(const char* s) {
    enum State {
        start, integer, decimal, exponent, sign, end
    };

    State state = start;
    int i = 0;
    while (s[i] == ' ' || s[i] == '\t') {
        i++;
    }
    if (s[i] == '+' || s[i] == '-') {
        i++;
    }
    while (s[i] >= '0' && s[i] <= '9') {
        state = integer;
        i++;
    }
    if (s[i] == '.') {
        i++;
        while (s[i] >= '0' && s[i] <= '9') {
            state = decimal;
            i++;
        }
    }
    if (state == integer || state == decimal) {
        if (s[i] == 'e' || s[i] == 'E') {
            i++;
            if (s[i] == '+' || s[i] == '-') {
                i++;
            }
            while (s[i] >= '0' && s[i] <= '9') {
                state = exponent;
                i++;
            }
        }
    }
    while (s[i] == ' ' || s[i] == '\t') {
        i++;
    }
    return (s[i] == '\0' && (state == integer || state == decimal || state == exponent));
}
int main() {
    char input[100];
    cout << "Enter a number: ";
    cin.getline(input, 100);
    if (isValidNumber(input)) {
        std::cout << "The input is a valid number." << endl;
    } else {
        cout << "The input is not a valid number." << endl;
    }
    return 0;
}
