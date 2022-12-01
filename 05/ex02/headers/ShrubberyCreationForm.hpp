#ifndef	SHRUBBERY_CREATION_FORM_HPP
# define	SHRUBBERY_CREATION_FORM_HPP

# include	"Form.hpp"

class	ShrubberyCreationForm : public Form
{
	public:
		ShrubberyCreationForm(std::string target);
		~ShrubberyCreationForm(void);

		void	execute(Bureaucrat const &executor);
};

#endif /* SHRUBBERY_CREATION_FORM_HPP */
