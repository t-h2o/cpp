// My array template

#ifndef	MY_ARRAY_HPP
# define MY_ARRAY_HPP

# include	"color.hpp"

template <typename T>
class Arint
{
	public:
		Arint(void);
		Arint(unsigned int nElements);
		Arint(Arint const &other);
		~Arint(void);

		unsigned int size(void) const;

		T	&operator[](unsigned int) const;
		Arint	&operator=(Arint const &other);

		class ExceptionOverrange : public std::exception
		{
			public:
				const char *what() const throw()
				{
					return ("Arint: try to get value overrange");
				}
		};

	private:
		unsigned int	_size;
		T				*_myList;
};

#include "../srcs/Arint.cpp"

#endif	/* MY_ARRAY_HPP */
