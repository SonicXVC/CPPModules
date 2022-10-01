#include "Contact.hpp"

Contact :: Contact(void) {}
Contact :: ~Contact(void) {}

void Contact :: setFirstName(std :: string _name)
{
    Contact :: firstName = _name;
}

void Contact :: setLastName(std :: string _last)
{
    Contact :: lastName = _last;
}

void Contact :: setSecret(std :: string _secret)
{
    Contact :: secret = _secret;
}

void Contact :: setNickName(std :: string _nickname)
{
    Contact :: nickname = _nickname;
}

void Contact :: setNumber(long long _num)
{
    Contact :: phoneNumber = _num;
}

std :: string Contact :: getFirstName(void) const
{
    return firstName;
}

std :: string Contact :: getLastName(void) const
{
    return lastName;
}

std :: string Contact :: getSecret(void) const
{
    return secret;
}

std :: string Contact :: getNickName(void) const
{
    return nickname;
}

long long Contact :: getNumber(void) const
{
    return phoneNumber;
}
