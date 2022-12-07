#include	"Convert.hpp"

std::string const Convert::_floatingKeyWord[NUMBER_KEYWORD_FLOATING] = {"-inf", "+inf", "nan", "-inff", "+inff", "nanf"};

Convert::Convert(void)
{
	for (int i = 0; i < 4; i++)
		this->_input.display[i] = "";

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

int	Convert::_isKeyWord(std::string &input)
{
	for (int i = 0; i < NUMBER_KEYWORD_FLOATING; i++)
		if (input == _floatingKeyWord[i])
			return 1;

	return 0;
}

int	Convert::_isDouble(std::string &input)
{
	int	index;

	index = 0;

	if (input[index] == '+' || input[index] == '-')
		++index;

	if (!isdigit(input[index]))
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
		std::cout
			<< "is char()"
			<< std::endl;

		this->_input.inChar = static_cast<char>(input[1]);
		this->_input.inInt = static_cast<int>(this->_input.inChar);
		this->_input.inFloat = static_cast<float>(this->_input.inInt);
		this->_input.inDouble = static_cast<double>(this->_input.inFloat);

		if (!isprint(this->_input.inChar))
			this->_input.display[CHAR] = "Non displayable";
		else
			this->_input.display[CHAR] = "'" + std::string(1, this->_input.inChar) + "'";
		this->_input.display[INT] = std::to_string(this->_input.inInt);
		this->_input.display[FLOAT] = std::to_string(this->_input.inFloat) + "f";
		this->_input.display[DOUBLE] = std::to_string(this->_input.inDouble);
	}
	else if (this->_isKeyWord(input))
	{
		std::cout
			<< "is keyword()"
			<< std::endl;

		for (int i = 0; i < NUMBER_KEYWORD_FLOATING; i++)
		{
			if (input == _floatingKeyWord[i])
			{
				this->_input.display[CHAR] = "impossible";
				this->_input.display[INT] = "impossible";
				if (i < NUMBER_KEYWORD_FLOATING / 2)
				{
					this->_input.display[FLOAT] = _floatingKeyWord[i + NUMBER_KEYWORD_FLOATING / 2];
					this->_input.display[DOUBLE] = _floatingKeyWord[i];
				}
				else
				{
					this->_input.display[FLOAT] = _floatingKeyWord[i];
					this->_input.display[DOUBLE] = _floatingKeyWord[i - NUMBER_KEYWORD_FLOATING / 2];
				}
			}
		}
	}
	else if (this->_isDouble(input))
	{
		std::cout
			<< "is double()"
			<< std::endl;

		this->_input.inDouble = strtod(input.c_str(), 0);
		this->_input.inInt = static_cast<int>(this->_input.inDouble);
		this->_input.inFloat = static_cast<float>(this->_input.inDouble);

		if (0 <= this->_input.inInt && this->_input.inInt <= 127)
		{
			this->_input.inChar = static_cast<char>(this->_input.inInt);
			if (!isprint(this->_input.inChar))
				this->_input.display[CHAR] = "Non displayable";
			else
				this->_input.display[CHAR] = "'" + std::string(1, this->_input.inChar) + "'";
		}

		this->_input.display[DOUBLE] = std::to_string(this->_input.inDouble);
		this->_input.display[FLOAT] = std::to_string(this->_input.inFloat) + "f";
		this->_input.display[INT] = std::to_string(this->_input.inInt);
	}
	else
	{
		std::cout
			<< "cannot define the type"
			<< std::endl;
		return ;
	}

	std::cout
		<< "\t   char : "
		<< this->_input.display[CHAR]
		<< std::endl;

	std::cout
		<< "\t    int : "
		<< this->_input.display[INT]
		<< std::endl;

	std::cout
		<< "\t  float : "
		<< this->_input.display[FLOAT]
		<< std::endl;

	std::cout
		<< "\t double : "
		<< this->_input.display[DOUBLE]
		<< std::endl;
}
