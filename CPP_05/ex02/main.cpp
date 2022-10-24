#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main(void) {
    {
        Bureaucrat	b("bob", 1);
        Form *sh = new ShrubberyCreationForm();
        b.executeForm(*sh);
        delete sh;
    }
    std :: cout << "------------------------------" << std :: endl;
    {
        Bureaucrat	b("bob", 15);
        Form *putin = new PresidentialPardonForm();
        b.executeForm(*putin);
        delete putin;
    }
    std :: cout << "------------------------------" << std :: endl;
    {
        Bureaucrat	b("bob", 60);
        Form *rob = new RobotomyRequestForm();
        b.executeForm(*rob);
        delete rob;
    }
    std :: cout << "------------------------------" << std :: endl;
    {
        Bureaucrat	a("nadia", 2);
        Bureaucrat	b("vladimir", 1);
        Bureaucrat	c("alena", 2);

        Form	*trees = new RobotomyRequestForm("push_swap");
        a.executeForm(*trees);
        delete trees;
        Form	*robot = new ShrubberyCreationForm("Christmas");
        c.executeForm(*robot);
        delete robot;
        Form	*volodya = new PresidentialPardonForm("Russia");
        b.executeForm(*volodya);
        delete volodya;
    }
    return 0;
}