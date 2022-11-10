#include	"Fixed.hpp"

int	main(void)
{
	Fixed a(42.1f);

	a.toFloat();
	a.toInt();
	a.getRawBits();

	a.setRawBits(a.getRawBits() + 1);

	a.toFloat();
	a.toInt();
	a.getRawBits();

	std::cout
		<< "a: "
		<< a
		<< std::endl;

	return 0; 
}
