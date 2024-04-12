#ifndef EVENT_H
#define EVENT_H

#include"Date.h"
#include <string>

class Event {
private:
    std::string name;
    std::string place;
    Date date;

public:
    Event(const std::string& _name, const std::string& _place, const Date& _date);

    const std::string& getName();

    const std::string& getPlace();

    const Date& getDate();

    void setName(const std::string& _name);

    void setPlace(const std::string& _place);

    void setDate(const Date& _date);
};

#endif // EVENT_H
