#include "Zombie.hpp"

// Default constructor
Zombie::Zombie() : name("Unnamed") { // : name("Unnamed") initializes the name to "Unnamed"
    // This is a simple constructor that initializes the zombie's name to "Unnamed"
    // It does not take any parameters and is used when no specific name is provided.
    // The constructor prints a message to indicate that an unnamed zombie is born.
    std::cout << "Unnamed zombie is born!" << std::endl;
}

// Parameterized constructor
Zombie::Zombie(std::string name) : name(name) {
    std::cout << this->name << " is born!" << std::endl; // this-> is used to refer to the current object's name member
}

// Destructor
Zombie::~Zombie() {
    std::cout << this->name << " is destroyed!" << std::endl;
}

// Announce function
void Zombie::announce(void) {
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

// Set name function
void Zombie::setName(std::string name) {
    this->name = name;
}