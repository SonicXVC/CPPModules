#include "Bureaucrat.hpp"

Bureaucrat :: Bureaucrat() {
    std :: cout << "Bureaucrat: Default constructor called" << std :: endl;
}

Bureaucrat :: Bureaucrat(std::string _name, int _grade) : name(_name), grade(_grade) {
    std :: cout << "Bureaucrat: init constructor called" << std :: endl;
    checkGrade();
}

Bureaucrat :: Bureaucrat(const Bureaucrat &other) {
    std :: cout << "Bureaucrat: copy constructor called" << std :: endl;
    *this = other;
}

Bureaucrat :: ~Bureaucrat(void) {
    std :: cout << "Bureaucrat: Default destructor called" << std :: endl;
}

Bureaucrat  &Bureaucrat :: operator=(const Bureaucrat &other) {
    if (this != &other)
        grade = other.getGrade();
    std :: cout << "Bureaucrat: assignment constructor called" << std :: endl;
    return *this;
}

std :: string const &Bureaucrat :: getName() const {
    return name;
}

int                 Bureaucrat :: getGrade() const {
    return  grade;
}

void                Bureaucrat :: incGrade() {
    grade--;
    checkGrade();
}

void                Bureaucrat :: decGrade() {
    grade++;
    checkGrade();
}

void                Bureaucrat :: checkGrade() const {
    if (grade < 1)
        throw GradeTooHighException();
    if (grade > 150)
        throw GradeTooLowException();
}

const char *Bureaucrat :: GradeTooLowException :: what() const throw() {
    return "Out of range: Grade Too Low";
}

const char *Bureaucrat :: GradeTooHighException :: what() const throw() {
    return "Out of range: Grade Too High";
}

std :: ostream &operator<<(std :: ostream &stream, const Bureaucrat &other) {
    stream << other.getName() << ", bureaucrat\'s grade " << other.getGrade() << std :: endl;
    return stream;
}

