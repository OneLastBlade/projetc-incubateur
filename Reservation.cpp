#include "Reservation.h"

    Reservation::Reservation(Date startdate,Date enddate, Projet* projet, Resource* ressource):startDate(startdate),endDate(enddate), projet(projet), ressource(ressource){
        this-> isEvent = false;
    }
    Reservation::Reservation(Date date, Event* evenement, Resource* ressource):startDate(date),endDate(date), evenement(evenement), ressource(ressource){
        this->isEvent=true;
    }
    bool Reservation::isThisEvent(){
        return isEvent;
    }

    Date Reservation::dateEvent(){
        return startDate;
    }
    Resource* Reservation::getResource(){
        return ressource;
    }
    bool Reservation::isInDateRange(Date d){
        if(startDate<=d && endDate>=d)return true;
        else return false;
    }