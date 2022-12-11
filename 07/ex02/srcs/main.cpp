#include	<iostream>
#include	"color.hpp"
#include	"Arint.hpp"

static void	trycatch(Arint &myarray, unsigned int position, int value)
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
		print_exception(e, "; size = "
			+ std::to_string(myarray.size())
			+ ", position = "
			+ std::to_string(position));
	}
}

static void	test(void)
{
	{
		Arint	arrempty;

		trycatch(arrempty, 0, 42);
		trycatch(arrempty, 12, 42);
	}
	{
		Arint	arrint(5);

		trycatch(arrint, 4, 42);
		trycatch(arrint, 5, 42);
		trycatch(arrint, 0, 42);
		trycatch(arrint, -1, 42);
	}
}

int	main(void)
{
	title("Module 07 : Exercice 02 : Array");

	test();

	return 0;
}
