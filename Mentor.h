#ifndef MENTOR_H
#define MENTOR_H

#include "User.h"

class Mentor : public User {
private:
    std::pair<double, double> coordinates; // Latitude and longitude
    std::string domainExpertise;

public:
    Mentor(const std::string& _name, int _age, const std::string& _number, const std::string& _address,
           const std::pair<double, double>& _coordinates, const std::string& _domain)
        : User(_name, _number, _address), coordinates(_coordinates), domainExpertise(_domain) {}

    ~Mentor() {}

    
};

#endif // MENTOR_H
