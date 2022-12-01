#include	"ShrubberyCreationForm.hpp"
#include	"Bureaucrat.hpp"

#define		EXIT	0

static void	print_exception(std::exception const &e, std::string message)
{
	std::cout
		<< COL_RED
		<< message
		<< e.what()
		<< COL_RES
		<< std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :
	Form(target, 145, 137)
{
	std::cout << "ShrubberyCreationForm: default constructor"
		<< std::endl;

	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	std::cout << "ShrubberyCreationForm: Destructor"
		<< std::endl;

	return ;
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor)
{
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

	std::cout << "The ShrubberyCreationForm \""
		<< this->getName()
		<< "\" (grade to execute: "
		<< this->getGradeToExec()
		<< ") is executing by \""
		<< executor.getName()
		<< "\" (grade: "
		<< executor.getGrade()
		<< ")"
		<< std::endl;
}
