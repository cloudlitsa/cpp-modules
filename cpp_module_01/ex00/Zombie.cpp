#include "Zombie.hpp"

//constructor
Zombie::Zombie(std::string name) : name(name) {
    std::cout << this->name << " is born!" << std::endl;
}

//destructor
Zombie::~Zombie() {
        std::cout << this->name << " is destroyed!" << std::endl;
}

void Zombie::announce(void) {
        std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}