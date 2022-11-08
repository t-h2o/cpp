#ifndef	FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

class Fixed	{

public:

	Fixed(void);
	Fixed(Fixed &fixed);
	Fixed& operator=(const Fixed& fixed);
	~Fixed(void);

	int		getRawBits(void);
	void	setRawBits(int const raw);
	
private:

	int	_number;
	int	_rawBits;

};

#endif /* FIXED_CLASS_HPP */
