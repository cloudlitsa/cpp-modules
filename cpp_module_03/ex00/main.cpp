#include "ClapTrap.hpp"

int main() {
    std::cout << "=====ClapTrap tests=====" << std::endl;
    ClapTrap clap("Clappy"); // Parameterized constructor
    clap.attack("Target"); // Should succeed
    clap.takeDamage(5);
    clap.beRepaired(3); // Should succeed
    clap.takeDamage(10); // This should destroy the ClapTrap
    clap.attack("Target"); // This should not work as ClapTrap is destroyed
    clap.beRepaired(5); // This should not work as ClapTrap is dead - destroyed

    // ClapTrap clap2(5); //this should not compile
}