#include<iostream>
using namespace std;
bool validusername(string username) {
    return username.length()>=5&&username.length()<=15;
}
int main() {
    string username;
    cout << "Enter a username: ";
    cin >> username;

    if(validusername(username)) {
        cout << "The username is valid.";
    } else {
        cout << "The username is not valid.";
    }
    return 0;
}

