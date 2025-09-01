#include "ClapTrap.hpp"

// default contructor
ClapTrap::ClapTrap()
    : name("Default"), hitPoints(10), energyPoints(10), attackDamage(0) {
    std::cout << "ClapTrap " << name << " constructed with default values.\n";
}

// parameterized constructor
ClapTrap::ClapTrap(const std::string& name)
    : name(name), hitPoints(10), energyPoints(10), attackDamage(0) {
    std::cout << "ClapTrap " << this->name << " constructed with custom name.\n";
}   

// copy constructor
ClapTrap::ClapTrap(const ClapTrap& other) {
    std::cout << "ClapTrap copy contructor called.\n";
    *this = other;
}

// copy assignment operator called 
ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
    std::cout << "ClapTrap copy assignment operator called.\n";
    if (this != &other) { // self-assignment check
        this->name = other.name;
        this->hitPoints = other.hitPoints;
        this->energyPoints = other.energyPoints;
        this->attackDamage = other.attackDamage;
    }
    return *this;
}

// destructor
ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap " << this->name << " destructor called.\n";
}
// Attack function
void ClapTrap::attack(const std::string& target) {
    if (hitPoints == 0) {
        std::cout << "ClapTrap " << name << " has no hit points left and cannot attack.\n";
        return;
    }
    if (energyPoints == 0) {
        std::cout << "ClapTrap " << name << " has no energy points left and cannot attack.\n";
        return;
    }
    energyPoints--; // Consumes one energy point to attack
    std::cout << "ClapTrap " << name << " attacks " << target
              << ", causing " << attackDamage << " points of damage!\n";
}
// Take damage function
void ClapTrap::takeDamage(unsigned int amount) {
    if (hitPoints == 0) {
        std::cout << "ClapTrap " << name << " has no hit points left and cannot take more damage.\n";
        return;
    }
    if (amount >= hitPoints) {
        hitPoints = 0;
        std::cout << "ClapTrap " << name << " takes " << amount
                  << " points of damage and is now destroyed!\n";
    } else {
        hitPoints -= amount; // Reduce hit points by the damage amount
        std::cout << "ClapTrap " << name << " takes " << amount
                  << " damage! Hit points left: " << hitPoints << ".\n";
    }
}
// Repair function
void ClapTrap::beRepaired(unsigned int amount) {
    if (hitPoints == 0) {
        std::cout << "ClapTrap " << name << " has no hit points left and cannot be repaired.\n";
        return;
    }
    if (energyPoints == 0) {
        std::cout << "ClapTrap " << name << " has no energy points left and cannot be repaired.\n";
        return;
    }
    energyPoints--; // Consumes one energy point to repair
    hitPoints += amount; // Increase hit points by the repair amount
    std::cout << "ClapTrap " << name << " is repaired by " << amount
              << " points! Hit points now: " << hitPoints << ".\n";
}
// Getters
std::string ClapTrap::getName() const {
    return name;
}
unsigned int ClapTrap::getHitPoints() const {
    return hitPoints;
}
unsigned int ClapTrap::getEnergyPoints() const {
    return energyPoints;
}
unsigned int ClapTrap::getAttackDamage() const {
    return attackDamage;
}