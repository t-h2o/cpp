#include	<iostream>

#define		COL_RED		"\033[31;1m"
#define		COL_GRE		"\033[32;1m"
#define		COL_RES		"\033[0m"

class	Form
{
	public:

		Form(std::string const name, int const grade_to_sign, int const grade_to_exec);
		~Form(void);

		std::string	getName(void) const;
		int			getGradeSign(void) const;
		int			getGradeExec(void) const;
		bool		isSigned(void) const;

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

		void	_check_grade(void);

		const std::string	_name;
		const int			_grade_to_sign;
		const int			_grade_to_exec;
		bool				_form_signed;
};

std::ostream	&operator<<(std::ostream &sortie, Form const &rhs);
