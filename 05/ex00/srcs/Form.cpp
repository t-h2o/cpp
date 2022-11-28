#include	"Form.hpp"

Form::Form(void) : _name("Name")
{
	return ;
}

std::string	Form::getName(void) const
{
	return this->_name;
}

std::ostream &operator<<(std::ostream &output, Form &form)
{
	output << "Form "
		<< form.getName()
		<< std::endl;

	return output;
}
