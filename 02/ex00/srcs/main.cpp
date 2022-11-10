#include	"Fixed.hpp"

int	main(void)
{
	Fixed a;
	Fixed b(a);
	Fixed c;

	c = a;

	a.getRawBits();
	a.setRawBits(41);
	a.getRawBits();

	return 0; 
}
