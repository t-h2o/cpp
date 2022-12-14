#include	<iostream>
#include	"color.hpp"
#include	"Arint.hpp"

template<typename T>
static void	trycatch(Arint<T> &myarray, unsigned int position, T value)
{
	std::cout
		<< "Try position: "
		<< position
		<< " size = "
		<< myarray.size()
		<< std::endl;

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

template<typename T>
static void	trycatch_print(Arint<T> &myarray, unsigned int position)
{
	std::cout
		<< "Try to print position: "
		<< position
		<< " size = "
		<< myarray.size()
		<< std::endl;

	try
	{
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
	section("Empty int array");
	{
		Arint<int>	arrempty;

		trycatch<int>(arrempty, 0, 42);
		trycatch<int>(arrempty, 12, 42);
	}

	section("int array of 5 elements");
	{
		Arint<int>	arrint(5);

		trycatch<int>(arrint, 4, 42);
		trycatch<int>(arrint, 5, 42);
		trycatch<int>(arrint, 0, 42);
		trycatch<int>(arrint, -1, 42);

		section("\tarrint = arrint");
		arrint = arrint;

		section("\tasdf = arrint");
		Arint<int>	asdf;
		asdf = arrint;
		trycatch_print(asdf, 4);

		section("\tqwer(arrint)");
		Arint<int>	qwer(arrint);
		trycatch_print(asdf, 4);
	}

	section("string array of 2 elements");
	{
		Arint<std::string>	two(2);

		trycatch<std::string>(two, 0, "first");
		trycatch<std::string>(two, 1, "second");
		trycatch<std::string>(two, 2, "out");
		trycatch_print(two, 0);
	}
}

int	main(void)
{
	title("Module 07 : Exercice 02 : Array");

	test();

	return 0;
}
