#ifndef	FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

#include	<iostream>
#include	<cmath>

#define	VERBOSE	0

class Fixed	{

	public:

		Fixed(void);
		Fixed(const int value);
		Fixed(const float value);
		Fixed(const Fixed &src);
		Fixed &operator=(const Fixed &number);
		~Fixed(void);

		Fixed	&operator=(const Fixed &number);

		bool	operator==(const Fixed &number)	const;
		bool	operator>=(const Fixed &number)	const;
		bool	operator<=(const Fixed &number)	const;
		bool	operator!=(const Fixed &number)	const;
		bool	operator<(const Fixed &number)	const;
		bool	operator>(const Fixed &number)	const;

		int	getRawBits(void)	const;
		void	setRawBits(int const raw);

		float	toFloat(void)	const;
		int		toInt(void)		const;

		Fixed	operator+(const Fixed &number) const;
		Fixed	operator++(void);
		Fixed	operator++(int);
		Fixed	operator-(const Fixed &number) const;
		Fixed	operator*(const Fixed &number) const;
		Fixed	operator/(const Fixed &number) const;

	private:

		int              _rawBits;
		static int const _fractBits = 8;
};

std::ostream	&operator<<(std::ostream &sortie, Fixed const &rhs);

#endif /* FIXED_CLASS_HPP */
