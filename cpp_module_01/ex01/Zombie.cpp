#include "Zombie.hpp"

// constructor
Zombie::Zombie() : name("Unnamed") {
    std::cout << "====== Creating hoard of zombies =====" << std::endl;
    std::cout << "Unnamed zombie is born!" << std::endl;
}
// Parameterized constructor
Zombie::Zombie(std::string name) : name(name) {
    std::cout << this->name << " is born!" << std::endl;
}

// Destructor
Zombie::~Zombie() {
    std::cout << this->name << " is destroyed!" << std::endl;
}

// Announce function
void Zombie::announce(void) {
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name) {
    this->name = name; // Set the zombie's name
}