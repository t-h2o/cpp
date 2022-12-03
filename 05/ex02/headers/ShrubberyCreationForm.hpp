#ifndef	SHRUBBERY_CREATION_FORM_HPP
# define	SHRUBBERY_CREATION_FORM_HPP

# include	<fstream>
# include	"Form.hpp"

class	ShrubberyCreationForm : public Form
{
	public:
		ShrubberyCreationForm(std::string target);
		~ShrubberyCreationForm(void);

		void	execute(Bureaucrat const &executor);

	private:
		void	_plantTree(void);
};

#endif /* SHRUBBERY_CREATION_FORM_HPP */
