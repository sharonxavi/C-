#include<iostream>
using namespace std;
int main()
{
	int n,i,j,temp,arr[100];
	cout<<"Enter the no.of elements in an array:";
	cin>>n;
	cout<<"Enter the elements of array:"<<endl;
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	for(i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(arr[i]==arr[j]){
				cout<<"Duplicate element found: " << arr[i];
			}
		}
	}
	cout<<endl;
	return 0;
}
