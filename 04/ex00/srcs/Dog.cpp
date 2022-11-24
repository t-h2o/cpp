#include	"Dog.hpp"

Dog::Dog(void)
{
	this->_type = "Dog";
	std::cout << "Dog: Call default constructor"
		<< std::endl;

	return ;
}

Dog::Dog(Dog &other) : Animal(other)
{
	//this->_type = other._type;
	std::cout << "Dog: Call copy constructor"
		<< std::endl;

	return ;
}

Dog::~Dog(void)
{
	std::cout << "Dog: Call default destructor"
		<< std::endl;

	return ;
}

void	Dog::makeSound(void) const
{
	std::cout << "Dog: Wafff Wafffff"
		<< std::endl;
}
