#include	"Span.hpp"

Span::Span(unsigned int nElements) : _size(nElements), _length(0)
{
	message("Span: constructor");

	this->_list = new int[this->_size];

	(void) nElements;
}

Span::Span(Span const &other) : _size(0), _length(0), _list(0)
{
	message("Span: copy constructor");

	*this = other;
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

int		Span::longestSpan(void)
{
	unsigned int	longest(0);
	unsigned int	diff;

	if (_length <= 1)
		return 0;

	if (_length == 2)
		return abs(this->_list[0] - this->_list[1]);

	for (unsigned int i = 0; i < this->_length; i++)
		for (unsigned int j = i + 1; j < this->_length; j++)
		{
			diff = abs(this->_list[i] - this->_list[j]);
			if (longest < diff)
				longest = diff;
		}

	return longest;
}

void	Span::fillSpan(void)
{
	while (this->_length < this->_size)
		this->addNumber(42);
}

Span	&Span::operator=(Span const &other)
{
	if (this == &other)
	{
		message("Span: operator =, They are the same");
		return *this;
	}
	message("Span: operator =");

	this->_size = other._size;
	this->_length = other._length;

	delete [] this->_list;

	this->_list = new int [this->_size];

	for (unsigned int index = 0; index < _length; index++)
		this->_list[index] = other._list[index];

	return *this;
}
