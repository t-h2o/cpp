#include	"ShrubberyCreationForm.hpp"
#include	"Bureaucrat.hpp"

#define		EXIT	0

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
	this->_plantTree("target");
}

void
	ShrubberyCreationForm::_plantTree(std::string file)
{
	std::fstream	newfile;
	std::string		line;
	std::string		filename;

	filename = file + "_shrubbery";

	newfile.open(filename.c_str(), std::fstream::out | std::fstream::trunc);
	if (!newfile.is_open())
	{
		std::cout << "Error: output file didn't open"
			<< std::endl;
		return ;
	}

	newfile
		<< "                                               |" << std::endl
		<< "                                              -x-" << std::endl
		<< "                                               |" << std::endl
		<< "              v .   ._, |_  .," << std::endl
		<< "           `-._\\/  .  \\ /    |/_" << std::endl
		<< "               \\\\  _\\, y | \\//" << std::endl
		<< "         _\\_.___\\\\, \\\\/ -.\\||" << std::endl
		<< "           `7-,--.`._||  / / ," << std::endl
		<< "           /'     `-. `./ / |/_.'" << std::endl
		<< "                     |    |//" << std::endl
		<< "                     |_    /" << std::endl
		<< "                     |-   |" << std::endl
		<< "                     |   =|" << std::endl
		<< "                     |    |" << std::endl
		<< "--------------------/ ,  . \\--------._" << std::endl;

	newfile.close();

	return ;
}
