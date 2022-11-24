#include	"Bureaucrat.hpp"

int	main(void)
{
	std::cout << "Module 05 Exercice 00"
		<< std::endl;

	Bureaucrat	paul("Paul", 42);

	std::cout
		<< paul.getGrade()
		<< std::endl;
}
