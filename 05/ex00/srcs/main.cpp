#include	"Bureaucrat.hpp"

#define		COL_RED		"\033[31;1m"
#define		COL_GRE		"\033[32;1m"
#define		COL_RES		"\033[0m"

#define		NEWLINE		std::cout << std::endl

static void
	print_color(std::string color, std::string text)
{
	std::cout
		<< color
		<< text
		<< COL_RES;
}

static void	test_bureaucrat(void)
{
	Bureaucrat	paul("Paul", 42);

	std::cout << paul.getGrade();
	NEWLINE;
}

static void	test_message(std::string message, void (*f)(void))
{
	print_color(COL_GRE, "START of " + message + "\n");
	f();
	print_color(COL_RED, "END of " + message + "\n\n");
}

int	main(void)
{
	print_color(COL_GRE, "Module 05 Exercice 00"); NEWLINE;

	test_message("Test bureaucrat", &test_bureaucrat);
}
