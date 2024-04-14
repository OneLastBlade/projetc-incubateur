#include "Projet.h"

Projet::Projet(const std::string &nom, const std::string &objectif, const std::string &status) : nom(nom), objectif(objectif), status(status) {}
Projet::Projet(const Projet &other) : nom(other.nom), objectif(other.objectif), status(other.status)
{
    for (const auto &ressource : other.Ressources)
    {
        Ressources.push_back(new Ressource(*ressource));
    }
}

Projet &Projet::operator=(const Projet &other)
{
    if (this != &other)
    {
        nom = other.nom;
        objectif = other.objectif;
        status = other.status;

        // Clean up existing Ressources
        for (auto *ressource : Ressources)
        {
            delete ressource;
        }
        Ressources.clear();

        // Copy Ressources from other
        for (const auto *ressource : other.Ressources)
        {
            Ressources.push_back(new Ressource(*ressource));
        }
    }
    return *this;
}