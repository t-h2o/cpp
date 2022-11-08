#include	"head.hpp"

std::string	& Weapon::get_type(void)
{
	return (this->_type);
}
void	Weapon::setType(std::string type)
{
	this->_type = type;
}

Weapon::Weapon(std::string type)
{
	this->_type = type;

	return ;
}

Weapon::~Weapon()
{
	return ;
}
