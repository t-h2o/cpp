#include	"Animal.hpp"

#ifndef	CAT_HPP
# define CAT_HPP

class	Cat : public Animal
{
	public:
		Cat(void);
		Cat(Cat &other);
		~Cat(void);

		Cat	&operator=(Cat &other);

		void	makeSound(void) const;

		std::string	getType(void) const;
};

# endif	/* CAT_HPP */
