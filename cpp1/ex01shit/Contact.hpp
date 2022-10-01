#pragma once
#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class Contact
{
private:
    std :: string   firstName;
    std :: string   lastName;
    std :: string   secret;
    std :: string   nickname;
    long long       phoneNumber;
public:
    Contact(void);
    ~Contact(void);

    void    setFirstName(std :: string  _name);
    void    setLastName(std :: string   _last);
    void    setSecret(std :: string _secret);
    void    setNickName(std :: string _nickname);
    void    setNumber(long long num);
    std :: string   getFirstName(void) const;
    std :: string   getLastName(void) const;
    std :: string   getSecret(void) const;
    std :: string   getNickName(void) const;
    long long       getNumber(void) const;
};

#endif