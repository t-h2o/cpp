#include	"FragTrap.hpp"
#include	"ClapTrap.hpp"

// Default constructor
FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;

	if (VERBOSE)
	std::cout
		<< "FragTrap: default constructor on "
		<< this->_name
		<< std::endl;

	return ;
}

// Destructor
FragTrap::~FragTrap(void)
{
	if (VERBOSE)
	std::cout
		<< "FragTrap: destructor on "
		<< this->_name
		<< std::endl;

	return ;
}

void FragTrap::attack(const std::string& target)
{
	if (this->isDead() || this->hasEnergy())
		return ;

	std::cout
		<< "FragTrap: "
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

void FragTrap::highFivesGuys(void) const
{
	std::cout << "FragTrap: "
		<< this->_name
		<< " highFivesGuys"
		<< std::endl;
}
