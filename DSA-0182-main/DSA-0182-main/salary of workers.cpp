#include<iostream>
using namespace std;
int main()
{
	int g,s,b,T_S,A,B;
	cout<<"Enter worker salary:";
	cin>>s;
	cout<<"Enter worker grade:";
	cin>>g;
	if(g==A){
		b=(0.05)*s;
	}
	else if(g==B){
		b=(0.10)*s;
	}
	else{
		cout<<"INVALID GRADE.";
		return 1;
	}
	if(s<10000){
		b+=(0.02)*s;
	}
	T_S=b+s;
cout<<"The total salary of the worker is:"<<T_S;

}
