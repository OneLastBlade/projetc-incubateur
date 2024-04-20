#include "Projet.h"

Projet::Projet(const std::string &nom, const std::string &objectif, const std::string &status) : nom(nom), objectif(objectif), status(status) {}

Projet& Projet::operator=(const Projet& other)
    {
        if (this != &other) // Check for self-assignment
        {
            // Copy the non-pointer members
            nom = other.nom;
            objectif = other.objectif;
            status = other.status;
            f= other.f;
        }

        return *this;
    }

    void Projet::addExpense(float a){
       f.addExepense(a);
    }
    void Projet::addRevenue(float a){
        f.addRevenue(a);
    }
    float Projet::getExpenses() const{
        return f.getExpenses();
    }
    float Projet::getRevenue() const{
        return f.getRevenues();
    }
std::ostream& operator<<(std::ostream& os,const Projet& p) {
    os << p.nom << " " << p.objectif << " " << p.status << " " << p.getExpenses() << " " << p.getRevenue();
    return os;
}

std::istream& operator>>(std::istream& is, Projet& p) {
    is >> p.nom >> p.objectif >> p.status;
    float expenses, revenue;
    is >> expenses >> revenue;
    p.addExpense(expenses);
    p.addRevenue(revenue);
    return is;
}
