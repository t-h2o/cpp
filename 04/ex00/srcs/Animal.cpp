#include	"Animal.hpp"

Animal::Animal(void)
{
	std::cout << "Call default constructor"
		<< std::endl;

	return ;
}

Animal::Animal(Animal &other)
{
	(void)other;
	std::cout << "Call copy constructor"
		<< std::endl;

	return ;
}

Animal::~Animal(void)
{
	std::cout << "Call default destructor"
		<< std::endl;

	return ;
}
