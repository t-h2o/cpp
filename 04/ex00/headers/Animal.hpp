#include	<iostream>

#ifndef	ANIMAL_HPP
# define ANIMAL_HPP

class	Animal
{
	public:
		Animal(void);
		Animal(Animal const &other);
		virtual ~Animal(void);
		Animal	&operator=(Animal const &other);

		virtual void	makeSound(void) const;

		std::string getType(void) const ;
//		std::string getType(void) const {return _type;}

	protected:
		std::string	_type;
};

# endif	/* ANIMAL_HPP */
