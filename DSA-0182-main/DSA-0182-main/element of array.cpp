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
		for(j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	cout<<"The Sorted Elements are:";
	for(i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}
