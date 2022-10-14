#include "ClapTrap.hpp"

ClapTrap :: ClapTrap() : hp(10), energy(10), name("unnamed"), attackDmg(0) {
    std :: cout << "ClapTrap default constructor called" << std :: endl;
}

ClapTrap :: ClapTrap(std :: string _name) : hp(10), energy(10), name(_name), attackDmg(0) {
    std :: cout << "ClapTrap init constructor called" << std :: endl;
}

// ClapTrap :: ClapTrap(std :: string _name, int _attackDmg) : hp(10), energy(10), name(_name), attackDmg(_attackDmg) {
//     std :: cout << "ClapTrap init with attackDMG constructor" << std :: endl;
// }

ClapTrap :: ClapTrap(const ClapTrap &other) {
    std :: cout << "ClapTrap copy constructor called" << std :: endl;
    *this = other;
}

ClapTrap &ClapTrap :: operator=(const ClapTrap &other) {
    std :: cout << "ClapTrap Assignment constructor called" << std :: endl;
    if (this != &other) {
        hp = other.getHP();
        energy = other.getNRG();
        attackDmg = other.getAttackDmg();
        name = getName();
    }
    return(*this);
}

ClapTrap :: ~ClapTrap() {
    std :: cout << "ClapTrap destructor called" << std :: endl;
}

unsigned int ClapTrap :: getHP() const {
    return(hp);   
}

unsigned int ClapTrap :: getNRG() const {
    return(energy);
}

unsigned int ClapTrap :: getAttackDmg() const {
    return(attackDmg);
}

std :: string ClapTrap :: getName() const {
    return(name);
}

void    ClapTrap :: attack(const std :: string &target) {
    if (energy > 0) {
        if (this->attackDmg > 0) {
            std :: cout << "ClapTrap " << name << " attacks " << target  << " with " << this->attackDmg << " attackDmg" << std :: endl;
            energy--;
        } else {
            std :: cout << "ClapTrap " << name << " attacks " << target << std :: endl;
            energy--;
        }
    } else
        std :: cout << "ClapTrap " << name << " have no energy left to attack this dude\n";

}

void    ClapTrap :: takeDamage(unsigned int amount) {
    // if ()
        if ((unsigned int)hp > amount) {
            hp -= amount;
            std :: cout << name << " takes " << amount << " of DMG and still have " << hp << " hp\n";
        } else {
            std :: cout << name << " takes " << amount << " of DMG and says: MAAAAAN, Im dead\n";
            hp = 0; 
        }
}

void    ClapTrap :: beRepaired(unsigned int amount) {
    if (energy > 0) {
        energy--;
        std :: cout << "ClapTrap " << name << " heals on " << amount << " of HP and have " << energy << " points of energy left\n";
        if (hp + amount > 10)
            hp = 10;
        else
            hp += amount;
    } else
        std :: cout << "ClapTrap " << name << " have no energy left to repair himself\n";

}