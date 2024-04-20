#include "Events.h"
#include <iostream>

std::map<Date, Event> Events::eventMap;


void Events::addEvent(const std::string& name, const std::string& place, Date& date) {
    Event a(name,place,date);
    eventMap.insert({date,a});
}

void Events::deleteEvent( Date& date) {
    auto it = eventMap.find(date);
    if (it != eventMap.end()) {
        eventMap.erase(it);
    }
}

void Events::displayAllEvents() {
    for (auto pair : eventMap) {
        Event& event = pair.second;
        std::cout << "Name: " << event.getName() << ", Place: " << event.getPlace() << ", Date: ";
        std::cout << event.getDate()<<std::endl;
        //event.getDate().display(); // Assuming Date has a display() method
        std::cout << std::endl;
    }
}
