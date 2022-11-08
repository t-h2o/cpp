#include	"ClapTrap.hpp"

// Constructor
ClapTrap::ClapTrap(std::string name)
{
	std::cout
		<< name
		<< " is borning in the beautiful ClapLand"
		<< std::endl;

	this->_name = name;

	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;

	return ;
}

// Destructor
ClapTrap::~ClapTrap(void)
{
	std::cout << this->_name
		<< " is 6 feet under ground"
		<< std::endl;

	return ;
}

void ClapTrap::attack(const std::string& target)
{
	std::cout
		<< "ClapTrap "
		<< this->_name
		<< " attacks "
		<< target
		<< ", causing "
		<< this->_attackDamage
		<< " points of damage!"
		<< std::endl;

	return ;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout
		<< "ClapTrap "
		<< this->_name
		<< " take Damage"
		<< ", causing "
		<< amount
		<< " points of damage!"
		<< std::endl;

	return ;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout
		<< "ClapTrap "
		<< this->_name
		<< " be repaired"
		<< ", causing "
		<< amount
		<< " points of life!"
		<< std::endl;

	return ;
}
