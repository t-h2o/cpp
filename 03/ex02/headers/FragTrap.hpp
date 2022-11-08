#ifndef	FRAGTRAP_CLASS_HPP
# define FRAGTRAP_CLASS_HPP

# include	<sstream>
# include	<iostream>
# include	"ClapTrap.hpp"

class FragTrap : public ClapTrap
{ 
	public:

		FragTrap(std::string name);
		~FragTrap(void);

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		void highFivesGuy(void);
};

#endif /* FRAGTRAP_CLASS_HPP */
