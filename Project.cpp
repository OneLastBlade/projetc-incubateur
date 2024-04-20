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
        }

        return *this;
    }

    void Projet::addExpense(float a){
        expenses+=a;
    }
    void Projet::addRevenue(float a){
        revenue+=a;
    }
    float Projet::getExpenses(){
        return expenses;
    }
    float Projet::getRevenue(){
        return revenue;
    }
