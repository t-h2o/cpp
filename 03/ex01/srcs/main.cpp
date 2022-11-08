#include	"ClapTrap.hpp"
#include	"ScavTrap.hpp"
#include	<iostream>

int	main(void)
{
	ClapTrap	jean("jean");
	ClapTrap	marc("marc");
	ScavTrap	paul("Paul");

	jean.attack("marc");
	jean.takeDamage(42);
	jean.beRepaired(21);

	paul.attack("marc");
	paul.takeDamage(42);
	paul.beRepaired(21);
	paul.guardGate();

	return 0;
}
