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

Arint::Arint(Arint const &other) : _size(0), _myList(0)
{
	message("Arint: copy constructor");

	*this = other;
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

Arint	&Arint::operator=(Arint const &other)
{
	message("Arint: operator =");

	if (this == &other)
	{
		message("This and other are the same");
		return *this;
	}

	delete [] this->_myList;

	this->_size = other.size();
	this->_myList = new int[this->size()];

	for (unsigned int i = 0; i < this->size(); i++)
		this->_myList[i] = other[i];

	return *this;
}
