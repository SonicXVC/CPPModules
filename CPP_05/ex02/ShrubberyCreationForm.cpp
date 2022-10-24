#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm ::ShrubberyCreationForm() : Form("ShrubberyCreationForm", 145, 147) {
    std :: cout << "ShrubberyCreationForm: default constructor called" << std :: endl;
}

ShrubberyCreationForm ::ShrubberyCreationForm(std::string _target) : Form("ShrubberyCreationForm", 145, 147), target(_target) {
    std :: cout << "ShrubberyCreationForm: init constructor called" << std :: endl;
}

ShrubberyCreationForm ::ShrubberyCreationForm(const ShrubberyCreationForm &other) {
    *this = other;
    std :: cout << "ShrubberyCreationForm: copy constructor called" << std :: endl;
}

ShrubberyCreationForm ::~ShrubberyCreationForm() {
    std :: cout << "ShrubberyCreationForm: default destructor called" << std :: endl;
}

ShrubberyCreationForm &ShrubberyCreationForm ::operator=(const ShrubberyCreationForm &other) {
    if (this != &other)
        target = other.getTarget();
    std :: cout << "ShrubberyCreationForm: assignment constructor called" << std :: endl;
    return *this;
}

std :: string const &ShrubberyCreationForm ::getTarget() const {
    return target;
}

void ShrubberyCreationForm ::execute(const Bureaucrat &executor) const {
    if (this->getState())
        throw IsSigned();
    if (executor.getGrade() > this->getGradeExec() || executor.getGrade() > this->getGradeSign())
        throw GradeTooLowException();
    std :: string filename = target + "_shrubbery";
    std :: ofstream file(filename);
    if (!file.is_open())
        throw FileNotOpened();
    file << "         |" << std :: endl;
    file << "        -+-" << std :: endl;
    file << "         |" << std :: endl;
    file << "        /=\\" << std :: endl;
    file << "      i/ O \\i" << std :: endl;
    file << "      /=====\\" << std :: endl;
    file << "      /  i  \\" << std :: endl;
    file << "    i/ O * O \\i" << std :: endl;
    file << "    /=========\\" << std :: endl;
    file << "    /  *   *  \\" << std :: endl;
    file << "  i/ O   i   O \\" << std :: endl;
    file << "  /=============\\" << std :: endl;
    file << "  /  O   i   O  \\" << std :: endl;
    file << " i/ *   O   O   * \\i" << std :: endl;
    file << " /=================\\" << std :: endl;
    file << "	    |___|" << std :: endl;
    file.close();
}

const char *ShrubberyCreationForm :: FileNotOpened ::what() const throw() {
    return "Could\'t open file";
}
