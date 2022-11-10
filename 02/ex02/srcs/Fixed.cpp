#include	"Fixed.hpp"

Fixed::Fixed(void)
{
	this->_rawBits = 0;

	if (VERBOSE)
	std::cout
		<< "Default constructor called"
		<< std::endl;
}

Fixed::Fixed(const int value)
{
    this->_rawBits = value << Fixed::_fractBits;

	if (VERBOSE)
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

	if (VERBOSE)
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

Fixed::Fixed(const Fixed &src)
{
	if (VERBOSE)
	std::cout << "Copy constructor called" << std::endl;
	this->_rawBits = src._rawBits;
}

Fixed &Fixed::operator=(const Fixed &number)
{
	if (VERBOSE)
	std::cout << "copy assignation operator called" << std::endl;
	this->_rawBits = number._rawBits;
	return *this;
}

Fixed::~Fixed(void)
{
	if (VERBOSE)
	std::cout
		<< "Destructor called"
		<< std::endl;
}

int
	Fixed::getRawBits(void)	const
{
	if (VERBOSE)
	std::cout << "Get raw bits: "
		<< this->_rawBits
		<< std::endl;

	return this->_rawBits;
}

void
	Fixed::setRawBits(int const raw)
{
	this->_rawBits = raw;

	if (VERBOSE)
	std::cout << "Set raw bits: "
		<< this->_rawBits
		<< std::endl;
}

float
	Fixed::toFloat(void)	const
{
	float	result;

	result = (float)this->_rawBits / (1 << Fixed::_fractBits);
	if (VERBOSE)
	std::cout << "To float: (float)"
		<< this->_rawBits
		<< " / (1 << "
		<< Fixed::_fractBits
		<< ") = "
		<< result
		<< std::endl;

    return result;
}

int
	Fixed::toInt(void)	const
{
	int	result;

	result = this->_rawBits >> Fixed::_fractBits;

	if (VERBOSE)
	std::cout << "To int: "
		<< this->_rawBits
		<< " >> "
		<< Fixed::_fractBits
		<< " = "
		<< result
		<< std::endl;

    return result;
}

std::ostream &operator<<(std::ostream &sortie, const Fixed &number)
{
	sortie << number.toFloat();

	return sortie;
}

Fixed	&Fixed::operator=(const Fixed &number)
{
	if (VERBOSE)
	std::cout << "Copy assignation operator called" << std::endl;
	this->_rawBits = number._rawBits;
	return (*this);
}

bool	Fixed::operator==(const Fixed &number) const
{
	if (VERBOSE)
	std::cout << "comparator assignation operator called" << std::endl;
	return (this->_rawBits == number._rawBits);
}

bool	Fixed::operator<=(const Fixed &number)  const
{
	if (VERBOSE)
	std::cout << "less than ... assignation operator called" << std::endl;
	return (this->_rawBits <= number._rawBits);
}

bool	Fixed::operator>=(const Fixed &number) const
{
	if (VERBOSE)
	std::cout << "bigger than ... assignation operator called" << std::endl;
	return (this->_rawBits >= number._rawBits);
}

bool	Fixed::operator!=(const Fixed &number) const
{
	if (VERBOSE)
	std::cout << "different than ... assignation operator called" << std::endl;
	return (this->_rawBits != number._rawBits);
}

bool	Fixed::operator<(const Fixed &number)  const
{
	if (VERBOSE)
	std::cout << "less than ... assignation operator called" << std::endl;
	return (this->_rawBits < number._rawBits);
}

bool	Fixed::operator>(const Fixed &number)  const
{
	if (VERBOSE)
	std::cout << "less than ... assignation operator called" << std::endl;
	return (this->_rawBits > number._rawBits);
}

Fixed	Fixed::operator+(const Fixed &number) const
{
	Fixed	pos;
	pos._rawBits = (this->_rawBits + number.getRawBits());

	if (VERBOSE)
	std::cout << "assignation operator '+' called from =>	" << this->_rawBits
			  << " and " << number.getRawBits() << std::endl;
	return (pos);
}

Fixed	Fixed::operator++(void)
{
	if (VERBOSE)
	std::cout << "assignation operator '++' called from =>	" << this->_rawBits
	<< std::endl;

	++(this->_rawBits);
	return (this->_rawBits);
}

Fixed	Fixed::operator++(int)
{
	Fixed	prev(*this);

	if (VERBOSE)
	std::cout << "assignation operator '++' called from =>	" << this->_rawBits
			  << std::endl;
	++(this->_rawBits);
	return (prev);
}

Fixed	Fixed::operator-(const Fixed &number) const
{
	Fixed	neg;
	neg._rawBits = (this->_rawBits - number.getRawBits());
	if (VERBOSE)
	std::cout << "assignation operator '-' called from =>	" << this->_rawBits
			  << " and " << number.getRawBits() << std::endl;
	return (neg);
}

Fixed	Fixed::operator*(const Fixed &number) const
{
	Fixed	mult;

	mult = (this->toFloat() * number.toFloat());
	if (VERBOSE)
	std::cout << "assignation operator '*' called from =>	" << this->_rawBits
			  << " and " << number.getRawBits() << std::endl;
	return (mult);
}

Fixed	Fixed::operator/(const Fixed &number) const
{
	Fixed	div;

	div = (this->toFloat() / number.toFloat());
	if (VERBOSE)
	std::cout << "assignation operator '/' called from =>	" << this->_rawBits
			  << " and " << number.getRawBits() << std::endl;
	return (div);
}
