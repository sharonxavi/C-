#include <iostream>
using namespace std;
void dismsg() {
    cout << "Hello";
}
int main() {
    void (*funcPtr)() = &dismsg;
    (*funcPtr)();
    return 0;
}
