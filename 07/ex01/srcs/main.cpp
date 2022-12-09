#include	<iostream>
#include	"color.hpp"

#define	NEWLINE	std::cout << std::endl;

class MyIter
{
	public:
		template<typename T>
		static void	print(T const value, unsigned int index)
		{
			std::cout
				<< "\t"
				<< index
				<< " : "
				<< value
				<< std::endl;
		}

		template<typename T>
		static void	iter(T const * values, unsigned int size)
		{
			std::cout << "Iter function called: "
				<< values
				<< ", "
				<< size
				<< std::endl;
			for (unsigned int index = 0; index < size; index++)
			{
				MyIter::print<T>(values[index], index);
			}
		}
};

static void	test(void)
{
	section("Iter into a string table"); NEWLINE; NEWLINE;
	std::string	values[2];
	values[0] = "my first value";
	values[1] = "my seconde value";
	MyIter::iter<std::string>(values, 2);
}

int	main(void)
{
	title("Module 07 : Exercice 01 : Iter"); NEWLINE; NEWLINE;

	test();

	return 0;
}
