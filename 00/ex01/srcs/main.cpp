#include	"head.hpp"

static void	print_usage(void)
{
	std::cout << "        USAGE" << std::endl;
	std::cout << "ADD:    Save a new contact" << std::endl;
	std::cout << "SEARCH: Search in contacts" << std::endl;
	std::cout << "EXIT:   Leave the program" << std::endl << std::endl;
}

int	main(void)
{
	std::string	prompt;
	Phonebook	book;
   
	// Prompt
	while (1)
	{
		if (get_prompt(&prompt, "80s Book $ "))
			break ;
		if (prompt == "add")
		{
			if (book.add())
				break ;
		}
		else if (prompt == "search")
		{
			if (book.search())
				break ;
		}
		else if (prompt == "exit")
			break ;
		else
			print_usage();
	}
	std::cout << "Bye"
		<< std::endl;
	return (0);
}
