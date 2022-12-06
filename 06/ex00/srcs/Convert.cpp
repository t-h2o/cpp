#include	"Convert.hpp"

Convert::Convert(void)
{
	std::cout
		<< "Convert: default constructor"
		<< std::endl;
}

Convert::~Convert(void)
{
	std::cout
		<< "Convert: destructor"
		<< std::endl;
}

void	Convert::table(std::string input)
{
	std::cout
		<< "Converter: Print the table from \""
		<< input
		<< "\""
		<< std::endl;

	std::cout
	<< "  char: '"
	<< "*" // TODO change with a variable
	<< "'"
	<< std::endl

	<< "   int: "
	<< "42" // TODO change with a variable
	<< std::endl

	<< " float: "
	<< "42.0f" // TODO change with a variable
	<< std::endl

	<< "double: "
	<< "42.0" // TODO change with a variable
	<< std::endl;
}
