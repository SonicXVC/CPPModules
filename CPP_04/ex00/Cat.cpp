#include "Cat.hpp"

Cat ::Cat(void) {
    std :: cout << "Cat: default constructor called" << std :: endl;
}

Cat ::Cat(const Cat &other) : Animal(other) {
    *this = other;
    std :: cout << "Cat: copy constructor called" << std :: endl;
}

Cat :: ~Cat(void) {
    std :: cout << "Cat: destructor called" << std :: endl;
}

Cat &Cat :: operator=(const Cat &other) {
    std :: cout << "Cat: Assignation constructor called" << std :: endl;
    if (this != &other)
        type = other.getType();
    return *this;
}

void    Cat :: makeSound(void) const {
    std :: cout << "MEOW MEOW, MFKER" << std :: endl;
}