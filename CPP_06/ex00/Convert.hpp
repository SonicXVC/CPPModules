#pragma once

#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <string>
# include <iostream>

class Convert {
public:
    Convert(void);
    Convert(const Convert	&other);
    Convert(std :: string const &input);
    ~Convert(void);
    Convert &operator=(const Convert &other);
    std :: string const & getInput(void) const;
    std :: string const & getType(void) const;
    bool	excep(void);
    void	print(void) const;
    class BadInput : public std :: exception {
    public:
        virtual const char* what(void) const throw();
    };
private:
    void			checkType(void);
    void			printChar(void) const;
    void			printInt(void) const;
    void			printFloat(void) const;
    void			printDouble(void) const;
    std :: string	input;
    std :: string	type;
};

#endif