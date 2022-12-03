#ifndef	PRESIDENTIAL_PARDON_FORM_HPP
# define	PRESIDENTIAL_PARDON_FORM_HPP

# include	"Form.hpp"

class	PresidentialPardonForm : public Form
{
	public:
		PresidentialPardonForm(std::string target);
		~PresidentialPardonForm(void);

		void	execute(Bureaucrat const &executor);
};

#endif /* PRESIDENTIAL_PARDON_FORM_HPP */
