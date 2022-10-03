#include "HumanB.hpp"

HumanB :: HumanB(void) {}
HumanB :: HumanB(std :: string name) : name(name), weapon(NULL) {}
HumanB :: ~HumanB() {}

void    HumanB :: attack(void) const {
    if (weapon)
        std :: cout << name << " attack with his " << weapon->getType() << std :: endl;
    else
        std :: cout << name << " no weapon to make attack " << std :: endl;
}

void    HumanB :: setWeapon(Weapon *weapon) {
    HumanB :: weapon = weapon;
}