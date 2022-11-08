#include	"head.hpp"

void	HumanB::setWeapon(Weapon & item)
{
	this->_hand = &item;
}

void	HumanB::attack(void)
{
	std::cout << this->_hand->get_type()
		<< std::endl;
}

HumanB::HumanB(std::string name) : _name(name)
{
	return ;
}

HumanB::~HumanB(void)
{
	return ;
}
