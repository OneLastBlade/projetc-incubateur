#ifndef RESSOURCEMATERIEL_H_INCLUDED
#define RESSOURCEMATERIEL_H_INCLUDED

#include "Resource.h"

class ResourceMateriel : public Resource {
private:
    std::string type;

public:
    ResourceMateriel(const std::string& nom,const bool& disponibilite, const std::string& type):Resource(nom,disponibilite),type(type){}

    std::string getInfo() override {
        return getName()+" "+type;
    }
};

#endif // RESSOURCEMATERIEL_H_INCLUDED
