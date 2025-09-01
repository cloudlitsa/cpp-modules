#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
    std::cout << "=======Testing animals (Polymorphism)=======" << std::endl;

    const Animal* meta = new Animal(); // Should output "Animal default constructor called."
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    const WrongAnimal* k = new WrongCat(); // Should output "WrongAnimal default constructor called." and "WrongCat default constructor called."

    std::cout << "j types is "<< j->getType() << std::endl; // Should output "Dog"
    std::cout << "i types is "<< i->getType() << std::endl; // Should output "Cat"
    std::cout << "k types is "<< k->getType() << std::endl; // Should output "WrongCat"

    meta->makeSound(); // Should output "Kakophony."
    j->makeSound(); // Should output "Woof Woof!"
    i->makeSound(); // Should output "Meow Meaow!"
    k->makeSound(); // Should output "Swizzle-wizzle!"

    delete meta;
    delete j;
    delete i;
    delete k;

    return 0;
}