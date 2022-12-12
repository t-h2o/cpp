#include	<iostream>
#include	"color.hpp"
#include	"Span.hpp"

static void	test(void)
{
	Span	sp(5);

	for (int i = 0; i < 6; i++)
		sp.addNumber(42 * i);
}

int	main(void)
{
	title("Module 8 : exercice 01 : span");

	test();

	return 0;
}
