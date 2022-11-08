#include	"FragTrap.hpp"

// Constructor
FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;

	return ;
}

// Constructor
FragTrap::~FragTrap(void)
{
	std::cout
		<< this->_name
		<< " Frag deleted"
		<< std::endl;

	return ;
}

void FragTrap::attack(const std::string& target)
{
	std::cout
		<< "FragTrap "
		<< this->_name
		<< " attacks "
		<< target
		<< ", causing "
		<< this->_attackDamage
		<< " points of damage!"
		<< std::endl;

	return ;
}

void FragTrap::takeDamage(unsigned int amount)
{
	std::cout
		<< "FragTrap "
		<< this->_name
		<< " take Damage"
		<< ", causing "
		<< amount
		<< " points of damage!"
		<< std::endl;

	return ;
}

void FragTrap::beRepaired(unsigned int amount)
{
	std::cout
		<< "FragTrap "
		<< this->_name
		<< " be repaired"
		<< ", causing "
		<< amount
		<< " points of life!"
		<< std::endl;

	return ;
}

void FragTrap::highFivesGuy()
{
	std::cout
		<< this->_name
		<< " High five!"
		<< std::endl;

	return ;

}
