#include	"Cat.hpp"

Cat::Cat(void)
{
	this->_type = "Cat";
	std::cout << "Cat: Call default constructor"
		<< std::endl;

	return ;
}

Cat::Cat(Cat &other) : Animal(other)
{
	this->_type = other._type;
	std::cout << "Cat: Call copy constructor"
		<< std::endl;

	return ;
}

Cat
	&Cat::operator=(Cat &other)
{
	this->_type = other._type;
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
