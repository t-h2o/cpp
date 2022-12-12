#ifndef	SPAN_HPP
# define SPAN_HPP

class	Span
{
	public:
		Span(unsigned int);
		~Span(void);

		void	addNumber(int number);

		int		shortestSpan(void);

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
