#ifndef MUTANT_STACK_HPP
# define MUTANT_STACK_HPP

# include	<stack>
# include	"color.hpp"

template <typename T>
class	MutantStack : public std::stack<T>
{
	public:
		MutantStack(void);
		MutantStack(MutantStack const &);
		~MutantStack(void);

		MutantStack &operator=(MutantStack const &);
};

# include "../templates/MutantStack.cpp"

#endif /* MUTANT_STACK_HPP */