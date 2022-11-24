#include	"WrongAnimal.hpp"

#ifndef	WRONGCAT_HPP
# define WRONGCAT_HPP

class	WrongCat : public WrongAnimal
{
	public:
		WrongCat(void);
		WrongCat(WrongCat &other);
		~WrongCat(void);

		WrongCat	&operator=(WrongCat &other);

		virtual void	makeSound(void) const;
};

# endif	/* WRONGCAT_HPP */
