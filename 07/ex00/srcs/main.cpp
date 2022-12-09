#include	<iostream>

class	Mytemplates
{
	public:
		template<typename TYPE>
		static TYPE const &	max(TYPE const & x, TYPE const & y)
		{
			if (x >= y)
				return x;
			return y;
		}

		template<typename TYPE>
		static TYPE const &	min(TYPE const & x, TYPE const & y)
		{
			if (x <= y)
				return x;
			return y;
		}

		template<typename TYPE>
		static void	swap(TYPE & x, TYPE & y)
		{
			TYPE tmp;

			tmp	= x;
			x = y;
			y = tmp;
		}
};

static void	test(void)
{
	int a = 2;
	int b = 3;

	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "max( a, b ) = " << Mytemplates::max<int>( a, b ) << std::endl;
	std::cout << "min( a, b ) = " << Mytemplates::min<int>( a, b ) << std::endl;
	std::cout << "swap( a, b )"<< std::endl; Mytemplates::swap<int>( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
}

int	main(void)
{
	std::cout
		<< "Module 07 : Exercice 00"
		<< std::endl;

	test();

	return 0;
}
