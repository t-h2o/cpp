#include	"Form.hpp"

static void	print_exception(std::exception const &e, int grade)
{
	std::cout
		<< COL_RED
		<< "Cannot set : "
		<< grade
		<< ", "
		<< e.what()
		<< COL_RES
		<< std::endl;
}

void	Form::_check_grade(void)
{
	try
	{
		if (this->_grade > 150)
			throw Form::ExceptionGradeTooLow();
		if (this->_grade < 1)
			throw Form::ExceptionGradeTooHigh();
	}
	catch (const Form::ExceptionGradeTooLow &e)
	{
		print_exception(e, this->_grade);
		this->_grade = 150;
	}
	catch (const Form::ExceptionGradeTooHigh &e)
	{
		print_exception(e, this->_grade);
		this->_grade = 1;
	}
}

Form::Form(std::string const name, int grade) : _name(name), _grade(grade)
{

	this->_check_grade();

	std::cout
		<< "Form: default constructor --> "
		<< *this
		<< std::endl;

	return ;
}

Form::~Form(void)
{
	std::cout
		<< "Form: destructor --> "
		<< *this
		<< std::endl;

	return ;
}

Form	&Form::operator=(Form const &bureaucrat)
{
	std::cout << "Set the grade of "
		<< bureaucrat._name
		<< " into "
		<< this->_name
		<< std::endl;

	this->_grade = bureaucrat._grade;

	return *this;
}

std::string	Form::getName(void) const
{
	return this->_name;
}

int	Form::getGrade(void) const
{
	return this->_grade;
}

void	Form::decGrade(int level)
{
	int	before;

	before = this->_grade;

	this->_grade += level;

	this->_check_grade();

	std::cout
		<< *this
		<< " (Level before: "
		<< before
		<< ", decrease of "
		<< level
		<< ")"
		<< std::endl;
}

void	Form::incGrade(int level)
{
	int	before;

	before = this->_grade;

	this->_grade -= level;

	this->_check_grade();

	std::cout
		<< *this
		<< " (Level before: "
		<< before
		<< ", increase of "
		<< level
		<< ")"
		<< std::endl;
}

std::ostream &operator<<(std::ostream &sortie, const Form &bureaucrat)
{
	sortie
		<< bureaucrat.getName()
		<< ", bureaucrat grade "
		<< bureaucrat.getGrade()
		<< ".";

	return sortie;
}
