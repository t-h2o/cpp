#include	"Intern.hpp"

Intern::Intern(void)
{
	std::cout << "Intern: default constructor"
		<< std::endl;

	return ;
}

Intern::~Intern(void)
{
	std::cout << "Intern: destructor"
		<< std::endl;

	return ;
}

Form	*Intern::makeForm(std::string type, std::string target)
{
	Form	*returnForm;

	returnForm = 0;

	if (type == "ShrubberyCreationForm")
		returnForm = new ShrubberyCreationForm(target);

	else if (type == "RobotomyRequestForm")
		returnForm = new RobotomyRequestForm(target);

	else if (type == "PresidentialPardonForm")
		returnForm = new PresidentialPardonForm(target);

	return returnForm;
}
