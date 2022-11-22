#ifndef	FRAGTRAP_CLASS_HPP
# define FRAGTRAP_CLASS_HPP

# include	<sstream>
# include	<iostream>

# include	"ClapTrap.hpp"

# define	VERBOSE	1

class FragTrap : public ClapTrap
{
	public:
		FragTrap(std::string name);
		~FragTrap(void);

		void	attack(const std::string& target);

		void	highFivesGuys(void) const;
};

#endif /* FRAGTRAP_CLASS_HPP */
