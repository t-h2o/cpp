#include	"Intern.hpp"

#include	"ShrubberyCreationForm.hpp"
#include	"RobotomyRequestForm.hpp"
#include	"PresidentialPardonForm.hpp"

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

Form	*Intern::ShrubberyCreation(std::string target)
{
	Form *ptr;

	std::cout << target << std::endl;
	ptr = new ShrubberyCreationForm(target);

	return ptr;
}

Form	*Intern::PresidentialPardon(std::string target)
{
	Form *ptr;

	std::cout << target << std::endl;
	ptr = new PresidentialPardonForm(target);

	return ptr;
}

Form	*Intern::RobotomyRequest(std::string target)
{
	Form *ptr;

	std::cout << target << std::endl;
	ptr = new RobotomyRequestForm(target);

	return ptr;
}

Form	*Intern::makeForm(std::string type, std::string target)
{
	std::string	typeForm[3] = {"ShrubberyCreation", "RobotomyRequest", "PresidentialPardon"};
	Form* (Intern::*createFormFunction[3])(std::string formTarget)
		= {&Intern::ShrubberyCreation, &Intern::RobotomyRequest, &Intern::PresidentialPardon};
	Form		*returnForm;

	for (int i = 0; i < 3; i++)
	{
		if (type == typeForm[i])
		{
			returnForm = ((*this).*(createFormFunction[i])) (target);
			return returnForm;
		}
	}
	std::cout << "Do not find a correct type form" << std::endl;

	return 0;
}
