#include	"Arint.hpp"

Arint::Arint(void) : _size(0)
{
	message("Arint: default constructor (0 element)");
	this->_myList = new int[this->_size];
}

Arint::Arint(unsigned int nElements) : _size(nElements)
{
	message("Arint: constructor with n elements");

	this->_myList = new int[this->_size];
}

Arint::~Arint(void)
{
	message("Arint: destructor");
	delete [] this->_myList;
}

unsigned int Arint::size(void) const
{
	return this->_size;
}

int	&Arint::operator[](unsigned int position) const
{
	if (this->size() <= position)
		throw Arint::ExceptionOverrange();
	return this->_myList[position];
}
