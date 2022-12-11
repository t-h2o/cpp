// My array template

#ifndef	MY_ARRAY_HPP
# define MY_ARRAY_HPP

# include	"color.hpp"

class Arint
{
	public:
		Arint(void);
		Arint(unsigned int nElements);
		~Arint(void);

		unsigned int size(void) const;

		int	&operator[](unsigned int) const;
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
		int				*_myList;
};

#endif	/* MY_ARRAY_HPP */
