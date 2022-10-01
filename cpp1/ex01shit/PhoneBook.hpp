#pragma once
#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iomanip>
# include <iostream>
# include "Contact.hpp"

class PhoneBook
{
public:
    PhoneBook(void);
    ~PhoneBook(void);

    bool    getState(void) const;
    // void    searchWraper(void) const;
    void    makeExit(void) const;
    void    makeAdd(int *index);
    // void    makeSearch(int size) const;
private:
    Contact contacts[8];
    int     size;
    int     i;
    bool    state;
    int     book_size;
    void    show(int size) const;
};

#endif