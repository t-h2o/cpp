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

void		Form::sign(void)
{
	std::cout << "Form \""
		<< this->getName()
		<< "\" is getting sign"
		<< std::endl;

	this->_isSigned = true;
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
