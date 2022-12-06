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
	int		inputInt;
	float	inputFloat;

	std::cout
		<< "Converter: Print the table from \""
		<< input
		<< "\""
		<< std::endl;

	try
	{
		inputInt = stoi(input);
		inputFloat = stof(input);
	}
	catch (const std::invalid_argument& e)
	{
		std::cerr
			<< e.what()
			<< ": cannot convert \""
			<< input
			<< "\""
			<< std::endl;
		return ;
	}


	std::cout
	<< "  char: '"
	<< "*" // TODO change with a variable
	<< "'"
	<< std::endl

	<< "   int: "
	<< inputInt
	<< std::endl

	<< " float: "
	<< inputFloat
	<< std::endl

	<< "double: "
	<< "42.0" // TODO change with a variable
	<< std::endl;
}
