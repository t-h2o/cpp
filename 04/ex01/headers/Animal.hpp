#include	<iostream>

#ifndef	ANIMAL_HPP
# define ANIMAL_HPP

class	Animal
{
	public:
		Animal(void);
		Animal(Animal &other);
		~Animal(void);

		Animal	&operator=(Animal &other);

	protected:
		std::string	_type;
};

# endif	/* ANIMAL_HPP */
