#include "Intern.hpp"

Intern :: Intern() {
    std :: cout << "Intern: default constructor called" << std :: endl;
}

Intern :: Intern(const Intern &other) {
    std :: cout << "Intern: copy constructor called" << std :: endl;
    (void)other;
}

Intern :: ~Intern() {
    std :: cout << "Intern: default destructor called" << std :: endl;
}

Intern &Intern :: operator=(const Intern &other) {
    (void)other;
    return *this;
}

Form    *robot(std :: string target) {
    return new RobotomyRequestForm(target);
}

Form    *pres(std :: string target) {
    return new PresidentialPardonForm(target);
}

Form    *tree(std :: string target) {
    return new ShrubberyCreationForm(target);
}

Form	*Intern :: makeForm(std :: string formName, std :: string target) {
	static Form	*(*array[3])(std :: string) = { robot, pres, tree };
	std :: string names[3] = { "RobotomyRequestForm", "PresidentialPardonForm", "ShrubberyCreationForm" };
	int i;

	for (i = 0; i < 3 && formName != names[i]; i++);
	switch (i) {
		case 3:
			std :: cerr << "No such form name" << std :: endl;
			return NULL;
		default:
			std :: cout << "Intern create " << formName << std :: endl; 
			return (*array[i])(target);
	}
}