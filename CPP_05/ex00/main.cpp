#include "Bureaucrat.hpp"

int main(void) {
    try {
        Bureaucrat bob("Bob", 0);
    }
    catch (std :: exception &e) {
        std :: cout << e.what() << std :: endl;
    }
    std :: cout << "_________________________________________________" << std :: endl;

    try {
        Bureaucrat anny("Anny", 151);
    }
    catch (std :: exception &e) {
        std :: cout << e.what() << std ::endl;
    }
    std :: cout << "_________________________________________________" << std :: endl;

    try {
        Bureaucrat bob1("Bob", 1);
        std :: cout << bob1;
        bob1.incGrade();
    }
    catch (std :: exception &e) {
        std :: cout << e.what() << std ::endl;
    }
    std :: cout << "_________________________________________________" << std :: endl;

    try {
        Bureaucrat anny("Anny", 150);
        std::cout << anny;
        anny.decGrade();
    }
    catch (std :: exception &e) {
        std :: cout << e.what() << std ::endl;
    }

    Bureaucrat bob("Bob", 1);
    for (int i = 0; i < 20; i++) {
        bob.decGrade();
        std :: cout << bob;
    }
    for (int i = 0; i < 20; i++) {
        bob.incGrade();
        std :: cout << bob;
    }
}