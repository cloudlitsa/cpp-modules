#include "Zombie.hpp"

// creates a zombie in the stack
// destroyed automatically when function ends
void randonChump(std::string name) {
    Zombie zombie(name);
    zombie.announce();
    // automatically destroyed here
}