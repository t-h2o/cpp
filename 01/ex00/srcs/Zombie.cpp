#include	"head.hpp"

void	Zombie::announce(void)
{
	std::cout << this->name
		<< ": BraiiiiiiinnnzzzZ..."
		<< std::endl;
}

Zombie::Zombie(std::string name)
{
	this->name = name;
	return ;
}

Zombie::~Zombie(void)
{
	return ;
}

