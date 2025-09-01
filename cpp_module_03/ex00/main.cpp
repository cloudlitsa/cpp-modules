#include "ClapTrap.hpp"

int main() {
    std::cout << "=====ClapTrap tests.=====" << std::endl;
    ClapTrap clap1("Clappy"); // Parameterized constructor
    clap1.attack("Target"); // Should succeed
    clap1.takeDamage(5);
    clap1.beRepaired(3); // Should succeed
    clap1.takeDamage(10); // This should destroy the ClapTrap
    clap1.attack("Target"); // This should not work as ClapTrap is destroyed
    clap1.beRepaired(5); // This should not work as ClapTrap is dead - destroyed
}