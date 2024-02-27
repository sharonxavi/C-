#include<iostream>
#include<cmath>
using namespace std;

double getValidMark() 
{
  double mark;
  while (true) 
  {
    cout << "Enter a mark between 0 and 100: ";
    cin >> mark;
    if (mark >= 0 && mark <= 100) {
      return mark;
    } else {
      cout << "Invalid mark entered. Please try again." << endl;
    }
  }
}

double calculateAverage(double marks[], int size) {
  double sum = 0.0;
  for (int i = 0; i < size; ++i) {
    sum += marks[i];
  }
  return sum / size;
}

int main() {
  double marks[3];
  int valid_inputs = 0;
  for (int i = 0; i < 3; ++i) 
  {
    marks[i] = getValidMark();
    valid_inputs++;
  }
  if (valid_inputs == 3) 
  {
    double average = calculateAverage(marks, 3);
    cout << "Avg mark is " << average << endl;
  } else {
    cout << "Invalid marks entered, cannot calculate average." << endl;
  }
  return 0;
}
