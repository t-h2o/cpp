#ifndef	FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

class Fixed	{

public:

	Fixed(void);
	Fixed(Fixed &fixed);
	Fixed(int const rawBits);
	Fixed(const float value);
	Fixed(const Fixed &other);
	Fixed& operator=(const Fixed& fixed);
	std::ostream& operator<<(std::ostream& os);
	~Fixed(void);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;
	
private:

	static const int	_nFractBits = 8;
	int					_rawBits;

};

std::ostream & operator<<(std::ostream & os, const Fixed & obj);

#endif /* FIXED_CLASS_HPP */
