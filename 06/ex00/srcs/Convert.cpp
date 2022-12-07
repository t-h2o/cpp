#include	"Convert.hpp"

Convert::t_floatingKeyWord const Convert::_floatingKeyWord[2] = {{"inf", 2.0f},{"-inf", 4.0f}};

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

	std::cout << _floatingKeyWord[0].keyWord
		<< " : "
		<< _floatingKeyWord[0].value
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
