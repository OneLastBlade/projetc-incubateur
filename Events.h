#ifndef EVENTS_H
#define EVENTS_H

#include "Event.h"
#include <iostream>
#include <string>
#include <map>
#include<vector>

class Events
{
private:
    static std::map<Date, Event> eventMap;
    
public:
    Events() {}

    static void addEvent(const std::string& name, const std::string& place,  Date& date);
    
    static void deleteEvent( Date& date);

    static void displayAllEvents();
    
    static std::vector<Event> getAllEvents();
};


#endif
