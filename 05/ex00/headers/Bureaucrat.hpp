#include	<iostream>

class	Bureaucrat
{
	public:

		Bureaucrat(std::string const name, int grade);

		int	getGrade(void) const;

	private:

		const std::string	_name;
		int					_grade;
};
