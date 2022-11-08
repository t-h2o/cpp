#include	"ClapTrap.hpp"
#include	<iostream>

int	main(void)
{
	ClapTrap	jean("jean");
	ClapTrap	marc("marc");

	jean.attack("marc");
	jean.takeDamage(42);
	jean.beRepaired(21);

	return 0;
}
