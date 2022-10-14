#pragma once

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap: public ClapTrap {
    public:
        ScavTrap(void);
        ScavTrap(std :: string _name);
        ScavTrap(const ScavTrap &other);
        ~ScavTrap(void);
        void attack(const std :: string &target);
        ScavTrap &operator=(const ScavTrap &other);
        void guardGate(void);
};

#endif