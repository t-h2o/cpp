#include	"Bureaucrat.hpp"

static void	print_exception(std::exception const &e, int grade)
{
	std::cout
		<< COL_RED
		<< "Cannot set grade: "
		<< grade
		<< " | "
		<< e.what()
		<< COL_RES
		<< std::endl;
}

void	Bureaucrat::_check_grade(void)
{
	try
	{
		if (this->_grade > 150)
			throw Bureaucrat::ExceptionGradeTooLow();
		if (this->_grade < 1)
			throw Bureaucrat::ExceptionGradeTooHigh();
	}
	catch (const Bureaucrat::ExceptionGradeTooLow &e)
	{
		print_exception(e, this->_grade);
		this->_grade = 150;
	}
	catch (const Bureaucrat::ExceptionGradeTooHigh &e)
	{
		print_exception(e, this->_grade);
		this->_grade = 1;
	}
}

Bureaucrat::Bureaucrat(std::string const name, int grade) : _name(name), _grade(grade)
{

	this->_check_grade();

	std::cout
		<< "Bureaucrat: default constructor --> "
		<< *this
		<< std::endl;

	return ;
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout
		<< "Bureaucrat: destructor --> "
		<< *this
		<< std::endl;

	return ;
}

std::string	Bureaucrat::getName(void) const
{
	return this->_name;
}

int	Bureaucrat::getGrade(void) const
{
	return this->_grade;
}

void	Bureaucrat::decGrade(int level)
{
	int	before;

	before = this->_grade;

	this->_grade += level;

	std::cout
		<< *this
		<< " (Level before: "
		<< before
		<< ", decrease of "
		<< level
		<< ")"
		<< std::endl;
}

void	Bureaucrat::incGrade(int level)
{
	int	before;

	before = this->_grade;

	this->_grade -= level;

	std::cout
		<< *this
		<< " (Level before: "
		<< before
		<< ", increase of "
		<< level
		<< ")"
		<< std::endl;
}

std::ostream &operator<<(std::ostream &sortie, const Bureaucrat &bureaucrat)
{
	sortie
		<< bureaucrat.getName()
		<< ", bureaucrat grade "
		<< bureaucrat.getGrade()
		<< ".";

	return sortie;
}
