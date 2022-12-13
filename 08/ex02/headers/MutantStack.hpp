#ifndef MUTANT_STACK_HPP
# define MUTANT_STACK_HPP

# include	<stack>

template <typename T, typename container = std::deque<T> >
class	MutantStack : public std::stack<T, container> 
{
};

#endif /* MUTANT_STACK_HPP */
