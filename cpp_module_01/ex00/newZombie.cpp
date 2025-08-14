#include "Zombie.hpp"

// create a zombie in the heap
// survives outside function scope
// new - delete
Zombie* Zombie::newZombie(std::string name) {
    Zombie* zombie = new Zombie(name);
    return zombie;
}