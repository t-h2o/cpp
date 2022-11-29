#include	"Form.hpp"

Form::Form(std::string name, int gradeToSign, int gradeToExec) : _name(name),
	_isSigned(false),
	_gradeToSign(gradeToSign),
	_gradeToExec(gradeToExec)
{
	return ;
}

std::string	Form::getName(void) const
{
	return this->_name;
}

void		Form::beSigned(Bureaucrat &bureaucrat)
{
	if (this->isSign())
	{
		std::cout
			<< "The form \""
			<< this->getName()
			<< "\" is already signed"
			<< std::endl;

		return ;
	}

	if (bureaucrat.getGrade() > this->getGradeToSign())
		std::cout << "Bureaucrat \""
			<< bureaucrat.getName()
			<< "\" (grade: "
			<< bureaucrat.getGrade()
			<< ") can't sign the form \""
			<< this->getName()
			<< "\" (grade to sign: "
			<< this->getGradeToSign()
			<< ")"
			<< std::endl;
	else
	{
		std::cout << "Bureaucrat \""
			<< bureaucrat.getName()
			<< "\" (grade: "
			<< bureaucrat.getGrade()
			<< ") is signing the form \""
			<< this->getName()
			<< "\" (grade to sign: "
			<< this->getGradeToSign()
			<< ")"
			<< std::endl;

		this->_isSigned = true;
	}

}

bool		Form::isSign(void) const
{
	return this->_isSigned;
}

int			Form::getGradeToSign(void) const
{
	return this->_gradeToSign;
}

int			Form::getGradeToExec(void) const
{
	return this->_gradeToExec;
}

std::ostream &operator<<(std::ostream &output, Form &form)
{
	output << "Form \""
		<< form.getName()
		<< "\" ";

	if (form.isSign())
		output << "is signed";
	else
		output << "isn't signed";

	output
		<< " (Grade to sign: "
		<< form.getGradeToSign()
		<< ", grade to execute: "
		<< form.getGradeToExec()
		<< ")"
		<< std::endl;

	return output;
}
