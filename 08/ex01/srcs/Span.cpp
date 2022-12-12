#include	"color.hpp"
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
		message("Span: cannot add number");
		return ;
	}

	message("Span: add number");

	this->_list[this->_length++] = number;
}
