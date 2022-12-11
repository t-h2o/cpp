#include	<iostream>
#include	"color.hpp"
#include	"Arint.hpp"

template<typename T>
static void	trycatch(Arint &myarray, unsigned int position, T value)
{
	try
	{
		myarray[position] = value;
		std::cout
			<< COL_GRE
			<< "Array index["
			<< position
			<< "]"
			<< " = "
			<< myarray[position]
			<< COL_RES
			<< std::endl;
	}
	catch (std::exception &e)
	{
		print_exception(e);
	}
}

static void	test(void)
{
	{
		Arint	arrempty;

		trycatch<int>(arrempty, 0, 42);
		trycatch<int>(arrempty, 12, 42);
	}
	{
		Arint	arrint(5);

		trycatch<int>(arrint, 4, 42);
		trycatch<int>(arrint, 5, 42);
		trycatch<int>(arrint, 0, 42);
		trycatch<int>(arrint, -1, 42);
	}
}

int	main(void)
{
	title("Module 07 : Exercice 02 : Array");

	test();

	return 0;
}
