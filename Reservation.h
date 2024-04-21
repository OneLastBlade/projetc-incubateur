#ifndef RESERVATION_H_INCLUDED
#define RESERVATION_H_INCLUDED
#include <ctime>
#include <string>
#include "Projet.h"
#include "Event.h"
#include "Date.h"

#include "Resource.h"
class Reservation {
private:

    Date startDate , endDate;
    Projet* projet;
    bool isEvent;
    Event* evenement;
    Resource* ressource;

public:
    Reservation(Date startdate,Date enddate, Projet* projet, Resource* ressource);
    Reservation(Date date, Event* evenement, Resource* ressource);
    Date getStartDate();
    Date getEndDate();
    Resource* getResource();
    bool isThisEvent();
    Date dateEvent();
    bool isInDateRange(Date);
    
};

#endif // RESERVATION_H_INCLUDED
