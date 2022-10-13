#pragma once

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap {
    public:
        ClapTrap();
        ClapTrap(std :: string _name);
        ClapTrap(const ClapTrap &other);
        ClapTrap &operator=(const ClapTrap &other);
        ~ClapTrap();
        void attack(const std :: string &target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        std :: string getName(void) const;
        unsigned int getHP(void) const;
        unsigned int getNRG(void) const;
        unsigned int getAttackDmg(void) const;
    private:
        std :: string   name;
        int             hp;
        int             energy;
        int             attack;
};

#endif