#ifndef PROJET_H_INCLUDED
#define PROJET_H_INCLUDED

#include <bits/stdc++.h>
#include "Finance.h"
// add function to allocate a resource or delete a resource;

class Projet
{
private:
    std::string nom;
    //float expenses=0,revenue=0;
    std::string objectif;
    std::string status;
    Finance f;
public:
    Projet(){
        nom="";
        objectif="";
        status="";
    }
    Projet(const std::string &nom, const std::string &objectif, const std::string &status);

    Projet(const Projet &other)
        : nom(other.nom), objectif(other.objectif), status(other.status)
    {

    }

    std::string getName()const{
        return nom;
    }
    std::string getObjectif(){
        return objectif;
    }
    std::string getStatus(){
        return status;
    }
    Projet& operator=(const Projet& other);
    void addExpense(float a);
    void addRevenue(float a);
    float getExpenses() const;
    float getRevenue()const;

    friend std::ostream& operator<<(std::ostream& os, const Projet& p);
    friend std::istream& operator>>(std::istream& is, Projet& p);
};

#endif // PROJET_H_INCLUDED
