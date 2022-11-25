#include	<iostream>

class	Bureaucrat
{
	public:

		Bureaucrat(std::string const name, int grade);
		~Bureaucrat(void);

		int			getGrade(void) const;
		std::string	getName(void) const;

	private:

		const std::string	_name;
		int					_grade;
};

std::ostream	&operator<<(std::ostream &sortie, Bureaucrat const &rhs);
