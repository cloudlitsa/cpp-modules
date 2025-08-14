#include "Harl.hpp"

void Harl::debug() {
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger." << std::endl;
    std::cout << "I really do!" << std::endl;
    std::cout << "=============================================" << std::endl;
}

void Harl::info() {
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
    std::cout << "You didn’t put enough bacon in my burger!" << std::endl;
    std::cout << "If you did, I wouldn’t be asking for more!" << std::endl;
    std::cout << "=============================================" << std::endl;
}

void Harl::warning() {
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
    std::cout << "I’ve been a good customer for years, whereas you started working here just last month." << std::endl;
    std::cout << "=============================================" << std::endl;
}

void Harl::error() {
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
    std::cout << "=============================================" << std::endl;
}

// public interface using the complain method
   // Map the level to the corresponding function
    // Array of function pointers and corresponding levels
    // using FunctionPtr = void (Harl::*)();
void Harl::complain(std::string level) { 
    // Array of function pointers to member functions
    void (Harl::*functions[4])(void) = { // return_type ClassName::*pointer_name(parameters)
        &Harl::debug, 
        &Harl::info, 
        &Harl::warning, 
        &Harl::error 
    };
    std::string levels[4] = { "DEBUG", "INFO", "WARNING", "ERROR" };
    // find and call the appropriate function based on the level
    for (int i = 0; i < 4; ++i) {
        if (level == levels[i]) {
            (this->*functions[i])(); // Calling: (object.*pointer)(arguments)
            return; // exit after finding the matching level
        }
    }
    std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}

/*
// Declaration: return_type (ClassName::*pointer_name)(parameters)
void (Harl::*functionPtr)(void) = &Harl::debug;

// Calling: (object.*pointer)(arguments)
(this->*functionPtr)();

// Or with object pointer: (objectPtr->*pointer)(arguments)
(harlPtr->*functionPtr)();

void (Harl::*functionPtr)(void) = &Harl::debug;
//   |    |      |        |        |
//   |    |      |        |        └─ Address of member function
//   |    |      |        └─ Parameter list
//   |    |      └─ Pointer name
//   |    └─ Class scope
//   └─ Return type

(this->*functionPtr)();
//  |     |     |     |
//  |     |     |     └─ Function call
//  |     |     └─ Dereference pointer
//  |     └─ Member access operator for pointers
//  └─ Object instance

*/
// Note: The complain method handles case sensitivity by only matching exact strings.
// If you want to handle case insensitivity, you can convert the input string to uppercase or lowercase before comparison.