#include	"Convert.hpp"

std::string const Convert::_floatingKeyWord[2] = {"inf", "+inf"};

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

float	Convert::_convFloat(std::string input)
{
	(void) input;

	std::cout << _floatingKeyWord[0]
		<< " : "
		<< _floatingKeyWord[1]
		<< std::endl;

	return 0.0f;
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
	inputFloat = this->_convFloat(input);

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
