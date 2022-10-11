#pragma once
#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>

class Contact {
    public:
        Contact(void);
        ~Contact(void);

        void    setName(std :: string name);
        void    setLast(std :: string last);
        void    setSecret(std :: string secret);
        void    setNick(std :: string nickname);
        void    setNumber(long long num);

        std :: string   getName(void) const;
        std :: string   getLast(void) const;
        std :: string   getSecret(void) const;
        std :: string   getNickName(void) const;
        long long       getNumber(void) const;

    private:
        std :: string   firstName;
        std :: string   lastName;
        std :: string   secret;
        std :: string   nickname;
        long long       phoneNumber;
};

#endif