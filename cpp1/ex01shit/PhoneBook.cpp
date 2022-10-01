#include "PhoneBook.hpp"

PhoneBook :: PhoneBook(void) {}
PhoneBook :: ~PhoneBook(void) {}

void PhoneBook :: makeExit(void) const
{
    std :: cout << "Done" << std :: endl;
}

void PhoneBook :: makeAdd(int *index)
{
    std :: string   name, last, secret, nickname, n;
    long long   num;

    std :: cout << "FirstName :";
    std :: cin >> name;
    std :: cout << "LastName :";
    std :: cin >> last;
    std :: cout << "Secret :";
    std :: cin >> secret;
    std :: cout << "Nickname :";
    std :: cin >> nickname;
    std :: cout << "PhoneNumber :";
    std :: cin >> n;
    num = std :: stol(n);
    if (*index == 8)
        *index = 0;
    contacts[*index].setFirstName(name);
    contacts[*index].setLastName(last);
    contacts[*index].setSecret(secret);
    contacts[*index].setNickName(nickname);
    contacts[*index].setNumber(num);
    (*index)++;
    std :: cout << "Contact Added." << std :: endl;
}


