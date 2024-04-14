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

    int getDay();

    int getMonth();

    int getYear();

    void setDay(int _day);

    void setMonth(int _month);

    void setYear(int _year);

    void display();

    friend std::ostream& operator<<(std::ostream& os, const Date& date);

    friend std::istream& operator>>(std::istream& is, Date& date);

    friend bool operator==(const Date& lhs, const Date& rhs);

    friend bool operator!=(const Date& lhs, const Date& rhs);

    friend bool operator<(const Date& lhs, const Date& rhs);

    friend bool operator<=(const Date& lhs, const Date& rhs);

    friend bool operator>(const Date& lhs, const Date& rhs);

    friend bool operator>=(const Date& lhs, const Date& rhs);

};

#endif // DATE_H
