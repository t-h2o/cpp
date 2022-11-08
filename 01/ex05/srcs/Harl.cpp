#include	"th2o.hpp"

void	Harl::debug(void)
{
	std::cout << "DUBUG: ça compile pas, bonne chance"
		<< std::endl;
}

void	Harl::info(void)
{
	std::cout << "INFO: il fait -25 degrées en Russie"
		<< std::endl;
}

void	Harl::warning(void)
{
	std::cout << "WARING: the fire is hot"
		<< std::endl;
}

void	Harl::error(void)
{
	std::cout << "ERROR: 1 + 1 = 3"
		<< std::endl;
}


void	Harl::complain(std::string level)
{
	int	number_element;
	
	std::string	type_level[] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};

	void	(Harl::*f[])(void) = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};

	number_element = sizeof(type_level) / sizeof(std::string);
	for (int i = number_element; i != -1; i--)
	{
		if (level == type_level[i])
		{
			(this->*(f[i]))();
			return ;
		}
	}

	std::cout << "HARL: this is not a level: "
		<< level
		<< std::endl;

	return ;
}

Harl::Harl(void)
{
	return ;
}

Harl::~Harl(void)
{
	return ;
}
