#include "Form.hpp"

Form :: Form() : flag(false), name(""), gradeSign(150), gradeExec(150) {
    std :: cout << "Form: default constructor called" << std :: endl;
}

Form :: Form(std::string _name, int gradeSign, int gradeExec)
    : flag(false), name(_name), gradeSign(gradeSign), gradeExec(gradeExec) {
    std :: cout << "Form: init constructor called" << std :: endl;
    if (gradeSign < 1 || gradeExec < 1)
        throw GradeTooHighException();
    if (gradeSign > 150 || gradeExec > 150)
        throw GradeTooLowException();
}

Form :: Form(const Form &other) : name(other.getName()), gradeSign(other.getGradeSign()), gradeExec(other.getGradeExec()){
    *this = other;
    std :: cout << "Form: copy constructor called" << std :: endl;
}

Form :: ~Form() {
    std :: cout << "Form: default destructor called" << std :: endl;
}

Form &Form :: operator=(const Form &other) {
    if (this != &other)
        flag = other.getState();
    std :: cout << "Form: assignment constructor called" << std :: endl;
    return *this;
}

std :: string const &Form :: getName() const {
    return name;
}

int Form :: getGradeSign() const {
    return gradeSign;
}

int Form :: getGradeExec() const {
    return gradeExec;
}

bool Form :: getState() const {
    return flag;
}

void Form :: beSigned(const Bureaucrat &b) {
    if (flag)
        throw IsSigned();
    if (b.getGrade() <= gradeSign && b.getGrade() <= gradeExec)
        flag = true;
    if (b.getGrade() > gradeSign)
        throw GradeTooLowException();
}

const char *Form :: GradeTooHighException :: what() const throw() {
    return "Forming failed, grade is too high";
}

const char *Form :: GradeTooLowException :: what() const throw() {
    return "Forming failed, grade is too low";
}

const char *Form :: IsSigned :: what() const throw() {
    return "This form is already signed";
}

std :: ostream &operator<<(std :: ostream &stream, const Form &other) {
    stream << other.getName() << " has grade to execute " << other.getGradeExec()
        << " and grade to sign " << other.getGradeSign() << ". Status of sign " << other.getState() << std :: endl;
    return stream;
}
