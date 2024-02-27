#include <iostream>
using namespace std;
int getvalidmark() {
  int mark;
  while (true) {
    cout << "Enter a mark between 0 and 100: ";
    cin >> mark;
    if (mark >= 0 && mark <= 100) {
      return mark;
    } else {
      cout << "Invalid mark entered. Please try again." << endl;
    }
  }
}
int calculateaverage(int marks[], int size) {
  int sum = 0,i;
  for ( i = 0; i < size; ++i) {
    sum += marks[i];
  }
  return sum / size;
}
int main() {
  int marks[3];
  int valid_inputs = 0;
  for (int i = 0; i < 3; ++i) {
    marks[i] = getvalidmark();
    valid_inputs++;
  }
  if (valid_inputs == 3) {
    int average = calculateaverage(marks, 3);
    cout << "Avg mark is " << average << endl;
  } else {
    cout << "Invalid marks entered, cannot calculate average." << endl;
  }
  return 0;
}

