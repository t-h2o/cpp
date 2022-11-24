#include	"Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const name, int grade) : _name(name), _grade(grade)
{
	return ;
}

int	Bureaucrat::getGrade(void) const
{
	return this->_grade;
}
