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

	private:
		int	*_myList;
};

#endif	/* MY_ARRAY_HPP */
