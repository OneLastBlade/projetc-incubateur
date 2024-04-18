#include"Event.h"


Event::Event(const std::string& _name, const std::string& _place, const Date& _date)
        : name(_name), place(_place), date(_date) {}

std::string Event::getName()  {
    return name;
}

std::string Event::getPlace()  {
    return place;
}

Date Event::getDate() {
    return date;
}

void Event::setName(const std::string& _name) {
    name = _name;
}

void Event::setPlace(const std::string& _place) {
    place = _place;
}

void Event::setDate(const Date& _date) {
    date = _date;
}

#include "Event.h"

std::ostream& operator<<(std::ostream& os, Event& event) {
    os << "Name: " << event.getName() << ", Place: " << event.getPlace() << ", Date: " << event.getDate();
    return os;
}

std::istream& operator>>(std::istream& is, Event& event) {
    is >> event.name >> event.place >> event.date; // Assuming Date has a suitable input operator
    return is;
}