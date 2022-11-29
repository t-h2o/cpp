#include	"Bureaucrat.hpp"
#include	"Form.hpp"

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
	Bureaucrat	paul("Paul", -1);

	section_message("Contructor");
	Bureaucrat	arnolde("Arnolde", 151);

	section_message("Get name");
	std::cout << paul.getName();

	section_message("Get grade");
	std::cout << paul.getGrade();

	section_message("increase grade");
	paul.incGrade(5);
	arnolde.incGrade(5);

	section_message("decrease grade");
	paul.decGrade(12);
	arnolde.decGrade(50);

	section_message("Display before with the operator <<");
	std::cout << paul; NEWLINE;
	std::cout << arnolde; NEWLINE;

	section_message("Operator =");
	paul = arnolde;

	section_message("Display after with the operator <<");
	std::cout << paul; NEWLINE;
	std::cout << arnolde; NEWLINE;

	section_message("Destructor");
}

static void	test_form(void)
{
	section_message("Contructor");

	Form form(42);

	section_message("Display form with the operator <<");
	std::cout << form;

	section_message("Sign the form");
	form.sign();

	section_message("Display form with the operator <<");
	std::cout << form;
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
	test_message("Test Form", &test_form);
}
