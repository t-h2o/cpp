#include	"Arint.hpp"

template <typename T>
Arint<T>::Arint(void) : _size(0)
{
	message("Arint: default constructor (0 element)");
	this->_myList = new T[this->_size];
}

template <typename T>
Arint<T>::Arint(unsigned int nElements) : _size(nElements)
{
	message("Arint: constructor with n elements");

	this->_myList = new T[this->_size];
}

template <typename T>
Arint<T>::Arint(Arint const &other) : _size(0), _myList(0)
{
	message("Arint: copy constructor");

	*this = other;
}

template <typename T>
Arint<T>::~Arint(void)
{
	message("Arint: destructor");
	delete [] this->_myList;
}

template <typename T>
unsigned int Arint<T>::size(void) const
{
	return this->_size;
}

template <typename T>
T	&Arint<T>::operator[](unsigned int position) const
{
	if (this->size() <= position)
		throw Arint<T>::ExceptionOverrange();
	return this->_myList[position];
}

template <typename T>
Arint<T>	&Arint<T>::operator=(Arint const &other)
{
	message("Arint: operator =");

	if (this == &other)
	{
		message("This and other are the same");
		return *this;
	}

	delete [] this->_myList;

	this->_size = other.size();
	this->_myList = new T[this->size()];

	for (unsigned int i = 0; i < this->size(); i++)
		this->_myList[i] = other[i];

	return *this;
}
