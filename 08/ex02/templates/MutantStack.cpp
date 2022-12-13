#include	"MutantStack.hpp"

template <typename T, typename Container>
MutantStack<T, Container>::MutantStack(void) : std::stack<T, Container>()
{
	message("MutantStack: default constructor");
}

template <typename T, typename Container>
MutantStack<T, Container>::MutantStack(MutantStack const &other) : std::stack<T, Container>(other)
{
	message("MutantStack: copy constructor");
}

template <typename T, typename Container>
MutantStack<T, Container>::~MutantStack(void)
{
	message("MutantStack: destructor");
}

template <typename T, typename Container>
MutantStack<T, Container>	&MutantStack<T, Container>::operator=(MutantStack const &other)
{
	message("MutantStack: operator =");

	if (this == &other)
		return *this;

	this->c = other.c;

	return *this;
}

template <typename T, typename Container>
typename Container::iterator MutantStack<T, Container>::begin(void)
{
	message("MutantStack: begin");
	return this->c.begin();
}

template <typename T, typename Container>
typename Container::iterator MutantStack<T, Container>::end(void)
{
	message("MutantStack: end");
	return this->c.end();
}

template <typename T, typename Container>
typename Container::const_iterator MutantStack<T, Container>::begin(void) const
{
	message("MutantStack: begin");
	return this->c.begin();
}

template <typename T, typename Container>
typename Container::const_iterator MutantStack<T, Container>::end(void) const
{
	message("MutantStack: end");
	return this->c.end();
}
