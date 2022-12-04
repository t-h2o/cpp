#include	"Intern.hpp"
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

Form	*Intern::PresidentialPardon(std::string target)
{
	Form *ptr;

	std::cout << target << std::endl;
	ptr = new PresidentialPardonForm(target);

	return ptr;
}

Form	*Intern::makeForm(std::string type, std::string target)
{
	std::string	typeForm[3] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};
	Form* (Intern::*createFormFunction)(std::string formTarget) = &Intern::PresidentialPardon;
	Form		*returnForm;

	for (int i = 0; i < 2; i++)
	{
		if (type == typeForm[i])
		{
			returnForm = ((*this).*(createFormFunction)) (target);
			return returnForm;
		}
	}

	return 0;
}
