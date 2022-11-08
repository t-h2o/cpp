#ifndef	SCAVTRAP_CLASS_HPP
# define SCAVTRAP_CLASS_HPP

# include	<sstream>
# include	<iostream>
# include	"ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{ 
	public:

		ScavTrap(std::string name);

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void guardGate(void);

};

#endif /* SCAVTRAP_CLASS_HPP */
