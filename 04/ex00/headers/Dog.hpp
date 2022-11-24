#include	"Animal.hpp"

#ifndef	DOG_HPP
# define DOG_HPP

class	Dog : public Animal
{
	public:
		Dog(void);
		Dog(Dog &other);
		~Dog(void);


		virtual	void	makeSound(void) const;
};

# endif	/* DOG_HPP */
