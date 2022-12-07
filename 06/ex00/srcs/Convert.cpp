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

// 'a'
// is char     -> return 1
// is not char -> return 0
int	Convert::_isChar(std::string &input)
{
	if (input.length() != 3)
		return 0;

	if (input[0] != '\'' || input[2] != '\'')
		return 0;

	return 1;
}

void	Convert::table(std::string input)
{
	std::cout
		<< "==== Try: \""
		<< input
		<< "\" ===="
		<< std::endl;

	if (this->_isChar(input))
	{
		this->_input.inChar = static_cast<char>(input[1]);
		this->_input.inInt = static_cast<int>(this->_input.inChar);
	}
	else
	{
		std::cout
			<< "cannot define the type"
			<< std::endl;
		return ;
	}
	std::cout
		<< "\tchar : '"
		<< this->_input.inChar
		<< "'"
		<< std::endl;

	std::cout
		<< "\t int : "
		<< this->_input.inInt
		<< std::endl;
}
