#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon {
private:
    std::string type;
public:
    Weapon(const std::string& type); // constructor with type parameter

    const std::string& getType() const; //getter for type
    void setType(const std::string& type); // setter for type
};

#endif // WEAPON_HPP
