#include <iostream>
using namespace std;
int main() {
    double salary, bonus, finalSalary;
    char grade;
    cout << "Enter the salary: ";
    cin >> salary;
    cout << "Enter the grade (A/B): ";
    cin >> grade;
    if (salary < 100000) {
        bonus = 0.05;
        if (grade == 'B')
            bonus = 0.10;
        bonus += 0.02;
    } else {
        if (grade == 'B')
            bonus = 0.10;
        else
            bonus = 0.05;
    }
    finalSalary = salary + (salary * bonus);
    cout << "Bonus: " << (bonus * 100) << "%" << endl;
    cout << "Final Salary: " << finalSalary << " rupees" << endl;
    return 0;
}
