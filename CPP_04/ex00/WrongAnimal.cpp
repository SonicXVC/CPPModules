#include "WrongAnimal.hpp"

WrongAnimal ::WrongAnimal(void) {
    std :: cout << "WrongAnimal: default constructor called" << std :: endl;
}

WrongAnimal ::WrongAnimal(const WrongAnimal &other) {
    *this = other;
    std :: cout << "WrongAnimal: copy constructor called" << std :: endl;
}

WrongAnimal :: ~WrongAnimal(void) {
    std :: cout << "WrongAnimal: destructor called" << std :: endl;
}

WrongAnimal &WrongAnimal :: operator=(const WrongAnimal &other) {
    std :: cout << "WrongAnimal: Assignation constructor called" << std :: endl;
    if (this != &other)
        type = other.getType();
    return *this;
}

std :: string WrongAnimal :: getType(void) const {
    return type;
}

void    WrongAnimal :: makeSound(void) const {
    std :: cout << "WrongAnimal: have no unique sound" << std :: endl;
}