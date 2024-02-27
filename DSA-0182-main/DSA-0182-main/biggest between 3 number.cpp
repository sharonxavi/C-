#include <iostream>
using namespace std;
int main() {
    int a,b,c;
    cout<<"Enter value for a:";
    cin>>a;
    cout<<"Enter value for b:";
    cin>>b;
    cout<<"Enter value for c:";
    cin>>c;
    if(a>b && a>c){
        cout<<"a is bigger";
    }
    else if(b>a && b>c){
        cout<<"b is bigger";
    }
    else{
        cout<<"c is bigger";
    }
    return 0;
}

