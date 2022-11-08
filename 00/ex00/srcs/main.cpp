#include	<iostream>
#include	<ios>

int	main(int ac, char **av)
{
	// If no argument
	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *"
			<< std::endl;
		return (0);
	}

	// For each argument
	for (int i = 0; ++i < ac;)
	{
		// For each character of the argument
		for (int j = 0; av[i][j];j++)
			std::cout << (char)std::toupper(av[i][j]);
	}

	// Newline
	std::cout << std::endl;

	return (0);
}
