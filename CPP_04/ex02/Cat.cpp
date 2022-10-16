#include "Cat.hpp"

Cat ::Cat(void) {
    std :: cout << "Cat: default constructor called" << std :: endl;
    type = "Cat";
    brain = new Brain();
}

Cat ::Cat(const Cat &other) {
    *this = other;
    std :: cout << "Cat: copy constructor called" << std :: endl;
}

Cat :: ~Cat(void) {
    delete brain;
    std :: cout << "Cat: destructor called" << std :: endl;
}

Cat &Cat :: operator=(const Cat &other) {
    std :: cout << "Cat: Assignation constructor called" << std :: endl;
    if (this != &other) {
        type = other.getType();
        *brain = *other.getBrain();
    }
    return *this;
}

Animal &Cat :: operator=(const Animal &other) {
    std :: cout << "Animal Cat: Assignation constructor called" << std :: endl;
    if (this != &other) {
        type = other.getType();
        *brain = *other.getBrain();
    }
    return *this;
}

void    Cat :: makeSound(void) const {
    std :: cout << "MEOW MEOW, MFKER" << std :: endl;
}

Brain *Cat :: getBrain(void) const {
    return brain;
}