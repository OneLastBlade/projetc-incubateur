#ifndef RESSOURCEMATERIEL_H_INCLUDED
#define RESSOURCEMATERIEL_H_INCLUDED

#include "Ressource.h"

class RessourceMateriel : public Ressource {
private:
    std::string type;

public:
    RessourceMateriel(const std::string& nom, const std::string& type);
};

#endif // RESSOURCEMATERIEL_H_INCLUDED
