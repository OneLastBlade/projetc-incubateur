#ifndef RESSOURCE_H_INCLUDED
#define RESSOURCE_H_INCLUDED
#include <iostream>
#include "Event.h"
#include "Projet.h"

class Ressource {
protected:
    std::string nom;
    bool disponibilite;

public:
    Ressource(const std::string& nom,const bool& disponibilite):nom(nom),disponibilite(disponibilite){}
    ~Ressource(){}

    std::string getName(){
        return nom;
    }
    bool getDispo(){
        return disponibilite;
    }
    void changeDispo(bool b){
        disponibilite = b;
    }
};

#endif // RESSOURCE_H_INCLUDED
