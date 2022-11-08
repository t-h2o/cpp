#include	"ClapTrap.hpp"
#include	"ScavTrap.hpp"
#include	"FragTrap.hpp"
#include	"DiamondTrap.hpp"

#include	<iostream>

int	main(void)
{
	ClapTrap	marc("marc");
	ScavTrap	paul("Paul");
	FragTrap	luc("Luc");
	DiamondTrap	jean("Jean");

	jean.attack("marc");
	jean.takeDamage(42);
	jean.beRepaired(21);

	paul.attack("marc");
	paul.takeDamage(42);
	paul.beRepaired(21);
	paul.guardGate();

	luc.attack("marc");
	luc.takeDamage(42);
	luc.beRepaired(21);
	luc.highFivesGuy();

	jean.attack("marc");
	jean.takeDamage(42);
	jean.beRepaired(21);
	jean.highFivesGuy();

	return 0;
}
