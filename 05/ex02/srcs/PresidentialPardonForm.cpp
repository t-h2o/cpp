#include	"PresidentialPardonForm.hpp"
#include	"Bureaucrat.hpp"

#define		EXIT	0
#define		VERBOSE	1

PresidentialPardonForm::PresidentialPardonForm(std::string target) :
	Form(target, 72, 45)
{
	std::cout << "PresidentialPardonForm: default constructor"
		<< std::endl;

	return ;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	std::cout << "PresidentialPardonForm: Destructor"
		<< std::endl;

	return ;
}

void	PresidentialPardonForm::execute(Bureaucrat const &executor)
{
	if (!this->isSign())
	{
		std::cout
			<< "It isn't sign..."
			<< std::endl;
		return ;
	}
	try
	{
		if (executor.getGrade() > this->getGradeToExec())
			throw Form::ExceptionGradeTooLow();
	}
	catch (const Form::ExceptionGradeTooLow &e)
	{
		print_exception(e, "Cannot execute: \""
				+ this->getName()
				+ "\" by \""
				+ executor.getName()
				+ "\"");
		if (EXIT) exit(0); else return ;
	}

	if (VERBOSE)
	std::cout << "The PresidentialPardonForm \""
		<< this->getName()
		<< "\" (grade to execute: "
		<< this->getGradeToExec()
		<< ") is executing by \""
		<< executor.getName()
		<< "\" (grade: "
		<< executor.getGrade()
		<< ")"
		<< std::endl;
	std::cout
		<< "\""
		<< this->getName()
		<< "\" has been \"Robotisé\""
		<< std::endl;
}
