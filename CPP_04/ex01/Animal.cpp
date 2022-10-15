#include "Animal.hpp"

Animal ::Animal(void) {
    std :: cout << "Animal: default constructor called" << std :: endl;
}

Animal ::Animal(const Animal &other) {
    *this = other;
    std :: cout << "Animal: copy constructor called" << std :: endl;
}

Animal :: ~Animal(void) {
    std :: cout << "Animal: destructor called" << std :: endl;
}

Animal &Animal :: operator=(const Animal &other) {
    std :: cout << "Animal: Assignation constructor called" << std :: endl;
    if (this != &other)
        type = other.getType();
    return *this;
}

std :: string Animal :: getType(void) const {
    return type;
}

void    Animal :: makeSound(void) const {
    std :: cout << "Animal: have no unique sound" << std :: endl;
}