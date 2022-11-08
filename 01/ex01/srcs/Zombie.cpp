#include	"head.hpp"

void	Zombie::announce(void)
{
	std::cout << this->name
		<< ": BraiiiiiiinnnzzzZ..."
		<< std::endl;
}

void	Zombie::setname(std::string name)
{
	this->name = name;
}

Zombie::Zombie()
{
	this->setname("default");
	return ;
}

Zombie::Zombie(std::string name)
{
	this->setname(name);
	return ;
}

Zombie::~Zombie(void)
{
	return ;
}
