#include	<iostream>
#include	"color.hpp"
#include	"Arint.hpp"

int	main(void)
{
	title("Module 07 : Exercice 02 : Array");

	Arint	arrempty;
	Arint	arrint(5);

	arrint[1] = 42;
	std::cout << arrint[1] << std::endl;

	return 0;
}
