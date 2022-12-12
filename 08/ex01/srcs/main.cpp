#include	<iostream>
#include	"color.hpp"
#include	"Span.hpp"

static void	test(void)
{
	section("Add number");
	{
		Span	sp(5);

		try
		{
			for (int i = 0; i < 5; i++)
				sp.addNumber(42 * i * i);
		}
		catch (std::exception &e)
		{
			print_exception(e);
		}
		std::cout << sp.shortestSpan() << std::endl;
	}

	section("two elements");
	{
		Span sp(2);

		sp.addNumber(5);
		sp.addNumber(7);

		std::cout << sp.shortestSpan() << std::endl;
	}
}

int	main(void)
{
	title("Module 8 : exercice 01 : span");

	test();

	return 0;
}
