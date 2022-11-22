#include	"ClapTrap.hpp"

// Default constructor
ClapTrap::ClapTrap(std::string name)
{
	this->_name = name;
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;

	if (VERBOSE)
	std::cout
		<< "ClapTrap: default constructor on "
		<< this->_name
		<< std::endl;

	return ;
}

// Copy constructor
ClapTrap::ClapTrap(const ClapTrap &src)
{
	this->_name = src._name;
	this->_hitPoints = src._hitPoints;
	this->_energyPoints = src._energyPoints;
	this->_attackDamage = src._attackDamage;

	if (VERBOSE)
	std::cout
		<< "ClapTrap: copy constructor"
		<< std::endl;

	return ;
}

// affectation operator
ClapTrap &ClapTrap::operator=(const ClapTrap &src)
{
	this->_name = src._name;
	this->_hitPoints = src._hitPoints;
	this->_energyPoints = src._energyPoints;
	this->_attackDamage = src._attackDamage;

	if (VERBOSE)
	std::cout
		<< "ClapTrap: Copy assignation operator"
		<< std::endl;

	return *this;
}

// Destructor
ClapTrap::~ClapTrap(void)
{
	if (VERBOSE)
	std::cout
		<< "ClapTrap: destructor on "
		<< this->_name
		<< std::endl;

	return ;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->isDead() || this->hasEnergy())
		return ;

	std::cout
		<< "ClapTrap: "
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

void ClapTrap::takeDamage(unsigned int amount)
{
	int	before;

	if (this->isDead())
		return ;
	
	before = this->_hitPoints;
	if (amount > this->_hitPoints)
		amount = this->_hitPoints;
	this->_hitPoints -= amount;
	--this->_energyPoints;

	std::cout
		<< "ClapTrap: "
		<< this->_name
		<< " take Damage"
		<< ", causing "
		<< amount
		<< " points of damage! (hit points: "
		<< before
		<< " -> "
		<< this->_hitPoints
		<< ")"
		<< std::endl;
	
	return ;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	int	before;

	if (this->isDead() || this->hasEnergy())
		return ;

	before = this->_hitPoints;
	this->_hitPoints += amount;
	--this->_energyPoints;

	std::cout
		<< "ClapTrap: "
		<< this->_name
		<< " take Damage"
		<< ", causing "
		<< amount
		<< " points of damage! (hit points: "
		<< before
		<< " -> "
		<< this->_hitPoints
		<< ")"
		<< std::endl;

	return ;
}

void ClapTrap::printData(void) const
{
	std::cout
		<< "<|name:"
		<< _name
		<< "|hitPoints:"
		<< _hitPoints
		<< "|energyPoints:"
		<< _energyPoints
		<< "|attackDamage:"
		<< _attackDamage
		<< "|>"
		<< std::endl;
}

// Check if the claptrap has enough energy
bool	ClapTrap::hasEnergy(void) const
{
	if (this->_energyPoints <= 0)
	{
		std::cout
			<< "ClapTrap: "
			<< this->_name
			<< " hasn't enough energy :("
			<< std::endl;
		return 1;
	}
	return 0;
}

// Check if the claptrap is dead
bool	ClapTrap::isDead(void) const
{
	if (this->_hitPoints <= 0)
	{
		std::cout
			<< "ClapTrap: "
			<< this->_name
			<< " is dead"
			<< std::endl;
		return 1;
	}
	return 0;
}
