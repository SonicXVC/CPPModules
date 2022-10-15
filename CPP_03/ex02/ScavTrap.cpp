#include "ScavTrap.hpp"

ScavTrap :: ScavTrap() {
    hp = 100;
    energy = 50;
    attackDmg = 20;
    std :: cout << "ScavTrap default constructor called" << std :: endl;
}

ScavTrap :: ScavTrap(std :: string _name) {
    name = _name;
    hp = 100;
    energy = 50;
    attackDmg = 20;
    std :: cout << "ScavTrap init constructor called" << std :: endl;
}

ScavTrap ::ScavTrap(const ScavTrap &other) {
    *this = other;
    std :: cout << "ScavTrap: copy constructor called" << std :: endl;
}

ScavTrap &ScavTrap :: operator=(const ScavTrap &other) {
    if (this != &other) {
        hp = other.getHP();
        energy = other.getNRG();
        attackDmg = other.getAttackDmg();
        name = getName();
    }
    std :: cout << "ScavTrap Assignment constructor called" << std :: endl;
    return(*this);
}

ScavTrap :: ~ScavTrap() {
    std :: cout << "ScavTrap Destructor called" << std :: endl;
}

void    ScavTrap :: attack(const std :: string &target) {
    if (energy > 0) {
        if (this->attackDmg > 0) {
            std :: cout << "ScavTrap " << name << " attacks " << target  << " with " << this->attackDmg << " attackDmg" << std :: endl;
            energy--;
        } else {
            std :: cout << "ScavTrap " << name << " attacks " << target << std :: endl;
            energy--;
        }
    } else
        std :: cout << "ScavTrap " << name << " have no energy left to attack this dude\n";

}

void    ScavTrap :: guardGate() {
    std :: cout << "Gate-Guard Mode ACTIVATED" << std :: endl;
}