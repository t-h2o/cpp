#include	"Arint.hpp"

Arint::Arint(void)
{
	message("Arint: default constructor (0 element)");
	this->_myList = new int[0];
}

Arint::~Arint(void)
{
	message("Arint: destructor");
	delete [] this->_myList;
}
