#include	"ScavTrap.hpp"

// Constructor
ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;

	return ;
}

void ScavTrap::attack(const std::string& target)
{
	std::cout
		<< "ScavTrap "
		<< this->_name
		<< " attacks "
		<< target
		<< ", causing "
		<< this->_attackDamage
		<< " points of damage!"
		<< std::endl;

	return ;
}

void ScavTrap::takeDamage(unsigned int amount)
{
	std::cout
		<< "ScavTrap "
		<< this->_name
		<< " take Damage"
		<< ", causing "
		<< amount
		<< " points of damage!"
		<< std::endl;

	return ;
}

void ScavTrap::beRepaired(unsigned int amount)
{
	std::cout
		<< "ScavTrap "
		<< this->_name
		<< " be repaired"
		<< ", causing "
		<< amount
		<< " points of life!"
		<< std::endl;

	return ;
}

void ScavTrap::guardGate()
{
	std::cout
		<< this->_name
		<< " is Gate keeper!"
		<< std::endl;

	return ;

}
