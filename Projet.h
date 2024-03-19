#ifndef PROJET_H_INCLUDED
#define PROJET_H_INCLUDED

class Projet {
private:
    string nom;
    string objectif;
    string status;


public:
    Projet(const string& nom, const string& objectif, const string& status);
};

#endif // PROJET_H_INCLUDED
