#include <iostream>
using namespace std;

class PrintNumber {
  public:
    void print(int num) {
        cout << "The number entered is " << num;
    }
};

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    PrintNumber p;
    p.print(num);
    return 0;
}

