#include<iostream>
using namespace std;
class bank{
	private: 
		string accnum;
		int balance;
	public:
		bank(string accnumber,int initialbal){
			accnum=accnumber;
			balance=initialbal;
			cout<<"Account with acc number "<<accnum<<" and initial balance "<<balance;
		}
		account(){
			cout<<"Account with acc number "<<accnum<<" is cancelled";
		}
};
int main()
{
	bank myaccount("12345",1000);
	return 0;
}
