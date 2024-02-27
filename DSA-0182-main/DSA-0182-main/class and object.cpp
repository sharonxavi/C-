#include <iostream>
using namespace std;
class Student {
private:
    string name;
    int marks;
public:

    Student(string n, int m) : name(n), marks(m) {}
    void displayProfile() {
        cout << "Student Profile:\n";
        cout << "Name: " << name << "\n";
        cout << "Marks: " <<marks<<"\n";
    }
};
int main() {
    Student student1("John Doe", 20);
    Student student2("Jane Smith", 22);
    student1.displayProfile();
    cout << "\n";
    student2.displayProfile();
    return 0;
}

