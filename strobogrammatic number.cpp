#include <iostream>
#include <cmath>
using namespace std;
char num[10][11*11*11];
void strobonum(int n) {
    num[1][0] = '0';
    num[1][1] = '1';
    num[1][2] = '8';
    for (int i = 2; i <= n; ++i) {
        int count = 0;
        for (int j = 0; j < 11 * pow(10, i - 2); ++j) {
            if (i != 1) {
                num[i][count++] = '0';
                num[i][count++] = '1';
                num[i][count++] = '8';
            }
            if (i != n) {
                num[i][count++] = '1';
                num[i][count++] = '6';
                num[i][count++] = '8';
                num[i][count++] = '9';
            }
        }
    }
}
void printstrobonum(int n) {
    strobonum(n);
    cout << "Strobogrammatic numbers of length " << n << " are:" << endl;
    for (int i = 1; i <= n; ++i) {
        for (int j = 0; j < 11 * pow(10, i - 1); ++j) {
            cout << num[i][j] << endl;
        }
    }
}
int main() {
    int n;
    cout << "Enter the length of strobogrammatic numbers: ";
    cin >> n;
    printstrobonum(n);
    return 0;
}
