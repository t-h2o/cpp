#include	<iostream>
#include	"color.hpp"

template<typename T>
static void	print(T const value)
{
	std::cout
		<< value
		<< std::endl;
}

class MyIter
{
	public:
		template<typename T>
		static void	iter(T const * values, unsigned int size, void (*functionptr)(T))
		{
			std::cout << "Iter function called: "
				<< values
				<< ", "
				<< size
				<< std::endl;
			for (unsigned int index = 0; index < size; index++)
				(*functionptr)(values[index]);
		}
};

static void	test(void)
{
	{
		section("Iter into a string table");
		std::string	values[3];
		values[0] = "my first value";
		values[1] = "my seconde value";
		values[2] = "my third value";
		MyIter::iter<std::string>(values, 3, &print);
	}
	{
		section("Iter into an integer table");
		int	values[3];
		values[0] = 42;
		values[1] = 12;
		values[2] = -123456;
		MyIter::iter<int>(values, 3, &print);
	}
	{
		section("Iter into a float table");
		float	values[3];
		values[0] = 42.1234f;
		values[1] = 12.f;
		values[2] = -123456.9876f;
		MyIter::iter<float>(values, 3, &print);
	}
	{
		section("Iter into a double table");
		double	values[3];
		values[0] = 42.1234;
		values[1] = 12;
		values[2] = -123456.9876;
		MyIter::iter<double>(values, 3, &print);
	}
}

int	main(void)
{
	title("Module 07 : Exercice 01 : Iter");

	test();

	return 0;
}
