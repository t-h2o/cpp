#ifndef	SPAN_HPP
# define SPAN_HPP

# include	"color.hpp"
# include	<stdlib.h>

class	Span
{
	public:
		Span(unsigned int);
		~Span(void);

		void	addNumber(int number);

		int		shortestSpan(void);
		int		longestSpan(void);

		void	fillSpan(void);

		Span	&operator=(Span const &);

		class	ExceptionCannotAddNumber : public std::exception
		{
			public:
				const char	*what() const throw ()
				{
					return "Cannot add number";
				}
		};

	private:
		unsigned int	_size;
		unsigned int	_length;
		int				*_list;
};

#endif /* SPAN_HPP */
