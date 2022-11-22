#ifndef	SCAVTRAP_CLASS_HPP
# define SCAVTRAP_CLASS_HPP

# include	<sstream>
# include	<iostream>

# include	"ClapTrap.hpp"

# define	VERBOSE	1

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap(std::string name);
		~ScavTrap(void);

		void	attack(const std::string& target);

		void	guardGate(void) const;
};

#endif /* SCAVTRAP_CLASS_HPP */
