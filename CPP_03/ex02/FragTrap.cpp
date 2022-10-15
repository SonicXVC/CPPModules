#include "FragTrap.hpp"

FragTrap ::FragTrap() {
    hp = 100;
    energy = 100;
    attackDmg = 30;
    std :: cout << "FragTrap: Default constructor called" << std :: endl;
}

FragTrap ::FragTrap(std::string _name) {
    name = _name;
    hp = 100;
    energy = 100;
    attackDmg = 30;
    std :: cout << "FragTrap: init constructor called" << std :: endl;
}

FragTrap ::FragTrap(const FragTrap &other) {
    *this = other;
    std :: cout << "FragTrap: copy constructor called" << std :: endl;
}

FragTrap    &FragTrap ::operator=(const FragTrap &other) {
    if (this != &other) {
        hp = other.getHP();
        energy = other.getNRG();
        attackDmg = other.getAttackDmg();
        name = getName();
    }
    return (*this);
}

FragTrap :: ~FragTrap() {
    std :: cout << "FragTrap: Destructor called" << std :: endl;
}

void FragTrap ::attack(const std::string &target) {
    if (energy > 0) {
        if (this->attackDmg > 0) {
            std :: cout << "FragTrap " << name << " attacks " << target  << " with " << this->attackDmg << " attackDmg" << std :: endl;
            energy--;
        } else {
            std :: cout << "FragTrap " << name << " attacks " << target << std :: endl;
            energy--;
        }
    } else
        std :: cout << "FragTrap " << name << " have no energy left to attack this dude\n";
}

void FragTrap ::highFiveGuys() {
    std :: cout << "FragTrap " << name << ": Hey guys gimme HighFive!!!!" << std :: endl;
}