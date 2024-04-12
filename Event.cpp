#include"Event.h"



Event::Event(const std::string& _name, const std::string& _place, const Date& _date)
        : name(_name), place(_place), date(_date) {}

const std::string& Event::getName() const {
    return name;
}

const std::string& Event::getPlace() const {
    return place;
}

const Date& Event::getDate() const {
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