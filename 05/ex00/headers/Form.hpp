#include	<iostream>

#ifndef	FORM_HPP
# define FORM_HPP

class Form
{
	public:
		Form(std::string name, int gradeToSign, int gradeToExec);

		std::string	getName(void) const;
		bool		isSign(void) const;
		int			getGradeToSign(void) const;
		int			getGradeToExec(void) const;

		void		sign(void);

	private:
		const std::string	_name;
		bool				_isSigned;
		const int			_gradeToSign;
		const int			_gradeToExec;
};

std::ostream &operator<<(std::ostream &output, Form &form);

#endif /* FORM_HPP */
