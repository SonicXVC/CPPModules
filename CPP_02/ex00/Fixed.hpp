#pragma once

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed {
    public:
        Fixed(void);
        Fixed(const Fixed &other);
        Fixed &operator=(const Fixed &other);
        ~Fixed(void);
        int     getRawBits(void) const;
        void    setRawBits(int const _intToConvert);
    private:
        int                 intToConvert;
        static const int    raw = 8;
};

#endif