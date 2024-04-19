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
    Event(){}
    Event(const std::string& _name, const std::string& _place, const Date& _date);

    ~Event() {}

    std::string getName();

    std::string getPlace();

    Date getDate();

    void setName(const std::string& _name);

    void setPlace(const std::string& _place);

    void setDate(const Date& _date);

    friend std::ostream& operator<<(std::ostream& os, const Event& event);
    
    friend std::istream& operator>>(std::istream& is, Event& event);

};

#endif // EVENT_H
