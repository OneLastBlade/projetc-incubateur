#ifndef DATE_H
#define DATE_H

#include <iostream>

class Date {
private:
    int day;
    int month;
    int year;

public:
    Date(int _day, int _month, int _year) : day(_day), month(_month), year(_year) {}

    ~Date() {}

    int getDay() {
        return day;
    }

    int getMonth() {
        return month;
    }

    int getYear() {
        return year;
    }

    void setDay(int _day) {
        day = _day;
    }

    void setMonth(int _month) {
        month = _month;
    }

    void setYear(int _year) {
        year = _year;
    }

    void display() {
        std::cout << day << "/" << month << "/" << year << std::endl;
    }
};

#endif // DATE_H
