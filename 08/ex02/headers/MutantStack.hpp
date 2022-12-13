#ifndef MUTANT_STACK_HPP
# define MUTANT_STACK_HPP

# include	<stack>
# include	"color.hpp"

template <typename T, typename Container = std::deque<T> >
class	MutantStack : public std::stack<T>
{
	public:
		MutantStack(void);
		MutantStack(MutantStack const &);
		~MutantStack(void);

		MutantStack &operator=(MutantStack const &);

		typename Container::iterator begin(void);
		typename Container::iterator end(void);

		typename Container::const_iterator begin(void) const;
		typename Container::const_iterator end(void) const;
};

# include "../templates/MutantStack.cpp"

#endif /* MUTANT_STACK_HPP */
