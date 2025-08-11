#include <iostream>
#include <string>

int main() {

    std::string greeting = "HI THIS IS BRAIN"; // variable declaration and initialization
    std::string* stringPTR = &greeting; // pointer to the string
    std::string& stringREF = greeting; // reference to the string

    std::cout << "Memory address of string variable: " << &greeting << std::endl;
    std::cout << "Memory address held by stringPTR: " << stringPTR << std::endl;
    std::cout << "Memory address held by stringREF: " << &stringREF << std::endl;

    std::cout << "The value of the string variable: " << greeting << std::endl;
    std::cout << "The value pointed to by stringPTR: " << *stringPTR << std::endl;
    std::cout << "The value pointed to by stringREF: " << stringREF << std::endl;

    return 0;
}
