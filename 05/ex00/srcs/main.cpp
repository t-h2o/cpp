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

static void
	section_message(std::string section)
{
	NEWLINE;
	NEWLINE;
	print_color(COL_GRE, "\t" + section + "...");
	NEWLINE;
	NEWLINE;
}

static void	test_bureaucrat(void)
{
	section_message("Contructor");
	Bureaucrat	paul("Paul", 42);

	section_message("Get name");
	std::cout << paul.getName();

	section_message("Get grade");
	std::cout << paul.getGrade();

	section_message("Operator<<");
	std::cout << paul; NEWLINE;

	section_message("Destructor");
}

static void	test_message(std::string message, void (*f)(void))
{
	print_color(COL_GRE, "START of " + message);
	NEWLINE;
	f();
	NEWLINE;
	NEWLINE;
	print_color(COL_RED, "END of " + message);
	NEWLINE;
}

int	main(void)
{
	print_color(COL_GRE, "Module 05 Exercice 00"); NEWLINE;
	NEWLINE;

	test_message("Test bureaucrat", &test_bureaucrat);
}
