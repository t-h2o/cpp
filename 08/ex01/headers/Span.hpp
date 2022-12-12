#ifndef	SPAN_HPP
# define SPAN_HPP

class	Span
{
	public:
		Span(unsigned int);
		~Span(void);

	private:
		unsigned int	_size;
		int				*_list;
};

#endif /* SPAN_HPP */
