#include<iostream>
#include<cmath>
using namespace std;

int gcd(int a, int b) 
{
    while (b != 0)
	{
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
void simplifyFraction(int numerator, int denominator) 
{
    int divisor = gcd(numerator, denominator);
    int simplifiedNumerator = numerator / divisor;
    int simplifiedDenominator = denominator / divisor;

    std::cout << numerator << "/" << denominator << " is simplified as " << simplifiedNumerator << "/" << simplifiedDenominator << std::endl;
}
int main() {
    int numerator, denominator;
    std::cout << "Enter the numerator: ";
    std::cin >> numerator;
    std::cout << "Enter the denominator: ";
    std::cin >> denominator;

    simplifyFraction(numerator, denominator);

    return 0;
}
