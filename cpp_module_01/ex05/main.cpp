#include "Harl.hpp"

int main() {
    Harl harl;
std::cout << "Testing Harl class with various complaint levels:" << std::endl;
    std::cout << "----------------------------------------" << std::endl;
    // Test the complain method with different levels
    harl.complain("DEBUG");
    harl.complain("INFO");
    harl.complain("WARNING");
    harl.complain("ERROR");
    std::cout << "----------------------------------------" << std::endl;
    // Test with an unknown level
    std::cout << "Testing with an unknown level:" << std::endl;
    std::cout << "----------------------------------------" << std::endl;
    harl.complain("UNKNOWN");
    std::cout << "----------------------------------------" << std::endl;
    std::cout << "Testing case sensitivity:" << std::endl;
    harl.complain("debug"); // should be invalid§

    return 0;
}
