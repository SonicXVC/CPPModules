#include "PhoneBook.hpp"

int main(void)
{
    PhoneBook book;
    std :: string   option;
    bool flag = true;
    int i = 0, size = 0;

    while (flag)
    {
        if (!(std :: cin >> option))
            flag = false;
        else if (option == "EXIT" || option == "exit")
        {
            book.makeExit();
            flag = false;
        }
        else if (option == "ADD" || option == "add")
        {
            book.makeAdd(&i);
            if (size < i)
                size = i;
        }
    }
    return 0;
}