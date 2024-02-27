#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <ctime>

int main() {
    int year, month;

    std::cout << "Enter the year: ";
    std::cin >> year;
    std::cout << "Enter the month: ";
    std::cin >> month;

    std::cout << "Here is the calendar:" << std::endl;
    std::cout << std::string(15, '-') << std::endl;
    std::cout << " " << month << "/" << year << std::endl;
    std::cout << std::string(15, '-') << std::endl;

    std::cout << "Su Mo Tu We Th Fr Sa" << std::endl;

    std::tm time_in = {};
    time_in.tm_year = year - 1900;
    time_in.tm_mon = month - 1;
    time_in.tm_mday = 1;
    std::mktime(&time_in);
    int start_day = time_in.tm_wday;

    std::vector<int> days_in_month = (31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31);
    int days = days_in_month[month - 1];

    if (month == 2 && ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)))
        days = 29;

    int day = 1;
    for (int i = 0; i < 6; ++i) {
        for (int j = 0; j < 7; ++j) {
            if (i == 0 && j < start_day)
                std::cout << "   ";
            else if (day <= days) {
                std::cout << std::setw(2) << day << " ";
                ++day;
            } else {
                break;
            }
        }
        std::cout << std::endl;
        if (day > days)
            break;
    }

    return 0;
}
