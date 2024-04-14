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