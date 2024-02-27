#include<iostream>
using namespace std;
int main()
{
	int n,pos,val,arr[100],i;
	cout<<"Enter size of the array:";
	cin>>n;
	for(i=0;i<n;i++){
		cout<<"Enter elements:";
		cin>>arr[i];
	}
	cout<<"Enter the position to insert:";
	cin>>pos;
	if(pos<0||pos>n){
		cout<<"Invalid position";
	}else{
		cout<<"Enter value to insert:";
		cin>>val;
	}
	for(i=n-1;i>=pos;i--){
		arr[i+1]=arr[i];
	}
	arr[pos]=val;
	n++;
	cout<<"The array after insertion is:";
	cout<<endl;
	for(i=0;i<n;i++){
		cout<<arr[i];
		cout<<endl;
	}
	return 0;
}
