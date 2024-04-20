#ifndef COMPETENCE_H_INCLUDED
#define COMPETENCE_H_INCLUDED
#include <string>

class Competence {
private:
    std::string domaine;

public:
    Competence(const std::string& domaine=""):domaine(domaine){}

    std::string getDomaine(){
        return domaine;
    }
    std::string setDomaine(std::string s){
        domaine =s;
    }

};


#endif // COMPETENCE_H_INCLUDED
