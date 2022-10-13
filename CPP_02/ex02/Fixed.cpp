#include "Fixed.hpp"

Fixed :: Fixed(void) : intToConvert(0) {}

Fixed :: Fixed(const Fixed &others) {
    *this = others;
}

Fixed :: Fixed(const int integer) {
    Fixed :: intToConvert = integer << raw;
}

Fixed :: Fixed(const float floating) {
    Fixed :: intToConvert = roundf(floating * 256);
}

Fixed &Fixed :: operator=(const Fixed &other) {
    if (this != &other)
        this->intToConvert = other.getRawBits();
    return *this;
}

bool Fixed :: operator>(const Fixed &other) const {
    return intToConvert > other.getRawBits();
}

bool Fixed :: operator<(const Fixed &other) const {
    return intToConvert < other.getRawBits();
}

bool Fixed :: operator>=(const Fixed &other) const {
    return intToConvert >= other.getRawBits();
}

bool Fixed :: operator<=(const Fixed &other) const {
    return intToConvert <= other.getRawBits();
}

bool Fixed :: operator==(const Fixed &other) const {
    return intToConvert == other.getRawBits();
}

bool Fixed :: operator!=(const Fixed &other) const {
    return intToConvert != other.getRawBits();
}

Fixed Fixed :: operator+(const Fixed &other) const {
    Fixed res;

    res.setRawBits(intToConvert + other.getRawBits());
    return res;
}

Fixed Fixed :: operator-(const Fixed &other) const {
    Fixed res;

    res.setRawBits(intToConvert - other.getRawBits());
    return res;
}

Fixed Fixed :: operator*(const Fixed &other) const {
    Fixed res(this->toFloat() * other.toFloat());

    return res;
}

Fixed Fixed :: operator/(const Fixed &other) const {
    Fixed res(this->toFloat() / other.toFloat());

    return res;
}

Fixed &Fixed :: operator++(void) {
    intToConvert++;
    return *this;
}

Fixed &Fixed :: operator--(void) {
    intToConvert--;
    return *this;
}

Fixed Fixed :: operator++(int) {
    Fixed res(*this);
    *this = operator++();
    return res;
}

Fixed Fixed :: operator--(int) {
    Fixed res(*this);
    *this = operator--();
    return res;
}

Fixed :: ~Fixed(void) {}

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

Fixed &Fixed :: min(Fixed &f1, Fixed &f2) {
    return f1 < f2 ? f1 : f2;
}

const Fixed &Fixed :: min(const Fixed &f1, const Fixed &f2) {
    return f1 < f2 ? f1 : f2;
}

Fixed &Fixed :: max(Fixed &f1, Fixed &f2) {
    return f1 > f2 ? f1 : f2;
}

const Fixed &Fixed :: max(const Fixed &f1, const Fixed &f2) {
    return f1 > f2 ? f1 : f2;
}

std :: ostream &operator<<(std :: ostream &stream, const Fixed &other) {
    return stream << other.toFloat();
}