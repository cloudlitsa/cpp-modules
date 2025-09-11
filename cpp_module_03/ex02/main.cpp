#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {
{
    std::cout << "=====ClapTrap tests=====" << std::endl;
    ClapTrap clap("Clappy"); // Parameterized constructor
    clap.attack("Target"); // Should succeed
    clap.takeDamage(5);
    clap.beRepaired(3); // Should succeed
    clap.takeDamage(10); // This should destroy the ClapTrap
    clap.attack("Target"); // This should not work as ClapTrap is destroyed
    clap.beRepaired(5); // This should not work as ClapTrap is dead - destroyed
}
{
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
{
    std::cout << "\n=====FragTrap tests=====" << std::endl;
    FragTrap frag("Fraggy"); // Parameterized constructor
    frag.attack("Baddie"); // Should succeed
    frag.highFivesGuys(); // FragTrap specific method
    frag.takeDamage(80); // Take some damage
    frag.beRepaired(40); // Should succeed
    frag.takeDamage(100); // This should destroy the FragTrap
    frag.attack("Baddie"); // This should not work as FragTrap is destroyed
    frag.beRepaired(20); // This should not work as FragTrap is dead - destroyed
}
// {
//     FragTrap frag1("fraggy1");
//     FragTrap frag2("fraggy2");
//     frag1 = frag2;
//     std::cout << "frag1 name: " << frag1.getName() << std::endl;
//     std::cout << "frag2 name: " << frag2.getName() << std::endl;

//     FragTrap frag3(frag2);
//     std::cout << "frag3 name: " << frag3.getName() << std::endl;
// }

}