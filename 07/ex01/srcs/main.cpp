#include	<iostream>
#include	"color.hpp"

#define	NEWLINE	std::cout << std::endl;

class MyIter
{
	public:
		template<typename T>
		static void	iter(T const * values, unsigned int size)
		{
			std::cout << "Iter function called: "
				<< values
				<< ", "
				<< size
				<< std::endl;
			for (unsigned int i = 0; i < size; i++)
			{
				std::cout
					<< "\t"
					<< i
					<< " : "
					<< values[i]
					<< std::endl;
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
