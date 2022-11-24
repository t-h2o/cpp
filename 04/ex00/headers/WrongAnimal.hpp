#include	<iostream>

#ifndef	WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

class	WrongAnimal
{
	public:
		WrongAnimal(void);
		WrongAnimal(WrongAnimal &other);
		virtual ~WrongAnimal(void);
		WrongAnimal	&operator=(WrongAnimal &other);

		void	makeSound(void) const;

		std::string getType(void) const {return _type;}

	protected:
		std::string	_type;
};

# endif	/* WRONGANIMAL_HPP */
