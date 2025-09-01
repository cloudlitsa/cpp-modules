#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() {
    std::cout << "=======Testing abstract class=======" << std::endl;

    // AAnimal animal; // This line should cause a compilation error if uncommented, as AAnimal is abstract
    std::cout << "Abstract class test passed (cannot instantiate AAnimal)." << std::endl;

    AAnimal* dog = new Dog();
    AAnimal* cat = new Cat();

    cat->makeSound(); // Should print "Meow Meaow!"
    dog->makeSound(); // Should print "Woof Woof!"

    delete dog; // Clean up
    delete cat; // Clean up
    std::cout << "=======End of abstract class test=======" << std::endl;

    return 0;
}