#include "Startup.h"

using namespace std;


Startup::Startup(const std::string& _name, int _age, const std::string& _number, const std::string& _address,
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
