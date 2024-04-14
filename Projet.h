#ifndef PROJET_H_INCLUDED
#define PROJET_H_INCLUDED

#include <bits/stdc++.h>

#include "Ressource.h"

class Projet
{
private:
    std::string nom;
    std::string objectif;
    std::string status;
    std::vector<Ressource *> Ressources;

public:
    Projet(const std::string &nom, const std::string &objectif, const std::string &status);

    Projet(const Projet &other)
        : nom(other.nom), objectif(other.objectif), status(other.status)
    {

        for (const auto &ressource : other.Ressources)
        {
            Ressources.push_back(new Ressource(*ressource));
        }
    
    }
    Projet& operator=(const Projet& other);
};

#endif // PROJET_H_INCLUDED
