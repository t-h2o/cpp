#include	"head.hpp"

int	main(int ac, char **av)
{
	(void) av;

	if (ac != 4)
	{
		std::cerr << "Usage: sed need three arguments"
			<< std::endl;
		return 1;
	}

	return Sed::find_and_replace(av[1], av[2], av[3]);
}
