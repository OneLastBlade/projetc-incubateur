#ifndef PROJET_H_INCLUDED
#define PROJET_H_INCLUDED

#include <bits/stdc++.h>

#include "Ressource.h"

class Projet
{
private:
    std::string nom;
    float expenses=0,revenue=0;
    std::string objectif;
    std::string status;
    std::vector<Ressource*> Ressources;

public:
    Projet(const std::string &nom, const std::string &objectif, const std::string &status);

    ~Projet(){
        for (auto *ressource : Ressources)
        {
            delete ressource;
        }
        Ressources.clear();
    }
    
    Projet(const Projet &other)
        : nom(other.nom), objectif(other.objectif), status(other.status)
    {

        for (const auto &ressource : other.Ressources)
        {
            Ressources.push_back(new Ressource(*ressource));
        }
    }
    Projet& operator=(const Projet& other);
    void addExpense(float a);
    void addRevenue(float a);
    float getExpenses();
    float getRevenue();
};

#endif // PROJET_H_INCLUDED
