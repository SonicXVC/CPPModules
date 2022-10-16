#pragma once

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include "Brain.hpp"

class Animal {
    public:
        virtual ~Animal(void);
        virtual Animal &operator=(const Animal &other) = 0;
        virtual Brain *getBrain(void) const = 0;
        std :: string   getType(void) const;
        virtual void    makeSound(void) const = 0;
    protected:
        std :: string   type;
};

#endif