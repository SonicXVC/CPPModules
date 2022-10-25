#pragma once
#ifndef INTERN_HPP
# define INTERN_HPP

# include "Form.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern {
    public:
            Intern();
            Intern(const Intern &other);
            ~Intern();
            Intern &operator=(const Intern &other);
            Form *makeForm(std :: string formName, std :: string targetName);
};

#endif