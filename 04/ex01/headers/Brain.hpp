#include	<iostream>

#ifndef	BRAIN_HPP
# define BRAIN_HPP

class	Brain
{
	public:
		Brain(void);
		Brain(Brain &other);
		~Brain(void);

		Brain	&operator=(Brain &other);

		std::string	ideas[100];
};

# endif	/* BRAIN_HPP */
