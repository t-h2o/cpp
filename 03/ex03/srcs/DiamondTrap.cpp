#include	"DiamondTrap.hpp"

// Constructor
DiamondTrap::DiamondTrap(std::string name): ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;

	return ;
}

void DiamondTrap::attack(const std::string& target)
{
	std::cout
		<< "DiamondTrap "
		<< this->_name
		<< " attacks "
		<< target
		<< ", causing "
		<< this->_attackDamage
		<< " points of damage!"
		<< std::endl;

	return ;
}

void DiamondTrap::takeDamage(unsigned int amount)
{
	std::cout
		<< "DiamondTrap "
		<< this->_name
		<< " take Damage"
		<< ", causing "
		<< amount
		<< " points of damage!"
		<< std::endl;

	return ;
}

void DiamondTrap::beRepaired(unsigned int amount)
{
	std::cout
		<< "DiamondTrap "
		<< this->_name
		<< " be repaired"
		<< ", causing "
		<< amount
		<< " points of life!"
		<< std::endl;

	return ;
}
