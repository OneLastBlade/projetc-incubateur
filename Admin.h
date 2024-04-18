#ifndef ADMIN_H
#define ADMIN_H

#include "User.h"


class Admin : public User {
    
    
    
    public:
        Admin(const std::string& _name, const std::string& _number, const std::string& _address)
            : User(_name, _number, _address) {}
        ~Admin() {}
        
    void display() const override {
        
    }
};

#endif // ADMIN_H
