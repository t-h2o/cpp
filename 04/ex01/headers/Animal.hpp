#include	<iostream>

#include	"Brain.hpp"

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

		void		setIdea(int number, std::string idea) const;
		std::string	getIdea(int number) const;

	protected:
		std::string	_type;
		Brain		*_brain;
};

# endif	/* ANIMAL_HPP */
