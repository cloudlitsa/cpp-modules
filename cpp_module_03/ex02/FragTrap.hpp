#ifndef FRAG_TRAP_HPP
#define FRAG_TRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
public:
    FragTrap(); // Default constructor
    FragTrap(const std::string& name); // Parameterized constructor
    FragTrap(const FragTrap& other); // Copy constructor
    FragTrap& operator=(const FragTrap& other); // Copy assignment operator
    ~FragTrap(); // Destructor  

    // special member function for FragTrap
    void highFivesGuys(void);
};

#endif