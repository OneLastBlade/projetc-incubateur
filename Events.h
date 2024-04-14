#ifndef EVENTS_H
#define EVENTS_H

#include "Event.h"
#include <iostream>
#include <string>
#include <map>

class Events
{
private:
    static std::map<std::string, Event> eventMap;

public:
    Events() {}

    static void addEvent(const std::string& name, const std::string& place, const Date& date);

    static void deleteEvent(const std::string& name);

    static void displayAllEvents();
};

std::map<std::string, Event> Events::eventMap;

#endif EVENTS_H