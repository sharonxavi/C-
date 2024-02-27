#include <iostream>
using namespace std;
class myclass {
public:
    int data;
    myclass(int val) : data(val) {}
};
int main() {
    myclass obj(10);
    cout << "Data: " << obj.data << endl;

    return 0;
}
