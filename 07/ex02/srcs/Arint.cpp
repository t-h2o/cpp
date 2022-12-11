#include	"Arint.hpp"

Arint::Arint(void)
{
	message("Arint: default constructor (0 element)");
	this->_myList = new int[0];
}

Arint::Arint(unsigned int nElements)
{
	message("Arint: constructor with n elements");

	this->_myList = new int[nElements];
}

Arint::~Arint(void)
{
	message("Arint: destructor");
	delete [] this->_myList;
}
