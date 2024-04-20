#include"Date.h"


int Date::getDay() {
    return day;
}

int Date::getMonth() {
    return month;
}

int Date::getYear()  {
    return year;
}

void Date::setDay(int _day) {
    day = _day;
}

void Date::setMonth(int _month) {
    month = _month;
}

void Date::setYear(int _year) {
    year = _year;
}

void Date::display()  {
    std::cout << day << "/" << month << "/" << year << std::endl;
}

std::string Date::getFullDate(){

    return std::to_string(day) + "/" + std::to_string(month) + "/" + std::to_string(year);
}
#include "Date.h"

std::ostream& operator<<(std::ostream& os, const Date& date) {
    os << date.day << "/" << date.month << "/" << date.year;
    return os;
}

std::istream& operator>>(std::istream& is, Date& date) {
    is >> date.day >> date.month >> date.year;
    return is;
}

bool operator==(const Date& lhs, const Date& rhs) {
    return lhs.day == rhs.day && lhs.month == rhs.month && lhs.year == rhs.year;
}

bool operator!=(const Date& lhs, const Date& rhs) {
    return !(lhs == rhs);
}

bool operator<(const Date& lhs, const Date& rhs) {
    if (lhs.year < rhs.year) return true;
    if (lhs.year > rhs.year) return false;
    if (lhs.month < rhs.month) return true;
    if (lhs.month > rhs.month) return false;
    return lhs.day < rhs.day;
}

bool operator<=(const Date& lhs, const Date& rhs) {
    return !(rhs < lhs);
}

bool operator>(const Date& lhs, const Date& rhs) {
    return rhs < lhs;
}

bool operator>=(const Date& lhs, const Date& rhs) {
    return !(lhs < rhs);
}
