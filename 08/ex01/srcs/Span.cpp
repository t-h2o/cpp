#include	"color.hpp"
#include	"Span.hpp"

Span::Span(unsigned int nElements) : _size(nElements)
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
