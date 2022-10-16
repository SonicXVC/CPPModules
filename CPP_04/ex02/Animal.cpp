#include "Animal.hpp"

Animal :: ~Animal(void) {
    std::cout << "Animal: destructor called" << std::endl;
}

std :: string Animal :: getType(void) const {
    return type;
}