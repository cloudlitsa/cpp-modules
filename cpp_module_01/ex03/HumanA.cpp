#include "HumanA.hpp"

HumanA::HumanA(const std::string& name, Weapon& weapon) : name(name), weapon(weapon) {
    // Constructor initializes the human's name and weapon reference
    // The weapon reference must always point to a valid Weapon object
    // This ensures that HumanA always has a weapon to use
    // No need to check for null since weapon is a reference
    // and must be initialized with a valid Weapon object
    // The reference ensures that the weapon cannot be null
    // and must always be valid when used
    // This design choice avoids the need for null checks
    // and simplifies the code by ensuring that HumanA always has a weapon.
}

void HumanA::attack() {
    std::cout << this->name << " attacks with their " 
    << this->weapon.getType() << std::endl;
}
// The attack method outputs the name of the human and the type of weapon they are using