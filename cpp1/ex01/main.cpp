#include "PhoneBook.hpp"

int main(void) {
    PhoneBook       book;
    std :: string   option;

    std :: cout << "Choose your destiny :" << std :: endl;
    while (book.getState()) {
        if (!(std :: cin >> option))
            break;
        else if (option == "EXIT" || option == "exit") {
            book.makeExit();
            return 0;
        }
        else if (option == "ADD" || option == "add")
            book.makeAdd();
        else if (option == "SEARCH" || option == "search")
            book.makeSearch();
        else {
            std :: cout << "Wrong destiny" << std :: endl;
            std :: cout << "ADD or EXIT or SEARCH is valid" << std :: endl;
        }
    }
}