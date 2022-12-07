#include	"Convert.hpp"

std::string const Convert::_floatingKeyWord[NUMBER_KEYWORD_FLOATING] = {"-inf", "+inf", "nan", "-inff", "+inff", "nanf"};

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

void	Convert::_convFloat(std::string input)
{
	std::cout << " float: ";

	for (int i = 0; i < NUMBER_KEYWORD_FLOATING; i++)
	{
		if (input == _floatingKeyWord[i])
			std::cout
				<< _floatingKeyWord[i]
				<< std::endl;
	}


	std::cout
		<< "impossible"
		<< std::endl;
}

void	Convert::table(std::string input)
{
	int		inputInt;

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

	std::cout
	<< "  char: '"
	<< "*" // TODO change with a variable
	<< "'"
	<< std::endl

	<< "   int: "
	<< inputInt
	<< std::endl;

	this->_convFloat(input);

	std::cout
	<< "double: "
	<< "42.0" // TODO change with a variable
	<< std::endl;
}
