#include	"th2o.hpp"

// Constructeur par défaut
Fixed::Fixed(void)
{
	std::cout << "Default constructor called"
		<< std::endl;

	this->_number = 0;
	this->_rawBits = 0;

	return ;
}

// Constructeur de recopie
Fixed::Fixed(Fixed &fixed)
{
	std::cout << "Copy constructor called"
		<< std::endl;

	*this = fixed;

	return ;
}

// Opérateur d’affectation
Fixed& Fixed::operator=(const Fixed& fixed)
{
	std::cout << "Copy assignment operator called"
		<< std::endl;

	this->_number = fixed._number;
	this->_rawBits = fixed._rawBits;

	return *this;
}

// Destructeur
Fixed::~Fixed(void)
{
	std::cout << "Destructor called"
		<< std::endl;

	return ;
}

// Get the raw value
int	Fixed::getRawBits(void)
{
	std::cout << "getRawBits member function called"
		<< std::endl;

	return this->_rawBits;
}

// Set the raw value
void	Fixed::setRawBits(int const raw)
{
	this->_rawBits = raw;
}
