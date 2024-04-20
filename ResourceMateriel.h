#ifndef RESSOURCEMATERIEL_H_INCLUDED
#define RESSOURCEMATERIEL_H_INCLUDED

#include "Resource.h"

class ResourceMateriel : public Resource {
private:
    std::string type;

public:
    ResourceMateriel(const std::string& nom,const bool& disponibilite=true, const std::string& type):Resource(nom,disponibilite),type(type){}
};

#endif // RESSOURCEMATERIEL_H_INCLUDED
