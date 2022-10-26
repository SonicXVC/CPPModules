#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"

int main(void) {
    {
        Bureaucrat  b("bob", 1);
        Form        *sh;
        Intern      intern;

        sh = intern.makeForm("ShrubberyCreationForm", "XMas");
        b.executeForm(*sh);
        delete sh;
    }
    {
        Bureaucrat  b("bob", 1);
        Form        *rob;
        Intern      intern;

        rob = intern.makeForm("RobotomyRequestForm", "ROBOTON");
        b.executeForm(*rob);
        delete rob;
    }
    {
        Bureaucrat  b("bob", 1);
        Form        *pres;
        Intern      intern;

        pres = intern.makeForm("PresidentialPardonForm", "buba");
        b.executeForm(*pres);
        delete pres;
    }
    {
        Bureaucrat  b("bob", 1);
        Form        *pres;
        Intern      intern;

        pres = intern.makeForm("asdfg", "buba");
        if (pres) {
            b.executeForm(*pres);
            delete pres;
        }
    }
    return 0;
}