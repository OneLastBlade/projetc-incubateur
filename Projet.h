#ifndef PROJET_H_INCLUDED
#define PROJET_H_INCLUDED

#include <bits/stdc++.h>

#include"Ressource.h"
class Projet {
private:
    std::string nom;
    std::string objectif;
    std::string status;
    std::vector <Ressource*> Ressources;

public:
    Projet(const std::string& nom, const std::string& objectif, const std::string& status);
};

#endif // PROJET_H_INCLUDED
