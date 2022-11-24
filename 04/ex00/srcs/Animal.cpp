#include	"Animal.hpp"

Animal::Animal(void)
{
	std::cout << "Animal: Call default constructor"
		<< std::endl;

	_type = "animal";

	return ;
}

Animal::Animal(Animal const &other)
{
	std::cout << "Animal: Call copy constructor"
		<< std::endl;

	(*this) = other;

	return ;
}

Animal
	&Animal::operator=(Animal const &other)
{
	std::cout << "Animal: Call operator ="
		<< std::endl;

	if (&other == this)
		return *this;

	_type = other._type;
	return *this;
}

Animal::~Animal(void)
{
	std::cout << "Animal: Call default destructor"
		<< std::endl;

	return ;
}

std::string	Animal::getType(void) const
{
	return this->_type;
}

void	Animal::makeSound(void) const
{
	std::cout << "\"Animal sound\""
		<< std::endl;
}
