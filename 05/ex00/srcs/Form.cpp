#include	"Form.hpp"

Form::Form(void) : _name("Name"),
	_isSigned(false)
{
	return ;
}

std::string	Form::getName(void) const
{
	return this->_name;
}

bool		Form::isSign(void) const
{
	return this->_isSigned;
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
		<< std::endl;

	return output;
}
