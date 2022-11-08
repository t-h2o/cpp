#include	"th2o.hpp"

// Constructeur par défaut
Fixed::Fixed(void)
{
	std::cout << "Default constructor called"
		<< std::endl;

	this->_rawBits = 0;

	return ;
}

Fixed::Fixed(const float value)
{
	std::cout << "Float constructor called" << std::endl;
	this->_rawBits = roundf(value *(1 << Fixed::_nFractBits));
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

// Set number
Fixed::Fixed(int const rawBits)
{
	std::cout << "Int constructor called"
		<< std::endl;

	this->_rawBits = rawBits;

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
	// Guard self assignment
	if (this == &fixed)
		return *this;

	std::cout << "Copy assignment operator called"
		<< std::endl;

	this->_rawBits = fixed._rawBits;

	return *this;
}

std::ostream & operator<<(std::ostream & os, const Fixed & obj)
{
	os << "raw: " << obj.getRawBits();
    return os;
}

// Destructeur
Fixed::~Fixed(void)
{
	std::cout << "Destructor called"
		<< std::endl;

	return ;
}

// Get the int value
int	Fixed::toInt(void) const
{
	return this->_rawBits >> Fixed::_nFractBits;
}

// Get the raw value
float	Fixed::toFloat(void) const
{
	return (float)this->_rawBits / (float)(1 << Fixed::_nFractBits);
}

// Get the raw value
int	Fixed::getRawBits(void) const
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
