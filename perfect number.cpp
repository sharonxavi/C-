#include <iostream>
using namespace std;
bool perfect(int num) {
    int sum = 0,i;
    for(i=1;i<=num/2;i++){
        if(num%i==0) {
            sum+=i;
        }
    }
    return sum==num;
}
int main() {
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    if(num <= 0){
        cout<<"Invalid input"<<endl;
    }else{
        if(perfect(num)){
            cout<<num<<" is a perfect number"<<endl;
        } else {
            cout<<num<<" is not a perfect number"<< endl;
        }
    }
    return 0;
}
