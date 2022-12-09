#include	<iostream>

template<typename TYPE>
TYPE const &	max(TYPE const & x, TYPE const & y)
{
	if (x >= y)
		return x;
	return y;
}

static void	test(void)
{
	int const	a = 2;
	int const	b = 3;

	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "max( a, b ) = " << max<int>( a, b ) << std::endl;
}

int	main(void)
{
	std::cout
		<< "Module 07 : Exercice 00"
		<< std::endl;

	test();

	return 0;
}
