#include "Weapon.hpp"

Weapon :: Weapon(std :: string type) : type(type) {}
Weapon :: Weapon(void) {}
Weapon :: ~Weapon(void) {}


void    Weapon :: setType(std :: string type) {
    if (type != "")
        Weapon :: type = type;
        std :: cout << "Changing weapon to :" << type << std :: endl;
}

const std :: string     &Weapon :: getType() {
    return this->type;
}