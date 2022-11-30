#include	<iostream>

#ifndef	FORM_HPP
# define FORM_HPP

class	Bureaucrat;

class	Form
{
	public:
		Form(std::string name, int gradeToSign, int gradeToExec);
		~Form(void);

		std::string	getName(void) const;
		bool		isSign(void) const;
		int			getGradeToSign(void) const;
		int			getGradeToExec(void) const;

		void		beSigned(Bureaucrat &bureaucrat);

		class ExceptionGradeTooLow : public std::exception
		{
			public:
				const char *what() const throw()
				{
					return ("Init with grade = 150");
				}
		};

		class ExceptionGradeTooHigh : public std::exception
		{
			public:
				const char *what() const throw()
				{
					return ("Init with grade = 1");
				}
		};

	private:
		const std::string	_name;
		bool				_isSigned;
		const int			_gradeToSign;
		const int			_gradeToExec;

		void	_check_grade(void)const;
};

std::ostream &operator<<(std::ostream &output, Form &form);

#endif /* FORM_HPP */
