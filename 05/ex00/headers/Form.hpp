#include	<iostream>

#ifndef	FORM_HPP
# define FORM_HPP

class Form
{
	public:
		Form(void);

		std::string	getName(void) const;
		bool		isSign(void) const;
		void		sign(void);

	private:
		const std::string	_name;
		bool				_isSigned;
};

std::ostream &operator<<(std::ostream &output, Form &form);

#endif /* FORM_HPP */
