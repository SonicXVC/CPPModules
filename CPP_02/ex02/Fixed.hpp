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
        Fixed   &operator=(const Fixed &other);
        bool    operator>(const Fixed &other) const;
        bool    operator<(const Fixed &other) const;
        bool    operator>=(const Fixed &other) const;
        bool    operator<=(const Fixed &other) const;
        bool    operator==(const Fixed &other) const;
        bool    operator!=(const Fixed &other) const;
        Fixed   operator+(const Fixed &other) const;
        Fixed   operator-(const Fixed &other) const;
        Fixed   operator*(const Fixed &other) const;
        Fixed   operator/(const Fixed &other) const;
        Fixed   operator++(int);
        Fixed   &operator++(void);
        Fixed   operator--(int);
        Fixed   &operator--(void);
        ~Fixed(void);
        int     getRawBits(void) const;
        void    setRawBits(int const _intToConvert);
        int     toInt(void) const;
        float   toFloat(void) const;
        static Fixed        &min(Fixed &f1, Fixed &f2);
        static const Fixed  &min(const Fixed &f1, const Fixed &f2);
        static Fixed        &max(Fixed &f1, Fixed &f2);
        static const Fixed  &max(const Fixed &f1, const Fixed &f2);
    private:
        int                 intToConvert;
        static const int    raw = 8;
};

std :: ostream &operator<<(std :: ostream &stream, const Fixed &other);

#endif