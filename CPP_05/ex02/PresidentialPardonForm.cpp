#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"
#include "Form.hpp"

PresidentialPardonForm ::PresidentialPardonForm() : Form("PresidentialPardonForm", 10, 5){
    std :: cout << "PresidentialPardonForm: default constructor called" << std :: endl;
}

PresidentialPardonForm ::PresidentialPardonForm(std::string _target) : Form("PresidentialPardonForm", 10, 5), target(_target) {
    std :: cout << "PresidentialPardonForm: init constructor called" << std :: endl;
}

PresidentialPardonForm ::PresidentialPardonForm(const PresidentialPardonForm &other) {
    *this = other;
    std :: cout << "PresidentialPardonForm: copy constructor called" << std :: endl;
}

PresidentialPardonForm ::~PresidentialPardonForm() {
    std :: cout << "PresidentialPardonForm: default destructor called" << std :: endl;
}

PresidentialPardonForm &PresidentialPardonForm :: operator=(const PresidentialPardonForm &other) {
    if (this != &other)
        target = other.getTarget();
    std :: cout << "PresidentialPardonForm: assignment constructor called" << std :: endl;
    return *this;
}

std :: string const &PresidentialPardonForm ::getTarget() const {
    return target;
}

void PresidentialPardonForm :: execute(Bureaucrat const &executor) const {
       if (this->getState())
           throw IsSigned();
       if (executor.getGrade() > this->getGradeExec() || executor.getGrade() > this->getGradeSign())
           throw GradeTooLowException();
       std :: cout << target << " has beed pardoned by Zaphod Beeblebrox" << std :: endl;
}