#include<iostream>
using namespace std;
class person{
	public:
		virtual void work(){
			cout<<"Person is working";
		}
};
class employee : public person{
public:
	void work(){
	cout<<"Employee is working";
	cout<<endl;
	}	
};	
class manager : public person{
public:
	void work(){
	cout<<"manager is working";
	}	
};
int main()
{
	employee emp;
	manager mgr;
	emp.work();
	mgr.work();
	return 0;
}
