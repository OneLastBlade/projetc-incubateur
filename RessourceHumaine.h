#ifndef RESSOURCEHUMAINE_H_INCLUDED
#define RESSOURCEHUMAINE_H_INCLUDED
#include "Ressource.h"
#include "Competence.h"
#include <vector>

class RessourceHumaine : public Ressource {
private:
    string fonction;
    vector<Competence> competences;

public:
    RessourceHumaine(const string& nom, const string& fonction);

    void ajouterCompetence(const Competence& competence);
};


#endif // RESSOURCEHUMAINE_H_INCLUDED
