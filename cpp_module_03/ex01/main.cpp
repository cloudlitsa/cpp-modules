#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
    std::cout << "=====ClapTrap tests=====" << std::endl;
    ClapTrap clap("Clappy"); // Parameterized constructor
    clap.attack("Target"); // Should succeed
    clap.takeDamage(5);
    clap.beRepaired(3); // Should succeed
    clap.takeDamage(10); // This should destroy the ClapTrap
    clap.attack("Target"); // This should not work as ClapTrap is destroyed
    clap.beRepaired(5); // This should not work as ClapTrap is dead - destroyed

    std::cout << "\n=====ScavTrap tests=====" << std::endl;
    ScavTrap scav("Scavvy"); // Parameterized constructor
    scav.attack("Pacman"); // Should succeed
    scav.guardGate(); // ScavTrap specific method
    scav.takeDamage(50); // Take some damage
    scav.beRepaired(25); // Should succeed
    scav.takeDamage(100); // This should destroy the ScavTrap
    scav.attack("Pacman"); // This should not work as ScavTrap is destroyed
    scav.beRepaired(10); // This should not work as ScavTrap is dead - destroyed
}