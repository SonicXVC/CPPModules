#pragma once

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"

class RobotomyRequestForm : public Form {
    public:
            RobotomyRequestForm();
            RobotomyRequestForm(std :: string _target);
            RobotomyRequestForm(const RobotomyRequestForm &other);
            ~RobotomyRequestForm();
            RobotomyRequestForm &operator=(const RobotomyRequestForm &other);
            virtual std :: string const &getTarget() const;
            virtual void                execute(Bureaucrat const &executor) const;
    private:
        std :: string target;
};

#endif