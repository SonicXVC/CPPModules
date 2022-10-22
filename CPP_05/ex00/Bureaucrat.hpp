#pragma once

#ifndef BUREUCRAT_HPP
# define BUREUCRAT_HPP

# include <iostream>

class Bureaucrat {
public:
    Bureaucrat(void);
    Bureaucrat(std :: string _name, int _grade);
    Bureaucrat(const Bureaucrat &other);
    ~Bureaucrat(void);
    Bureaucrat &operator=(const Bureaucrat &other);
    std :: string const &getName(void) const;
    int                 getGrade(void) const;
    int                 inGrade(void);
    int                 decGrade(void);
class GradeTooLowException : public std :: exception {
public:
        virtual const char* what(void) const throw();
};
private:
    std :: string   name;
    int             grade;
};

#endif