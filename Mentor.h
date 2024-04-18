#ifndef MENTOR_H
#define MENTOR_H

#include "User.h"

class Mentor : public User {
private:
    std::string domainExpertise;

public:
    Mentor(const std::string& _name, int _age, const std::string& _number, const std::string& _address,
         const std::string& _domain)
        : User(_name, _number, _address), domainExpertise(_domain) {}

    ~Mentor() {}

    void display() const override {
        
    }

    
};

#endif // MENTOR_H
