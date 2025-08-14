#include "Zombie.hpp"

Zombie* Zombie::zombieHorde(int N, std::string name) {
    if (N <= 0) {
        return nullptr; // Return nullptr if N is not positive
    }

    Zombie* horde = new Zombie[N]; // Dynamically allocate an array of N zombies

    for (int i = 0; i < N; ++i) {
        horde[i].setName(name); // Set unique names for each zombie concatanating name and index
    }

    return horde; // Return the pointer to the horde of zombies
}