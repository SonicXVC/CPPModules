#pragma once

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed {
    public:
        Fixed(void);
        Fixed(const Fixed &other);
        Fixed(const int integer);
        Fixed(const float floating);
        Fixed &operator=(const Fixed &other);
        ~Fixed(void);
        int     getRawBits(void) const;
        void    setRawBits(int const _intToConvert);
        int     toInt(void) const;
        float   toFloat(void) const;
    private:
        int                 intToConvert;
        static const int    raw = 8;
};

std :: ostream &operator<<(std :: ostream &stream, const Fixed &other);

#endif