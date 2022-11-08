#include	"th2o.hpp"

int	main(void)
{
	Fixed	jean;
	Fixed	paul(jean);
	Fixed	marc;

	marc = jean;

	std::cout << jean.getRawBits()
		<< std::endl;

	std::cout << paul.getRawBits()
		<< std::endl;

	std::cout << marc.getRawBits()
		<< std::endl;

	return 0;
}
