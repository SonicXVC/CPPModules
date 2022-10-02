#include "PhoneBook.hpp"

PhoneBook :: PhoneBook() {
    index = 0;
    size = 0;
    state = true;
    mem_size = 8;
}
PhoneBook :: ~PhoneBook() {}

void PhoneBook :: makeExit(void) {
    std :: cout << "Done exit" << std :: endl;
}

long long PhoneBook :: valid_num() const {
    int number;
    std :: string n;
    
    while (true) {
        std :: cin >> n;
        try {
            number = std :: stol(n);
            return number;
        }
        catch (const std :: invalid_argument&) {
            std :: cout << "Not a number" << std :: endl;
        }
        catch (const std :: out_of_range&) {
            std :: cout << "out of range" << std :: endl;
        }
    }
}

void PhoneBook :: makeAdd() {
    std :: string   name, last, secret, nick;

    if (index == mem_size)
        index = 0;
    std :: cout << "FirstName :" << std :: endl;
    std :: cin >> name;
    std :: cout << "LastName :" << std :: endl;
    std :: cin >> last;
    std :: cout << "Darkest secret :" << std :: endl;
    std :: cin >> secret;
    std :: cout << "NickName :" << std :: endl;
    std :: cin >> nick;
    contacts[index].setName(name);
    contacts[index].setLast(last);
    contacts[index].setSecret(secret);
    contacts[index].setNick(nick);
    std :: cout << "PhoneNumber :" << std :: endl;
    contacts[index].setNumber(this->valid_num());
    index++;
    if (size < mem_size)
        size++;
    std :: cout << "Contact added" << std :: endl;
}

bool PhoneBook :: getState() const{
    return (state);
}

void PhoneBook :: show() const {
    int i = 0;

    while (i < size) {
        std :: cout << contacts[i].getName() << std :: endl;
        std :: cout << contacts[i].getLast() << std :: endl;
        std :: cout << contacts[i].getSecret() << std :: endl;
        std :: cout << contacts[i].getNickName() << std :: endl;
    }
}

void PhoneBook :: show(int i) const {
    std :: cout << contacts[i].getName() << std :: endl;
    std :: cout << contacts[i].getLast() << std :: endl;
    std :: cout << contacts[i].getSecret() << std :: endl;        
    std :: cout << contacts[i].getNickName() << std :: endl;
}

void PhoneBook :: preSearch() const {
    if (!size) {
        std :: cout << "No contacts in phonebook" << std :: endl;
        return ;
    }
    std :: cout << "|" << std :: setw(10) << "index"
        << "|" << std :: setw(10) << "FirstName"
        << "|" << std :: setw(10) << "LastName"
        << "|" << std :: setw(10) << "Secret"
        << "|" << std :: setw(10) << "NickName"
        << "|" << std :: endl;
    for (int i = 0; i < size; i++) {
        std :: cout << "|" << std :: setw(10) << i + 1
            << "|" << std :: setw(10) << contacts[i].getName().substr(0, 10)
            << "|" << std :: setw(10) << contacts[i].getLast().substr(0, 10)
            << "|" << std :: setw(10) << contacts[i].getSecret().substr(0, 10)
            << "|" << std :: setw(10) << contacts[i].getNickName().substr(0, 10)
            << "|" << std :: endl;
    }
}

void PhoneBook :: makeSearch() const {
    int             in;
    std :: string   i;

    this->preSearch();
    if (!size)
        return ;
    std :: cout << "Index to search :" << std :: endl;
    in = this->valid_num();
    if (in <= 0 || in > size) {
        std :: cout << "No such contact" << std :: endl;
        return ;
    }
    this->show(index - 1);
}