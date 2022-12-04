#ifndef	INTERN_HPP
# define INTERN_HPP

# include	<iostream>

# include	"ShrubberyCreationForm.hpp"
# include	"RobotomyRequestForm.hpp"
# include	"PresidentialPardonForm.hpp"

class	Form;
class	Intern
{
	public:
		Intern(void);
		~Intern(void);

		Form	*makeForm(std::string, std::string);

		Form	*PresidentialPardon(std::string target);
};

#endif /* INTERN_HPP */
