#ifndef STARTUP_H
#define STARTUP_H

#include <bits/stdc++.h>
#include "User.h"
#include "Projet.h"

class Startup : public User
{
private:
    std::pair<double, double> coordinates; // Latitude and longitude
    std::string domain;
    std::vector<Projet> Projets;

public:
    Startup(const std::string &_name, int _age, const std::string &_number, const std::string &_address,
            const std::pair<double, double> &_coordinates, const std::string &_domain);
    Startup &operator=(const Startup &other);
    Startup(const Startup &other);

    ~Startup() {}
    void display() const override {
        
    }
};

#endif // STARTUP_H
