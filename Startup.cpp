#include "Startup.h"

using namespace std;


Startup::Startup(const std::string& _name, const std::string& _number, const std::string& _address,
            const std::pair<double, double>& _coordinates, const std::string& _domain)
        : User(_name, _number, _address), coordinates(_coordinates), domain(_domain) {}

    // Copy constructor
Startup::Startup(const Startup& other)
        : User(other), coordinates(other.coordinates), domain(other.domain), Projets(other.Projets) {}

    // Assignment operator
Startup& Startup::operator=(const Startup& other) {
        if (this != &other) {
            User::operator=(other); // Call base class assignment operator
            coordinates = other.coordinates;
            domain = other.domain;
            Projets = other.Projets;
        }
        return *this;
    }

std::ostream &operator<<(std::ostream &os, const Startup &s) {
    os <<s.getName();
    os <<s.getNumber();
    os <<s.getAddress();
    os << s.coordinates.first << s.coordinates.second;
    os << s.domain;
    for (const Projet &p : s.Projets) {
        os<< p.getName()<< p.getExpenses()<< p.getRevenue();
    }
    os<< "\n";
    return os;
}

std::istream &operator>>(std::istream &is, Startup &s) {
    std::string name, number, address, domain;
    double lat, lon;
    is >> name >> number >> address >> lat >> lon >> domain;
    std::pair<double, double> coordinates(lat, lon);
    s = Startup(name, number, address, coordinates, domain);
    return is;
}
