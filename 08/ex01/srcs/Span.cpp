#include	"color.hpp"
#include	"Span.hpp"

Span::Span(unsigned int nElements)
{
	message("Span: constructor");

	(void) nElements;
}

Span::~Span(void)
{
	message("Span: destructor");
}
