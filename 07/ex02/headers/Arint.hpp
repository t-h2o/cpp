// My array template

#ifndef	MY_ARRAY_HPP
# define MY_ARRAY_HPP

# include	"color.hpp"

class Arint
{
	public:
		Arint(void);
		Arint(unsigned int nElements);
		~Arint(void);

		unsigned int getLength(void) const;

		int	&operator[](unsigned int) const;

	private:
		unsigned int const	_length;
		int					*_myList;
};

#endif	/* MY_ARRAY_HPP */
