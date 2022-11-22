#include	"ScavTrap.hpp"
#include	"ClapTrap.hpp"

// Default constructor
ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;

	if (VERBOSE)
	std::cout
		<< "ScavTrap: default constructor on "
		<< this->_name
		<< std::endl;

	return ;
}

// Destructor
ScavTrap::~ScavTrap(void)
{
	if (VERBOSE)
	std::cout
		<< "ScavTrap: destructor on "
		<< this->_name
		<< std::endl;

	return ;
}

void ScavTrap::attack(const std::string& target)
{
	if (this->isDead() || this->hasEnergy())
		return ;

	std::cout
		<< "ScavTrap: "
		<< this->_name
		<< " attacks "
		<< target
		<< ", causing "
		<< this->_attackDamage
		<< " points of damage!"
		<< std::endl;

	--this->_energyPoints;

	return ;
}

void ScavTrap::guardGate(void) const
{
	std::cout
		<< "ScavTrap: "
		<< this->_name
		<< " is into Gate keeper mode"
		<< std::endl;
}
