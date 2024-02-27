#include <iostream>
using namespace std;
bool match(string s, string p) {
    int m = s.length(), n = p.length(), i, j;
    bool dp[m + 1][n + 1];
    dp[0][0] = true;
    for (i = 0; i <= m; i++) {
        for (j = 1; j <= n; j++) {
            if (p[j - 1] == '*') {
                dp[i][j] = dp[i][j - 2] || (i > 0 && (s[i - 1] == p[j - 2] || p[j - 2] == '.') && dp[i - 1][j]);
            } else {
                dp[i][j] = i > 0 && dp[i - 1][j - 1] && (s[i - 1] == p[j - 1] || p[j - 1] == '.');
            }
        }
    }
    return dp[m][n];
}
int main() {
    string s , p ;
    cout<<"Enter value for s:";
    cin>>s;
    cout<<"Enter value for p:";
    cin>>p;
    if (match(s, p)) {
        cout << "String matches the pattern";
    } else {
        cout << "String does not match the pattern";
    }
    return 0;
}
