#include	"Arint.hpp"

Arint::Arint(void) : _length(0)
{
	message("Arint: default constructor (0 element)");
	this->_myList = new int[this->_length];
}

Arint::Arint(unsigned int nElements) : _length(nElements)
{
	message("Arint: constructor with n elements");

	this->_myList = new int[this->_length];
}

Arint::~Arint(void)
{
	message("Arint: destructor");
	delete [] this->_myList;
}

unsigned int Arint::getLength(void) const
{
	return this->_length;
}
