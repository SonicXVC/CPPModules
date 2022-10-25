#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main(void) {
    {
        Bureaucrat	b("bob", 140);
        Form *shrub = new ShrubberyCreationForm();
        b.executeForm(*shrub);
        delete shrub;
    }
    std :: cout << "------------------------------" << std :: endl;
    {
        Bureaucrat	b("bob", 15);
        Form *pres = new PresidentialPardonForm();
        b.executeForm(*pres);
        delete pres;
    }
    std :: cout << "------------------------------" << std :: endl;
    {
        Bureaucrat	b("bob", 60);
        Form *robot = new RobotomyRequestForm();
        b.executeForm(*robot);
        delete robot;
    }
    std :: cout << "------------------------------" << std :: endl;
    {
        Bureaucrat	a("bob1", 2);
        Bureaucrat	b("bob2", 1);
        Bureaucrat	c("bob3", 2);

        Form	*trees = new RobotomyRequestForm("push_swap");
        a.executeForm(*trees);
        delete trees;
        Form	*robot = new ShrubberyCreationForm("Christmas");
        c.executeForm(*robot);
        delete robot;
        Form	*pres = new PresidentialPardonForm("Russia");
        b.executeForm(*pres);
        delete pres;
    }
    return 0;
}