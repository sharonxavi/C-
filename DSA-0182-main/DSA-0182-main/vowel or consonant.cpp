#include<iostream>
using namespace std;
int main()
{
	char n,v;
	v='A','E','I','O','U','a','e','i','o','u';
	cout<<"Enter a Alphabet:";
	cin>>n;
	if(n == v)
		{
			cout<<"The Alphabet is vowel.";
		}
	else
		{
			cout<<"The Alphabet is consonant.";
		}
}
