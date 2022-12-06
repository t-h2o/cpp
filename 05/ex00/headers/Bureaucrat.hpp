#include	<iostream>
#include	<cstdlib>

#ifndef	BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#define		COL_RED		"\033[31;1m"
#define		COL_GRE		"\033[32;1m"
#define		COL_RES		"\033[0m"

class	Bureaucrat
{
	public:

		Bureaucrat(std::string const name, int grade);
		~Bureaucrat(void);

		int			getGrade(void) const;
		std::string	getName(void) const;
		Bureaucrat &operator=(Bureaucrat const &bureaucrat);

		void	incGrade(int level);
		void	decGrade(int level);

		class ExceptionGradeTooLow : public std::exception
		{
			public:
				const char *what() const throw()
				{
					return ("Grade too low");
				}
		};

		class ExceptionGradeTooHigh : public std::exception
		{
			public:
				const char *what() const throw()
				{
					return ("Grade too high");
				}
		};

	private:

		void	_check_grade(void);

		const std::string	_name;
		int					_grade;
};

std::ostream	&operator<<(std::ostream &sortie, Bureaucrat const &rhs);

#endif /* BUREAUCRAT_HPP */
