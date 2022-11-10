#ifndef	FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

#include	<iostream>
#include	<cmath>

class Fixed	{

	public:

		Fixed(void);
		Fixed(const int value);
		Fixed(const float value);
		~Fixed(void);
		Fixed(const Fixed &src);

		int	getRawBits(void)	const;
		void	setRawBits(int const raw);

		Fixed &operator=(const Fixed &number);

	private:

		int              _rawBits;
		static int const _fractBits = 8;
};

std::ostream	&operator<<(std::ostream &sortie, Fixed const &rhs);

#endif /* FIXED_CLASS_HPP */
