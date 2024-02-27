#include <iostream>
using namespace std;

class SizeOfDataTypes {
  public:
    void find() {
        cout << "Size of int: " << sizeof(int) << " bytes" << endl;
        cout << "Size of float: " << sizeof(float) << " bytes" << endl;
        cout << "Size of double: " << sizeof(double) << " bytes" << endl;
        cout << "Size of char: " << sizeof(char) << " byte";
    }
};

int main() {
    SizeOfDataTypes s;
    s.find();
    return 0;
}

