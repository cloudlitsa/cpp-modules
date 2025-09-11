#include "ScavTrap.hpp"

// Default constructor
ScavTrap::ScavTrap() : ClapTrap() { // Call base/parent class default constructor
    this->hitPoints = 100; // overriding base/parent class values
    this->energyPoints = 50;
    this->attackDamage = 20;
    std::cout << "ScavTrap default constructor called" << std::endl;
}

// Parameterized constructor
ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name) { // Call base class parameterized constructor
    this->hitPoints = 100; // ScavTrap specific values
    this->energyPoints = 50;
    this->attackDamage = 20;
    std::cout << "ScavTrap parameterized constructor called for " << this->name << std::endl;
}

// Copy constructor
ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other) {
    std::cout << "ScavTrap copy constructor called" << std::endl;
}

// Copy assignment operator
ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
    std::cout << "ScavTrap copy assignment operator called" << std::endl;
    if (this != &other) {
        ClapTrap::operator=(other); // call parent's assignment operator
    }
    return *this;
}

// destructor
ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap destructor called" << std::endl;
}

// Override attack method
void ScavTrap::attack(const std::string& target) {
    if (hitPoints == 0) {
        std::cout << "ScavTrap " << name << " is out of hit points and cannot attack." << std::endl;
        return;
    }
    if (energyPoints == 0) {
        std::cout << "ScavTrap " << name << " is out of energy points and cannot attack." << std::endl;
        return;
    }
    energyPoints--; // Decrease energy points on attack
    std::cout << "ScavTrap " << name << " attacks " << target
              << ", causing " << attackDamage << " BAAAAApoints of damage! "
              << "(Energy left: " << energyPoints << ")" << std::endl;
}


// New method specific to ScavTrap
void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << name << " is now in Gate keeper mode." << std::endl;
}
