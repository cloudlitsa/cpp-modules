#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {
private:
    std::string name; // Name of the zombie
public:
    Zombie(); // Default constructor
    // Parameterized constructor
    Zombie(std::string name); // Parameterized constructor
    ~Zombie(); // Destructor
    // Member functions
    void announce(void); // Function to announce the zombie's presence
    // Set name function
    void setName(std::string name);

    Zombie* zombieHorde(int N, std::string name); // Function prototype to create a horde of zombies
};

#endif
