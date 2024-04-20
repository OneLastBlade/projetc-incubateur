#include "Projet.h"

Projet::Projet(const std::string &nom, const std::string &objectif, const std::string &status) : nom(nom), objectif(objectif), status(status) {}

Projet& Projet::operator=(const Projet& other)
    {
        if (this != &other) // Check for self-assignment
        {
            // Copy the non-pointer members
            nom = other.nom;
            objectif = other.objectif;
            status = other.status;
            f= other.f;
        }

        return *this;
    }

    void Projet::addExpense(float a){
       f.addExepense(a);
    }
    void Projet::addRevenue(float a){
        f.addRevenue(a);
    }
    float Projet::getExpenses(){
        return f.getExpenses();
    }
    float Projet::getRevenue(){
        return f.getRevenues();
    }
