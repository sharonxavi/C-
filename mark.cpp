#include<iostream>
using namespace std;
class S{
	private:
    int marks;
public:
    S() : marks(0) {}
    S(int m) 
	{
        setMarks(m);
    }
    int setMarks(int m) 
	{
        while (m < 0 || m > 100) 
		{
            cout << "Invalid marks! Please enter marks between 0 and 100: ";
            cin >> m;
        }
        marks = m;
    }
    int displayMarks() const 
	{
        cout << "Marks: " << marks << endl;
    }
    int getMarks() const 
	{
        return marks;
    }
};
class Stud
{
	private:
		S S1;
		S S2;
		S S3;
	public:
		Stud() {}
		Stud(int m1, int m2, int m3) : S1(m1), S2(m2), S3(m3){}
	int displayAverageMarks() const 
	{
        int avg = (S1.getMarks() + S2.getMarks() + S3.getMarks()) / 3;
        cout << "Average Marks: " << avg << endl;
    }
};
int main()
{
	int m1, m2, m3;
	cout<<"Enter the Subject 1 Marks:";
	cin>>m1;
	cout<<"Enter the Subject 2 Marks:";
	cin>>m2;
	cout<<"Enter the Subject 3 Marks:";
	cin>>m3;
	Stud stud1(m1, m2, m3);
    stud1.displayAverageMarks();
    return 0;
}

