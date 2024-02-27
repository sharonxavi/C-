#include <iostream>
#include <string>
using namespace std;
int daysinmonth(int month, int year) {
  if (month == 2) {
    if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) {
      return 29;
    } else {
      return 28;
    }
  } else if (month == 4 || month == 6 || month == 9 || month == 11) {
    return 30;
  } else {
    return 31;
  }
}
int dayofweek(int month, int year) {
  int c = year / 100;
  int y = year % 100;
  int m = month - 2;
  if (m < 1) {
    y--;
    m += 12;
  }
  int d = (c - 1) * 25 / 4 + y + y / 4 - c / 4 + (13 * m + 2) / 5 + 1;
  return (d % 7);
}
int main() {
  int year, month;
  cout << "Enter year: ";
  cin >> year;
  cout << "Enter month (1-12): ";
  cin >> month;
  if (month < 1 || month > 12) {
    cout << "Invalid month!" << endl;
    return 1;
  }
  string month[] = {"jan", "feb", "mar", "apr", "may", "june",
                         "july", "au", "sep", "oct", "nov", "dec"};
  int days = daysInMonth(month, year);
  int firstdayofweek = dayOfWeek(month, year);
  cout << endl << "Here is the calendar:" << endl;
  cout << monthnames[month - 1] << " " << year << endl;
  cout << "Mo Tu We Th Fr Sa Su" << endl;
  for (int i = 0; i < firstdayofweek; ++i) {
    cout << "  ";
  }
  for (int i = 1; i <= days; ++i) {
    cout << i << " ";
    if ((i + firstdayofweek) % 7 == 0) {
      cout << endl;
    }
  }
  cout << endl;
  return 0;
}`

