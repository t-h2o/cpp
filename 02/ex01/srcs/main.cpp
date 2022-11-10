#include	"Fixed.hpp"

int	main(void)
{
	Fixed a(42.1f);
	Fixed b(a);

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

	b.toFloat();
	b.toInt();
	b.getRawBits();

	b.setRawBits(b.getRawBits() + 1);

	b.toFloat();
	b.toInt();
	b.getRawBits();

	std::cout
		<< "b: "
		<< b
		<< std::endl;

	return 0; 
}
