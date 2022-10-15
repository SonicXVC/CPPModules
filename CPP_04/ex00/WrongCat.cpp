#include "WrongCat.hpp"

WrongCat ::WrongCat(void) {
    std :: cout << "WrongCat: default constructor called" << std :: endl;
    type = "WrongCat";
}

WrongCat ::WrongCat(const WrongCat &other) : WrongAnimal(other) {
    *this = other;
    std :: cout << "WrongCat: copy constructor called" << std :: endl;
}

WrongCat :: ~WrongCat(void) {
    std :: cout << "WrongCat: destructor called" << std :: endl;
}

WrongCat &WrongCat :: operator=(const WrongCat &other) {
    std :: cout << "WrongCat: Assignation constructor called" << std :: endl;
    if (this != &other)
        type = other.getType();
    return *this;
}

void    WrongCat :: makeSound(void) const {
    std :: cout << "MEOW MEOW, WrongMFKER" << std :: endl;
}