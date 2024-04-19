#ifndef PROJET_H_INCLUDED
#define PROJET_H_INCLUDED

#include <bits/stdc++.h>

#include "Resource.h"

class Projet
{
private:
    std::string nom;
    float expenses=0,revenue=0;
    std::string objectif;
    std::string status;
    std::vector<Resource*> Resources;

public:
    Projet(const std::string &nom, const std::string &objectif, const std::string &status);

    ~Projet(){
        for (auto *ressource : Resources)
        {
            delete ressource;
        }
        Resources.clear();
    }
    
    Projet(const Projet &other)
        : nom(other.nom), objectif(other.objectif), status(other.status)
    {

        for (const auto &resource : other.Resources)
        {
            Resources.push_back(new Resource(*resource));
        }
    }
    Projet& operator=(const Projet& other);
    void addExpense(float a);
    void addRevenue(float a);
    float getExpenses();
    float getRevenue();
};

#endif // PROJET_H_INCLUDED
