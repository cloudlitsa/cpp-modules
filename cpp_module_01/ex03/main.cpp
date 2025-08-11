#include <iostream>
#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main() {
    Weapon club("baseball bat"); // Create a Weapon object
    HumanA bob("Bob", club); // Create a HumanA object with a reference to the Weapon
    
    bob.attack(); // Bob attacks with the weapon
    club.setType("golf club");
    bob.attack();

    std::cout << "------------------------" << std::endl;
    // Demonstrating HumanB which can have a weapon set later
    // HumanB can have a weapon set after creation, allowing for more flexibility
    // HumanB can also have no weapon initially, which is useful in some scenarios
    // HumanB uses a pointer to Weapon, which can be null
    // This allows HumanB to not have a weapon at all, if desired
    // HumanB can change its weapon at any time by calling setWeapon
    // This design allows for more dynamic behavior compared to HumanA
    // HumanB can be created without a weapon and can set it later

    // Weapon club("baseball bat");
    HumanB jim("Jim");
    
    jim.attack(); // Jim tries to attack without a weapon (should handle null case)
    jim.setWeapon(club); // Set the weapon for Jim
    
    club.setType("golf club");
    jim.attack();

    return 0;
}
