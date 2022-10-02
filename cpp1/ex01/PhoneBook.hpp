#pragma once
#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iomanip>
# include <iostream>
# include "Contact.hpp"

class PhoneBook {
    public:
        PhoneBook(void);
        ~PhoneBook(void);

        void        makeExit(void);
        void        makeAdd(void);
        bool        getState(void) const;
        void        makeSearch(void) const;
    private:
        Contact     contacts[8];
        int         index;
        int         size;
        int         mem_size;
        bool        state;
        long long   valid_num() const;
        void        show(void) const;
        void        show(int i) const;
        void        preSearch(void) const;
};

#endif