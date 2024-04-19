#include "Reservation.h"

    Reservation::Reservation(Date date, Projet* projet, Ressource* ressource):date(date), projet(projet), ressource(ressource){
        this-> isEvent = false;
    }
    Reservation::Reservation(Date date, Event* evenement, Ressource* ressource):date(date), evenement(evenement), ressource(ressource){
        this->isEvent=true;
    }
    bool Reservation::isThisEvent(){
        return isEvent;
    }

    Date Reservation::dateEvent(){
        return date;
    }