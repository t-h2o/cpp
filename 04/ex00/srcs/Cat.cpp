#include	"Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Cat: Call default constructor"
		<< std::endl;

	return ;
}

Cat::Cat(Cat &other) : Animal(other)
{
	(void)other;
	std::cout << "Cat: Call copy constructor"
		<< std::endl;

	return ;
}

Cat
	&Cat::operator=(Cat &other)
{
	(void)other;
	std::cout << "Cat: Call operator ="
		<< std::endl;

	return *this;
}

Cat::~Cat(void)
{
	std::cout << "Cat: Call default destructor"
		<< std::endl;

	return ;
}

void	Cat::makeSound(void) const
{
	std::cout << "Cat: Miaou Miaou"
		<< std::endl;
}
