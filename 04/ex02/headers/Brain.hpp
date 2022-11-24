#include	<iostream>

#ifndef	BRAIN_HPP
# define BRAIN_HPP

# define NUMBER_IDEA	100

class	Brain
{
	public:
		Brain(void);
		Brain(Brain const &other);
		virtual ~Brain(void);
		Brain &operator=(Brain const &other);

		std::string	getIdea(int n) const;
		void		setIdea(int n, std::string const &idea);

	private:
		std::string	_idea[NUMBER_IDEA];
};

# endif	/* BRAIN_HPP */
