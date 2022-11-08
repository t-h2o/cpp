#include	"head.hpp"

// Get a prompt
int	get_prompt(std::string *prompt, std::string message)
{
	while (1)
	{
		std::cout << message;
		std::getline(std::cin, *prompt);
		if (std::cin.fail() || std::cin.eof())
		{
			std::cout << std::endl;
			return (true);
		}
		if (!prompt->empty())
			break;
	}
	return (false);
}
