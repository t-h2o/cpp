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
};

# endif	/* CAT_HPP */
