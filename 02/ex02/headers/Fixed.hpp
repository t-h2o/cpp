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
		Fixed &operator=(Fixed &number);
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

		static Fixed	min(Fixed &fMin1, Fixed &fMin2);
		static Fixed	max(Fixed &fMax1, Fixed &fMax2);
		static Fixed	min(const Fixed &fMin1, const Fixed &fMin2);
		static Fixed	max(const Fixed &fMax1, const Fixed &fMax2);

	private:

		int              _rawBits;
		static int const _fractBits = 8;
};

std::ostream	&operator<<(std::ostream &sortie, Fixed const &rhs);

#endif /* FIXED_CLASS_HPP */
