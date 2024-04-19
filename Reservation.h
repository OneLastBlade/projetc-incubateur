#ifndef RESERVATION_H_INCLUDED
#define RESERVATION_H_INCLUDED
#include <ctime>
#include <string>
#include "Projet.h"
#include "Event.h"
#include "Date.h"

#include "Ressource.h"
class Reservation {
private:

    Date date;
    Projet* projet;
    bool isEvent;
    Event* evenement;
    Ressource* ressource;

public:
    Reservation(Date date, Projet* projet, Ressource* ressource);
    Reservation(Date date, Event* evenement, Ressource* ressource);
    bool isThisEvent();
    Date dateEvent();
};

#endif // RESERVATION_H_INCLUDED
