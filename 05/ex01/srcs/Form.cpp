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
		if (this->_grade_to_sign > 150)
			throw Form::ExceptionGradeTooLow();
		if (this->_grade_to_sign < 1)
			throw Form::ExceptionGradeTooHigh();
	}
	catch (const Form::ExceptionGradeTooLow &e)
	{
		print_exception(e, this->_grade_to_sign);
	}
	catch (const Form::ExceptionGradeTooHigh &e)
	{
		print_exception(e, this->_grade_to_sign);
	}
}

Form::Form(std::string const name, int const grade_to_sign, int const grade_to_exec) : _name(name), _grade_to_sign(grade_to_sign), _grade_to_exec(grade_to_exec), _form_signed(false)
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

std::string	Form::getName(void) const
{
	return this->_name;
}

int		Form::getGradeSign(void) const
{
	return this->_grade_to_sign;
}

int		Form::getGradeExec(void) const
{
	return this->_grade_to_exec;
}

void	Form::sign(void)
{
	return this->_form_signed = true;
}

bool	Form::isSigned(void) const
{
	return this->_form_signed;
}

std::ostream &operator<<(std::ostream &sortie, const Form &form)
{
	sortie
		<< "Form: \""
		<< form.getName()
		<< "\" ";

	if (form.isSigned())
		sortie
			<< "is";
	else
		sortie
			<< "isn't";

	sortie
		<< " signed "
		<< " ["
		<< form.getGradeSign()
		<< ", "
		<< form.getGradeExec()
		<< "]";

	return sortie;
}
