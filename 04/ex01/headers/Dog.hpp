#include	"Animal.hpp"
#include	"Brain.hpp"

#ifndef	DOG_HPP
# define DOG_HPP

class	Dog : public Animal
{
	public:
		Dog(void);
		Dog(Dog &other);
		~Dog(void);

		Dog	&operator=(Dog &other);

		void	makeSound(void) const;

		std::string	getType(void) const;

	private:
		Brain	*_brain;
};

# endif	/* DOG_HPP */
