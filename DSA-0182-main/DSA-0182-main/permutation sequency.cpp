#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int factorial(int n) {
    if (n <= 1)
        return 1;
    return n * factorial(n - 1);
}
string getPermutation(int n, int k) {
    string result;
    vector<int> numbers;
    for (int i = 1; i <= n; ++i)
        numbers.push_back(i);
    int fact = factorial(n);
    --k;
    for (int i = 0; i < n; ++i) {
        fact = fact / (n - i);
        int index = k / fact;
        result += to_string(numbers[index]);
        numbers.erase(numbers.begin() + index);
        k %= fact;
    }
    return result;
}
int main() {
    int n = 4;
    int k = 9;
    cout << "The " << k << "-th permutation sequence of numbers from 1 to " << n << " is: ";
    cout << getPermutation(n, k) << endl;
    return 0;
}
