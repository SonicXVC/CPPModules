#pragma once
#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Form {
    public:
            Form();
            Form(std :: string _name, int gradeSign, int gradeExec);
            Form(const Form &other);
            ~Form();
            Form &operator=(const Form &other);
            std :: string   const &getName() const;
            int             getGradeSign() const;
            int             getGradeExec() const;
            bool            getState() const;
            void            beSigned(const Bureaucrat &b);
            class GradeTooHighException : public std :: exception {
                public:
                    virtual const char* what() const throw();
            };
            class GradeTooLowException : public std :: exception {
                public:
                    virtual  const char* what() const throw();
            };
            class IsSigned : public std :: exception {
                public:
                    virtual const char* what() const throw();
            };
    private:
            bool            flag;
            std :: string   name;
            const int       gradeSign;
            const int       gradeExec;
};

std :: ostream &operator<<(std :: ostream &stream, const Form &other);

#endif