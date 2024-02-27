#include<iostream>
using namespace std;
int main()
{
    int year;
    cout<<"Enter year:";
    cin>>year;
    if(year%4==0){
        cout<<"The entered year is an leap year";
    }
    else{
        cout<<"The entered year is not an leap year";
    }
    return 0;
}

