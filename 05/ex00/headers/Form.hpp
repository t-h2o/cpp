#include	<iostream>

#ifndef	FORM_HPP
# define FORM_HPP

class Form
{
	public:
		Form(void);

		std::string	getName(void) const;

	private:
		const std::string	_name;
};

std::ostream &operator<<(std::ostream &output, Form &form);

#endif /* FORM_HPP */
