#include	"th2o.hpp"

int	main(void)
{
	Fixed a;
	Fixed const b( 10 );
	Fixed const c( 42.42f );
	Fixed const d( b );

	a = Fixed( 1234.4321f );

	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	
	return 0; 
}

//{
//	Fixed	jean;
//	Fixed	paul(12345678901.0f);
//	Fixed	marc;
//
//	marc = jean;
//
//	std::cout << jean.getRawBits()
//		<< std::endl;
//
//	std::cout << paul.getRawBits()
//		<< std::endl;
//
//	std::cout << marc.getRawBits()
//		<< std::endl;
//
//	std::cout << marc.toFloat()
//		<< std::endl;
//
//	std::cout << marc.toInt()
//		<< std::endl;
//
//	std::cout << marc
//		<< std::endl;
//
//	return 0;
//}
