#ifndef RESERVATION_H_INCLUDED
#define RESERVATION_H_INCLUDED
#include <ctime>
#include <string>
class Reservation {
private:
    time_t debut;
    time_t fin;
    Projet* projet;
    bool isEvent;
    Evenement* evenement;
    Ressource* ressource;

public:
    Reservation(time_t debut, time_t fin, Projet* projet, Ressource* ressource);
    Reservation(time_t debut, time_t fin, Evenement* evenement, Ressource* ressource);
};

#endif // RESERVATION_H_INCLUDED
