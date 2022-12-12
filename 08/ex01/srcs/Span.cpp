#include	"Span.hpp"

Span::Span(unsigned int nElements) : _size(nElements), _length(0)
{
	message("Span: constructor");

	this->_list = new int[this->_size];

	(void) nElements;
}

Span::~Span(void)
{
	message("Span: destructor");

	delete [] this->_list;
}

void	Span::addNumber(int number)
{
	if (_length == _size)
	{
		throw Span::ExceptionCannotAddNumber();
		return ;
	}

	message("Span: add number");

	this->_list[this->_length++] = number;
}

int		Span::shortestSpan(void)
{
	unsigned int	shortest(-1);
	unsigned int	diff;

	if (_length <= 1)
		return 0;

	if (_length == 2)
		return abs(this->_list[0] - this->_list[1]);

	for (unsigned int i = 0; i < this->_length; i++)
		for (unsigned int j = i + 1; j < this->_length; j++)
		{
			diff = abs(this->_list[i] - this->_list[j]);
			if (shortest > diff)
				shortest = diff;
		}

	return shortest;
}
