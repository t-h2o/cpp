#include	"WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	std::cout << "WrongAnimal: Call default constructor"
		<< std::endl;

	_type = "animal";

	return ;
}

WrongAnimal::WrongAnimal(WrongAnimal &other)
{
	std::cout << "WrongAnimal: Call copy constructor"
		<< std::endl;

	(*this) = other;

	return ;
}

WrongAnimal
	&WrongAnimal::operator=(WrongAnimal &other)
{
	std::cout << "WrongAnimal: Call operator ="
		<< std::endl;

	if (&other == this)
		return *this;

	_type = other._type;
	return *this;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal: Call default destructor"
		<< std::endl;

	return ;
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "\"WrongAnimal sound\""
		<< std::endl;
}
