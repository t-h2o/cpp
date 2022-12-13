#include	"MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack(void) : std::stack<T>()
{
	message("MutantStack: default constructor");
}

template <typename T>
MutantStack<T>::~MutantStack(void)
{
	message("MutantStack: destructor");
}
