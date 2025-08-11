#ifndef HUMAN_A_HPP
#define HUMAN_A_HPP

#include "Weapon.hpp"

class HumanA {
private:
    std::string name;
    Weapon& weapon; // by reference always has a weapon
public:
// constructor takes weapon reference
    HumanA(const std::string& name, Weapon& weapon);
    void attack(); // method to perform an attack
};

#endif // HUMAN_A_HPP
