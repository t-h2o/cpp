#include	"MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack(void) : std::stack<T>()
{
	message("MutantStack: default constructor");
}

template <typename T>
MutantStack<T>::MutantStack(MutantStack const &other)
{
	message("MutantStack: copy constructor");
	*this = other;
}

template <typename T>
MutantStack<T>::~MutantStack(void)
{
	message("MutantStack: destructor");
}
