#include	"Fixed.hpp"

Fixed::Fixed(void)
{
	this->_rawBits = 0;

	std::cout
		<< "Default constructor called"
		<< std::endl;
}

Fixed::Fixed(const Fixed &src)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_rawBits = src._rawBits;
}

Fixed::Fixed(const int value)
{
    this->_rawBits = value << Fixed::_fractBits;

	std::cout
		<< "Call constructor with an integer value: "
		<< value
		<< " << "
		<< Fixed::_fractBits
		<< " = raw bits: "
		<< this->_rawBits
		<< std::endl;
}

Fixed::Fixed(const float value)
{
    this->_rawBits = roundf(value * (1 << Fixed::_fractBits));

	std::cout
		<< "Call constructor with a float value: "
		<< "roundf("
		<< value
		<< " * (1 << "
		<< Fixed::_fractBits
		<< " ))"
		<< " = "
		<< this->_rawBits
		<< std::endl;
}

Fixed::~Fixed(void)
{
	std::cout
		<< "Destructor called"
		<< std::endl;
}

Fixed &Fixed::operator=(const Fixed &number)
{
	std::cout << "copy assignation operator called" << std::endl;
	this->_rawBits = number._rawBits;
	return *this;
}

int
	Fixed::getRawBits(void)	const
{
	std::cout << "Get raw bits: "
		<< this->_rawBits
		<< std::endl;

	return this->_rawBits;
}

void
	Fixed::setRawBits(int const raw)
{
	this->_rawBits = raw;

	std::cout << "Set raw bits: "
		<< this->_rawBits
		<< std::endl;
}
