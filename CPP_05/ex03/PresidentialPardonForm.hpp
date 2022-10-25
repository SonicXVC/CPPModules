#pragma once

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"

class PresidentialPardonForm : public Form {
    public:
            PresidentialPardonForm();
            PresidentialPardonForm(std :: string _target);
            PresidentialPardonForm(const PresidentialPardonForm &other);
            ~PresidentialPardonForm();
            PresidentialPardonForm &operator=(const PresidentialPardonForm &other);
            virtual std :: string const &getTarget() const;
            virtual void                execute(Bureaucrat const &executor) const;
    private:
            std :: string target;
};

#endif