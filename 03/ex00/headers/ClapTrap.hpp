#ifndef	CLAPTRAP_CLASS_HPP
# define CLAPTRAP_CLASS_HPP

# include	<sstream>
# include	<iostream>

class ClapTrap	{

	public:

		ClapTrap(std::string name);
		~ClapTrap(void);

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

	private:

		std::string	_name;
		int			_hitPoints;
		int			_energyPoints;
		int			_attackDamage;

};

#endif /* CLAPTRAP_CLASS_HPP */
