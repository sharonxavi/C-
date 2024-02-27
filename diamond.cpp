#include<iostream>
using namespace std;
int main(){
	int n,i,j,s=1;
	cout<<"Enter number of rows:";
	cin>>n;
	s=n-1;
	for(i=1;i<=n;i++){
		for(j=1;j<=s;j++){
			cout<<" ";
		}
		s--;
		for(j=1;j<=2*i-1;j++){
			cout<<"*";
		}
		cout<<endl;
	}
	s=1;
	for(i=1;i<=n-1;i++){
		for(j=1;j<=s;j++){
			cout<<" ";
		}
		s++;
		for(j=1;j<=2*(n-i)-1;j++){
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
	
}
