#include "FragTrap.hpp"

// default constructor
FragTrap::FragTrap() : ClapTrap() {
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
    std::cout << "FragTrap default constructor called.\n";
}

// parametirised constructor
FragTrap::FragTrap(const std::string& name) : ClapTrap(name) {
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
    std::cout << "FragTrap parameterized constructor called for " << this->name << ".\n";
}

// copy constructor
FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other) {
    std::cout << "FragTrap copy constructor called.\n";
}

// assignment operator
FragTrap& FragTrap::operator=(const FragTrap& other) {
    std::cout << "FragTrap assignment operator called.\n"; //call parent's assignment operator
    if (this != &other) {
        ClapTrap::operator=(other);
    }
    return *this;
}

// destructor
FragTrap::~FragTrap() {
    std::cout << "FragTrap " << this->name << " destructor called.\n";
}
// special ability
void FragTrap::highFivesGuys(void) {
    std::cout << "FragTrap " << this->name << " is requesting a high five!\n";
}