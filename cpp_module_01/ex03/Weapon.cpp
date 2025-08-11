#include "Weapon.hpp"

Weapon::Weapon(const std::string& type) : type(type) {
    // Constructor initializes the weapon type
}

// Getter for the weapon type, returns a constant to avoid copying
const std::string& Weapon::getType() const {
    return this->type;
}

void Weapon::setType(const std::string& newType) {
    this->type = newType;
    // Setter updates the weapon type
}