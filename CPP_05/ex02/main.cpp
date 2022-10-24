#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void) {
    try {
        Form f("f1", 0, 5);
    }
    catch (std :: exception &e) {
        std :: cout << e.what() << std :: endl;
    }
    std :: cout << "_________________________________________________" << std :: endl;

    try {
        Form f("f2", 100, 160);
    }
    catch (std :: exception &e) {
        std :: cout << e.what() << std ::endl;
    }
    std :: cout << "_________________________________________________" << std :: endl;

    try {
        Form f("f3", 100, 105);
        std :: cout << f;
        Bureaucrat bob1("Bob", 140);
        std :: cout << bob1;
        f.beSigned(bob1);
        std :: cout << f;
    }
    catch (std :: exception &e) {
        std :: cout << e.what() << std ::endl;
    }
    std :: cout << "_________________________________________________" << std :: endl;

//    try {
//        Bureaucrat anny("Anny", 150);
//        std::cout << anny;
//        anny.decGrade();
//    }
//    catch (std :: exception &e) {
//        std :: cout << e.what() << std ::endl;
//    }
//
//    Bureaucrat bob("Bob", 1);
//    for (int i = 0; i < 20; i++) {
//        bob.decGrade();
//        std :: cout << bob;
//    }
//    for (int i = 0; i < 20; i++) {
//        bob.incGrade();
//        std :: cout << bob;
//    }
}