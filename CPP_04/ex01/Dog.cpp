#include "Dog.hpp"

Dog ::Dog(void) {
    std :: cout << "Dog: default constructor called" << std :: endl;
    type = "Dog";
    brain = new Brain();
}

Dog ::Dog(const Dog &other) : Animal(other) {
    *this = other;
    std :: cout << "Dog: copy constructor called" << std :: endl;
}

Dog :: ~Dog(void) {
    delete brain;
    std :: cout << "Dog: destructor called" << std :: endl;
}

Dog &Dog :: operator=(const Dog &other) {
    if (this != &other) {
        type = other.getType();
    }
    std :: cout << "Dog: Assignation constructor called" << std :: endl;
    return (*this);
}

void    Dog :: makeSound() const {
    std :: cout << "BARK" << std :: endl;
}

Brain *Dog :: getBrain(void) const {
    return brain;
}