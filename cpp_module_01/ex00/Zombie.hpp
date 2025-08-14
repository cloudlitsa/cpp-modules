#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {
private:
    std::string name;
    
public:
    Zombie(std::string name); //constructor
    ~Zombie(); //destructor

    void announce(void); //member function

    // function prototypes
    Zombie* newZombie(std::string name); // creates a zombie in the heap, functuin returns pointer to Zombie
    // survives outside function scope, must be deleted later
    void randomChump(std::string name); // creates a zombie in the stack, automatically destroyed when function ends

};

#endif