#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

unordered_map<string, bool> memo;

bool isScramble(string s1, string s2) {
    if (s1 == s2) return true;
    if (s1.size() != s2.size()) return false;
    if (memo.find(s1 + "#" + s2) != memo.end()) return memo[s1 + "#" + s2];

    int n = s1.size();
    for (int i = 1; i < n; ++i) {
        if ((isScramble(s1.substr(0, i), s2.substr(0, i)) &&
             isScramble(s1.substr(i), s2.substr(i))) ||
            (isScramble(s1.substr(0, i), s2.substr(n - i)) &&
             isScramble(s1.substr(i), s2.substr(0, n - i)))) {
            return memo[s1 + "#" + s2] = true;
        }
    }
    return memo[s1 + "#" + s2] = false;
}

int main() {
    string s1 = "great";
    string s2 = "rgeat";
    
    if (isScramble(s1, s2))
        cout << "Strings are scramble." << endl;
    else
        cout << "Strings are not scramble." << endl;
    
    return 0;
}

