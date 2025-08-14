#include "Zombie.hpp"

// creates a zombie in the stack
// destroyed automatically when function ends
void Zombie::randomChump(std::string name) {
    Zombie zombie(name);
    zombie.announce();
    // automatically destroyed here
}