#ifndef CLAP_TRAP_HPP
#define CLAP_TRAP_HPP

#include <string>
#include <iostream>

class ClapTrap {
private: // Protected members to allow access in derived classes (for inheritance)
    std::string name;
    unsigned int hitPoints;
    unsigned int energyPoints;
    unsigned int attackDamage;

    public:
    // orthodox Canonical Form - big four
    ClapTrap(); // Default constructor
    ClapTrap(const std::string& name); // Parameterized constructor
    ClapTrap(const ClapTrap& other); // Copy constructor
    ClapTrap& operator=(const ClapTrap& other); // Copy assignment operator
    ~ClapTrap(); // Destructor

    // Member functions
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    // Getters (for derived classes to access private members)
    std::string getName() const;
    unsigned int getHitPoints() const;
    unsigned int getEnergyPoints() const;
    unsigned int getAttackDamage() const;

};

#endif // CLAP_TRAP_HPP