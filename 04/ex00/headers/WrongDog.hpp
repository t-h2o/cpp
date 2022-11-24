#include	"WrongAnimal.hpp"

#ifndef	WRONGDOG_HPP
# define WRONGDOG_HPP

class	WrongDog : public WrongAnimal
{
	public:
		WrongDog(void);
		WrongDog(WrongDog &other);
		~WrongDog(void);

		WrongDog	&operator=(WrongDog &other);

		void	makeSound(void) const;
};

# endif	/* WRONGDOG_HPP */
