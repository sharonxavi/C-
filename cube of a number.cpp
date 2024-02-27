#include<iostream>
using namespace std;
class cube {
    int n;
public:
    cube(int num) : n(num) {}
    ~cube() {
        for(int i= 1;i<=n;i++) {
            cout << "number: " << i << " cube: " << i*i*i << endl;
        }
    }
};
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cube c(num);
    return 0;
}

