#include	"Animal.hpp"

Animal::Animal(void)
{
	std::cout << "Animal: Call default constructor"
		<< std::endl;

	return ;
}

Animal::Animal(Animal &other)
{
	(void)other;
	std::cout << "Animal: Call copy constructor"
		<< std::endl;

	return ;
}

Animal
	&Animal::operator=(Animal &other)
{
	(void)other;
	std::cout << "Animal: Call operator ="
		<< std::endl;

	return *this;
}

Animal::~Animal(void)
{
	std::cout << "Animal: Call default destructor"
		<< std::endl;

	return ;
}
