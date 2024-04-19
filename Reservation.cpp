#include "Reservation.h"

    Reservation::Reservation(Date date, Projet* projet, Resource* ressource):date(date), projet(projet), ressource(ressource){
        this-> isEvent = false;
    }
    Reservation::Reservation(Date date, Event* evenement, Resource* ressource):date(date), evenement(evenement), ressource(ressource){
        this->isEvent=true;
    }
    bool Reservation::isThisEvent(){
        return isEvent;
    }

    Date Reservation::dateEvent(){
        return date;
    }