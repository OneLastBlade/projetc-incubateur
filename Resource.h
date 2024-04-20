#ifndef RESSOURCE_H_INCLUDED
#define RESSOURCE_H_INCLUDED
#include <iostream>
#include "Event.h"
#include "Projet.h"

class Resource {
protected:
    std::string nom;
    bool disponibilite;

public:
    Resource(const std::string& nom,const bool& disponibilite=true):nom(nom),disponibilite(disponibilite){}
    ~Resource(){}

    std::string getName(){
        return nom;
    }
    bool getDispo(){
        return disponibilite;
    }
    void changeDispo(bool b){
        disponibilite = b;
    }

    virtual std::string getInfo(){
        return nom;
    }

    //virtual void display() const = 0; 
};

#endif // RESSOURCE_H_INCLUDED
