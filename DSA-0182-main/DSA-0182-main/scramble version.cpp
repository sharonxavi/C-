#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
unordered_map<string, bool> memo;
bool isScramble(string s1, string s2) {
    if (s1 == s2) return true;
    if (s1.size() != s2.size()) return false;
    string key = s1 + "," + s2;
    if (memo.find(key) != memo.end()) return memo[key];
    int count[26] = {0};
    for (int i = 0; i < s1.size(); ++i) {
        count[s1[i] - 'a']++;
        count[s2[i] - 'a']--;
    }
    for (int i = 0; i < 26; ++i) {
        if (count[i] != 0) {
            memo[key] = false;
            return false;
        }
    }
    int n = s1.size();
    for (int i = 1; i < n; ++i) {
        if ((isScramble(s1.substr(0, i), s2.substr(0, i)) && isScramble(s1.substr(i), s2.substr(i))) ||
            (isScramble(s1.substr(0, i), s2.substr(n - i)) && isScramble(s1.substr(i), s2.substr(0, n - i)))) {
            memo[key] = true;
            return true;
        }
    }
    memo[key] = false;
    return false;
}
int main() {
    string s1 = "great";
    string s2 = "rgeat";
    if (isScramble(s1, s2)) {
        cout << "The strings are scrambled versions of each other." << endl;
    } else {
        cout << "The strings are not scrambled versions of each other." << endl;
    }
    return 0;
}
