#include <iostream>

using namespace std;

// Euclidean Algorithm to find the greatest common divisor
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

void simplifyFraction(int numerator, int denominator) {
    // Ensure non-zero denominator
    if (denominator == 0) {
        cout << "Error: Denominator cannot be zero." << endl;
        return;
    }

    // Handle negative signs consistently
    bool isNegative = (numerator < 0) ^ (denominator < 0);
    numerator = abs(numerator);
    denominator = abs(denominator);

    // Find the greatest common divisor manually
    int commonDivisor = numerator;
    while (commonDivisor > 0 && denominator > 0) {
        if (commonDivisor > denominator) {
            commonDivisor %= denominator;
        } else {
            denominator %= commonDivisor;
        }
    }

    // Apply the common divisor
    numerator /= commonDivisor;
    denominator /= commonDivisor;

    // Print the simplified fraction
    cout << (isNegative ? "-" : "") << numerator << "/" << denominator << endl;
}

int main() {
    int numerator, denominator;

    cout << "Enter numerator: ";
    cin >> numerator;
    cout << "Enter denominator: ";
    cin >> denominator;

    simplifyFraction(numerator, denominator);

    return 0;
}

