#include"User.h"

User::User(const std::string& _name, const std::string& _number, const std::string& _address)
        : name(_name), number(_number), address(_address) {}

    std::string User::getName() const {
        return name;
    }

    void User::setName(const std::string& _name) {
        name = _name;
    }

    std::string User::getNumber() const {
        return number;
    }

    void User::setNumber(const std::string& _number) {
        number = _number;
    }

    std::string User::getAddress() const {
        return address;
    }

    void User::setAddress(const std::string& _address) {
        address = _address;
    }

    void User::display() {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Number: " << number << std::endl;
        std::cout << "Address: " << address << std::endl;
    }