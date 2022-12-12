#ifndef	SPAN_HPP
# define SPAN_HPP

class	Span
{
	public:
		Span(unsigned int);
		~Span(void);

		void	addNumber(int number);

	private:
		unsigned int	_size;
		unsigned int	_length;
		int				*_list;
};

#endif /* SPAN_HPP */
