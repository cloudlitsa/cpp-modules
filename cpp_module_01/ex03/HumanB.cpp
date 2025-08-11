#include "HumanB.hpp"

HumanB::HumanB(const std::string& name) : name(name), weapon(nullptr) {
    // Constructor initializes the human's name and sets weapon to null
}

void HumanB::setWeapon(Weapon& weapon) {
    this->weapon = &weapon;
}

void HumanB::attack() {
    if (this->weapon) {
        std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
    } else {
        std::cout << this->name << " is unarmed and cannot attack." << std::endl;
    }
}