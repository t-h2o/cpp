#ifndef MUTANT_STACK_HPP
# define MUTANT_STACK_HPP

# include	<stack>
# include	"color.hpp"

template <typename T, typename Container = std::deque<T> >
class	MutantStack : public std::stack<T, Container>
{
	public:
		MutantStack(void) : std::stack<T, Container>()
		{
			message("MutantStack: default constructor");
		};
};

#endif /* MUTANT_STACK_HPP */
