#include "Contact.hpp"

Contact :: Contact() {}
Contact :: ~Contact() {}

void Contact :: setName(std :: string name) {
    Contact :: firstName = name;
}

void Contact :: setLast(std :: string last) {
    Contact :: lastName = last;
}

void Contact :: setSecret(std :: string secret) {
    Contact :: secret = secret;
}

void Contact :: setNick(std :: string nickname) {
    Contact :: nickname = nickname;
}

void Contact :: setNumber(long long num) {
    Contact :: phoneNumber = num;
}

std :: string Contact :: getName() const {
    return (firstName);
}

std :: string Contact :: getLast() const {
    return (lastName);
}

std :: string Contact :: getSecret() const {
    return (secret);
}

std :: string Contact :: getNickName() const {
    return (nickname);
}

long long Contact :: getNumber() const {
    return (phoneNumber);
}