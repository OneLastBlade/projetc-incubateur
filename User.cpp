#include"User.h"

    std::string User::getName()  {
        return name;
    }

    void User::setName(const std::string& _name) {
        name = _name;
    }

    std::string User::getNumber()  {
        return number;
    }

    void User::setNumber(const std::string& _number) {
        number = _number;
    }

    std::string User::getAddress()  {
        return address;
    }

    void User::setAddress(const std::string& _address) {
        address = _address;
    }
