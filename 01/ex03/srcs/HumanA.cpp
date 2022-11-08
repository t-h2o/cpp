#include	"head.hpp"

void	HumanA::attack(void)
{
	std::cout << this->_hand.get_type()
		<< std::endl;
}

HumanA::HumanA(std::string name, Weapon & item) : _name(name), _hand(item)
{
	return ;
}

HumanA::~HumanA(void)
{
	return ;
}
