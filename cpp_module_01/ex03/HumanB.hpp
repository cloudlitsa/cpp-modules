#ifndef HUMAN_B_HPP
#define HUMAN_B_HPP

#include "Weapon.hpp"
#include <iostream>
#include <string>

class HumanB {
private:
    std::string name;
    Weapon* weapon; // pointer to weapon (can be null)
public:
    HumanB(const std::string& name); // constructor with name parameter, no weapon initially
    void setWeapon(Weapon& weapon); // setter for weapon
    void attack(); // method to perform an attack
};

#endif // HUMAN_B_HPP
