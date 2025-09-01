#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

class ScavTrap : public ClapTrap { // inheriting from public ClapTrap
public:
    // orthodox Canonical Form - big four
    ScavTrap(); // Default constructor
    ScavTrap(const std::string& name); // Parameterized constructor
    ScavTrap(const ScavTrap& other); // Copy constructor
    ScavTrap& operator=(const ScavTrap& other); // Copy assignment operator
    ~ScavTrap(); // Destructor

    void attack(const std::string& target); // Override attack method
    void guardGate();
};

#endif