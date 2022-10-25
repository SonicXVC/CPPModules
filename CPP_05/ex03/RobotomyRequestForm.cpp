#include "RobotomyRequestForm.hpp"

RobotomyRequestForm :: RobotomyRequestForm() : Form("RobotomyRequestForm", 72, 45) {
    std :: cout << "RobotomyRequestForm: default constructor called" << std :: endl;
}

RobotomyRequestForm ::RobotomyRequestForm(std::string _target) : Form("RobotomyRequestForm", 72, 45), target(_target) {
    std :: cout << "RobotomyRequestForm: init constructor called" << std :: endl;
}

RobotomyRequestForm ::RobotomyRequestForm(const RobotomyRequestForm &other) {
    *this = other;
    std :: cout << "RobotomyRequestForm: copy constructor called" << std :: endl;
}

RobotomyRequestForm ::~RobotomyRequestForm() {
    std :: cout << "RobotomyRequestForm: default destructor called" << std :: endl;
}

RobotomyRequestForm &RobotomyRequestForm ::operator=(const RobotomyRequestForm &other) {
    if (this != &other)
        target = other.getTarget();
    std :: cout << "RobotomyRequestForm: assignment constructor called" << std :: endl;
    return *this;
}

std :: string const &RobotomyRequestForm ::getTarget() const {
    return target;
}

void RobotomyRequestForm ::execute(const Bureaucrat &executor) const {
    if (this->getState())
        throw IsSigned();
    if (executor.getGrade() > this->getGradeExec() || executor.getGrade() > this->getGradeSign())
        throw GradeTooLowException();
    srand(time(0));
    if (rand() % 2)
        std :: cout << "RobotomyForm generated" << std :: endl;
    else
        std :: cout << "Robotomyform Generation failed" << std :: endl;
}