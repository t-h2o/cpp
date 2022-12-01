#include	"ShrubberyCreationForm.hpp"
#include	"Bureaucrat.hpp"

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
