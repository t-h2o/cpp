#include	"WrongDog.hpp"

WrongDog::WrongDog(void)
{
	this->_type = "WrongDog";
	std::cout << "WrongDog: Call default constructor"
		<< std::endl;

	return ;
}

WrongDog::WrongDog(WrongDog &other) : WrongAnimal(other)
{
	//this->_type = other._type;
	std::cout << "WrongDog: Call copy constructor"
		<< std::endl;

	return ;
}

WrongDog
	&WrongDog::operator=(WrongDog &other)
{
	this->_type = other._type;
	std::cout << "WrongDog: Call operator ="
		<< std::endl;

	return *this;
}

WrongDog::~WrongDog(void)
{
	std::cout << "WrongDog: Call default destructor"
		<< std::endl;

	return ;
}

void	WrongDog::makeSound(void) const
{
	std::cout << "WrongDog: Wafff Wafffff"
		<< std::endl;
}
