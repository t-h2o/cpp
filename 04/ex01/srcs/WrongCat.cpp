#include	"WrongCat.hpp"

WrongCat::WrongCat(void)
{
	this->_type = "WrongCat";
	std::cout << "WrongCat: Call default constructor"
		<< std::endl;

	return ;
}

WrongCat::WrongCat(WrongCat &other) : WrongAnimal(other)
{
	this->_type = other._type;
	std::cout << "WrongCat: Call copy constructor"
		<< std::endl;

	return ;
}

WrongCat
	&WrongCat::operator=(WrongCat &other)
{
	this->_type = other._type;
	std::cout << "WrongCat: Call operator ="
		<< std::endl;

	return *this;
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat: Call default destructor"
		<< std::endl;

	return ;
}

void	WrongCat::makeSound(void) const
{
	std::cout << "WrongCat: Miaou Miaou"
		<< std::endl;
}
