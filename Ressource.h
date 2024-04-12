#ifndef RESSOURCE_H_INCLUDED
#define RESSOURCE_H_INCLUDED
#include <iostream>
class Ressource {
protected:
    std::string nom;
    bool disponibilite;

public:
    Ressource(const std::string& nom,const bool& disponibilite);

};

#endif // RESSOURCE_H_INCLUDED
