#ifndef RESSOURCEMATERIEL_H_INCLUDED
#define RESSOURCEMATERIEL_H_INCLUDED

#include "Ressource.h"

class RessourceMateriel : public Ressource {
private:
    string type;

public:
    RessourceMateriel(const string& nom, const string& type);
};

#endif // RESSOURCEMATERIEL_H_INCLUDED
