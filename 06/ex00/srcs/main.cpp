#include	"Convert.hpp"

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

static void
	test_convert(void)
{
	section_message("Constructor");
	Convert	converter;

	section_message("char");
	converter.table("'a'");
	NEWLINE; converter.table("'0'");
	NEWLINE; converter.table("'e'");
	NEWLINE; converter.table("'\t'");

	section_message("double");
	NEWLINE; converter.table("42.12345678");
	NEWLINE; converter.table("0.0000000");
	NEWLINE; converter.table("-1.6030000");

	section_message("int");
	converter.table("42");
	NEWLINE; converter.table("1234");
	NEWLINE; converter.table("-34");
	NEWLINE; converter.table("0");

	section_message("float keyword");
	converter.table("+inf");
	NEWLINE; converter.table("-inf");
	NEWLINE; converter.table("nan");
	NEWLINE; converter.table("+inff");
	NEWLINE; converter.table("-inff");
	NEWLINE; converter.table("nanf");

	NEWLINE; converter.table("true");
	NEWLINE; converter.table("bad");

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
	NEWLINE;
	NEWLINE;
}

int	main(void)
{
	print_color(COL_GRE, "Module 06 Exercice 00"); NEWLINE;

	test_message("Test convert", &test_convert);
}
