#ifndef	ROBOTOMY_REQUEST_FORM_HPP
# define	ROBOTOMY_REQUEST_FORM_HPP

# include	"Form.hpp"

class	RobotomyRequestForm : public Form
{
	public:
		RobotomyRequestForm(std::string target);
		~RobotomyRequestForm(void);

		void	execute(Bureaucrat const &executor);
};

#endif /* ROBOTOMY_REQUEST_FORM_HPP */
