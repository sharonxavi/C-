#include <iostream>
using namespace std;
int countdig(int n) {
    int count = 0;
    for (int i = 1; i <= n; i++) {
        int num = i;
        while (num > 0) {
            if (num % 10 == 1) {
                count++;
            }
            num /= 10;
        }
    }
    return count;
}

int main() {
    int n;
    cout << "Enter the range: ";
    cin >> n;

    int result = countdig(n);

    cout << "The number of occurrences of digit 1 in the range from 1 to " << n << " is: " << result << endl;

    return 0;
}
