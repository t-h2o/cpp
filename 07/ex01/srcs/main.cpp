#include	<iostream>
#include	"color.hpp"

#define	NEWLINE	std::cout << std::endl;

class MyIter
{
	public:
		template<typename T>
		static void	iter(T const & value)
		{
			std::cout << "Iter function called: "
				<< value
				<< std::endl;
		}
};

static void	test(void)
{
	section("Iter with a string"); NEWLINE; NEWLINE;
	std::string	value;
	value = "my value";
	MyIter::iter(value);
}

int	main(void)
{
	title("Module 07 : Exercice 01 : Iter"); NEWLINE; NEWLINE;

	test();

	return 0;
}
