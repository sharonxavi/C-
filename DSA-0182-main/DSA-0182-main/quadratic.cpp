#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b,c,x,y,z,z1;
	cout<<"Enter the numbers:";
	cin>>a>>b>>c;
	x=b*b-(4*a*c);
	y=sqrt(x);
	z=(-b+(y)/2*a);
	z1=(-b-(y)/2*a);
	cout<<z <<z1;
	return 0;
}
