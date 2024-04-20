#ifndef RESSOURCEHUMAINE_H_INCLUDED
#define RESSOURCEHUMAINE_H_INCLUDED
#include "Resource.h"
#include "Competence.h"
#include <vector>

class ResourceHumaine : public Resource {
private:
    std::string fonction;
    std::vector<Competence> competences;

public:
    ResourceHumaine(const std::string& nom,const bool& disponibilite=true , const std::string& fonction):Resource(nom , disponibilite),fonction(fonction){}

    void ajouterCompetence(const Competence& competence){
        competences.push_back(competence);
    }
};

#endif // RESSOURCEHUMAINE_H_INCLUDED
