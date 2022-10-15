#pragma once

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal {
public:
    WrongAnimal(void);
    WrongAnimal(const WrongAnimal &other);
    virtual ~WrongAnimal(void);
    WrongAnimal &operator=(const WrongAnimal &other);
    std :: string   getType(void) const;
    virtual void    makeSound(void) const;
protected:
    std :: string   type;
};

#endif