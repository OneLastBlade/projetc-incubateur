#include "Events.h"
#include <iostream>

std::map<std::string, Event> Events::eventMap;

void Events::addEvent(const std::string& name, const std::string& place, const Date& date) {
    eventMap[name] = Event(name, place, date);
}

void Events::deleteEvent(const std::string& name) {
    auto it = eventMap.find(name);
    if (it != eventMap.end()) {
        eventMap.erase(it);
    }
}

void Events::displayAllEvents() {
    for (auto& pair : eventMap) {
        Event& event = pair.second;
        std::cout << "Name: " << event.getName() << ", Place: " << event.getPlace() << ", Date: ";
        event.getDate().display(); // Assuming Date has a display() method
        std::cout << std::endl;
    }
}
