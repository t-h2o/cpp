#ifndef	DIAMONDTRAP_CLASS_HPP
# define DIAMONDTRAP_CLASS_HPP

# include	<sstream>
# include	<iostream>
# include	"FragTrap.hpp"
# include	"ScavTrap.hpp"

// Inheritance from FragTrap and ScavTrap (they are both inheritance from ClapTrap)
class DiamondTrap : public FragTrap, public ScavTrap
{ 
	public:

		DiamondTrap(std::string name);

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void guardGate(void);

};

#endif /* DIAMONDTRAP_CLASS_HPP */
