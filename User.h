#ifndef USER_H
#define USER_H

#include <iostream>
#include <string>

class User {
protected:
    std::string name;
    std::string number;
    std::string address;

public:
    User(const std::string& _name, const std::string& _number, const std::string& _address)
        : name(_name), number(_number), address(_address) {}

    virtual ~User() {}

    std::string getName() const;

    void setName(const std::string& _name);

    std::string getNumber();

    void setNumber(const std::string& _number);

    std::string getAddress();

    void setAddress(const std::string& _address);

    virtual void display() const = 0;
};

#endif // USER_H
