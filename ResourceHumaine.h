#ifndef RESSOURCEHUMAINE_H_INCLUDED
#define RESSOURCEHUMAINE_H_INCLUDED
#include "Resource.h"
#include "Competence.h"
#include <vector>

class ResourceHumaine : public Resource {
private:
    std::string nom;
    std::string fonction;
    std::vector<Competence> competences;

public:
    ResourceHumaine(const std::string& nom, const std::string& fonction);

    void ajouterCompetence(const Competence& competence);
};


#endif // RESSOURCEHUMAINE_H_INCLUDED
