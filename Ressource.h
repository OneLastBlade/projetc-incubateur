#ifndef RESSOURCE_H_INCLUDED
#define RESSOURCE_H_INCLUDED

class Ressource {
protected:
    string nom;
    bool disponibilite;

public:
    Ressource(const string& nom,const bool& disponibilite);

};

#endif // RESSOURCE_H_INCLUDED
