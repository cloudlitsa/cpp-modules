#include "Zombie.hpp"

int main() {
    const int hordeSize = 5; // Size of the zombie horde
    std::string zombieName = "Zombie";

    std::cout << "Creating a horde of " << hordeSize << " zombies named " << zombieName << "..." << std::endl;

    Zombie* horde = zombieHorde(hordeSize, zombieName); // variable to hold the pointer to the horde of zombies
    if (horde) {
        for (int i = 0; i < hordeSize; ++i) {
            horde[i].announce();
        }
        std::cout << "Destroying the horde of zombies..." << std::endl;
        delete[] horde; //  free the allocated memory
    }

    return 0;
}