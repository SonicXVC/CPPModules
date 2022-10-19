#include "Fixed.hpp"

Fixed :: Fixed(void) : intToConvert(0) {
    std :: cout << "Default constructor called" << std :: endl;
}

Fixed :: Fixed(const Fixed &others) {
    std :: cout << "Copy constructor called" << std :: endl;
    *this = others;
}

Fixed :: Fixed(const int integer) {
    std :: cout << "Int constructor called" << std :: endl;
    Fixed :: intToConvert = integer << raw;
}

Fixed :: Fixed(const float floating) {
    std :: cout << "Float constructor called" << std :: endl;
    Fixed :: intToConvert = roundf(floating * 256);
}

Fixed &Fixed :: operator=(const Fixed &other) {
    std :: cout << "Copy assingment constractor called" << std :: endl;
    if (this != &other)
        this->intToConvert = other.getRawBits();
    return *this;
}

Fixed :: ~Fixed(void) {
    std :: cout << "Destructor called" << std :: endl;
}

int Fixed :: getRawBits() const {
    return intToConvert;
}

void Fixed :: setRawBits(int const _intToConvert) {
    Fixed :: intToConvert = _intToConvert;
}

int Fixed :: toInt() const {
    return intToConvert >> raw;
}

float Fixed :: toFloat() const {
    return (float)intToConvert / 256;
}

std :: ostream &operator<<(std :: ostream &stream, const Fixed &other) {
    return stream << other.toFloat();
}